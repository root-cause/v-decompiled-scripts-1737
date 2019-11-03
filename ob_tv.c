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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_67();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_66();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_65() && !func_64())) && !func_63(iLocal_41))
			{
				func_67();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_67();
			}
			if (func_62(13) || func_62(14))
			{
				func_67();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_69, 0))
			{
				func_67();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_69))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_61();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_69) < 950)
					{
						func_67();
					}
					switch (iLocal_29)
					{
						case 0:
							func_58();
							if (iLocal_41 == 5)
							{
								if (func_57(18) == 1 && func_57(20) == 0)
								{
									uLocal_39 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_39))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_39, 9);
									}
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_41 == -1)
							{
								func_67();
							}
							else
							{
								func_56();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_25825[iLocal_41 /*11*/].f_2 = 0;
								Global_25825[iLocal_41 /*11*/].f_6 = 1;
								Global_25825[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_25825[iLocal_41 /*11*/].f_1 = 0;
								Global_25825[iLocal_41 /*11*/].f_4 = 0;
								Global_25825[iLocal_41 /*11*/].f_7 = 0;
								Global_25825[iLocal_41 /*11*/].f_8 = 0;
								Global_25825[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_54(&iLocal_26);
								func_52();
								func_51();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_35) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_35, 90f))
							{
								if (func_43() || Global_25825[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_42(&iLocal_40);
							}
							break;
						
						case 2:
							func_52();
							if (!func_63(iLocal_41))
							{
								func_42(&iLocal_40);
								if (func_41("TV_HLP1"))
								{
									HUD::CLEAR_HELP(1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_35))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_35, true, 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_37))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_36, false, 0);
								}
							}
							if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
							{
								AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, false);
							}
							GRAPHICS::SET_TV_AUDIO_FRONTEND(0);
							SYSTEM::WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
							{
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iLocal_38);
							}
							if (!func_63(iLocal_41))
							{
								if ((Global_25825[iLocal_41 /*11*/] == 3 || Global_25825[iLocal_41 /*11*/] == 2) || Global_25825[iLocal_41 /*11*/] == -1)
								{
									Global_25825[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_25825[iLocal_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_25825[iLocal_41 /*11*/];
								iLocal_43 = Global_25825[iLocal_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_42, func_40(iLocal_43), Global_25825[iLocal_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_42);
								if (Global_25825[iLocal_41 /*11*/].f_7)
								{
									Global_25825[iLocal_41 /*11*/].f_5 = 0;
									Global_25825[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_25825[iLocal_41 /*11*/].f_2 = 1;
							func_39(133, 1);
							func_39(131, 1);
							func_39(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25825[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25825[iLocal_41 /*11*/].f_7 && func_63(iLocal_41))
							{
								Global_25825[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_37(iLocal_41))
							{
								func_36();
								iLocal_29 = 5;
							}
							else
							{
								func_34();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_25825[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_37(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_25825[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_42(&iLocal_40);
							}
							Global_25825[iLocal_41 /*11*/].f_5 = 0;
							Global_25825[iLocal_41 /*11*/].f_4 = 0;
							Global_25825[iLocal_41 /*11*/].f_1 = 0;
							Global_25825[iLocal_41 /*11*/].f_2 = 0;
							Global_25825[iLocal_41 /*11*/].f_7 = 0;
							Global_25825[iLocal_41 /*11*/].f_8 = 0;
							Global_25825[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_67();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_67();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (iLocal_41 != -1)
	{
		Global_25825[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_30 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, true);
		}
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_3();
	func_51();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, 0);
		}
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	func_2();
}

void func_2()
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_67 == 1)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_67 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == -1)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_33);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, 0);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, 0);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		if (CAM::IS_CAM_ACTIVE(iLocal_62))
		{
			CAM::SET_CAM_ACTIVE(iLocal_62, false);
		}
		CAM::DESTROY_CAM(iLocal_62, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_31, 1, 0, 2);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_53, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, 0);
		}
		func_5(0, 1, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_14(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_13())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_14(0);
		HUD::THEFEED_RESUME();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_6()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_12(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 13);
	}
}

int func_15()
{
	if (!func_63(iLocal_41))
	{
		if (((((((func_30(&iLocal_26) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_68, 1f, 1f, 1.5f, false, true, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !func_29(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), vLocal_31, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_40 == -1)
			{
				func_28();
				func_27(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_25(iLocal_40, 1))
			{
				func_42(&iLocal_40);
				func_54(&iLocal_26);
				Global_25825[iLocal_41 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_41("TV_HLP5"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_2();
			func_42(&iLocal_40);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_65 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
		{
			func_42(&iLocal_40);
			func_27(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_24();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (bLocal_34)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
		func_22(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		func_17(0);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) || (PAD::_IS_INPUT_DISABLED(2) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)))
		{
			func_42(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

void func_18(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (Global_14725)
	{
		func_19(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2424, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2423, 14))
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
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

void func_22(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_23(0))
		{
			if (!iLocal_22)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_24 = MISC::GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_24 = MISC::GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_24()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vLocal_63, vLocal_64, fVar0, 0, 2);
		CAM::SET_CAM_FAR_CLIP(iLocal_62, 100f);
		CAM::SET_CAM_ACTIVE(iLocal_62, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_34 = true;
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_31, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_53, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
		iLocal_65 = 1;
	}
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_42(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_28()
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_67 == 0)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

float func_30(int iParam0)
{
	if (func_33(iParam0))
	{
		if (func_32(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_31(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_31(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_32(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_33(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_34()
{
	float fVar0;
	
	fVar0 = 1f;
	func_35(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_35(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_36()
{
	Global_25825[iLocal_41 /*11*/].f_7 = 0;
	Global_25825[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_30 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_42(&iLocal_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_51();
}

int func_37(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_38(PLAYER::PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (vVar0.z < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (vVar0.z > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_38(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_41(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_42(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_26(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_43()
{
	if (func_30(&iLocal_26) < 1f)
	{
		func_42(&iLocal_40);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_68, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), vLocal_31, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_42(&iLocal_40);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_42(&iLocal_40);
		return 0;
	}
	if (func_29(8, -1))
	{
		func_42(&iLocal_40);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_42(&iLocal_40);
		return 0;
	}
	if (Global_90640)
	{
		func_42(&iLocal_40);
		return 0;
	}
	if (Global_25825[iLocal_41 /*11*/].f_8)
	{
		func_42(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_27(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_25(iLocal_40, 1))
	{
		func_42(&iLocal_40);
		func_54(&iLocal_26);
		Global_25825[iLocal_41 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_44(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_50((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_45();
	}
}

void func_45()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!MISC::IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_106288, 0);
					MISC::SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_106301, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_106284, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_106302, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_106285, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_106303, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_106286, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_106304, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_106287, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_106291, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_106307 + Global_106306), 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_106565.f_10188.f_3853, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_106308, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_106309, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_106310, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_106565.f_10188.f_3853))
	{
		func_49(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_48() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_46();
				}
			}
		}
	}
}

int func_46()
{
	if (func_47(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_47(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_48()
{
	return Global_25765;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_50(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_51()
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_52()
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_53();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		func_67();
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_35);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
	HUD::LINK_NAMED_RENDERTARGET(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_41 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				func_67();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_35))
			{
				func_67();
			}
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
			}
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_33 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_53()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), vLocal_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_35, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_35, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, 0);
	iLocal_37 = 0;
	iLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), vLocal_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_37, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_37, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, 0);
}

void func_54(int iParam0)
{
	func_55(iParam0, 0f);
}

void func_55(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_31(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_56()
{
}

int func_57(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_58()
{
	vLocal_31 = { ENTITY::GET_ENTITY_COORDS(iLocal_35, true) };
	fLocal_32 = ENTITY::GET_ENTITY_HEADING(iLocal_35);
	func_60();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			vLocal_63 = { -9.8135f, -1440.913f, 31.3654f };
			vLocal_64 = { 0f, 0f, -134.3211f };
			vLocal_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			vLocal_63 = { 1978.23f, 3819.65f, 34.2724f };
			vLocal_64 = { 0f, 0f, -105.15f };
			vLocal_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_59();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			vLocal_63 = { 2.5724f, 527.9989f, 176.1619f };
			vLocal_64 = { 0f, 0f, -29.9488f };
			vLocal_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			vLocal_63 = { -1160.502f, -1520.76f, 10.7393f };
			vLocal_64 = { 0f, 0f, 60.061f };
			vLocal_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			vLocal_63 = { -802.8972f, 172.537f, 74.5801f };
			vLocal_64 = { 0f, 0f, -69.0273f };
			vLocal_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			vLocal_63 = { -808.3051f, 171.2623f, 77.2822f };
			vLocal_64 = { 1.8886f, 0f, 110.9232f };
			vLocal_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_59()
{
	iLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), vLocal_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_36, fLocal_32);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, 0);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, true);
}

void func_60()
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_40(1), 0);
	if (func_57(22))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_40(12), 0);
	}
	else
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_40(2), 0);
	}
}

void func_61()
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_25825[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_62(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_63(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25825[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

void func_66()
{
}

void func_67()
{
	if (iLocal_41 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_42(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_25825[iLocal_41 /*11*/].f_6 = 0;
		Global_25825[iLocal_41 /*11*/].f_7 = 0;
		Global_25825[iLocal_41 /*11*/].f_8 = 0;
		Global_25825[iLocal_41 /*11*/].f_4 = 0;
		Global_25825[iLocal_41 /*11*/].f_5 = 0;
		Global_25825[iLocal_41 /*11*/].f_2 = 0;
		Global_25825[iLocal_41 /*11*/] = -1;
		Global_25825[iLocal_41 /*11*/].f_1 = 0;
		Global_25825[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_41("TV_HLP1") || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	SYSTEM::WAIT(0);
	func_68();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
	}
	AUDIO::_0x19AF7ED9B9D23058();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_68()
{
	func_51();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&iLocal_35);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		OBJECT::DELETE_OBJECT(&iLocal_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		OBJECT::DELETE_OBJECT(&iLocal_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

