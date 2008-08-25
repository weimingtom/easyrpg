/* item_use_scene.cpp, item use scene routines.
   Copyright (C) 2007 EasyRPG Project <http://easyrpg.sourceforge.net/>.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <vector>
#include <string>
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_mixer.h"
#include "math-sll.h"
#include "sprite.h"
#include "key.h"
#include "font.h"
#include "audio.h"
#include "map.h"
#include "skill.h"
#include "item.h"
#include "enemy.h"
#include "player.h"
#include "actor.h"
#include "scene.h"

void Item_use_scene::init(Audio * theaudio, bool * run,unsigned char * TheScene,Player_Team * TheTeam)
{  int i;
   myteam=TheTeam;
   myaudio=theaudio;
   players.init(theaudio, run,0,((*myteam).get_size()-1),184,240,136,0,124,48);
   players.init_curXY(55,5); //ya eran muchos comandos
   players.visible=true;
   itemwin.init(136,30,0,0);
   itemwin2.init(136,30,0,30);
  
   char stringBuffer[255];
     i=(*myteam).select;
    itemwin.add_text(((*myteam).get_item_name(i)) ,5,5);
    sprintf(stringBuffer, "Objetos prop.  %d", (*(*myteam).get_NOI(i)));
   itemwin2.add_text(stringBuffer,5,5);
   running=  run;   
   NScene=TheScene;

int space=60;

for(i=0;i<(*myteam).get_size();i++)    
{   
   players.add_sprite(((*myteam).get_faceset(i)),5,5+(i*space));
   players.add_text(((*myteam).get_name(i)),55,2+(i*space));
  
   sprintf(stringBuffer, "Level %d ", (*(*myteam).get_Level(i)));
   players.add_text(stringBuffer,55,20+(i*space));
   players.add_text("Normal",55,37+(i*space));
   sprintf(stringBuffer, "Hp %d / %d", (*(*myteam).get_HP(i)), (*(*myteam).get_MaxHP(i)));
   players.add_text(stringBuffer,110,20+(i*space));
   sprintf(stringBuffer, "Mp %d / %d", (*(*myteam).get_MP(i)), (*(*myteam).get_MaxMP(i)));
   players.add_text(stringBuffer,110,37+(i*space));
}
 retardo =0;
}

void Item_use_scene::update(SDL_Surface* Screen)
{  
if(retardo==0)
{SDL_FillRect(Screen, NULL, 0x0);// Clear screen 
 itemwin.draw(Screen);
 players.draw(Screen);
 itemwin2.draw(Screen);
}
retardo++;
   if(retardo==5)
   {
   itemwin.draw(Screen);
    players.draw(Screen);
     itemwin2.draw(Screen);
   retardo=1;
   }     
}

void Item_use_scene::action()
{int i;
   char stringBuffer[255];
  i=(*myteam).select;
  (*(*myteam).get_NOI(i))=(*(*myteam).get_NOI(i))-1;

  if((*(*myteam).get_NOI(i)) !=0)
  {
  itemwin2.dispose();
  itemwin2.init(136,30,0,30);
  sprintf(stringBuffer, "Objetos prop.  %d", (*(*myteam).get_NOI(i)));
  itemwin2.add_text(stringBuffer,5,5);
players.restarmenu();
  }else{
   (*myteam).erase_item(i);
   * NScene=5;
  }


}

void Item_use_scene::updatekey() {
if(players.visible)
{
players.updatekey();
if(players.desition())
action();
}

 if (Key_press_and_realsed(LMK_X ))//retorna alos objetos
        { (*myaudio).soundload("../Sound/Cansel2.wav");* NScene=5; }
     }
void Item_use_scene::dispose() {
   players.dispose();
   itemwin.dispose();
   itemwin2.dispose();
}
