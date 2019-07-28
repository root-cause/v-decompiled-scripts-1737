#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_56 = -1;
	iLocal_57 = -1;
	fLocal_66 = 0f;
	iLocal_67 = 1;
	if (Global_71590)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_51 = func_74();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	Global_16899 = 0;
	Global_16900 = 0;
	Global_14553.f_1 = 8;
	Global_16900 = 1;
	Global_37587 = 1;
	if (Global_14535)
	{
		func_73(0);
		func_72(1);
		func_71(0);
	}
	SYSTEM::SETTIMERB(0);
	vLocal_47 = { Global_14506[Global_14498 /*3*/] };
	vLocal_48 = { vLocal_47 };
	vLocal_48.x = (vLocal_48.x - 10f);
	vLocal_48.y = (vLocal_48.y + 20f);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14553.f_1 != 9)
		{
			if (Global_16900 && !Global_16899)
			{
				func_69();
			}
			else if (Global_16899)
			{
				func_64();
			}
			if (!iLocal_52)
			{
				iLocal_52 = 1;
			}
			else if (Global_14535)
			{
				if (!iLocal_53)
				{
					iLocal_53 = 1;
					func_62(Global_14534, iLocal_51);
					func_61(Global_14534, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_60(Global_14534, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_37588)
					{
						Global_37588 = 0;
						iLocal_54 = 1;
					}
					if (iLocal_54)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						if (iLocal_56 == -1)
						{
							if (iLocal_67)
							{
								iLocal_67 = 0;
								fLocal_66 = 0f;
							}
							func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_62(Global_14534, iLocal_51);
							func_61(Global_14534, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_55 = 0;
							if (iVar0 > 0)
							{
								func_73(1);
							}
							else
							{
								func_73(0);
							}
							func_72(1);
							func_71(0);
							func_60(Global_14534, "DISPLAY_VIEW", 8f, fLocal_66, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_60(Global_14534, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_72(1);
							func_59();
							if (iLocal_57 == -1)
							{
								func_57(iLocal_51, iLocal_56);
								func_52(Global_14534, iLocal_51, iLocal_56);
								Global_16926 = 0;
								iLocal_64 = func_50(iLocal_51, iLocal_56);
								if (iLocal_64)
								{
									sLocal_65 = func_47(iLocal_51, iLocal_56);
									if (!func_46(37))
									{
										switch (func_44("AM_H_FLINK"))
										{
											case 2:
												func_41("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_40(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!MISC::IS_BIT_SET(Global_4269308, 17))
										{
											MISC::SET_BIT(&Global_4269308, 17);
											func_39("AM_H_FLINK", -1);
										}
									}
									func_71(1);
								}
								else
								{
									if (!func_46(38))
									{
										switch (func_44("AM_H_SCROLL"))
										{
											case 2:
												func_41("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_40(38);
												break;
											}
									}
									func_71(0);
								}
								func_60(Global_14534, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_60(Global_14534, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_36(Global_14534, iLocal_51, iLocal_56);
								func_60(Global_14534, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_54 = 0;
					}
					else
					{
						func_13();
					}
				}
			}
			if (!iLocal_51 == func_74())
			{
				Global_37587 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_16899 = 0;
			Global_16900 = 0;
			Global_37587 = 0;
			func_1(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::_CELL_CAM_SET_LEAN(1);
		}
		else if (Global_14553.f_1 > 3)
		{
			MOBILE::_CELL_CAM_SET_LEAN(0);
		}
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (Global_46896 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_12(Global_46896));
		Global_46896 = -1;
	}
	Global_37587 = 0;
	if (Global_14553.f_1 > 4)
	{
		Global_14553.f_1 = 6;
		func_5();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5()
{
	vector3 vVar0[24];
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_10(Global_3028);
			if (Global_3028 == 1)
			{
				func_60(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_60(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_9(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_9(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_9(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_9(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_60(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_9(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_8();
				func_60(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_7("CELL_300");
					func_7("CELL_217");
					func_7("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_60(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_60(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_8();
				if (Global_15879)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_7("CELL_300");
					func_7("CELL_219");
					func_7("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_60(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &cVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_60(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_9(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_9(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_9(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_8()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_7(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_7(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_7(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_7(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_7(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_11(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_7(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_7(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2429);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_7(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_7(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_7(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2424, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_7(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_9(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_11(int iParam0)
{
	return Global_36425 == iParam0;
}

char* func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_13()
{
	bool bVar0;
	
	if (Global_16926)
	{
		iLocal_56 = 0;
		fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
		if (func_35(iLocal_51) == 0)
		{
			iLocal_56 = -1;
		}
		if (!iLocal_56 == -1)
		{
			Global_14553.f_1 = 8;
			iLocal_54 = 1;
			SYSTEM::SETTIMERB(0);
			func_33();
		}
		return;
	}
	if (func_32())
	{
		return;
	}
	if (Global_16899)
	{
		return;
	}
	if (!iLocal_60)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 172) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			iLocal_60 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
			SYSTEM::SETTIMERA(0);
			iLocal_67 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_CONTROL_PRESSED(2, 181))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_56 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERA(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_60 = 0;
	}
	if (!iLocal_61)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 173) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_61 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
			SYSTEM::SETTIMERB(0);
			iLocal_67 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_CONTROL_PRESSED(2, 180))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_56 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERB(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_61 = 0;
	}
	if (!iLocal_62)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 174))
		{
			iLocal_62 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 174))
	{
		iLocal_62 = 0;
	}
	if (!iLocal_63)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 175))
		{
			iLocal_63 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 175))
	{
		iLocal_63 = 0;
	}
	if (!iLocal_59)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 176) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_56 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
				uLocal_49 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_RETURN_VALUE_READY(uLocal_49))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_50 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_49);
				iLocal_56 = iLocal_50;
				if (func_35(iLocal_51) == 0)
				{
					iLocal_56 = -1;
				}
				if (!iLocal_56 == -1)
				{
					if (iLocal_67 == 1)
					{
						fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
						iLocal_67 = 0;
					}
					Global_14553.f_1 = 8;
					iLocal_54 = 1;
					SYSTEM::SETTIMERB(0);
					func_33();
				}
			}
			else if (iLocal_57 == -1)
			{
				if (func_30(iLocal_51, iLocal_56) && !iLocal_55)
				{
					iLocal_57 = 0;
					iLocal_54 = 1;
					SYSTEM::SETTIMERB(0);
					func_33();
				}
			}
			else
			{
				iLocal_57 = 0;
				func_18(iLocal_51, iLocal_56, iLocal_57);
				iLocal_55 = 1;
				iLocal_57 = -1;
				iLocal_54 = 1;
				func_33();
				SYSTEM::SETTIMERB(0);
			}
			iLocal_59 = 1;
		}
	}
	else
	{
		iLocal_59 = 0;
	}
	if (SYSTEM::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 177))
		{
			bVar0 = false;
			if (iLocal_58 == 0)
			{
				if (!iLocal_56 == -1)
				{
					if (iLocal_57 == -1)
					{
						iLocal_56 = SYSTEM::ROUND(fLocal_66);
						iLocal_64 = 0;
						SYSTEM::SETTIMERB(0);
						bVar0 = true;
						func_17();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_57 = -1;
						func_17();
					}
					iLocal_54 = 1;
				}
				else
				{
					if (func_44("AM_H_FLINK") == 0)
					{
						func_40(37);
					}
					if (func_44("AM_H_SCROLL") == 0)
					{
						func_40(38);
					}
					if (Global_16900 == 0 && !Global_16899)
					{
						func_17();
						Global_16899 = 1;
						Global_37587 = 0;
					}
				}
				iLocal_58 = 1;
			}
			if (bVar0)
			{
				iLocal_56 = -1;
			}
		}
		else
		{
			iLocal_58 = 0;
		}
	}
	if (PAD::IS_CONTROL_PRESSED(2, 179))
	{
		if (iLocal_64)
		{
			if (func_44("AM_H_FLINK") == 0)
			{
				func_40(37);
			}
			if (func_44("AM_H_SCROLL") == 0)
			{
				func_40(38);
			}
			StringCopy(&Global_68791, sLocal_65, 64);
			func_14(7, 0, 0);
			iLocal_64 = 0;
			func_33();
		}
	}
}

int func_14(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_68920 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_68920)
	{
		case 3:
			Global_68918 = 0;
			break;
		
		case 4:
			Global_68918 = 3;
			break;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_71590 && func_16())
	{
		return 0;
	}
	if (!Global_71590 && func_15())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

var func_15()
{
	return Global_68808;
}

var func_16()
{
	return Global_1657544;
}

void func_17()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_46535[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_46535[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_46535[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_40922[iVar3 /*46*/].f_32[iVar4];
	if (Global_37597[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_46535[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_46535[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_19(iVar3, iParam2);
}

void func_19(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_40922[iParam0 /*46*/] && !Global_40922[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_40922[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_40922[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_37597[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_37597[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_40922[iParam0 /*46*/].f_31 < (Global_40922[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_40922[iParam0 /*46*/].f_8[Global_40922[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_29(iParam0, iVar2);
			iVar5 = Global_40922[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_37597[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_23(Global_40922[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_37597[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_20(Global_37597[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_37597[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_40922[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_40922[iParam0 /*46*/].f_45 = Global_37597[iVar2 /*12*/].f_10;
		Global_40922[iParam0 /*46*/].f_43 = Global_37597[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_40922[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_40922[iParam0 /*46*/].f_43 < 30000)
	{
		Global_40922[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_20(int iParam0, bool bParam1)
{
	Global_37588 = 1;
	if (!Global_40922[iParam0 /*46*/] && !Global_40922[iParam0 /*46*/].f_1)
	{
		Global_40922[iParam0 /*46*/] = 1;
		func_22(iParam0, bParam1);
	}
	else
	{
		func_21(iParam0);
		func_20(iParam0, bParam1);
	}
}

void func_21(int iParam0)
{
	Global_40922[iParam0 /*46*/] = 0;
	Global_40922[iParam0 /*46*/].f_31 = 0;
	Global_40922[iParam0 /*46*/].f_42 = 0;
	Global_40922[iParam0 /*46*/].f_45 = 0;
	Global_40922[iParam0 /*46*/].f_43 = 0;
	Global_40922[iParam0 /*46*/].f_1 = 0;
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40922[iParam0 /*46*/] && !Global_40922[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_40922[iParam0 /*46*/].f_31 == Global_40922[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_40922[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_37597[Global_40922[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_40922[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_40922[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_40922[iParam0 /*46*/].f_8[Global_40922[iParam0 /*46*/].f_31];
	Global_40922[iParam0 /*46*/].f_31++;
	func_29(iParam0, iVar1);
	Global_40922[iParam0 /*46*/].f_45 = Global_37597[iVar1 /*12*/].f_10;
	Global_40922[iParam0 /*46*/].f_43 = Global_37597[iVar1 /*12*/].f_11;
	iVar2 = Global_40922[iParam0 /*46*/].f_2;
	func_23(Global_37597[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_40922[iParam0 /*46*/].f_3[iVar3] != Global_37597[iVar1 /*12*/].f_2 && Global_40922[iParam0 /*46*/].f_3[iVar3] != Global_37597[iVar1 /*12*/].f_3)
		{
			func_23(Global_40922[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_40922[iParam0 /*46*/].f_31 == Global_40922[iParam0 /*46*/].f_30)
	{
		if (Global_37597[Global_40922[iParam0 /*46*/].f_32[(Global_40922[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_40922[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_40922[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_40922[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_28(Global_37597[iVar5 /*12*/].f_1) };
		if (Global_37597[iVar5 /*12*/].f_2 == iParam0 && !Global_37597[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_37597[iVar5 /*12*/].f_2;
		iVar0 = Global_46535[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_46535[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_37589 = (Global_37589 - 1);
						if (Global_37589 < 0)
						{
							Global_37589 = 0;
						}
						break;
					
					case 1:
						Global_37590 = (Global_37590 - 1);
						if (Global_37590 < 0)
						{
							Global_37590 = 0;
						}
						break;
					
					case 2:
						Global_37591 = (Global_37591 - 1);
						if (Global_37591 < 0)
						{
							Global_37591 = 0;
						}
						break;
					}
				}
		}
		Global_46535[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_46535[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_46535[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_46535[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_46535[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_46535[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_46535[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_46535[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_37589 = (Global_37589 - 1);
						if (Global_37589 < 0)
						{
							Global_37589 = 0;
						}
						break;
					
					case 1:
						Global_37590 = (Global_37590 - 1);
						if (Global_37590 < 0)
						{
							Global_37590 = 0;
						}
						break;
					
					case 2:
						Global_37591 = (Global_37591 - 1);
						if (Global_37591 < 0)
						{
							Global_37591 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_46897[iVar9 /*203*/].f_1 == iParam1 && Global_46897[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_46535[iParam0 /*120*/].f_18[iVar0] = Global_46897[iVar8 /*203*/].f_1;
		Global_46535[iParam0 /*120*/].f_1[iVar0] = (Global_46897[iVar8 /*203*/].f_9 - 1);
		Global_46535[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_46535[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_46535[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_46535[iParam0 /*120*/]++;
		iVar10 = Global_46535[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_46897[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_37597[iVar11 /*12*/].f_2;
		if (Global_46897[iVar8 /*203*/].f_10[(Global_46897[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46897[iVar8 /*203*/].f_10[(Global_46897[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_28(Global_37597[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_46535[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_24(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_24(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_24(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_24(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_24(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_74();
	bVar1 = false;
	StringCopy(&cVar2, func_27(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_25(HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_26(iParam1)), 0));
		}
		else
		{
			func_25(HUD::_SET_NOTIFICATION_MESSAGE_2("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_26(iParam1)), 0));
		}
		switch (Global_14553)
		{
			case 0:
				StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
				Global_37589++;
				if (Global_37589 > 16)
				{
					Global_37589 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
				Global_37591++;
				if (Global_37591 > 16)
				{
					Global_37591 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
				Global_37590++;
				if (Global_37590 > 16)
				{
					Global_37590 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_14542, 1);
	}
}

void func_25(var uParam0)
{
	Global_37592[Global_37596] = uParam0;
	Global_16924 = 1;
	Global_16923 = uParam0;
	Global_37596++;
	if (Global_37596 == 3)
	{
		Global_37596 = 0;
	}
}

char* func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_27(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT("CELL_E_381");
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_28(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_29(int iParam0, int iParam1)
{
	if (Global_40922[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_40922[iParam0 /*46*/].f_32[Global_40922[iParam0 /*46*/].f_42] = iParam1;
	Global_40922[iParam0 /*46*/].f_42++;
	return 1;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_46535[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_46535[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_46535[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_46535[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_40922[iVar3 /*46*/].f_32[iVar4];
		if (Global_37597[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_46535[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return 0;
		}
		if (!func_31(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_46535[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_46535[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_40922[iVar1 /*46*/] && !Global_40922[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_40922[iVar1 /*46*/].f_42 - 1))
	{
		return 0;
	}
	iVar2 = Global_40922[iVar1 /*46*/].f_32[(Global_40922[iVar1 /*46*/].f_42 - 1)];
	if (Global_37597[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}

bool func_32()
{
	return Global_68807;
}

void func_33()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_34();
	}
}

void func_34()
{
	if (func_2())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_46535[iVar0 /*120*/];
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<16> Var9;
	struct<16> Var10;
	
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_46535[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_46535[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_46535[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_46535[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_40922[iVar3 /*46*/].f_32[iVar4];
		if (Global_37597[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_37597[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_37597[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_28(Global_37597[iVar8 /*12*/].f_1) };
			Var10 = { func_28(Global_37597[iVar8 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_7("");
			func_7("");
			func_7("EM_RESPONSE_NEW");
			func_7(&Var10);
			func_7(func_38(Global_37597[iVar8 /*12*/].f_2));
			func_37(iVar8, Global_37597[iVar8 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar6++;
		}
	}
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		default:
	}
}

char* func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		
		case 3:
			return "EMSTR_5";
		
		case 1:
			return "EMSTR_8";
		
		case 2:
			return "EMSTR_11";
		
		case 4:
			return "EMSTR_14";
		
		case 5:
			return "EMSTR_31";
		
		case 6:
			return "EMSTR_38";
		
		case 7:
			return "EMSTR_41";
		
		case 8:
			return "EMSTR_54";
		
		case 9:
			return "EMSTR_57";
		
		case 10:
			return "EMSTR_60";
		
		case 11:
			return "EMSTR_80";
		
		case 12:
			return "EMSTR_83";
		
		case 13:
			return "EMSTR_86";
		
		case 14:
			return "EMSTR_89";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_116";
		
		case 17:
			return "EMSTR_144";
		
		case 18:
			return "EMSTR_147";
		
		case 19:
			return "EMSTR_154";
		
		case 20:
			return "EMSTR_159";
		
		case 21:
			return "EMSTR_165";
		
		case 22:
			return "EMSTR_184";
		
		case 23:
			return "EMSTR_189";
		
		case 24:
			return "EMSTR_192";
		
		case 25:
			return "EMSTR_208";
		
		case 26:
			return "EMSTR_221";
		
		case 27:
			return "EMSTR_228";
		
		case 28:
			return "EMSTR_235";
		
		case 29:
			return "EMSTR_244";
		
		case 30:
			return "EMSTR_251";
		
		case 31:
			return "EMSTR_264";
		
		case 32:
			return "EMSTR_271";
		
		case 33:
			return "EMSTR_321";
		
		case 34:
			return "EMSTR_342";
		
		case 35:
			return "EMSTR_350";
		
		case 36:
			return "EMSTR_354";
		
		case 37:
			return "EMSTR_359";
		
		case 38:
			return "EMSTR_362";
		
		case 39:
			return "EMSTR_371";
		
		case 40:
			return "EMSTR_378";
		
		case 41:
			return "EMSTR_381";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_386";
		
		case 44:
			return "EMSTR_389";
		
		case 45:
			return "EMSTR_392";
		
		case 46:
			return "EMSTR_395";
		
		case 47:
			return "EMSTR_398";
		
		case 48:
			return "EMSTR_401";
		
		case 49:
			return "EMSTR_404";
		
		case 50:
			return "EMSTR_407";
		
		case 51:
			return "EMSTR_410";
		
		case 52:
			return "EMSTR_413";
		
		case 53:
			return "EMSTR_416";
		
		case 54:
			return "EMSTR_467";
		
		case 55:
			return "EMSTR_470";
		
		case 56:
			return "EMSTR_491";
		
		case 57:
			return "EMSTR_494";
		
		case 58:
			return "EMSTR_497";
		
		case 59:
			return "EMSTR_500";
		
		case 60:
			return "EMSTR_503";
		
		case 61:
			return "EMSTR_506";
		
		case 62:
			return "EMSTR_509";
		
		case 63:
			return "EMSTR_642";
		
		case 64:
			return "EMSTR_645";
		
		case 65:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}

void func_39(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_105208))
	{
		return 1;
	}
	if (func_45(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_45(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_106565.f_20404[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

char* func_47(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_49(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_46535[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_40922[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_46897[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_46897[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_48(iVar5);
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		case 275:
			return "WWW_AMMUNATION_NET";
		
		case 276:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_49(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_46535[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_46535[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_46535[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_46535[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_49(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_46535[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_40922[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_46897[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_46897[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_51(iVar5);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

void func_52(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<16> Var17;
	struct<16> Var18;
	bool bVar19;
	int iVar20;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_49(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_46535[iVar0 /*120*/].f_86[iVar4];
	if (!Global_46535[iVar0 /*120*/].f_69[iVar4])
	{
		func_56(-1);
	}
	Global_46535[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_40922[iVar2 /*46*/].f_32[iVar3];
		Var7 = { func_28(Global_37597[iVar6 /*12*/]) };
		Var8 = { func_28(Global_37597[iVar6 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_7(func_55(Global_37597[iVar6 /*12*/].f_3));
		func_7(func_55(Global_37597[iVar6 /*12*/].f_2));
		func_7(&Var7);
		func_7(&Var8);
		func_7(func_38(Global_37597[iVar6 /*12*/].f_2));
		func_37(iVar6, Global_37597[iVar6 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (Global_37597[iVar6 /*12*/].f_4 == 0)
		{
			func_73(0);
		}
		else if (bVar1 || !func_31(iVar0, iVar4))
		{
			func_73(0);
		}
		else
		{
			func_73(1);
		}
		if (Global_40922[iVar2 /*46*/].f_42 > 1)
		{
			iVar9 = iVar3;
			iVar10 = (iVar3 - 1);
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < iVar9)
			{
				iVar6 = Global_40922[iVar2 /*46*/].f_32[iVar10];
				Var7 = { func_28(Global_37597[iVar6 /*12*/]) };
				Var8 = { func_28(Global_37597[iVar6 /*12*/].f_1) };
				iVar12 = func_54(iParam1, Global_37597[iVar6 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11 + 1);
				func_7(func_55(iVar12));
				func_7(func_55(Global_37597[iVar6 /*12*/].f_2));
				func_7(&Var7);
				func_7(&Var8);
				func_7(func_38(Global_37597[iVar6 /*12*/].f_2));
				func_37(iVar6, Global_37597[iVar6 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar10 = (iVar10 - 1);
				iVar11++;
			}
		}
	}
	else
	{
		iVar13 = -1;
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 7)
		{
			if (Global_46897[iVar14 /*203*/].f_1 == iVar2)
			{
				iVar13 = iVar14;
			}
			iVar14++;
		}
		if (iVar13 == -1)
		{
			return;
		}
		else
		{
			iVar15 = Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/];
			iVar16 = Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/];
			Var17 = { func_28(Global_37597[iVar15 /*12*/]) };
			Var18 = { func_28(Global_37597[iVar15 /*12*/].f_1) };
			if (Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var18, {Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_37597[iVar15 /*12*/].f_4 == 0)
			{
				func_73(0);
			}
			else if (bVar1)
			{
				func_73(0);
			}
			else
			{
				func_73(1);
			}
			bVar19 = false;
			bVar19 = func_53(uParam0, Global_46897[iVar13 /*203*/].f_1, iVar3, iVar16);
			if (!bVar19)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_7(func_55(Global_37597[iVar15 /*12*/].f_3));
				func_7(func_55(Global_37597[iVar15 /*12*/].f_2));
				func_7(&Var17);
				if (Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var18);
					iVar20 = 0;
					iVar20 = 0;
					while (iVar20 < Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_46897[iVar13 /*203*/].f_10[iVar3 /*48*/].f_7[iVar20 /*4*/]));
						iVar20++;
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_7(&Var18);
				}
				func_7(func_38(Global_37597[iVar15 /*12*/].f_2));
				func_37(iVar15, Global_37597[iVar15 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var3 = { func_28(Global_37597[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var4, "PROPR_INCEMAIL1", 64);
			break;
		
		case 73:
			StringCopy(&Var4, "PROPR_INCEMAIL3", 64);
			break;
		
		case 74:
			StringCopy(&Var4, "PROPR_INCEMAIL2", 64);
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	func_7(func_55(Global_37597[iParam3 /*12*/].f_3));
	func_7(func_55(Global_37597[iParam3 /*12*/].f_2));
	func_7(&Var3);
	func_7(&Var4);
	func_7(func_38(Global_37597[iParam3 /*12*/].f_2));
	func_7("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar2++;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		iVar6 = iVar5;
		bVar7 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_106565.f_24898[iVar6 /*4*/] == 0)
				{
					bVar7 = true;
				}
				break;
			
			case 73:
				if (Global_106565.f_24898[iVar6 /*4*/] == 1)
				{
					bVar7 = true;
				}
				break;
			
			case 74:
				if (Global_106565.f_24898[iVar6 /*4*/] == 2)
				{
					bVar7 = true;
				}
				break;
		}
		if (bVar7)
		{
			switch (iVar6)
			{
				case 0:
					sVar8 = "ACCNA_TOWING";
					break;
				
				case 1:
					sVar8 = "ACCNA_TAXI_LOT";
					break;
				
				case 2:
					sVar8 = "ACCNA_ARMS";
					break;
				
				case 3:
					sVar8 = "ACCNA_SONAR";
					break;
				
				case 4:
					sVar8 = "ACCNA_CARMOD";
					break;
				
				case 5:
					sVar8 = "ACCNA_VCINEMA";
					break;
				
				case 6:
					sVar8 = "ACCNA_DCINEMA";
					break;
				
				case 7:
					sVar8 = "ACCNA_MCINEMA";
					break;
				
				case 8:
					sVar8 = "ACCNA_GOLF";
					break;
				
				case 9:
					sVar8 = "ACCNA_CSCRAP";
					break;
				
				case 10:
					sVar8 = "ACCNA_SMOKE";
					break;
				
				case 11:
					sVar8 = "ACCNA_TEQUILA";
					break;
				
				case 12:
					sVar8 = "ACCNA_PITCHERS";
					break;
				
				case 13:
					sVar8 = "ACCNA_HEN";
					break;
				
				case 14:
					sVar8 = "ACCNA_HOOKIES";
					break;
				
				case 15:
					sVar8 = "ACCNA_STRP";
					break;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PROPR_INCEMAIL4");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sVar8);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_24898[iVar6 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			iVar0 = 1;
		}
		iVar5++;
	}
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		
		case 3:
			return "EMSTR_4";
		
		case 1:
			return "EMSTR_7";
		
		case 2:
			return "EMSTR_10";
		
		case 4:
			return "EMSTR_13";
		
		case 5:
			return "EMSTR_30";
		
		case 6:
			return "EMSTR_37";
		
		case 7:
			return "EMSTR_40";
		
		case 8:
			return "EMSTR_53";
		
		case 9:
			return "EMSTR_56";
		
		case 10:
			return "EMSTR_59";
		
		case 11:
			return "EMSTR_79";
		
		case 12:
			return "EMSTR_82";
		
		case 13:
			return "EMSTR_85";
		
		case 14:
			return "EMSTR_88";
		
		case 15:
			return "EMSTR_107";
		
		case 16:
			return "EMSTR_115";
		
		case 17:
			return "EMSTR_143";
		
		case 18:
			return "EMSTR_146";
		
		case 19:
			return "EMSTR_153";
		
		case 20:
			return "EMSTR_158";
		
		case 21:
			return "EMSTR_164";
		
		case 22:
			return "EMSTR_183";
		
		case 23:
			return "EMSTR_188";
		
		case 24:
			return "EMSTR_191";
		
		case 25:
			return "EMSTR_207";
		
		case 26:
			return "EMSTR_220";
		
		case 27:
			return "EMSTR_227";
		
		case 28:
			return "EMSTR_234";
		
		case 29:
			return "EMSTR_243";
		
		case 30:
			return "EMSTR_250";
		
		case 31:
			return "EMSTR_263";
		
		case 32:
			return "EMSTR_270";
		
		case 33:
			return "EMSTR_320";
		
		case 34:
			return "EMSTR_341";
		
		case 35:
			return "EMSTR_349";
		
		case 36:
			return "EMSTR_353";
		
		case 37:
			return "EMSTR_358";
		
		case 38:
			return "EMSTR_361";
		
		case 39:
			return "EMSTR_370";
		
		case 40:
			return "EMSTR_377";
		
		case 41:
			return "EMSTR_380";
		
		case 42:
			return "EMSTR_383";
		
		case 43:
			return "EMSTR_385";
		
		case 44:
			return "EMSTR_388";
		
		case 45:
			return "EMSTR_391";
		
		case 46:
			return "EMSTR_394";
		
		case 47:
			return "EMSTR_397";
		
		case 48:
			return "EMSTR_400";
		
		case 49:
			return "EMSTR_403";
		
		case 50:
			return "EMSTR_406";
		
		case 51:
			return "EMSTR_409";
		
		case 52:
			return "EMSTR_412";
		
		case 53:
			return "EMSTR_415";
		
		case 54:
			return "EMSTR_466";
		
		case 55:
			return "EMSTR_469";
		
		case 56:
			return "EMSTR_490";
		
		case 57:
			return "EMSTR_493";
		
		case 58:
			return "EMSTR_496";
		
		case 59:
			return "EMSTR_499";
		
		case 60:
			return "EMSTR_502";
		
		case 61:
			return "EMSTR_505";
		
		case 62:
			return "EMSTR_508";
		
		case 63:
			return "EMSTR_641";
		
		case 64:
			return "EMSTR_644";
		
		case 65:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_56(int iParam0)
{
	switch (func_74())
	{
		case 0:
			Global_37589 = (Global_37589 + iParam0);
			if (Global_37589 < 0)
			{
				Global_37589 = 0;
			}
			break;
		
		case 2:
			Global_37591 = (Global_37591 + iParam0);
			if (Global_37591 < 0)
			{
				Global_37591 = 0;
			}
			break;
		
		case 1:
			Global_37590 = (Global_37590 + iParam0);
			if (Global_37590 < 0)
			{
				Global_37590 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_46535[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_46535[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_46535[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_46535[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_40922[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_46897[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_46897[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_58(iVar5))
	{
		return;
	}
	if (Global_46896 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_12(Global_46896));
	}
	Global_46896 = iVar5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_12(iVar5), 0);
	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_12(iVar5)))
	{
		SYSTEM::WAIT(100);
	}
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		
		default:
	}
	return 0;
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_37592[iVar0] != -1)
		{
			HUD::_REMOVE_NOTIFICATION(Global_37592[iVar0]);
			Global_37592[iVar0] = -1;
		}
		iVar0++;
	}
	Global_37596 = 0;
}

void func_60(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_61(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_7(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_7(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_7(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_7(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_7(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<16> Var15;
	
	func_63(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_46535[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_46535[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_46535[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_46535[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_46535[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_46535[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_40922[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_46535[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_37597[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_46535[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_28(Global_37597[iVar6 /*12*/])}, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_7(func_55(Global_37597[iVar6 /*12*/].f_2));
			func_7(&sVar8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			iVar9 = Global_46535[iVar0 /*120*/].f_18[iVar1];
			iVar10 = -1;
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < 7)
			{
				if (Global_46897[iVar11 /*203*/].f_1 == iVar9)
				{
					iVar10 = iVar11;
				}
				iVar11++;
			}
			if (iVar10 == -1)
			{
				return 1;
			}
			else
			{
				iVar12 = Global_46535[iVar0 /*120*/].f_1[iVar1];
				iVar13 = 0;
				if (Global_46535[iVar0 /*120*/].f_69[iVar1])
				{
					iVar13 = 1;
				}
				iVar14 = Global_46897[iVar10 /*203*/].f_10[iVar12 /*48*/];
				if (iVar13 == 1)
				{
					if (Global_37597[iVar14 /*12*/].f_4 > 0)
					{
						if (Global_46535[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar13 = 2;
						}
					}
				}
				Var15 = { func_28(Global_37597[iVar14 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_7(func_55(Global_37597[iVar14 /*12*/].f_2));
				func_7(&Var15);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46535[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_46535[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_46535[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		bVar6 = true;
		if (Global_46535[iVar0 /*120*/].f_103[iVar3])
		{
			bVar6 = false;
		}
		if (Global_46535[iVar0 /*120*/].f_86[iVar3])
		{
			iVar7 = Global_46535[iVar0 /*120*/].f_18[iVar3];
			iVar8 = -1;
			iVar9 = 0;
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (Global_46897[iVar9 /*203*/].f_1 == iVar7)
				{
					iVar8 = iVar9;
				}
				iVar9++;
			}
			if (iVar8 == -1)
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			iVar10 = Var4;
			Var4.f_1[iVar10] = Global_46535[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar10] = Global_46535[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar10] = Global_46535[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar10] = Global_46535[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar10] = Global_46535[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar10] = Global_46535[iVar0 /*120*/].f_86[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar5++;
	}
	Global_46535[iVar0 /*120*/] = Var4;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Global_46535[iVar0 /*120*/].f_103[iVar5] = 0;
		Global_46535[iVar0 /*120*/].f_1[iVar5] = Var4.f_1[iVar5];
		Global_46535[iVar0 /*120*/].f_18[iVar5] = Var4.f_18[iVar5];
		Global_46535[iVar0 /*120*/].f_35[iVar5] = Var4.f_35[iVar5];
		Global_46535[iVar0 /*120*/].f_52[iVar5] = Var4.f_52[iVar5];
		Global_46535[iVar0 /*120*/].f_69[iVar5] = Var4.f_69[iVar5];
		Global_46535[iVar0 /*120*/].f_86[iVar5] = Var4.f_86[iVar5];
		iVar5++;
	}
}

void func_64()
{
	float fVar0;
	
	fVar0 = func_65(vLocal_48, vLocal_47, -90f, 0f, 90f, Global_14513, 350f, 0);
	if (Global_3227 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_16899 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

float func_65(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4269587 == 0)
	{
		if (MISC::IS_BIT_SET(Global_2423, 14) && Global_14553.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14506[Global_14498 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269587 = 1;
			}
		}
	}
	if (func_68() && Global_4269587 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_67((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_14481 = { func_66(vParam0, vParam1, fVar2) };
		Global_14484 = { func_66(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_14481 = { vParam1 };
		Global_14484 = { vParam3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14484, 0);
	return fVar1;
}

Vector3 func_66(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_67(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_11(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("RHINO")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("TORO"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_69()
{
	float fVar0;
	
	fVar0 = func_65(vLocal_47, vLocal_48, Global_14513, -90f, 0f, 90f, 350f, 0);
	if (Global_3227 == 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			if (!func_70())
			{
				MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
			}
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_16900 = 0;
		iLocal_18 = 0;
	}
}

int func_70()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_72(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_73(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		HUD::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_74()
{
	func_75();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_75()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_78(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_77(PLAYER::PLAYER_PED_ID());
			if (func_76(iVar0) && (!func_11(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_76(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)
{
	if (func_76(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

