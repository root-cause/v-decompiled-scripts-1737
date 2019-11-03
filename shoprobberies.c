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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
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
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	int iLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_49 = { 500f, 500f, 500f };
	iLocal_107 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_318();
	}
	if (func_315(0))
	{
		bLocal_86 = true;
		iLocal_83 = PLAYER::GET_MAX_WANTED_LEVEL();
	}
	if (Global_3)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_314(14))
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_313(&Local_96, 3);
	func_304(&uScriptParam_120);
	vVar0 = { 24.088f, -1345.623f, 29.5082f };
	vVar1 = { 24.94562f, -1344.954f, 29.49f };
	vVar2 = { vVar0 - vVar1 };
	vVar2 = { vVar1 - vVar0 };
	fVar4 = 147.297f;
	vVar3 = { -1228.443f, -905.3416f, 13.523f };
	vVar2 = { vVar3 - Vector(12.31f, -907.8234f, -1222.331f) };
	vVar2 = { func_303(vVar2, fVar4) };
	if ((((func_302() && !func_301()) || Global_106509) || Global_25767) || Global_106554 != -1)
	{
		if (func_302() && !func_301())
		{
		}
		else if (Global_106509)
		{
		}
		else if (Global_25767)
		{
		}
		else if (Global_106554 != -1)
		{
		}
		if (!func_300())
		{
			func_298(&(Local_66.f_470), 64);
			func_296(1);
		}
		else
		{
			func_296(0);
		}
		func_318();
	}
	else if (Global_106565.f_20029[iLocal_80] > 0)
	{
		if (func_295())
		{
			func_293(iLocal_80, Local_66.f_486.f_9.f_2, &vVar5, &vVar6);
			MISC::CLEAR_AREA_OF_PEDS(Local_66.f_181, 15f, 0);
			iLocal_79 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar5, vVar6, 0, 1, 1, 1);
			if (!func_300())
			{
				func_296(1);
			}
			else
			{
				func_296(0);
				func_291(&(Local_66.f_470), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_296(0);
		}
		if (!func_290())
		{
			iLocal_62 = 10;
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar7 == 0)
			{
				Local_66.f_2.f_12 = 1;
			}
			else
			{
				Local_66.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_296(0);
	}
	while (true)
	{
		func_287(&Local_96);
		if (func_282())
		{
			func_318();
		}
		if (!bLocal_86)
		{
			if (func_315(0))
			{
				func_281();
				bLocal_86 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_252();
				break;
			
			case 1:
				func_6();
				break;
			
			case 2:
				if (func_300())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_80)) && !func_3(PLAYER::PLAYER_ID()))
						{
							HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
							func_2("SHOP_CLOSED", func_5(iLocal_80));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_80)))
					{
						HUD::CLEAR_HELP(1);
					}
					if (func_1(Local_66.f_470, 512))
					{
						func_296(1);
						func_298(&(Local_66.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_249();
	func_246();
	func_241();
	func_235();
	func_217();
	func_195();
	func_189();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_88 = false;
	if (!PED::IS_PED_INJURED(Local_66.f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
		{
			if ((iVar1 != joaat("WEAPON_UNARMED") && iVar1 != joaat("OBJECT")) && iVar1 != joaat("WEAPON_FLARE"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_66.f_2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_66.f_2))
				{
					if (!func_26() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						bLocal_88 = true;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && func_1(Local_66.f_470, 4))
		{
			iVar2 = func_25(PLAYER::PLAYER_PED_ID());
			iVar3 = WEAPON::GET_WEAPONTYPE_GROUP(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 1;
		}
	}
	else if (iLocal_89)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_90))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, -8f);
			}
		}
		iLocal_89 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_300())
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_66, 0))
						{
							if ((func_25(Local_66) == joaat("WEAPON_UNARMED") || func_25(Local_66) == joaat("OBJECT")) || func_25(Local_66) == joaat("WEAPON_BRIEFCASE"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!func_1(Local_66.f_470, 1))
							{
								if (iVar0 == joaat("WEAPON_BAT"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("WEAPON_CROWBAR") || iVar0 == joaat("WEAPON_HAMMER")) || iVar0 == joaat("WEAPON_BOTTLE"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("WEAPON_STICKYBOMB"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								func_291(&(Local_66.f_470), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_300() && func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
			{
				iLocal_62 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_66.f_470, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				func_291(&(Local_66.f_470), 2);
			}
			iLocal_62 = 5;
			break;
		
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (!func_300() && !func_1(Local_66.f_470, 1))
			{
				iLocal_62 = 0;
			}
			break;
		
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_12)
				{
					if (!func_20())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_66.f_470, 256))
			{
				func_19();
				MISC::CLEAR_BIT(&Global_89563, 3);
				iLocal_62 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_66.f_470, 16))
			{
				if (func_17())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
					{
						if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
						{
							if (func_300())
							{
								if (Local_66.f_486 >= 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
									{
										TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								iLocal_58 = 10;
							}
						}
					}
					MISC::CLEAR_BIT(&Global_89563, 3);
					iLocal_62 = 13;
				}
			}
			break;
		
		case 9:
			func_16(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		
		case 10:
			if (func_300())
			{
				iLocal_62 = 11;
			}
			break;
		
		case 11:
			if (!func_15(&(Local_66.f_477)))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				func_12(&(Local_66.f_477));
			}
			else if (func_9(&(Local_66.f_477)) > 5f)
			{
				func_16(1, 0);
				iLocal_62 = 13;
			}
			else if (func_9(&(Local_66.f_477)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_12)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_15(&(Local_66.f_477)))
			{
				func_7();
				iLocal_51 = 30;
				iLocal_58 = 12;
				func_12(&(Local_66.f_477));
			}
			else if (func_9(&(Local_66.f_477)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_7()
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_66.f_2.f_6, 2f, -1, 0.25f, 0, Local_66.f_2.f_9);
	TASK::TASK_COWER(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_291(&(Local_66.f_470), 128);
}

void func_8()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
		TASK::TASK_COWER(0, 5000);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, iLocal_78);
	}
}

float func_9(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
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

bool func_11(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_12(int iParam0)
{
	if (!func_15(iParam0))
	{
		func_13(iParam0);
	}
}

void func_13(int iParam0)
{
	func_14(iParam0, 0f);
}

void func_14(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_15(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_16(int iParam0, bool bParam1)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), iParam0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
		Local_66.f_158 = 1;
		if (bParam1)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_17()
{
	func_18();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_486 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66.f_486.f_6, Local_66.f_486.f_9, 2);
			if (!PED::IS_PED_DEAD_OR_DYING(Local_66.f_2, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, 0))
				{
					if (Local_66.f_486 >= 0)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_28, true, 0);
						ENTITY::SET_ENTITY_DYNAMIC(Local_66.f_28, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_2, Local_66.f_486, Local_66.f_486.f_1, Local_66.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_96.f_1, Local_66.f_486, Local_66.f_486.f_5, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.478f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, 0))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_66.f_28.f_7 = { Local_66.f_28.f_7, Local_66.f_28.f_7.f_1, (Local_66.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.447f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, 0))
						{
							if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_28))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, true, 0);
							}
						}
					}
					if (Local_66.f_467)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_RATE(Local_66.f_486) != 1.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_66.f_486, 1.45f);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, 0))
			{
				if (Local_66.f_486 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
					{
						if (iLocal_53 >= 4)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.871f)
							{
								iLocal_55 = 4;
							}
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, -16f, 1);
							PHYSICS::ACTIVATE_PHYSICS(Local_66.f_28);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()
{
	if (Local_66.f_486 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) >= 0f)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.117f)
				{
					iLocal_53 = 1;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.154f)
				{
					iLocal_53 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.477f)
				{
					iLocal_53 = 3;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.487f)
				{
					iLocal_53 = 4;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.809f)
				{
					iLocal_53 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.871f)
				{
					iLocal_53 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.894f)
				{
					iLocal_53 = 7;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_19()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_66.f_2, joaat("WEAPON_PUMPSHOTGUN"), 12, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_66.f_2, joaat("WEAPON_PUMPSHOTGUN"), false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_66.f_2, -2065892691);
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_2.f_22));
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_66, 2000, 0);
		TASK::TASK_SHOOT_AT_ENTITY(0, Local_66, 4000, -957453492);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 25f, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_2.f_22);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, Local_66.f_2.f_22);
	}
}

int func_20()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_22(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_23(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_23(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

int func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_66, 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_66, 0);
			bVar0 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
			{
				return 1;
			}
			else if (Local_66.f_199 != -1f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	switch (iLocal_50)
	{
		case 0:
			break;
		
		case 2:
			if (!func_50())
			{
				if (func_300())
				{
					if (!func_1(Global_106565.f_20029.f_20, 1))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 2:
								func_34("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_291(&(Global_106565.f_20029.f_20), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (func_33("SHR_HOLDUP_1"))
							{
								func_29("SHR_HOLDUP_1", 1);
								iLocal_50 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (func_33("SHR_HOLDUP_1"))
				{
					func_29("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_50())
			{
				if (func_300())
				{
					if (!func_1(Global_106565.f_20029.f_20, 2))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 2:
								func_34("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_291(&(Global_106565.f_20029.f_20), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (func_33("SHR_SNK_TUT"))
				{
					func_29("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_28("SHR_HOLDUP_1") || func_28("SHR_SNK_TUT"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_106565.f_20029.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_106565.f_20029.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
			}
			iLocal_50 = 4;
			break;
		
		case 4:
			if ((!func_300() && func_33("SHR_HOLDUP_1")) && !func_1(Global_106565.f_20029.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
				iLocal_50 = 2;
			}
			if ((!func_300() && func_33("SHR_SNK_TUT")) && !func_1(Global_106565.f_20029.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
				iLocal_50 = 2;
			}
			break;
	}
}

int func_28(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_29(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_105205 && iParam1)
	{
		if (func_28(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_106565.f_20404[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_106565.f_20404.f_145 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_106565.f_20404.f_145 - 1));
			Global_106565.f_20404.f_145 = (Global_106565.f_20404.f_145 - 1);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()
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

void func_31(int iParam0)
{
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/].f_4), "", 16);
	Global_106565.f_20404[iParam0 /*16*/].f_8 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = -1;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = 0;
}

void func_32(int iParam0, int iParam1)
{
	Global_106565.f_20404[iParam0 /*16*/] = { Global_106565.f_20404[iParam1 /*16*/] };
	Global_106565.f_20404[iParam0 /*16*/].f_4 = { Global_106565.f_20404[iParam1 /*16*/].f_4 };
	Global_106565.f_20404[iParam0 /*16*/].f_8 = Global_106565.f_20404[iParam1 /*16*/].f_8;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = Global_106565.f_20404[iParam1 /*16*/].f_10;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = Global_106565.f_20404[iParam1 /*16*/].f_9;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = Global_106565.f_20404[iParam1 /*16*/].f_11;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = Global_106565.f_20404[iParam1 /*16*/].f_12;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = Global_106565.f_20404[iParam1 /*16*/].f_13;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = Global_106565.f_20404[iParam1 /*16*/].f_14;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = Global_106565.f_20404[iParam1 /*16*/].f_15;
}

int func_33(char* sParam0)
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

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_30();
	}
}

int func_36(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_105208))
	{
		return 1;
	}
	if (func_33(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_37()
{
	if (func_300())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
		{
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 7;
						iLocal_91 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 8;
						iLocal_92 = 1;
					}
				}
				if (!func_15(&(Local_66.f_483)))
				{
					func_12(&(Local_66.f_483));
				}
				else if (func_11(&(Local_66.f_483)))
				{
					func_43(&(Local_66.f_483));
				}
				else if (func_9(&(Local_66.f_483)) > 10f)
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_291(&(Local_66.f_470), 32);
					}
				}
			}
			else if (func_15(&(Local_66.f_483)) && !func_11(&(Local_66.f_483)))
			{
				func_42(&(Local_66.f_483));
			}
			break;
		
		case 12:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_48(PLAYER::PLAYER_PED_ID(), "SHOP_HOLDUP", 8);
				}
				func_13(&(Local_66.f_471));
				if (Local_66.f_2.f_11)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 13:
			if (func_41(&(Local_66.f_471)) > 3f)
			{
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_458)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_459)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_460)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_461)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_462)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				func_40(&(Local_66.f_471));
			}
			break;
		
		case 16:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 17:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 18:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 20:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 21:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 22:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				func_291(&(Local_66.f_470), 256);
				iLocal_51 = 37;
			}
			break;
		
		case 23:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_66.f_28.f_14)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
					{
						func_48(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 24:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_66.f_46.f_4[0], 0))
			{
				VEHICLE::SET_VEHICLE_SIREN(Local_66.f_46.f_4[0], false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[0], 0))
			{
				func_48(Local_66.f_46[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		
		case 25:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_48(PLAYER::PLAYER_PED_ID(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 26:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				func_38();
			}
			break;
		
		case 28:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 29:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 30:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 31:
			if (!func_20())
			{
				iLocal_51 = 37;
			}
			break;
		
		case 33:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_66.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_48(PLAYER::PLAYER_PED_ID(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_66.f_471));
				iLocal_51 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_66.f_471)) > 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

void func_38()
{
	Global_14732 = 0;
	func_39();
}

void func_39()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_40(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_41(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!func_11(iParam0))
		{
			iParam0->f_2 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_43(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

int func_44()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_214, Local_66.f_217, Local_66.f_220, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_49(iParam2), 1);
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_50()
{
	return Global_17270;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_300() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
			switch (iVar0)
			{
				case 140:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(PLAYER::PLAYER_PED_ID()))
							{
								func_291(&(Local_66.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_291(&(Local_66.f_470), 8);
						}
					}
					break;
				
				case 139:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(PLAYER::PLAYER_PED_ID()))
							{
								func_291(&(Local_66.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_291(&(Local_66.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)
{
	return iParam0;
}

int func_53(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Local_66.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_300())
		{
			if (!MISC::IS_BIT_SET(Local_66.f_162.f_18, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_66.f_162)
				{
					Local_66.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_162)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar3], 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar3], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								Local_66.f_162[iVar0] = uVar1[iVar3];
								Local_66.f_162.f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_66.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_66.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_162[iVar0], 0))
				{
					if (MISC::IS_BIT_SET(Local_66.f_162.f_18, 1))
					{
						if ((MISC::GET_GAME_TIMER() % 1500) < 50)
						{
						}
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], false, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], false, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], true, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], true, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_66.f_162.f_18, 0))
			{
				MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_66.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_66.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_162[iVar0], 0))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], true, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], true, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()
{
	switch (iLocal_99)
	{
		case 0:
			if (func_300())
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
				STREAMING::REQUEST_ANIM_DICT("misscommon@response");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_64(iLocal_80), false);
				STREAMING::REQUEST_MODEL(joaat("prop_choc_ego"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_meto"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					STREAMING::REQUEST_MODEL(Local_66.f_46.f_26);
					STREAMING::REQUEST_MODEL(Local_66.f_46.f_27);
				}
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_46.f_26))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_46.f_27))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_80, 0))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 4))
			{
				if (!func_1(Local_66.f_470, 1024))
				{
					iLocal_98[0] = OBJECT::CREATE_OBJECT(func_61(0), func_60(0), true, true, false);
					iLocal_98[1] = OBJECT::CREATE_OBJECT(func_61(1), func_60(1), true, true, false);
					iLocal_98[2] = OBJECT::CREATE_OBJECT(func_61(2), func_60(2), true, true, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[0], false, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[1], false, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[2], false, 0);
					func_291(&(Local_66.f_470), 1024);
				}
				func_291(&(Local_66.f_470), 4);
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (!func_300())
			{
				func_56();
				func_298(&(Local_66.f_470), 4);
				iLocal_99 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 4))
			{
				func_56();
				func_298(&(Local_66.f_470), 4);
			}
			break;
	}
}

void func_56()
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@shop_robbery@rob_till");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_64(iLocal_80));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_ego"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_meto"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_pq"));
	func_57(1, iLocal_80);
	if (!bLocal_86)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_26);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_27);
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_17411.f_8353 = 0;
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_17411.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_58(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17411.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17411.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17411.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

Vector3 func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_17411.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_17411.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()
{
	switch (iLocal_100)
	{
		case 0:
			if (func_300())
			{
				STREAMING::REQUEST_ANIM_DICT(Local_66.f_486.f_1);
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_66.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 16))
			{
				func_291(&(Local_66.f_470), 16);
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (!func_300() && iLocal_63 != 1)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
				func_298(&(Local_66.f_470), 16);
				iLocal_100 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 16))
			{
				STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
				func_298(&(Local_66.f_470), 16);
			}
			break;
	}
}

void func_66()
{
	switch (iLocal_119)
	{
		case 0:
			if (Local_66.f_158)
			{
				iLocal_119 = 1;
			}
			break;
		
		case 1:
			if (func_300())
			{
				if (func_15(&(Local_66.f_158.f_1)))
				{
					func_40(&(Local_66.f_158.f_1));
				}
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				func_13(&(Local_66.f_158.f_1));
				iLocal_119 = 2;
			}
			break;
		
		case 2:
			if (func_300())
			{
				iLocal_119 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_188();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && !PED::IS_PED_INJURED(Local_66)) && !func_187(-1082130432)) && !PED::IS_PED_INJURED(Local_66.f_2))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_300())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (func_1(Local_66.f_470, 4) && func_25(Local_66) == joaat("WEAPON_UNARMED"))
				{
					if (func_186(iLocal_80, &(Local_66.f_486.f_6), Local_66.f_486.f_9.f_2, &(Local_66.f_102.f_26[0 /*3*/]), &(Local_66.f_102.f_26[1 /*3*/]), &(Local_66.f_102.f_33), &(Local_66.f_102.f_36)))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Local_66.f_102.f_33, true) < 5f)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_26[0 /*3*/], Local_66.f_102.f_26[1 /*3*/], Local_66.f_102.f_36, 0, true, 0))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_33, 135f))
								{
									if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_185())
									{
										func_184("SHR_MENU");
									}
									Local_66.f_469 = -1;
									func_183(&(Local_66.f_469), 4, "SHR_MENU", 0, 0, 0, 0);
									MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
									MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_33, 135f) || !func_25(Local_66) == joaat("WEAPON_UNARMED"))
				{
					if (func_28("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					Local_66.f_102.f_22 = -1;
					func_182(&(Local_66.f_469));
					iLocal_64 = 0;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_185()) && !func_181(Local_66.f_469, 0))
				{
					func_184("SHR_MENU");
				}
				if ((!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_179(Local_66.f_469, 1))
					{
						if (func_28("SHR_MENU"))
						{
							HUD::CLEAR_HELP(1);
						}
						MISC::SET_BIT(&(Local_66.f_162.f_18), 1);
						func_13(&(Local_66.f_102.f_53));
						func_182(&(Local_66.f_469));
						func_178(23, 1);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_66.f_2))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			
			case 2:
				if (!CAM::DOES_CAM_EXIST(iLocal_118))
				{
					iLocal_118 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_177(iLocal_80, Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, &(Local_66.f_102), &(Local_66.f_102.f_3), &uVar6);
				CAM::SET_CAM_COORD(iLocal_118, Local_66.f_102);
				CAM::SET_CAM_ROT(iLocal_118, Local_66.f_102.f_3, 2);
				CAM::SET_CAM_FOV(iLocal_118, 35f);
				CAM::SHAKE_CAM(iLocal_118, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_118, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_291(&(Local_66.f_470), 2048);
				}
				Local_66.f_102.f_46 = func_64(iLocal_80);
				Local_66.f_102.f_23 = 0;
				Local_66.f_102.f_24 = 3;
				func_176(0, 0);
				func_175(1, 1, 0, 0, 0);
				func_174(1, 2, 1, 1, 1);
				func_173(func_5(iLocal_80));
				func_171(1, Local_66.f_102.f_46, Local_66.f_102.f_46);
				func_170();
				func_166(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_166(0, "ITEM_COST", 1, 1, 0, 0);
				func_162(func_165(0), 0);
				func_166(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_166(1, "ITEM_COST", 1, 1, 0, 0);
				func_162(func_165(1), 0);
				func_166(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_166(2, "ITEM_COST", 1, 1, 0, 0);
				func_162(func_165(2), 0);
				func_161(0);
				func_160(Local_66.f_102.f_23, 1, 1);
				func_159("SNK_ITEM1_D", 0, 0);
				func_158(201, "ITEM_SELECT", -1, 0);
				func_158(202, "ITEM_BACK", -1, 0);
				func_158(203, "SNK_LIFT", -1, 0);
				iLocal_64 = 3;
				break;
			
			case 3:
				iVar4 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_155(0, 0, 0, 1);
						func_154(0, -1, 1);
						if (func_153())
						{
							if (Global_4268040 != Local_66.f_102.f_23)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_66.f_102.f_23 = Global_4268040;
								func_160(Local_66.f_102.f_23, 1, 1);
								Local_66.f_102.f_37 = 0;
								Local_66.f_102.f_41 = 0;
								Local_66.f_102.f_42 = 0;
								sVar5 = func_152(Local_66.f_102.f_23);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar5))
								{
									func_159(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				func_114(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0, -1);
				func_110();
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201) || iVar4 == 1)
				{
					Local_66.f_102.f_37 = 1;
					Local_66.f_102.f_41 = 0;
					Local_66.f_102.f_42 = 0;
					if (Local_66.f_102.f_40 && Local_66.f_102.f_43)
					{
						Local_66.f_102.f_44 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_108 = 1;
						iLocal_111 = Local_66.f_102.f_23;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_102.f_44 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203))
				{
					iLocal_64 = 6;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_109();
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					iLocal_64 = 7;
					Local_66.f_102.f_45 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_109();
				}
				break;
			
			case 4:
				func_114(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0, -1);
				switch (Local_66.f_102.f_23)
				{
					case 0:
						iVar0 = func_165(Local_66.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_165(Local_66.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_165(Local_66.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0);
						}
						break;
				}
				func_69(func_104(), 98, iVar0);
				if (!Local_66.f_102.f_39)
				{
					iLocal_51 = 34;
					Local_66.f_102.f_39 = 1;
				}
				func_13(&(Local_66.f_102.f_53));
				iLocal_64 = 3;
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 6;
				}
				break;
			
			case 6:
				switch (Local_66.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0);
						}
						break;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				func_178(23, 0);
				iLocal_51 = 35;
				if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
				{
					TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_64 = 8;
				break;
			
			case 7:
				if ((MISC::GET_GAME_TIMER() - Local_66.f_102.f_45) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 193);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && func_1(Local_66.f_470, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_109();
			}
			iLocal_64 = 8;
		}
		if (func_28("SHR_SNACKS"))
		{
			HUD::CLEAR_HELP(1);
			func_182(&(Local_66.f_469));
		}
		if (func_28("SHR_MENU"))
		{
			HUD::CLEAR_HELP(1);
			func_182(&(Local_66.f_469));
		}
		if (MISC::IS_BIT_SET(Local_66.f_162.f_18, 1) && iLocal_101 < 2)
		{
			MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
		}
		if (func_1(Local_66.f_470, 4))
		{
			func_68();
		}
	}
}

void func_68()
{
	if (func_1(Local_66.f_470, 2048))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_298(&(Local_66.f_470), 2048);
		}
	}
	Local_66.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_118))
	{
		CAM::DESTROY_CAM(iLocal_118, 0);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_70(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_102(99, 1);
					func_101(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_101(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_101(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_81(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_81(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_81(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_102(95, iParam3);
					break;
				
				case 1:
					func_102(97, iParam3);
					break;
				
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_101(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_101(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_101(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_72(iParam0);
	if (Global_36425 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_73(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_79(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_79(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_79(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_79(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_76(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_76(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_76(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_76(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_76(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_76(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_75() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_75() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_74(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_78();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_78()
{
	return Global_1312745;
}

int func_79(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_78();
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

void func_80(int iParam0)
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_81(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_83(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_83(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_83(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_83(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_82(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_82(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_82(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_82(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_82(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_82(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_75() /*10778*/].f_6165.f_10, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_77(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_100(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_87(27, 1);
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)
{
	if (func_314(14) && !func_99(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_98(&Global_4269608))
	{
		if (func_96(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_314(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_314(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, (Global_4269607 - 0.5f));
}

void func_93(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_94(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_95(var uParam0)
{
	return uParam0->f_80;
}

bool func_96(var uParam0, int iParam1)
{
	return func_97(uParam0, iParam1) != -1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_98(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
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

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_102(int iParam0, int iParam1)
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

void func_103()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_104()
{
	func_105();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_105()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_108(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_107(PLAYER::PLAYER_PED_ID());
			if (func_106(iVar0) && (!func_314(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_106(Global_106565.f_2357.f_539.f_4321))
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

bool func_106(int iParam0)
{
	return iParam0 < 3;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_108(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_108(int iParam0)
{
	if (func_106(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_109()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	func_298(&(Local_66.f_470), 2048);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	func_178(23, 0);
	Local_66.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_118))
	{
		CAM::DESTROY_CAM(iLocal_118, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
}

void func_110()
{
	char* sVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2, 193);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (func_113())
	{
		Local_66.f_102.f_37 = 0;
		func_40(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23 = (Local_66.f_102.f_23 - 1);
		if (Local_66.f_102.f_23 < 0)
		{
			Local_66.f_102.f_23 = (Local_66.f_102.f_24 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_160(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_152(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_159(sVar0, 0, 0);
		}
	}
	if (func_112())
	{
		Local_66.f_102.f_37 = 0;
		func_40(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23++;
		if (Local_66.f_102.f_23 > (Local_66.f_102.f_24 - 1))
		{
			Local_66.f_102.f_23 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_160(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_152(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_159(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_102.f_41)
	{
		Local_66.f_102.f_40 = func_111(func_107(PLAYER::PLAYER_PED_ID())) >= func_165(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 1;
	}
	if (!Local_66.f_102.f_42)
	{
		Local_66.f_102.f_43 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		Local_66.f_102.f_42 = 1;
	}
	if (Local_66.f_102.f_37)
	{
		if (func_41(&(Local_66.f_102.f_53)) < 3f)
		{
			if (Local_66.f_102.f_44)
			{
				func_159("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_102.f_40)
			{
				func_159("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_102.f_43)
			{
				func_159("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_102.f_37 = 0;
			Local_66.f_102.f_44 = 0;
			func_40(&(Local_66.f_102.f_53));
			sVar0 = func_152(Local_66.f_102.f_23);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_159(sVar0, 0, 0);
			}
		}
	}
}

int func_111(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_112()
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_15(&iLocal_115))
		{
			func_12(&iLocal_115);
			return 1;
		}
		else if (func_9(&iLocal_115) > 0.25f)
		{
			func_13(&iLocal_115);
			return 1;
		}
	}
	else if (func_15(&iLocal_115))
	{
		func_40(&iLocal_115);
	}
	return 0;
}

int func_113()
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_15(&iLocal_112))
		{
			func_12(&iLocal_112);
			return 1;
		}
		else if (func_9(&iLocal_112) > 0.25f)
		{
			func_13(&iLocal_112);
			return 1;
		}
	}
	else if (func_15(&iLocal_112))
	{
		func_40(&iLocal_112);
	}
	return 0;
}

void func_114(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_149(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_17411)
	{
		if (func_147(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17411 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_17411.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_17409;
	}
	else
	{
		fVar57 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17410;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar58, &iVar59);
		fVar61 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_146())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_146())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_17411.f_5218 <= 1)
		{
			func_166(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_17411.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17411.f_5728)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17409;
			}
			else
			{
				if (Global_17411)
				{
					StringCopy(&cVar63, func_145(29), 64);
					StringCopy(&cVar64, func_142(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_141(Global_17408, Global_17409, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17411.f_8323)
				{
					iVar1 = Global_17411.f_8319;
					iVar2 = Global_17411.f_8320;
					iVar3 = Global_17411.f_8321;
					iVar4 = Global_17411.f_8322;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_141(Global_17408, (Global_17409 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17411.f_1)) != 0)
				{
					func_140();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17411.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17411.f_68)
					{
						if (Global_17411.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17411.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_14[iVar16], Global_17411.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17411.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17408 + 0.00390625f), ((Global_17409 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17411.f_5735)
				{
					func_140();
					func_138((((Global_17408 + fParam5) - 0.00390625f) - func_139("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_140();
						func_138((((Global_17408 + fParam5) - 0.00390625f) - func_139("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
					}
				}
			}
			iVar6 = Global_17411.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_17411.f_8333)
			{
				iVar1 = Global_17411.f_8329;
				iVar2 = Global_17411.f_8330;
				iVar3 = Global_17411.f_8331;
				iVar4 = Global_17411.f_8332;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17411.f_5225 && iVar6 <= Global_17411.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_17411.f_5485[iVar6])
					{
						if (Global_17411.f_5356[iVar6] && iVar6 != Global_17411.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_17411.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_17411.f_5731 > Global_17411.f_5225)
			{
				if (Global_17411.f_8338)
				{
					iVar1 = Global_17411.f_8334;
					iVar2 = Global_17411.f_8335;
					iVar3 = Global_17411.f_8336;
					iVar4 = Global_17411.f_8337;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_141(Global_17408, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_17411.f_8351)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_17411.f_4690)) != 0 && Global_17411.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_17411.f_4768 != 0)
				{
					func_147(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_137(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_141(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_137(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_17411.f_4768 != 0)
				{
					func_147(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_136(Global_17411.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4768), func_142(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17411.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_17411.f_4767) > Global_17411.f_4766)
					{
						StringCopy(&(Global_17411.f_4690), "", 24);
						Global_17411.f_4766 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4267964.f_21)) != 0 && Global_4267964.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_4267964.f_67 != 0)
				{
					func_147(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_137(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_141(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_137(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4267964.f_67 != 0)
				{
					func_147(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_136(Global_4267964.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_145(Global_4267964.f_67), func_142(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4267964.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4267964.f_66) > Global_4267964.f_65)
					{
						StringCopy(&(Global_4267964.f_21), "", 16);
						Global_4267964.f_65 = -1;
					}
				}
			}
			func_129(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17411.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_17411.f_5218;
			if (Global_17411.f_5729)
			{
				iVar66 = (Global_17411.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_17411.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_17411.f_5745[iVar6];
				}
				if (Global_17411.f_5729)
				{
					iVar6 = Global_17411.f_7974[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17411.f_5738 && iVar9 < Global_17411.f_5225)
				{
					bVar33 = true;
					if (Global_17411.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_17411.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17411.f_5879[iVar6] = fVar35;
				fVar34 = (Global_17408 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_17411.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17411.f_8345)
					{
						HUD::GET_HUD_COLOUR(Global_17411.f_8344, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17408 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17411.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_17411.f_5226)
				{
					if (MISC::IS_BIT_SET(Global_17411.f_5089[iVar6], iVar8) || Global_17411.f_5056[iVar8] == 5)
					{
						if (Global_17411.f_5729)
						{
							iVar19 = Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar20 = Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar21 = Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar22 = Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar23 = Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)];
						}
						else
						{
							Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar19;
							Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar20;
							Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar21;
							Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar22;
							Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_17411.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_17411.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_17411.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_17408 + 0.0046875f) + Global_17411.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_17411.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_17411.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_17411.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_17408 + Global_17410) - 0.0046875f) - fVar34);
						}
						if ((Global_17411.f_5075[iVar8] && Global_17411.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_17411.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_127(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17411.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_147(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_17411.f_4433[(iVar22 + iVar14)] == 2 || Global_17411.f_4433[(iVar22 + iVar14)] == 50) || Global_17411.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
										Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_17411.f_5083[iVar69] == 2)
												{
													Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] = (Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] - Global_17411.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_147(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_147(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_145(26), func_142(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_147(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_147(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_145(27), func_142(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_127(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_126(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17411.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar28)] == 2 || Global_17411.f_4433[(iVar22 + iVar28)] == 50) || Global_17411.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_147(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_147(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_136(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4433[(iVar22 + iVar28)]), func_142(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4433[(iVar22 + iVar28)]), func_142(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_17411.f_5083[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_125() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_127(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_17411.f_5738 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar14)] != 2 && Global_17411.f_4433[(iVar22 + iVar14)] != 50) && Global_17411.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_147(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_147(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_136(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4433[(iVar22 + iVar14)]), func_142(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4433[(iVar22 + iVar14)]), func_142(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4433[(iVar22 + iVar14)]), func_142(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_127(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_126(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_147(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_147(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_145(26), func_142(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_147(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_147(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_145(27), func_142(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_127(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										func_124((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_127(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_126(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_147(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_147(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_145(26), func_142(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_147(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_147(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_145(27), func_142(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_127(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
									func_123((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_147(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_17411.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17411.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
											Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
											fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_147(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_147(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_136(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_145(26), func_142(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_147(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_147(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_136(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_145(27), func_142(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_147(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_136(Global_17411.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_145(Global_17411.f_4433[iVar22]), func_142(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_122(Global_17411.f_4433[iVar22])), (fVar37 * func_122(Global_17411.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_17411.f_5056[iVar8] == 5)
						{
							if (Global_17411.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							if (Global_17411.f_5075[iVar8])
							{
								if (func_147(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17411.f_7974[iVar9] = iVar6;
						Global_17411.f_5740 = iVar6;
						iVar9++;
						if (Global_17411.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_17411.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_17411.f_5728)
					{
						Global_17411.f_5485[iVar6] = 1;
						if (Global_17411.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_17411.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17411.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17411.f_5728)
			{
				Global_17411.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_17411.f_5733 = iVar11;
				Global_17411.f_5731 = iVar10;
				Global_17411.f_5728 = 1;
			}
		}
		if (!Global_17411.f_5729)
		{
			Global_17411.f_5732 = iVar9;
			Global_17411.f_5729 = 1;
		}
		iVar5++;
	}
	Global_17411.f_5876 = fVar49;
	Global_17411.f_5878 = MISC::GET_GAME_TIMER();
	HUD::_CLEAR_NOTIFICATIONS_POS(Global_17411.f_5876);
	if (!Global_17411.f_8318)
	{
		func_116(0);
	}
	Global_17411.f_8318 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_115(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_115(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_116(int iParam0)
{
	if (func_121())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_120(0))
		{
			func_117(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

void func_117(int iParam0)
{
	if (func_121())
	{
		return;
	}
	if (Global_14725)
	{
		func_119(0, 0);
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
	if (!func_118())
	{
		Global_14553.f_1 = 3;
	}
}

int func_118()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_119(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_120(0))
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

int func_120(int iParam0)
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

bool func_121()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

float func_122(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_123(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_124(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_125()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_126(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_17411.f_8346[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_17411.f_8346[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_127(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_128(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_128(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_149(bParam4, bParam8))
	{
		return;
	}
	if (func_134())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_132(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17411.f_5026[iVar1], true), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_17411.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_17411.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_17411.f_4964[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_131(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_131(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_130(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_17411.f_5026[iVar1] != 359 && MISC::IS_BIT_SET(Global_17411.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17411.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4267964.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17411.f_4769);
				func_131(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_130(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_17411.f_8353 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_17411.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_130(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_131(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_132(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_133(-1, 0) == 8;
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

int func_133(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
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

int func_134()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_135())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_135()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_136(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 54:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_137(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_17408 + Global_17410) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_138(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_139(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_140();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17411.f_8328)
	{
		iVar0 = Global_17411.f_8324;
		iVar1 = Global_17411.f_8325;
		iVar2 = Global_17411.f_8326;
		iVar3 = Global_17411.f_8327;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_17408 + 0.0046875f), ((Global_17408 + Global_17410) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_141(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_142(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_144(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_143(&uVar1);
			}
		}
		else
		{
			return func_143(&(Global_17411.f_6997[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_143(var uParam0)
{
	return uParam0;
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_145(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_144(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_143(&uVar0);
		}
		else
		{
			return func_143(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_146()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_145(iParam0), 64);
	StringCopy(&cVar1, func_142(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_146())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_146())
			{
				fVar4 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		vVar7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_148(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_148(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_148(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_149(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_151(8, -1) && func_150() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_71850) || Global_17411.f_8352) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_150()
{
	return Global_1312802;
}

bool func_151(int iParam0, int iParam1)
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

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_153()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268040 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154(int iParam0, int iParam1, bool bParam2)
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	if (Global_4268040 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268040 = -1;
			return 0;
		}
	}
	if (((Global_4268040 > -1 || Global_4268040 == -3) || Global_4268040 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4268040 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_4268040 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_155(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		Global_4268040 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17408;
	fVar2 = (fVar0 + Global_17410);
	fVar3 = Global_17411.f_5730;
	fVar1 = (Global_17411.f_5730 - (IntToFloat(Global_17411.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17411.f_5732 < 1)
	{
		fVar1 = (Global_17411.f_5730 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_157();
	if (Global_4268040 == -6)
	{
		return;
	}
	Global_4268040 = -1;
	fVar7 = Global_4268034;
	fVar8 = Global_4268035;
	if (Global_17411.f_5733 > Global_17411.f_5732)
	{
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= fVar3) && Global_4268035 < (fVar3 + fVar6))
		{
			Global_4268040 = -2;
			if (bParam3)
			{
				func_156(0);
			}
			return;
		}
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= (fVar3 + fVar6)) && Global_4268035 < (fVar3 + 0.034722f))
		{
			Global_4268040 = -3;
			if (bParam3)
			{
				func_156(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_17411.f_5733 == -1)
		{
			Global_4268040 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17411.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_141(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17410, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4268040 = Global_17411.f_7974[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268040 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268040 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268040 = -4;
		return;
	}
	Global_4268040 = -1;
}

void func_156(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17408;
	fVar1 = Global_17411.f_5730;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268040 == -2)
	{
		func_141(fVar0, fVar1, Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268040 == -3)
	{
		func_141(fVar0, (fVar1 + fVar2), Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_157()
{
	Global_4268036 = Global_4268034;
	Global_4268037 = Global_4268035;
	Global_4268034 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268035 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268038 = (Global_4268034 - Global_4268036);
	Global_4268039 = (Global_4268035 - Global_4268037);
}

void func_158(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_159(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_4690), sParam0, 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = iParam1;
	Global_17411.f_4767 = MISC::GET_GAME_TIMER();
	Global_17411.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_160(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_5739 = uParam0;
	Global_17411.f_5874 = iParam2;
	if (Global_17411.f_5739 < Global_17411.f_5738)
	{
		Global_17411.f_5738 = Global_17411.f_5739;
	}
	else if ((Global_17411.f_5729 && Global_17411.f_5739 > Global_17411.f_5740) || (!Global_17411.f_5729 && Global_17411.f_5739 >= (Global_17411.f_5738 + Global_17411.f_5225)))
	{
		iVar0 = Global_17411.f_5738;
		while (iVar0 <= Global_17411.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17411.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17411.f_5225 && Global_17411.f_5738 < 128)
		{
			Global_17411.f_5738++;
			iVar1 = 0;
			iVar0 = Global_17411.f_5738;
			while (iVar0 <= Global_17411.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17411.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17411.f_4690), "", 24);
		StringCopy(&(Global_4267964.f_21), "", 16);
	}
}

void func_161(int iParam0)
{
	Global_17411.f_5738 = iParam0;
}

void func_162(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17411.f_5222 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 >= 4)
	{
		return;
	}
	if (Global_17411.f_5744 != 1)
	{
		return;
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		return;
	}
	Global_17411.f_3918[Global_17411.f_5222] = uParam0;
	Global_17411.f_5222++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 2;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_164();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_147(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17411.f_5068[(Global_17411.f_5219 - 1)])
		{
			Global_17411.f_5068[(Global_17411.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_5743 >= Global_17411.f_5741)
		{
			fVar3 = func_163();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

float func_163()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_147(Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_164()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_127(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17411.f_73[Global_17411.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[((Global_17411.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[((Global_17411.f_5223 - iVar4) + iVar10)], Global_17411.f_4304[((Global_17411.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_147(Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_166(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5220 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 1)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 1)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_17411.f_1610[Global_17411.f_5220] = bParam3;
	Global_17411.f_1867[Global_17411.f_5220] = iParam4;
	Global_17411.f_5220++;
	if (!bParam3)
	{
		func_169(Global_17411.f_5218, 1);
	}
	else
	{
		func_169(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_168(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_147(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
		{
			Global_17411.f_5068[Global_17411.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_167(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
			if (fVar4 > Global_17411.f_5745[iParam0])
			{
				Global_17411.f_5745[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 1;
	Global_17411.f_5742 = (Global_17411.f_5220 - 1);
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = iParam2;
}

float func_167(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_168(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_127(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_169(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_170()
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_171(int iParam0, char* sParam1, char* sParam2)
{
	Global_17411 = iParam0;
	func_172(29, sParam1, sParam2);
}

void func_172(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17411.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_6997[iParam0 /*16*/]), sParam2, 64);
}

void func_173(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_1), sParam0, 16);
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5083[0] = iParam0;
	Global_17411.f_5083[1] = iParam1;
	Global_17411.f_5083[2] = iParam2;
	Global_17411.f_5083[3] = iParam3;
	Global_17411.f_5083[4] = iParam4;
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5056[0] = iParam0;
	Global_17411.f_5056[1] = iParam1;
	Global_17411.f_5056[2] = iParam2;
	Global_17411.f_5056[3] = iParam3;
	Global_17411.f_5056[4] = iParam4;
	Global_17411.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_17411.f_5226++;
	}
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17411.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17411.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459153[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_5089[iVar0] = 0;
		Global_17411.f_5227[iVar0] = 0;
		Global_17411.f_5356[iVar0] = 0;
		Global_17411.f_5879[iVar0] = 0f;
		Global_17411.f_5485[iVar0] = 0;
		Global_17411.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17411.f_5056[iVar0] = 0;
		Global_17411.f_5068[iVar0] = 0f;
		Global_17411.f_5062[iVar0] = -1f;
		Global_17411.f_5075[iVar0] = 0;
		Global_17411.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		StringCopy(&(Global_17411.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17411.f_6997[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17411.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	Global_17411 = 0;
	Global_17411.f_5218 = 0;
	Global_17411.f_5219 = 0;
	Global_17411.f_5220 = 0;
	Global_17411.f_5222 = 0;
	Global_17411.f_5223 = 0;
	Global_17411.f_5224 = 0;
	Global_17411.f_5221 = 0;
	Global_17411.f_5874 = 0;
	Global_17411.f_6014 = 0;
	Global_17411.f_5739 = 0;
	Global_17411.f_5738 = 0;
	Global_17411.f_5740 = 0;
	StringCopy(&(Global_17411.f_4690), "", 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = 0;
	Global_17411.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_4768 = 0;
	StringCopy(&(Global_4267964.f_21), "", 16);
	Global_4267964.f_61 = 0;
	Global_4267964.f_62 = 0;
	Global_4267964.f_63 = 0;
	Global_4267964.f_64 = 0;
	Global_4267964.f_65 = 0;
	Global_4267964.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4267964.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4267964.f_67 = 0;
	StringCopy(&(Global_17411.f_1), "", 16);
	Global_17411.f_5074 = 0f;
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_5744 = 0;
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = 0;
	Global_17411.f_5742 = 0;
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	Global_17411.f_5225 = 10;
	Global_17411.f_5226 = 0;
	Global_17411.f_5876 = 0f;
	Global_17411.f_5877 = 0f;
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	Global_17411.f_5730 = 0f;
	Global_17411.f_5731 = 0;
	Global_17411.f_5733 = 0;
	Global_17411.f_5732 = 0;
	Global_17411.f_5734 = 0;
	Global_17411.f_5735 = 0;
	Global_17411.f_5736 = 0;
	Global_17411.f_5737 = 0;
	Global_17411.f_8349 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17411.f_6008[iVar0] = -1;
		Global_17411.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_17411.f_5081 = 0f;
	Global_17411.f_5052 = 0;
	Global_17411.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17411.f_6015)
	{
		Global_17411.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_8328 = 0;
	Global_17411.f_8323 = 0;
	Global_17411.f_8333 = 0;
	Global_17411.f_8338 = 0;
	Global_17411.f_8343 = 0;
	Global_17411.f_8345 = 0;
	Global_17411.f_8351 = 0;
	Global_17408 = 0.05f;
	Global_17409 = 0.05f;
	Global_17410 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17410 = 0.225f;
	}
}

int func_177(int iParam0, vector3 vParam1, float fParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		
		case -2:
			*uParam3 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_26010, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_26010, iParam0);
	}
}

int func_179(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_180(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_120(0))
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

int func_180(int iParam0)
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

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_180(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_37139[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_37139[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_37139[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_37334);
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_37139[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_37334);
		if (Global_37139[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_37139[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_37139[iVar0 /*32*/].f_13));
		}
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return iVar1;
}

void func_182(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_180(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_183(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_182(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_184(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_185()
{
	if (Global_106565.f_20404.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_187(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

void func_188()
{
	if (iLocal_108)
	{
		if (iLocal_107 == 3)
		{
			iLocal_107 = 0;
		}
		iLocal_108 = 0;
	}
	switch (iLocal_107)
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(iLocal_98[iLocal_111], true, 0);
			iLocal_109 = PED::CREATE_SYNCHRONIZED_SCENE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_486.f_9, 2);
			if (!PED::IS_PED_INJURED(Local_66.f_2))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_2, iLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_98[iLocal_111], iLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1148846080);
				iLocal_107 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_109))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_109) == 1f)
				{
					if (!PED::IS_PED_INJURED(Local_66.f_2))
					{
						TASK::CLEAR_PED_TASKS(Local_66.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iLocal_111]))
					{
						ENTITY::SET_ENTITY_DYNAMIC(iLocal_98[iLocal_111], 1);
					}
					iLocal_110 = MISC::GET_GAME_TIMER();
					iLocal_107 = 2;
				}
			}
			else
			{
				iLocal_110 = MISC::GET_GAME_TIMER();
				iLocal_107 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_110) > 1000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iLocal_111]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[iLocal_111], false, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_98[iLocal_111], func_60(iLocal_111), 1, false, 0, 1);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_98[iLocal_111], 0);
				}
				iLocal_107 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_189()
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_194())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, 0))
				{
					func_193();
					func_12(&(Local_66.f_86.f_7));
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, 0))
				{
					if ((func_192(&(Local_66.f_86.f_7), 5f) || func_190(Local_66.f_2, &(Local_66.f_451))) || PED::IS_PED_RAGDOLL(Local_66.f_86))
					{
						iLocal_52 = 4;
					}
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, 0))
				{
					iLocal_51 = 31;
					TASK::TASK_SMART_FLEE_PED(Local_66.f_86, Local_66, 500f, -1, 0, 0);
					iLocal_52 = 5;
				}
				func_40(&(Local_66.f_86.f_7));
				break;
			}
	}
}

int func_190(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_191(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_191(int iParam0, bool bParam1)
{
	return func_23(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_192(var uParam0, float fParam1)
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_193()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_86.f_6));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_66, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_66, 2500, 0, 2);
		TASK::TASK_HANDS_UP(0, 2500, 0, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_86.f_6);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_86, Local_66.f_86.f_6);
	}
}

int func_194()
{
	PED::GET_CLOSEST_PED(Local_66.f_86.f_2, Local_66.f_86.f_5, 1, 0, &(Local_66.f_86), 0, 1, -1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_66.f_86) == Local_66.f_86.f_1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_86, true, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_86, true);
			return 1;
		}
	}
	return 0;
}

void func_195()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	
	if (iLocal_101 > 1 && iLocal_101 < 5)
	{
		if (func_216())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_101 = 6;
		}
	}
	switch (iLocal_101)
	{
		case 0:
			if ((((ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0) || !func_215()) || func_1(Local_66.f_470, 128)) && iLocal_55 < 3) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_214(0))
				{
					func_213("SHR_ROBTILL", -1);
					Local_66.f_469 = -1;
					func_183(&(Local_66.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
					MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
					iLocal_101 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_179(Local_66.f_469, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, Local_66.f_214, Local_66.f_217, Local_66.f_220, 0, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar3, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, false, 0, 1);
							}
						}
					}
					MISC::SET_BIT(&(Local_66.f_162.f_18), 1);
					if (func_28("SHR_ROBTILL"))
					{
						HUD::CLEAR_HELP(1);
					}
					func_182(&(Local_66.f_469));
					bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_105, 1);
					if (bVar2)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
					CUTSCENE::_0xC61B86C9F61EB404(0);
					func_117(0);
					func_207(1, 1, 1, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					func_178(23, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_66.f_2.f_1, 3f, 0);
					iLocal_101 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (Local_66.f_469 <= 0)
					{
						Local_66.f_469 = -1;
						func_183(&(Local_66.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_182(&(Local_66.f_469));
				iLocal_101 = 0;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_66.f_2, false, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_2, true);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_66.f_2.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_78);
				if (!CAM::DOES_CAM_EXIST(iLocal_102))
				{
					iLocal_102 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_102, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_102, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(iLocal_102, 35f);
				CAM::SHAKE_CAM(iLocal_102, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_102, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			}
			iLocal_101 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_103))
				{
					iLocal_103 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(iLocal_103, 35f);
				CAM::SHAKE_CAM(iLocal_103, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_103, iLocal_102, 8000, 1, 1);
			}
			iLocal_106 = MISC::GET_GAME_TIMER();
			iLocal_101 = 4;
			break;
		
		case 4:
			if (((MISC::GET_GAME_TIMER() - iLocal_106) > 4800 || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_101 = 5;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_106) > 4500)
			{
				if (func_206())
				{
					if (!iLocal_95)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_95 = 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_104)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 51);
						func_205(func_104(), 1, iVar1, 0, 0);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_28.f_6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_66.f_2, true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_2, false);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (CAM::DOES_CAM_EXIST(iLocal_102))
			{
				CAM::DESTROY_CAM(iLocal_102, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_103))
			{
				CAM::DESTROY_CAM(iLocal_103, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
			}
			if (iLocal_105 != joaat("WEAPON_UNARMED") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_105, true);
			}
			if (MISC::IS_BIT_SET(Local_66.f_162.f_18, 1))
			{
				MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
			}
			func_204(1, 1, 1);
			func_16(1, 0);
			iLocal_60 = 12;
			func_201();
			func_196(297, 0, 0);
			Local_66.f_468 = 1;
			iLocal_101 = 7;
			break;
		
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_CAM_ACTIVE(iLocal_103, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (iLocal_81 < 15)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(25, 65);
					func_205(func_104(), 1, iVar1, 0, 0);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_101 = 5;
			}
			break;
	}
}

void func_196(int iParam0, int iParam1, int iParam2)
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
		func_79((891 + iParam0), 1, -1, 1);
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
		func_197();
	}
}

void func_197()
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
		func_100(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_200() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_198();
				}
			}
		}
	}
}

int func_198()
{
	if (func_199(0))
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

bool func_199(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_200()
{
	return Global_25765;
}

void func_201()
{
	if (!iLocal_87)
	{
		Global_106565.f_20029[iLocal_80]++;
		Global_106565.f_20029.f_62[iLocal_80] = Local_66.f_1;
		if (func_104() == 0)
		{
			func_202(5);
		}
		iLocal_87 = 1;
	}
}

void func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_203(&Global_90180, 1);
			break;
		
		case 1:
			func_203(&Global_90182, 3);
			break;
		
		case 2:
			func_203(&Global_90186, 1);
			break;
		
		case 3:
			func_203(&Global_90188, 1);
			break;
		
		case 4:
			func_203(&Global_90190, 1);
			break;
		
		case 5:
			func_203(&Global_90192, 1);
			break;
		
		case 6:
			func_203(&Global_90194, 1);
			break;
		
		case 7:
			func_203(&Global_90196, 2);
			break;
		
		case 8:
			func_203(&Global_90199, 1);
			break;
		
		case 9:
			func_203(&Global_90201, 1);
			break;
	}
}

void func_203(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_204(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_207(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_178(23, 0);
}

void func_205(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_70(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_206()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_207(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_212(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_118())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_211(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_212(0);
		HUD::THEFEED_RESUME();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_211(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_209(PLAYER::PLAYER_ID())) && !func_132(PLAYER::PLAYER_ID(), 0)) && !func_208()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_209(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_208()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

int func_209(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return 1;
	}
	if (func_210())
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

bool func_210()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_211(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_212(int iParam0)
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

void func_213(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_214(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2423, 14))
			{
				if (Global_14552 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14552 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14553.f_1 > 3)
	{
		if (Global_14552 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_215()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_66.f_2) == Local_66.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_217()
{
	int iVar0;
	
	func_234();
	func_231();
	if (ENTITY::DOES_ENTITY_EXIST(Local_66))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66, &iVar0, 1);
		if ((iLocal_58 == 1 && iLocal_99 == 2) && ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_230()) || func_229()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_16(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_226();
	if (!bLocal_86)
	{
		func_225();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_300())
			{
				if ((func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || (func_190(Local_66.f_2, &(Local_66.f_451)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					func_224();
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					MISC::SET_BIT(&Global_89563, 3);
					func_223();
				}
				if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_222();
						func_291(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_300())
			{
				if (func_190(Local_66.f_2, &(Local_66.f_451)) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					Local_66.f_2.f_11 = 1;
					func_201();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					MISC::SET_BIT(&Global_89563, 3);
					func_223();
				}
				else if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					func_222();
					func_224();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_223();
				}
				else if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_222();
						func_291(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		
		case 4:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) && func_300())
			{
				func_224();
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		
		case 5:
			if (Local_66.f_486 >= 0)
			{
				if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) && func_300())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486) && !Local_66.f_467)
					{
						iLocal_51 = 33;
						Local_66.f_467 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
				if (func_220(Local_66.f_2, 0, 1, 0, 1, 1) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					iLocal_58 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			MISC::CLEAR_BIT(&Global_89563, 3);
			if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
				func_7();
				iLocal_58 = 0;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
				func_219();
				iLocal_51 = 36;
				func_16(1, 0);
				func_291(&(Local_66.f_470), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		
		case 8:
			if (((func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || func_190(Local_66.f_2, &(Local_66.f_451))) && func_300()) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_19();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_7();
			iLocal_58 = 12;
			break;
		
		case 10:
			if ((((func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || func_190(Local_66.f_2, &(Local_66.f_451))) && func_300()) && iVar0 != joaat("WEAPON_UNARMED")) && !func_15(&(Local_66.f_480)))
			{
				func_12(&(Local_66.f_480));
				if (PED::IS_PED_RAGDOLL(Local_66.f_2))
				{
					func_7();
				}
				iLocal_51 = 23;
			}
			else if (func_41(&(Local_66.f_480)) > 10f)
			{
				if (!PED::IS_PED_INJURED(Local_66.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				iLocal_58 = 12;
			}
			break;
		
		case 11:
			func_218();
			iLocal_58 = 12;
			break;
	}
}

void func_218()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_2, false);
	}
}

void func_219()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_66.f_2, Local_66, -1, 0, 2);
	}
}

int func_220(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_221(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_191(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_222()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && func_300())
	{
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != PLAYER::PLAYER_PED_ID() && uVar0[iVar2] != Local_66.f_2) && !PED::IS_PED_INJURED(uVar0[iVar2])) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar2])) && !PED::IS_PED_IN_COMBAT(uVar0[iVar2], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar2], true, 1);
				TASK::TASK_SMART_FLEE_PED(uVar0[iVar2], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			iVar2++;
		}
	}
}

void func_223()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && func_300())
	{
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != PLAYER::PLAYER_PED_ID() && uVar0[iVar2] != Local_66.f_2) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar2], true, 1);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
				TASK::TASK_PERFORM_SEQUENCE(uVar0[iVar2], iLocal_78);
			}
			iVar2++;
		}
	}
}

void func_224()
{
	if (func_25(Local_66) == joaat("WEAPON_RPG"))
	{
		Local_66.f_458 = 1;
	}
	else if (func_25(Local_66) == joaat("WEAPON_KNIFE"))
	{
		Local_66.f_459 = 1;
	}
	else if (((func_25(Local_66) == joaat("WEAPON_HAMMER") || func_25(Local_66) == joaat("WEAPON_CROWBAR")) || func_25(Local_66) == joaat("WEAPON_BAT")) || func_25(Local_66) == joaat("WEAPON_BOTTLE"))
	{
		Local_66.f_460 = 1;
	}
	else if ((func_25(Local_66) == joaat("WEAPON_GRENADE") || func_25(Local_66) == joaat("WEAPON_SMOKEGRENADE")) || func_25(Local_66) == joaat("WEAPON_MOLOTOV"))
	{
		Local_66.f_461 = 1;
	}
	else if (func_25(Local_66) == joaat("WEAPON_STICKYBOMB"))
	{
		Local_66.f_462 = 1;
	}
	iLocal_60 = 12;
	func_201();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_13 = 0;
}

void func_225()
{
	if (iLocal_53 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				
				case 2:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 3:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 4:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 5:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 6:
					iLocal_56 = 0;
					break;
				
				case 7:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_226()
{
	switch (iLocal_57)
	{
		case 1:
			func_219();
			iLocal_57 = 2;
			break;
		
		case 2:
			if (iLocal_53 == 2)
			{
				func_228();
				Local_66.f_2.f_13 = 0;
				iLocal_57 = 3;
			}
			if ((func_45() || func_44()) && !Local_66.f_2.f_13)
			{
				Local_66.f_2.f_13 = 1;
			}
			if (!Local_66.f_2.f_14)
			{
				if (!PED::IS_PED_INJURED(Local_66.f_2) && PED::IS_PED_FLEEING(Local_66.f_2))
				{
					Local_66.f_2.f_14 = 1;
				}
			}
			if ((Local_66.f_2.f_13 && !PED::IS_PED_INJURED(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_227();
			}
			break;
		
		case 3:
			if (iLocal_53 >= 7)
			{
				func_219();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_227()
{
	if ((MISC::GET_GAME_TIMER() - Local_66.f_2.f_10) > 5000)
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_66.f_2.f_24));
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_2.f_24));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_66, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_66, -1, 0, 2);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_2.f_24);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, Local_66.f_2.f_24);
		Local_66.f_2.f_10 = MISC::GET_GAME_TIMER();
	}
}

void func_228()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_66.f_2);
	}
}

int func_229()
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_66.f_186, Local_66.f_189, Local_66.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_66.f_186, Local_66.f_189, Local_66.f_192))
	{
		return 1;
	}
	return 0;
}

void func_231()
{
	if (!Local_66.f_465)
	{
		if (func_232())
		{
			if (!func_15(&(Local_66.f_474)))
			{
				func_12(&(Local_66.f_474));
			}
			else if (func_192(&(Local_66.f_474), 1f))
			{
				Local_66.f_465 = 1;
				iLocal_51 = 26;
				if (!PED::IS_PED_INJURED(Local_66.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					func_16(1, 0);
				}
			}
		}
		else if (func_15(&(Local_66.f_474)))
		{
			func_40(&(Local_66.f_474));
		}
	}
}

int func_232()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (func_233())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Local_66, &iVar0, 1);
			if (iVar0 == joaat("WEAPON_PETROLCAN"))
			{
				if (PED::IS_PED_SHOOTING(Local_66))
				{
					if (PED::IS_PED_FACING_PED(Local_66.f_2, Local_66, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_233()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_234()
{
	if (iLocal_58 != 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
		{
			if (PED::IS_PED_FLEEING(Local_66.f_2))
			{
				TASK::TASK_SMART_FLEE_PED(Local_66.f_2, Local_66, 100f, -1, 0, 0);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_14)
				{
					Local_66.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_235()
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.894f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.871f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_236(0);
			OBJECT::_0x92AEFB5F6E294023(Local_66.f_28, false, 0);
			iLocal_55 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_236(1);
			ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, 0);
			iLocal_55 = 5;
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_66.f_28, PLAYER::PLAYER_PED_ID()))
			{
				func_205(func_104(), 1, iLocal_81, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, 0);
				if (HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_66.f_28.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				func_196(297, 0, 0);
				Local_66.f_468 = 1;
				Local_66.f_28.f_6 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_13(&(Local_66.f_28.f_15));
				iLocal_55 = 6;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, 0) && ENTITY::IS_ENTITY_VISIBLE(Local_66.f_28))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_66.f_28.f_15)) > 2.5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_28) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_66.f_28, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, true);
					OBJECT::DELETE_OBJECT(&(Local_66.f_28));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_236(bool bParam0)
{
	Local_66.f_28.f_3 = 0;
	MISC::SET_BIT(&(Local_66.f_28.f_3), 3);
	MISC::SET_BIT(&(Local_66.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(Local_66.f_28.f_4, Local_66.f_28.f_5);
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_239(Local_66.f_28);
			HUD::SET_BLIP_COLOUR(Local_66.f_28.f_2, 2);
		}
		OBJECT::_0xA08FE5E49BDC39DD(Local_66.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_66.f_28.f_4);
		Local_66.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), Local_66.f_28.f_3, iLocal_81, 1, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_237(Local_66.f_28.f_1);
		}
	}
	Local_66.f_28.f_14 = 1;
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_238(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_238(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_239(int iParam0)
{
	return func_240(iParam0, 1, 0);
}

int func_240(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_238(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_238(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_238(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_241()
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_464)
	{
		switch (iLocal_59)
		{
			case 2:
				if (func_1(Local_66.f_470, 4))
				{
					func_245();
					Local_66.f_46.f_39 = MISC::GET_GAME_TIMER();
					iLocal_59 = 3;
				}
				break;
			
			case 3:
				if (MISC::GET_GAME_TIMER() - Local_66.f_46.f_39) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_66.f_46.f_4[0], 0))
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_66.f_46.f_4[0], true);
					}
					iLocal_59 = 4;
				}
				break;
			
			case 4:
				if (func_244() && func_243())
				{
					iLocal_59 = 5;
				}
				break;
			
			case 5:
				iLocal_51 = 24;
				func_16(1, 0);
				iLocal_59 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((PED::IS_PED_INJURED(Local_66.f_46[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_66.f_46[iVar0], 0, 2))) || PED::IS_PED_INJURED(Local_66.f_2)) || (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_66.f_2, 0, 2))) || func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!PED::IS_PED_INJURED(Local_66.f_46[iVar1]))
							{
								TASK::TASK_COMBAT_PED(Local_66.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar1], false);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_242();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_242()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar0], false);
		}
		iVar0++;
	}
}

int func_243()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_244()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], 0))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_66.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46.f_4[iVar0], 0))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_66.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_46[iVar0] = PED::CREATE_PED(6, Local_66.f_46.f_26, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], 1, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_46[iVar0], true, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar0], true);
		Local_66.f_46.f_4[iVar0] = VEHICLE::CREATE_VEHICLE(Local_66.f_46.f_27, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_46.f_4[iVar0], true, 0);
		if (!(ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], 0) && ENTITY::IS_ENTITY_DEAD(Local_66.f_46.f_4[iVar0], 0)))
		{
			PED::SET_PED_INTO_VEHICLE(Local_66.f_46[iVar0], Local_66.f_46.f_4[iVar0], -1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_66.f_46[iVar0], joaat("WEAPON_PISTOL"), 99, false, true);
		}
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_46.f_35[iVar0]));
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_66.f_46.f_4[iVar0], Local_66.f_46.f_22, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_66.f_46.f_4[iVar0]) - 8f), 1, Local_66.f_46.f_27, 786981, Local_66.f_46.f_25, -1f);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_66, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_46.f_35[iVar0]);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_46[iVar0], Local_66.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_66))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		
		case 5:
			if (((((func_25(Local_66) != joaat("WEAPON_UNARMED") && iVar0 != joaat("WEAPON_BAT")) && iVar0 != joaat("WEAPON_HAMMER")) && iVar0 != joaat("WEAPON_CROWBAR")) && iVar0 != joaat("WEAPON_BOTTLE")) && func_300())
			{
				iLocal_60 = 7;
			}
			break;
		
		case 6:
			if (func_25(Local_66) != joaat("WEAPON_UNARMED") && func_300())
			{
				if (iVar0 == joaat("WEAPON_BAT"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("WEAPON_CROWBAR") || iVar0 == joaat("WEAPON_HAMMER")) || iVar0 == joaat("WEAPON_BOTTLE"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("WEAPON_STICKYBOMB"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("WEAPON_PETROLCAN") && iVar0 != joaat("OBJECT")) && iVar0 != joaat("WEAPON_BRIEFCASE"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 11:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
			{
				func_224();
				iLocal_58 = 5;
			}
			break;
		
		case 12:
			if (!func_300())
			{
				if (!Local_66.f_464)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(Local_66) < 0.1f && !func_248())
			{
				func_247();
				iLocal_60 = 14;
			}
			else if (func_248() && !func_300())
			{
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (func_248() && !func_300())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!PED::IS_PED_INJURED(Local_66.f_46[iVar1]))
					{
						TASK::TASK_COMBAT_PED(Local_66.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar1], false);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_247()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], 0))
		{
			if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_66.f_46[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_66.f_46[iVar0]);
				TASK::TASK_ARREST_PED(Local_66.f_46[iVar0], Local_66);
			}
		}
		iVar0++;
	}
}

int func_248()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_46.f_28, Local_66.f_46.f_31, Local_66.f_46.f_34, 0, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_249()
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_93)
			{
				if (func_250())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_93 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_250()
{
	int iVar0;
	vector3 vVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_66))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_66.f_470, 128))
	{
		if ((PED::IS_PED_RAGDOLL(Local_66.f_2) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_66.f_2, Local_66, 1) && iVar0 == joaat("WEAPON_UNARMED"))) || func_251(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
		{
			if (PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_66.f_2, Local_66, 1) && iVar0 == joaat("WEAPON_UNARMED"))
			{
			}
			if (func_251(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_2, true) };
				vVar1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_251(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_252()
{
	switch (iLocal_61)
	{
		case 0:
			if (func_280())
			{
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			func_273();
			iLocal_61 = 2;
			break;
		
		case 2:
			func_269();
			iLocal_61 = 3;
			break;
		
		case 3:
			if (func_264())
			{
				iLocal_61 = 4;
			}
			break;
		
		case 4:
			func_253();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_65 = 1;
			break;
	}
}

void func_253()
{
	func_257();
	func_256();
	func_255();
	if (INTERIOR::IS_VALID_INTERIOR(Local_66.f_185))
	{
		INTERIOR::_0x82EBB79E258FA2B7(Local_66.f_2, Local_66.f_185);
		INTERIOR::_0x82EBB79E258FA2B7(Local_66.f_28, Local_66.f_185);
		if (!bLocal_86)
		{
			INTERIOR::_0x82EBB79E258FA2B7(Local_66.f_96.f_1, Local_66.f_185);
		}
	}
	func_254();
}

void func_254()
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar23 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	if (func_104() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_104() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_104() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_66.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_66.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_66.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_66.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_66.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_66.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_66.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_66.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_66.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_66.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_66.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_66.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_66.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_66.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_66.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_66.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_66.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_66.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_66.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_66.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_66.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_66.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_66.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_66.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_66.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_66.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_66.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_66.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_66.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_66.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_66.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_66.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_66.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_66.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_66.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_66.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_66.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_66.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_66.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_66.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_66.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_66.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_66.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_66.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_66.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_66.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_66.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_66.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_66.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_66.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_66.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_66.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_221.f_166 = "OJSRAUD";
	Local_66.f_221.f_167 = "OJSR_GREET";
	Local_66.f_221.f_168 = "OJSR_BATEQ";
	Local_66.f_221.f_169 = "OJSR_TOOLEQ";
	Local_66.f_221.f_170 = "OJSR_STICKEQ";
	Local_66.f_221.f_171 = "OJSR_WORRY";
	Local_66.f_221.f_172 = "OJSR_SHOCK";
	Local_66.f_221.f_173 = "OJSR_STUBBRN";
	Local_66.f_221.f_174 = "OJSR_COUNTER";
	Local_66.f_221.f_175 = "OJSR_BACKRM";
	Local_66.f_221.f_176 = "OJSR_BUMP";
	Local_66.f_221.f_177 = "OJSR_BPAIM";
	Local_66.f_221.f_178 = "OJSR_BPAIMAG";
	Local_66.f_221.f_179 = "OJSR_HOLDUP";
	Local_66.f_221.f_180 = "OJSR_SCARED";
	Local_66.f_221.f_181 = "OJSR_KNIFAIM";
	Local_66.f_221.f_182 = "OJSR_TOOLAIM";
	Local_66.f_221.f_183 = "OJSR_GRANAIM";
	Local_66.f_221.f_184 = "OJSR_STICAIM";
	Local_66.f_221.f_185 = "OJSR_BRAVE";
	Local_66.f_221.f_186 = "OJSR_MOREAIM";
	Local_66.f_221.f_187 = "OJSR_SURNDER";
	Local_66.f_221.f_188 = "OJSR_COPS";
	Local_66.f_221.f_189 = "OJSR_POURCAN";
	Local_66.f_221.f_190 = "OJSR_FLEE";
	Local_66.f_221.f_191 = "OJSR_RECSCAR";
	Local_66.f_221.f_192 = "OJSR_RECAGGR";
	Local_66.f_221.f_193 = "OJSR_CSTMER";
	Local_66.f_221.f_194 = "OJSR_MOSC";
	Local_66.f_221.f_195 = "OJSR_PLRHUR";
	Local_66.f_221.f_196 = "OJSR_BUY";
	Local_66.f_221.f_197 = "OJSR_STEAL";
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
}

void func_255()
{
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_66.f_96.f_1 = OBJECT::CREATE_OBJECT(Local_66.f_96, Local_66.f_486.f_6, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Local_66.f_96.f_1, Local_66.f_96.f_5);
	ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_96.f_1, true);
}

void func_256()
{
	Local_66.f_28 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED"), Local_66.f_28.f_7, false, Local_66.f_28.f_13);
	ENTITY::SET_ENTITY_ROTATION(Local_66.f_28, Local_66.f_28.f_10, 2, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, 0);
	OBJECT::_0x92AEFB5F6E294023(Local_66.f_28, true, 0);
	Local_66.f_28.f_14 = 0;
}

void func_257()
{
	int iVar0;
	int iVar1;
	
	Local_66.f_2 = PED::CREATE_PED(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, 1, true);
	func_263(iLocal_80, &iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 0, iVar1, iVar0, 0);
	func_262(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 2, iVar1, iVar0, 0);
	func_261(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 3, iVar1, iVar0, 0);
	func_260(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 4, iVar1, iVar0, 0);
	func_259(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 8, iVar1, iVar0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_2, true);
	if (Local_66.f_2.f_12)
	{
		func_258();
	}
}

void func_258()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
	}
}

void func_259(int iParam0, int iParam1)
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_260(int iParam0, int iParam1)
{
	*iParam0 = 0;
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}

void func_261(int iParam0, int iParam1)
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

void func_262(int iParam0, int iParam1)
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_263(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
}

int func_264()
{
	if (!func_265(&Local_96))
	{
		return 0;
	}
	if (!bLocal_86)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_66.f_2.f_15))
		{
			return 0;
		}
	}
	if (!INTERIOR::IS_INTERIOR_READY(Local_66.f_185))
	{
		return 0;
	}
	MISC::_0x6F2135B6129620C1(0);
	return 1;
}

int func_265(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_266(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_266(var uParam0)
{
	return func_267(*uParam0, "NULL", uParam0->f_1);
}

int func_267(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_268(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_269()
{
	MISC::_0x6F2135B6129620C1(1);
	if (!bLocal_86)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_66.f_2.f_15);
		Local_96.f_32 = MISC::GET_FRAME_COUNT();
	}
	func_270(&Local_96, Local_66.f_2.f_5);
	func_270(&Local_96, Local_66.f_28.f_13);
	func_270(&Local_96, Local_66.f_96);
	Local_66.f_466 = 1;
}

void func_270(var uParam0, int iParam1)
{
	func_271(uParam0, 0, iParam1, 0);
}

void func_271(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_272(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_273()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	func_278(iLocal_80, &(Local_66.f_46.f_8), &(Local_66.f_46.f_18), &(Local_66.f_46.f_22), &(Local_66.f_46.f_25), &(Local_66.f_46.f_26), &(Local_66.f_46.f_27), &(Local_66.f_46.f_28), &(Local_66.f_46.f_31), &(Local_66.f_46.f_34));
	func_276(iLocal_80);
	vVar0 = { -3244.573f, 1000.658f, 12.83f };
	fVar3 = 175.074f;
	vVar1 = { -3242.008f, 1001.202f, 11.83071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_303(vVar2, fVar3) };
	vVar1 = { -3245.088f, 1001.468f, 13.65071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_303(vVar2, fVar3) };
	vVar1 = { -3243.37f, 1000.37f, 12.83f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_303(vVar2, fVar3) };
	Local_66.f_469 = -1;
	Local_66.f_102.f_22 = -1;
	Local_66.f_96 = joaat("p_till_01_s");
	Local_66.f_96.f_2 = { Local_66.f_486.f_6 };
	Local_66.f_96.f_5 = (Local_66.f_486.f_9.f_2 + 180f);
	Local_66.f_451.f_3 = 0;
	Local_66.f_458 = 0;
	Local_66.f_459 = 0;
	Local_66.f_460 = 0;
	Local_66.f_461 = 0;
	Local_66.f_462 = 0;
	Local_66.f_465 = 0;
	func_275(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_274();
}

void func_274()
{
	Local_66.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_66.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_86.f_5 = 2f;
}

void func_275(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_276(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_277(Local_66.f_186, Local_66.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, "v_shop_247");
			break;
	}
}

Vector3 func_277(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0.x = ((vParam0.x + vParam1.x) / 2f);
	vVar0.y = ((vParam0.y + vParam1.y) / 2f);
	vVar0.z = ((vParam0.z + vParam1.z) / 2f);
	return vVar0;
}

void func_278(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_279(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("SHERIFF");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("POLICE");
			break;
	}
}

int func_279(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_280()
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_66, true) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Local_66.f_181, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_281()
{
	if (Local_66.f_46.f_26 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_26);
	}
	if (Local_66.f_46.f_27 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_27);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_66.f_2.f_15))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_66.f_2.f_15);
	}
}

int func_282()
{
	if (Global_106565.f_9079)
	{
		if (!func_286(56))
		{
			return 1;
		}
	}
	if (func_285())
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (func_302() && !func_301())
	{
		return 1;
	}
	if (func_284() && func_283())
	{
		return 1;
	}
	if (Global_25767)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	return 0;
}

bool func_283()
{
	return Global_106283 > 0;
}

int func_284()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_285()
{
	vector3 vVar0;
	float fVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_66, true) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Local_66.f_181, true);
		if (fVar1 > Local_66.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_286(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_287(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || MISC::IS_BIT_SET(Global_93682.f_20, 2)) || MISC::IS_BIT_SET(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
					{
						func_288(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_288(int iParam0)
{
	func_289(iParam0, "NULL", iParam0->f_1);
}

void func_289(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_268(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_290()
{
	int iVar0;
	
	if (Local_66.f_1 != Global_106565.f_20029.f_62[iLocal_80])
	{
		return 1;
	}
	iVar0 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_106565.f_20029.f_42[iLocal_80]);
	iLocal_85 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH() + 31;
		iVar0 = (iVar0 - Global_106565.f_20029.f_42[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0;
	}
	return 1;
}

void func_291(var uParam0, int iParam1)
{
	func_292(uParam0, iParam1);
}

void func_292(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_293(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_294(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_294(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_294(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_294(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_294(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_294(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_294(int iParam0)
{
	if (!func_279(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (CLOCK::GET_CLOCK_HOURS() - Global_106565.f_20029.f_21[iLocal_80]);
	iVar1 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_106565.f_20029.f_42[iLocal_80]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS() + 24;
		iVar0 = (iVar0 - Global_106565.f_20029.f_21[iLocal_80]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0) || (iVar0 < iLocal_84 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_296(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	vector3 vVar3[2];
	
	func_297(iLocal_80, &uVar1, &uVar2, &vVar3);
	if (!func_1(Local_66.f_470, 64))
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[0], uVar2[0], vVar3[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[1], uVar2[1], vVar3[1 /*3*/], 0, 0, 0);
			}
		}
		func_291(&(Local_66.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_297(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_298(var uParam0, int iParam1)
{
	func_299(uParam0, iParam1);
}

void func_299(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_300()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_301()
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

int func_302()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_303(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

void func_304(var uParam0)
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66 = PLAYER::PLAYER_PED_ID();
	func_312(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_181), &iLocal_80);
	if ((((((((iLocal_80 == 10 || iLocal_80 == 11) || iLocal_80 == 12) || iLocal_80 == 13) || iLocal_80 == 14) || iLocal_80 == 15) || iLocal_80 == 16) || iLocal_80 == 17) || iLocal_80 == 18)
	{
		bLocal_94 = true;
	}
	Local_66.f_184 = 150f;
	Local_66.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_66.f_2.f_16 = "absolutely";
	Local_66.f_2.f_17 = "is_this_it";
	Local_66.f_2.f_18 = "shock";
	Local_66.f_2.f_19 = "anger_a";
	Local_66.f_2.f_20 = "screw_you";
	Local_66.f_2.f_21 = "but_why";
	Local_66.f_486.f_1 = "mp_am_hold_up";
	Local_66.f_486.f_2 = "guard_handsup_loop";
	Local_66.f_486.f_3 = "holdup_victim_20s";
	Local_66.f_486.f_4 = "holdup_victim_20s_bag";
	Local_66.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_311();
	if (!bLocal_86)
	{
		func_307();
	}
	iLocal_87 = 0;
	if (iLocal_80 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (func_104() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (func_104() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (func_104() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_306(iLocal_80, &(Local_66.f_186), &(Local_66.f_189), &(Local_66.f_192), &(Local_66.f_193), &(Local_66.f_196), &(Local_66.f_199), &(Local_66.f_200), &(Local_66.f_203), &(Local_66.f_206), &(Local_66.f_207), &(Local_66.f_210), &(Local_66.f_213), &(Local_66.f_214), &(Local_66.f_217), &(Local_66.f_220), &(Local_66.f_102.f_6), &(Local_66.f_102.f_9));
	func_305(iLocal_80, &(Local_66.f_486.f_6), &(Local_66.f_486.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_28.f_7), &(Local_66.f_28.f_10), &(Local_66.f_28.f_13), &(Local_66.f_28.f_4), &(Local_66.f_28.f_5), &(Local_66.f_102.f_21));
}

void func_305(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_306(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_307()
{
	func_310();
	func_309();
	func_308();
}

void func_308()
{
	int iVar0;
	
	if (iLocal_82 >= 9)
	{
		if (Global_106565.f_20029.f_41 > 3)
		{
			if (iLocal_82 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_464 = 1;
				Global_106565.f_20029.f_41 = 0;
			}
			else
			{
				Local_66.f_464 = 0;
				Global_106565.f_20029.f_41++;
			}
		}
		else
		{
			Global_106565.f_20029.f_41++;
		}
	}
	else
	{
		Global_106565.f_20029.f_41++;
	}
}

void func_309()
{
	int iVar0;
	
	if (iLocal_82 >= 3)
	{
		if (iLocal_82 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_12 = 1;
		}
		else
		{
			Local_66.f_2.f_12 = 0;
		}
	}
}

void func_310()
{
	int iVar0;
	
	if (iLocal_82 >= 6)
	{
		if (iLocal_82 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_311()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_106565.f_20029[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_312(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(func_294(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_294(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_294(*iParam2) };
}

void func_313(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_314(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_315(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_316(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_316(int iParam0)
{
	return func_317(iParam0, Global_36425);
}

int func_317(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_318()
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_101 == 7) || (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_101 == 7)
		{
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0) && iLocal_65 == 1)
		{
		}
		Global_106565.f_20029.f_21[iLocal_80] = CLOCK::GET_CLOCK_HOURS();
		Global_106565.f_20029.f_42[iLocal_80] = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && func_329()) && Local_66.f_468)
	{
		func_325(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_324();
	iLocal_87 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (!bLocal_86)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_79, 0);
	func_29("SHR_HOLDUP_1", 1);
	func_29("SHR_SNK_TUT", 1);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_1(Local_66.f_470, 1024))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_98[2]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_98[0]));
			OBJECT::DELETE_OBJECT(&(iLocal_98[1]));
			OBJECT::DELETE_OBJECT(&(iLocal_98[2]));
		}
	}
	if (iLocal_100 == 2)
	{
		STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
	}
	func_319(&Local_96, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_319(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_321(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_320(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_320(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_321(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_322(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_322(var uParam0)
{
	func_323(*uParam0, "NULL", uParam0->f_1);
}

void func_323(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_268(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_324()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, 0))
	{
		TASK::CLEAR_PED_TASKS(Local_66.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_2))
	{
		func_218();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_66.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_86))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_66.f_86));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, 0))
	{
		if (iLocal_53 >= 4)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, -8f, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_66.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_28))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_66.f_28));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_96.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_66.f_96.f_1));
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_66.f_28.f_1))
	{
		OBJECT::REMOVE_PICKUP(Local_66.f_28.f_1);
	}
	if (func_15(&(Local_66.f_477)))
	{
		func_40(&(Local_66.f_477));
	}
	if (Local_66.f_466)
	{
		if (!bLocal_86)
		{
			STREAMING::REMOVE_ANIM_DICT(Local_66.f_2.f_15);
		}
		Local_66.f_466 = 0;
	}
}

void func_325(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	iVar0 = func_328(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_327(iParam0)}, 6);
	if (func_326(276, &Var1, &Var2, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(114, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

int func_326(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::_NETWORK_GET_ROS_PRIVILEGE_4())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { func_144(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2456885.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1657223.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::_NETWORK_GET_ROS_PRIVILEGE_4())
	{
	}
	return 0;
}

struct<8> func_327(var uParam0)
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_328(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_329()
{
	if (func_331() && func_330(0))
	{
		return 1;
	}
	return 0;
}

var func_330(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_331()
{
	return func_330(func_78() + 1);
}

