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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_52[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = NULL;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<6> Local_88 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<2> Local_95 = { 0, 5 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 5;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_68 = -1;
	iLocal_69 = 2050;
	iLocal_70 = -1;
	iLocal_71 = -1;
	sLocal_73 = "CC_SUBSTR";
	fLocal_74 = 125f;
	iLocal_75 = 1;
	iLocal_77 = 263;
	fLocal_85 = 4f;
	iLocal_86 = -1;
	vLocal_64 = { ScriptParam_95.f_1[0 /*3*/] };
	vLocal_64 = { vLocal_64 };
	uLocal_62 = uLocal_62;
	cLocal_52 = { cLocal_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_88(1);
	}
	iLocal_61 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_67 = 0;
	func_86(&Global_105216, 0);
	func_84();
	if (func_83(uLocal_66, 1))
	{
		iLocal_72 = 10;
	}
	else
	{
		iLocal_72 = 9;
	}
	while (!Global_32193)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_83(uLocal_66, 8))
	{
		if (!func_81(iLocal_72))
		{
			if (func_80(0, iLocal_71))
			{
				func_88(0);
			}
			else
			{
				func_88(1);
			}
		}
	}
	if (iLocal_71 != -1)
	{
		if (!func_80(0, iLocal_71))
		{
			func_88(1);
		}
	}
	if (func_83(uLocal_66, 8388608))
	{
		func_88(1);
	}
	if (func_83(uLocal_66, 524288) && (func_79() && !func_78()))
	{
		func_88(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_83(uLocal_66, 4194304))
	{
		if (iLocal_77 != 263)
		{
			func_77(iLocal_77, 1, 0);
			iLocal_77 = 263;
		}
		func_76(10);
	}
	while (true)
	{
		if (!func_83(uLocal_66, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_95.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_95.f_1[0 /*3*/].f_2 = fVar1;
					func_75(&uLocal_66, 268435456);
				}
			}
		}
		iLocal_61 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_83(uLocal_66, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
			{
				func_88(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61) && !ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
		{
			vLocal_63 = { ENTITY::GET_ENTITY_COORDS(iLocal_61, true) };
			fLocal_65 = SYSTEM::VDIST2(vLocal_63, ScriptParam_95.f_1[0 /*3*/]);
			fLocal_65 = fLocal_65;
			vLocal_83 = { vLocal_63 };
			vLocal_84 = { ScriptParam_95.f_1[0 /*3*/] };
			vLocal_83.z = 0f;
			vLocal_84.z = 0f;
			fLocal_82 = SYSTEM::VDIST2(vLocal_83, vLocal_84);
			switch (iLocal_67)
			{
				case 0:
					if (func_81(iLocal_72) || (func_83(uLocal_66, 16) && !func_83(uLocal_66, 524288)))
					{
						iLocal_70 = -1;
						func_74();
						func_76(1);
					}
					else
					{
						if (fLocal_82 > (fLocal_74 * fLocal_74))
						{
							if (iLocal_77 != 263)
							{
								func_77(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
							func_76(10);
						}
						if ((vLocal_63.z - ScriptParam_95.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_73())
					{
						iLocal_75 = iLocal_75;
						func_76(3);
					}
					else
					{
						func_74();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_88(1);
						return;
					}
					if (!func_81(iLocal_72))
					{
						if (!func_83(uLocal_66, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_93682.f_3), &cLocal_52))
							{
								cLocal_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_88(0);
								break;
							}
						}
					}
					if (!func_83(uLocal_66, 4))
					{
						func_72();
						func_75(&uLocal_66, 4);
					}
					if (fLocal_82 > (fLocal_74 * fLocal_74) && !Global_93716)
					{
						if (iLocal_77 != 263)
						{
							if (func_71(6) && !func_70(iLocal_77))
							{
							}
							else
							{
								func_77(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
						}
						func_76(10);
					}
					else
					{
						cLocal_52 = { Local_51 };
						bVar3 = !func_83(uLocal_66, 64);
						func_86(&uLocal_66, 128);
						if (!func_69(3) && !Global_93716)
						{
							if (func_83(uLocal_66, 2097152))
							{
								if ((!func_83(uLocal_66, 1) || !ENTITY::DOES_ENTITY_EXIST(func_68())) && !Global_93716)
								{
									func_76(10);
									break;
								}
							}
						}
						if (func_83(uLocal_66, 524288) && (func_79() && !func_78()))
						{
							func_88(1);
						}
						if (func_67())
						{
							func_88(1);
						}
						if ((!func_58(6) || Global_105612) || func_57())
						{
							bVar3 = false;
						}
						if (func_83(uLocal_66, 1))
						{
							if (!func_56())
							{
								func_54(&uLocal_66, 128);
								bVar3 = false;
							}
						}
						if (func_53(1))
						{
							bVar3 = false;
						}
						if (Global_71590)
						{
							bVar3 = false;
						}
						if (func_52())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_51() || func_50(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (func_49(0) || func_48())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!func_43(iLocal_86))
							{
								func_54(&uLocal_66, 128);
								bVar3 = false;
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_61, ScriptParam_95.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
							{
								bVar3 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_42(uLocal_62))
								{
									if (iLocal_68 == -1)
									{
										func_41(&iLocal_68, 4, sLocal_73, 0, 0, 0, 0);
										func_54(&uLocal_66, 2048);
									}
									else if (!func_83(uLocal_66, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_40(&iLocal_68);
										func_86(&uLocal_66, 2048);
									}
									if (func_38(iLocal_68, 1))
									{
										sLocal_73 = sLocal_73;
										func_40(&iLocal_68);
										func_86(&uLocal_66, 2048);
										SCRIPT::REQUEST_SCRIPT(&cLocal_52);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_76(5);
									}
								}
								else
								{
									sLocal_73 = sLocal_73;
									func_40(&iLocal_68);
									func_86(&uLocal_66, 2048);
									SCRIPT::REQUEST_SCRIPT(&cLocal_52);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_76(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_68 != -1)
							{
								func_40(&iLocal_68);
								func_86(&uLocal_66, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_37();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_52))
					{
						if (iLocal_68 != -1)
						{
							func_40(&iLocal_68);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_83(uLocal_66, 1))
						{
							if (func_71(6) || func_71(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_70, 6, iLocal_72, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_33();
							if (Global_37584)
							{
								func_24(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = SYSTEM::START_NEW_SCRIPT(&cLocal_52, iLocal_69);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_52);
							Local_51 = { cLocal_52 };
							StringCopy(&cLocal_52, "", 64);
							func_86(&uLocal_66, 4);
							func_23();
							func_54(&uLocal_66, 2);
							func_76(6);
							func_19(&iLocal_79);
							if (iLocal_71 != -1)
							{
								func_18(iLocal_71);
								func_15(func_17(iLocal_71), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_76(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (!func_83(uLocal_66, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_54(&uLocal_66, 256);
						}
					}
					if (func_83(Global_105216, 262144))
					{
						func_86(&Global_105216, 262144);
						func_13();
					}
					if (func_83(uLocal_66, 2097152))
					{
						if (!func_69(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_76(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_9(&iLocal_79) * 1000f)), iLocal_71, 0);
						func_8(&iLocal_79);
						func_86(&uLocal_66, 256);
						func_7();
						if (bVar0)
						{
							func_86(&uLocal_66, 2);
						}
						else if (func_83(uLocal_66, 2))
						{
							if (func_83(Global_105216, 0))
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_86(&uLocal_66, 2);
							}
							else
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_86(&uLocal_66, 2);
							}
						}
						func_76(0);
						if (iLocal_71 != -1)
						{
							if (func_83(Global_105216, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_71), 0, Global_93719, 0);
								func_5(func_17(iLocal_71), 0, Global_93719, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_71), 0, Global_93719, 0);
								func_5(func_17(iLocal_71), 0, Global_93719, 0, 0);
							}
						}
						func_4();
						func_86(&Global_105216, 0);
						if (func_83(uLocal_66, 16777216))
						{
							func_88(1);
						}
						if (iLocal_71 != -1)
						{
							if (Global_106565.f_9079)
							{
								if (!func_80(0, iLocal_71))
								{
									func_88(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_76(0);
					break;
				
				case 10:
					func_88(1);
					break;
				
				case 9:
					if (fLocal_82 > (fLocal_74 * fLocal_74))
					{
						if (iLocal_77 != 263)
						{
							func_77(iLocal_77, 1, 0);
							iLocal_77 = 263;
						}
						func_76(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_77 != 263)
					{
						func_77(iLocal_77, 0, 0);
					}
					if (iLocal_68 != -1)
					{
						func_40(&iLocal_68);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_73))
					{
						if (func_1(sLocal_73))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_76(4);
					break;
				
				case 4:
					if ((iLocal_76 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_78 == 2)
							{
								if (iLocal_78 == 2)
								{
									if (func_81(iLocal_72) && func_80(0, iLocal_71))
									{
										func_84();
										if (iLocal_77 != 263)
										{
											func_77(iLocal_77, 1, 0);
										}
										func_76(0);
									}
								}
							}
							else if (iLocal_78 == 0)
							{
								if (fLocal_82 > (fLocal_74 * fLocal_74))
								{
									if (iLocal_77 != 263)
									{
										func_77(iLocal_77, 1, 0);
										iLocal_77 = 263;
									}
									func_76(10);
								}
							}
							else if (iLocal_78 == 1)
							{
								if (fLocal_82 > ((80f + 5f) * (80f + 5f)))
								{
									func_84();
									if (iLocal_77 != 263)
									{
										func_77(iLocal_77, 1, 0);
									}
									func_76(0);
								}
							}
						}
						else
						{
							func_77(iLocal_77, 1, 0);
						}
					}
					else
					{
						iLocal_76++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_90782))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_90782, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_87889);
	StringCopy(&Global_90782, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36387)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

void func_7()
{
	vector3 vVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

void func_8(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)
{
	if (func_12(iParam0))
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

bool func_11(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_90782))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_90782, 0, 0, 0, 1, 0);
		StringCopy(&Global_90782, "", 64);
	}
	StringCopy(&Global_90782, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_19(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int iParam0)
{
	func_21(iParam0, 0f);
}

void func_21(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_88.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_88))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_88);
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
{
	if (Global_3228[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_2423, 25);
	MISC::SET_BIT(&Global_2424, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *iParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_81(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (iLocal_87 == 1)
	{
		if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), true);
		}
	}
}

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_49(0))
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

int func_39(int iParam0)
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

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_39(*iParam0);
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

void func_41(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
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

int func_42(var uParam0)
{
	return 1;
}

bool func_43(int iParam0)
{
	func_44();
	return iParam0 == Global_106565.f_2357.f_539.f_4321;
}

void func_44()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_71(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_45(Global_106565.f_2357.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48()
{
	return Global_68807;
}

int func_49(int iParam0)
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

bool func_50(int iParam0, int iParam1)
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

bool func_51()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_52()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_53(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_56()
{
	return 1;
}

bool func_57()
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_66();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_65()) || Global_105612) || Global_25767) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_61()) || func_52()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_65()) || Global_25767) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_65()) || Global_105612) || Global_25767) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_65()) || Global_105612) || Global_25767) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_52()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_65() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_50(8, -1)) || func_52()) || func_60()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_63()) || func_62()) || func_60()) || func_59())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_65()) || Global_25767) || func_64()) || func_50(8, -1)) || func_62()) || func_61()) || func_52()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_65()) || func_62()) || Global_105612) || Global_25767) || func_64()) || Global_37584) || func_50(8, -1)) || func_61()) || func_60()) || func_52()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_65()) || Global_105612) || Global_25767) || func_64()) || func_50(8, -1)) || func_61()) || func_60()) || func_63()) || func_62()) || func_52())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_59()
{
	return Global_93721.f_1;
}

int func_60()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_61()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_62()
{
	return Global_93734.f_340 > 0;
}

bool func_63()
{
	return Global_93734.f_339 > 0;
}

var func_64()
{
	return Global_1312867;
}

int func_65()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

var func_66()
{
	func_44();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_67()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_68()
{
	return Global_89544;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_71(6) || func_71(7))
			{
				return 1;
			}
			else
			{
				return func_69(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_81(5))
			{
				if (func_58(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_26140[iVar0 /*23*/].f_19);
}

bool func_71(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_72()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_88))
	{
		Local_88 = OBJECT::CREATE_OBJECT(Local_88.f_1, Local_88.f_2, true, true, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_88, Local_88.f_2, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_88, Local_88.f_5, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_88, true);
	}
}

bool func_73()
{
	if (!STREAMING::IS_MODEL_VALID(Local_88.f_1))
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(Local_88.f_1);
}

void func_74()
{
	if (!STREAMING::IS_MODEL_VALID(Local_88.f_1))
	{
		return;
	}
	STREAMING::REQUEST_MODEL(Local_88.f_1);
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_76(int iParam0)
{
	iLocal_67 = iParam0;
}

void func_77(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = MISC::IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 18);
		if (Global_26137 == 1)
		{
			Global_26138 = 1;
		}
		Global_26137 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_26140[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_26140[iVar0 /*23*/].f_11), 15);
	}
	if (!MISC::IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_26140[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_26140[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_78()
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

int func_79()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = MISC::IS_BIT_SET(Global_106565.f_9079.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_36425);
}

int func_82(int iParam0, int iParam1)
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

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_84()
{
	StringCopy(&Local_51, "Yoga", 64);
	sLocal_73 = "PLAY_YOGA";
	iLocal_71 = 18;
	fLocal_85 = 2.5f;
	fLocal_74 = 20f;
	iLocal_69 = 28000;
	iLocal_87 = func_85();
	if (iLocal_87 == 0)
	{
		iLocal_77 = 110;
		Local_88.f_2 = { -791.0036f, 186.3552f, 71.8295f };
		Local_88.f_5 = { 0f, 0f, -87.1403f };
		Local_88.f_1 = joaat("prop_yoga_mat_03");
	}
	else if (iLocal_87 == 1)
	{
		iLocal_77 = 111;
		Local_88.f_2 = { 2861.47f, 5945.9f, 357.06f };
		Local_88.f_5 = { 0f, -0.5f, 70f };
		Local_88.f_1 = joaat("prop_yoga_mat_03");
	}
	iLocal_86 = 0;
}

int func_85()
{
	vector3 vVar0;
	vector3 vVar1[2];
	float fVar2[2];
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true) };
		vVar1[0 /*3*/] = { -790.906f, 186.293f, 71.835f };
		vVar1[1 /*3*/] = { 2862.15f, 5945.49f, 357.11f };
		fVar2[0] = SYSTEM::VDIST2(vVar0, vVar1[0 /*3*/]);
		fVar2[1] = SYSTEM::VDIST2(vVar0, vVar1[1 /*3*/]);
		if (fVar2[0] < fVar2[1])
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

void func_86(var uParam0, int iParam1)
{
	func_87(uParam0, iParam1);
}

void func_87(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_77 != 263)
		{
			func_77(iLocal_77, 0, 0);
		}
	}
	func_40(&iLocal_68);
	if (func_83(uLocal_66, 2))
	{
		func_4();
		func_86(&uLocal_66, 2);
		func_6(&iLocal_70);
	}
	iLocal_70 = -1;
	func_89();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_89()
{
	func_86(&uLocal_66, 4);
	func_90();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&cLocal_52))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_52) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_52);
		}
	}
}

void func_90()
{
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), false);
	}
}

