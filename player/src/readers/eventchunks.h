#ifndef EVENTC_H
#define EVENTC_H
enum eEventmovesChunks
{
EventmovesChunks_Step_Up=0x00,	
EventmovesChunks_Step_Down= 0x01,
EventmovesChunks_Step_Right= 0x02,
EventmovesChunks_Step_Left= 0x03,
EventmovesChunks_Step_NE= 0x04,
EventmovesChunks_Step_SE= 0x05,
EventmovesChunks_Step_SW= 0x06,
EventmovesChunks_Step_NW= 0x07,
EventmovesChunks_Step_at_Random= 0x08,
EventmovesChunks_Step_Towards_Hero=0x09,
EventmovesChunks_Step_Away_from_Hero=0x0A,
EventmovesChunks_Step_Forward=0x0B,
EventmovesChunks_Face_Up=0x0C,
EventmovesChunks_Face_Right=0x0D,
EventmovesChunks_Face_Down=0x0E,
EventmovesChunks_Face_Left=0x0F,
EventmovesChunks_Turn_Right=0x10,
EventmovesChunks_Turn_Left=0x11,
EventmovesChunks_Turn_Around=0x12,
EventmovesChunks_Turn_Randomly=0x13,
EventmovesChunks_Face_Randomly=0x14,
EventmovesChunks_Face_Hero=0x15,
EventmovesChunks_Face_Away_from_Hero=0x16,
EventmovesChunks_Wait=0x15,
EventmovesChunks_Start_Jump=0x18,
EventmovesChunks_End_Jump=0x19,
EventmovesChunks_Start_Direction_Fix=0x1A,
EventmovesChunks_End_Direction_Fix=0x1B,
EventmovesChunks_Move_Faster=0x1C,
EventmovesChunks_Move_Slower=0x1D,
EventmovesChunks_Move_More_Frequently=0x1E,
EventmovesChunks_Move_Less_Frequently=0x1F,
EventmovesChunks_Turn_On_Switch=0x20,
EventmovesChunks_Turn_Off_Switch=0x21,
EventmovesChunks_Change_Graphic=0x22,
EventmovesChunks_Play_Sound_Effect=0x23,
EventmovesChunks_Start_Slip_Through=0x24,
EventmovesChunks_End_Slip_Through=0x25,
EventmovesChunks_Start_Animation_Fix=0x26,
EventmovesChunks_End_Animation_Fix=0x27,
EventmovesChunks_Increase_Alpha=0x28,
EventmovesChunks_Decrease_Alpha=0x29
};


enum eEventcomandsChunks
{
End_of_event= 0x00,
Nested_block= 0x0A,
Message=0x277E,// sin compresion ber
Message_options= 0x2788,
Add_line_to_message= 0x4E8E,
Select_message_face= 0x2792,
Show_choice= 0x279C,
Show_choice_option= 0x4EAC,
End_Choice_block= 0x4EAD,
Number_input= 0x27A6,
Change_switch= 0x27E2,
Change_var= 0x27EC,
Timer_manipulation= 0x27F6,

Change_cash_held= 0x2846,
Change_inventory= 0x2850,
Change_party= 0x285A,
Change_experience= 0x28AA,
Change_level= 0x28B4,
Change_statistics= 0x28BE,
Learn_forget_skill= 0x28C8,
Change_equipment= 0x28D2,
Change_HP= 0x28DC,
Change_MP= 0x28E6,
Change_Status= 0x28F0,
Full_Recovery= 0x28FA,
Inflict_Damage= 0x2904,
Change_Hero_Name= 0x2972,
Change_Hero_Class= 0x297C,
Change_Hero_Graphic= 0x2986,
Change_Hero_Face= 0x2990,
Change_Vehicle= 0x299A,
Change_System_BGM= 0x29A4,
Change_System_SE= 0x29AE,
Change_System_GFX= 0x29B8,
Change_Transition= 0x29C2,
Start_Combat= 0x29D6,
Call_Shop= 0x29E0,
Start_success_block= 0x50F0,
Start_failure_block= 0x50F1,
End_shop_block= 0x50F2,
Call_Inn= 0x29EA,
Start_success_block2= 0x50FA,
Start_failure_block2= 0x50FB,
End_block= 0x50FC,
Enter_hero_name= 0x29F4,
Teleport_Party= 0x2A3A	,
Store_hero_location= 0x2A44,
Recall_to_location= 0x2A4E,
Ride_Dismount= 0x2A58	,
Teleport_Vehicle= 0x2A62,
Teleport_Event= 0x2A6C,
Swap_Event_Positions= 0x2A76,
Get_Terrain_ID= 0x2A9E,
Get_Event_ID= 0x2AA8,
Erase_screen= 0x2B02,
Show_screen= 0x2B0C,
Set_screen_tone= 0x2B16,
Flash_screen= 0x2B20,
Shake_screen= 0x2B2A,
Pan_screen= 0x2B34,
Weather_Effects= 0x2B3E,
Show_Picture= 0x2B66,
Move_Picture= 0x2B70,
Erase_Picture= 0x2B7A,
Show_Battle_Anim = 0x2BCA,
Set_hero_opacity= 0x2C2E,
Flash_event= 0x2C38,
Move_event= 0x2C42,
Wait_until_moved= 0x2C4C,
Stop_all_movement= 0x2C56,
Wait= 0x2C92,
Play_BGM=  0x2CF6,
Fade_out_BGM= 0x2D00,
Memorize_BGM= 0x2D0A,
Play_memorized= 0x2D14,
Play_sound_effect= 0x2D1E,
Play_movie= 0x2D28,
Key_input= 0x2D5A,
Change_tile_set= 0x2DBE	,
Change_background= 0x2DC8,
Change_encounter_rate= 0x2DDC,
Change_single_tile= 0x2DE6,
Set_teleport_location= 0x2E22,
Enable_teleport= 0x2E2C,
Set_escape_location= 0x2E36,
Enable_escape= 0x2E40,
Call_save_menu= 0x2E86,
Enable_saving= 0x2E9A,
Call_system_menu= 0x2EAE,
Enable_system_menu= 0x2EB8,
Conditional= 0x2EEA,
Else_case= 0x55FA,
End_conditional= 0x55FB,
Label= 0x2F4E,
Go_to_label= 0x2F58,
Start_loop= 0x2FB2,
End_loop= 0x56C2,
Break= 0x2FBC,
Stop_all_events= 0x3016,
Delete_event= 0x3020,
Call_event= 0x302A,
Comment= 0x307A,
Add_line_to_comment= 0x578A,
Game_over= 0x3084,
Return_to_title_screen= 0x30DE,
B_Change_enemy_HP= 0x3336,
B_Add_Condition= 0x334A,
B_Encounter= 0x335E,
B_Show_Animation= 0x33CC,
B_Conditional= 0x33FE,
Battle_Else_Case= 0x5B0E,
Battle_End_Case= 0x5B0F,
Battle_End_Battle= 0x3462,
Change_Profetion=0x3F0,
Change_Batle_Comands=0x3F1
};
#endif
