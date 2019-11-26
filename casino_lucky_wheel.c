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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	struct<2> Local_97 = { 0, 0 } ;
	struct<5> Local_98[32];
	struct<406> Local_99 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<92> Local_100 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_825();
	}
	else
	{
		func_822();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_810())
		{
			func_822();
		}
		func_10();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	if (func_9())
	{
		func_3();
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (Local_97 == func_8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_7(iVar1))
			{
				if (func_6(iVar1, 1, 1))
				{
					if (func_5(iVar1))
					{
						Local_97 = iVar1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_4())
	{
		Local_97 = func_8();
	}
}

int func_4()
{
	if (Local_97 == func_8())
	{
		return 1;
	}
	if (!func_5(Local_97))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_97))
	{
		return 1;
	}
	if (!func_6(Local_97, 1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 10);
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	if (iParam0 != func_8())
	{
		return NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0);
	}
	return 0;
}

int func_8()
{
	return -1;
}

bool func_9()
{
	return (MISC::GET_FRAME_COUNT() % 3) == 0;
}

void func_10()
{
	func_808();
	func_48();
	func_45();
	func_40();
	func_38();
	func_36();
	func_30();
	func_28(0);
	func_27();
	func_22();
	func_16();
	func_11();
}

void func_11()
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (STREAMING::IS_MODEL_VALID(Global_262145.f_25746))
		{
			if (func_15(8416, -1, 0) != Global_262145.f_25746)
			{
				MISC::SET_BIT(&Global_1589682, 17);
				func_12(8416, Global_262145.f_25746, -1, 1, 0);
			}
		}
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312745;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_13(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	if (Local_99.f_45 == 0)
	{
		if (MISC::IS_BIT_SET(Local_99.f_1, 4))
		{
			iVar0 = func_19(26806, -1, -1);
			if (iVar0 < 4)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_18("CAS_LW_VOUCH", -1);
					iVar0++;
					func_17(26806, iVar0, -1, 1);
					MISC::CLEAR_BIT(&(Local_99.f_1), 4);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_99.f_1), 4);
			}
		}
	}
}

var func_17(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_18(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	iVar1 = func_21(iParam0, iParam1);
	iVar2 = func_20(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

void func_22()
{
	if (MISC::IS_BIT_SET(Local_99.f_1, 2))
	{
		if (!func_26(&(Local_99.f_43)))
		{
			func_25(&(Local_99.f_43), 0, 0);
		}
		else if (func_24(&(Local_99.f_43), 40000, 0) || (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()))
		{
			MISC::CLEAR_BIT(&(Local_99.f_1), 2);
			func_23(&(Local_99.f_43));
		}
	}
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_24(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_25(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_25(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_26(var uParam0)
{
	return uParam0->f_1;
}

void func_27()
{
	if (Global_1371947.f_1149 >= 30000)
	{
		if (Local_97 != PLAYER::PLAYER_ID())
		{
			func_28(1);
		}
	}
}

void func_28(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (Local_97 != func_8() || iParam0 == 1)
	{
		if (Local_97 != PLAYER::PLAYER_ID() || iParam0 == 1)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1109.16f, 228.4484f, -50.63083f, 1112.186f, 228.9841f, -48.13083f, 2.75f, 0, true, 0))
			{
				if (!MISC::IS_BIT_SET(Local_99.f_1, 1))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_29(iVar1, &vVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 1f, -1, 1048576000, 0, 1193033728);
					MISC::SET_BIT(&(Local_99.f_1), 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0)
			{
				if (MISC::IS_BIT_SET(Local_99.f_1, 1))
				{
					MISC::CLEAR_BIT(&(Local_99.f_1), 1);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0)
		{
			if (MISC::IS_BIT_SET(Local_99.f_1, 1))
			{
				MISC::CLEAR_BIT(&(Local_99.f_1), 1);
			}
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0)
	{
		if (MISC::IS_BIT_SET(Local_99.f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_99.f_1), 1);
		}
	}
}

void func_29(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1114.812f, 226.8861f, -50.8408f };
			break;
		
		case 1:
			*uParam1 = { 1115.391f, 222.8374f, -50.4301f };
			break;
		
		case 2:
			*uParam1 = { 1111.762f, 223.4791f, -50.8408f };
			break;
		
		case 3:
			*uParam1 = { 1110.287f, 222.9306f, -50.8408f };
			break;
		
		case 4:
			*uParam1 = { 1108.957f, 223.4897f, -50.8408f };
			break;
		
		case 5:
			*uParam1 = { 1106.042f, 226.8098f, -50.8408f };
			break;
	}
}

void func_30()
{
	if (func_35(24))
	{
		Local_99.f_23 = func_33();
		STREAMING::REQUEST_ANIM_DICT(Local_99.f_23);
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_99.f_23))
		{
			Local_99.f_10 = Local_97.f_1;
			func_32(14);
			func_31(24);
		}
	}
}

void func_31(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_99, iParam0))
	{
		MISC::CLEAR_BIT(&Local_99, iParam0);
	}
}

void func_32(int iParam0)
{
	Local_99.f_45 = iParam0;
}

char* func_33()
{
	char* sVar0;
	
	if (func_34(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@FEMALE";
	}
	else
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@MALE";
	}
	return sVar0;
}

int func_34(int iParam0)
{
	if (((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Weed_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Forgery_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Cocaine_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Counterfeit_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_f_y_sweatshop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_bevhills_04")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_genhot_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_scdressy_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ig_tracydisanto"))
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0)
{
	return MISC::IS_BIT_SET(Local_99, iParam0);
}

void func_36()
{
	if (func_35(0))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SET_FRONTEND_ACTIVE(0);
		func_37();
	}
}

void func_37()
{
	Global_17272.f_6 = 1;
}

void func_38()
{
	if (func_39())
	{
		CAM::_0x79C0E43EB9B944E2(5891389);
	}
}

int func_39()
{
	if (Local_99.f_45 >= 5 && Local_99.f_45 <= 12)
	{
		return 1;
	}
	if (Local_99.f_45 == 13)
	{
		return 1;
	}
	if (Local_99.f_45 == 4)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_40()
{
	if (Local_99.f_17 < 6 && Local_99.f_17 != -1)
	{
		if (!func_26(&(Local_99.f_35)))
		{
			func_44();
			func_43();
			func_25(&(Local_99.f_35), 0, 0);
		}
		else if (func_24(&(Local_99.f_35), 250, 0) && !func_26(&(Local_99.f_37)))
		{
			func_42();
			if (Local_99.f_17 != 5)
			{
				func_41();
			}
			func_25(&(Local_99.f_37), 0, 0);
			Local_99.f_17++;
		}
		else if (func_26(&(Local_99.f_37)))
		{
			if (func_24(&(Local_99.f_37), 250, 0))
			{
				func_23(&(Local_99.f_37));
				func_23(&(Local_99.f_35));
			}
		}
	}
	else if (Local_99.f_17 == 6)
	{
		Local_99.f_17 = -1;
	}
}

void func_41()
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), 0);
}

void func_42()
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), 0);
}

void func_43()
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), false);
}

void func_44()
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), false);
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 171:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				if (iVar2 == 2032669874)
				{
					if (Global_1386431.f_740)
					{
						return;
					}
					func_46(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_46(int iParam0)
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_97.f_1 = Var0.f_2;
		}
		if (PLAYER::PLAYER_ID() != Var0.f_1 && Var0.f_3)
		{
			func_47(24);
		}
	}
}

void func_47(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_99, iParam0))
	{
		MISC::SET_BIT(&Local_99, iParam0);
	}
}

void func_48()
{
	switch (Local_99.f_45)
	{
		case 0:
			func_807();
			if (Local_99.f_17 == -1)
			{
				if (!func_35(23))
				{
					func_42();
					func_47(23);
				}
			}
			if (!func_806())
			{
				if (!func_35(0) && !func_791())
				{
					func_790();
					if (func_787())
					{
						func_786(PLAYER::PLAYER_ID(), 1);
						func_785();
						func_772();
						func_47(0);
						func_32(1);
					}
				}
				else
				{
					func_768();
				}
			}
			if (!MISC::IS_BIT_SET(Local_99.f_1, 0) && ENTITY::DOES_ENTITY_EXIST(Local_99.f_72))
			{
				if (Local_97.f_1 != Local_99.f_14 && Local_97 == func_8())
				{
					ENTITY::SET_ENTITY_ROTATION(Local_99.f_72, 0f, -func_767(Local_97.f_1), 0f, 2, 1);
					Local_99.f_14 = Local_97.f_1;
					MISC::SET_BIT(&(Local_99.f_1), 0);
				}
				else if (Local_97 == PLAYER::PLAYER_ID())
				{
					MISC::SET_BIT(&(Local_99.f_1), 0);
				}
			}
			break;
		
		case 1:
			if (Local_97 == PLAYER::PLAYER_ID())
			{
				func_766(PLAYER::PLAYER_ID(), 1);
				func_765(0);
				if (!MISC::IS_BIT_SET(Local_99.f_1, 3))
				{
					func_25(&(Local_99.f_41), 0, 0);
					func_32(2);
				}
				else
				{
					func_32(3);
				}
			}
			else if (func_24(&(Local_99.f_29), 1500, 0))
			{
				func_32(17);
			}
			break;
		
		case 2:
			func_755();
			break;
		
		case 3:
			func_747();
			if (func_35(8))
			{
				func_32(4);
			}
			break;
		
		case 4:
			func_747();
			if (func_35(9))
			{
				func_32(5);
			}
			break;
		
		case 5:
			func_746();
			break;
		
		case 7:
			func_745();
			break;
		
		case 6:
			func_740();
			break;
		
		case 8:
			func_739();
			func_726();
			if (func_35(5))
			{
				Local_99.f_10 = Local_97.f_1;
				if (!func_725(PLAYER::PLAYER_ID()))
				{
					func_724(Local_99.f_10, 1);
					func_723(1);
				}
				func_25(&(Local_99.f_33), 0, 0);
				func_32(13);
				if (func_722("LUCK_WHEEL_SPIN") || func_722("LUCK_W_SPIN_PC"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			break;
		
		case 13:
			if (func_26(&(Local_99.f_33)))
			{
				if (func_24(&(Local_99.f_33), 190, 0))
				{
					func_710(func_720(func_721(PLAYER::PLAYER_ID())), 0, 0, 1, 0);
					func_23(&(Local_99.f_33));
					func_709(173);
					Local_99.f_384 = 1f;
					func_32(9);
				}
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(Local_99.f_72) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_99.f_72))
			{
				func_707();
			}
			func_706(Local_99.f_384);
			func_705(Local_99.f_384);
			if (func_702(func_720(func_721(PLAYER::PLAYER_ID())), 0, 0))
			{
				func_710(func_701(func_721(PLAYER::PLAYER_ID())), 0, 1, 1, 0);
			}
			if (func_700(0))
			{
				func_47(14);
			}
			if ((func_35(14) && ENTITY::DOES_ENTITY_EXIST(Local_99.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_99.f_72))
			{
				func_682(0);
			}
			break;
		
		case 10:
			if (Local_99.f_387 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(Local_99.f_387);
				Local_99.f_387 = -1;
			}
			func_31(14);
			if (func_702(func_681(), 0, 1))
			{
				if (func_680())
				{
					func_678();
				}
				func_31(17);
				func_32(11);
			}
			break;
		
		case 11:
			if (func_135())
			{
				func_47(21);
				func_123();
				func_114();
				Local_99.f_390 = NETWORK::GET_CLOUD_TIME_AS_INT();
				func_32(16);
			}
			break;
		
		case 12:
			if (func_35(10))
			{
				if (func_702(14, 0, 1))
				{
					if (func_680())
					{
						func_678();
					}
					func_31(10);
					func_32(17);
				}
			}
			else
			{
				func_32(17);
			}
			break;
		
		case 14:
			func_107();
			break;
		
		case 15:
			func_106();
			break;
		
		case 16:
			func_91();
			break;
		
		case 17:
			func_49();
			break;
	}
}

void func_49()
{
	struct<293> Var0;
	
	if (func_722("LUCK_WHEEL_SPIN") || func_722("LUCK_W_SPIN_PC"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (PLAYER::PLAYER_ID() == Local_97)
	{
		func_83();
		func_70(PLAYER::PLAYER_ID(), 1, 0);
		HUD::_0x15CFA549788D35EF();
		if (Local_99.f_74.f_284 != 0)
		{
			if (Local_99.f_74.f_284 == 1)
			{
				func_63(func_68());
			}
			Local_99.f_74.f_284 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_99.f_73) && Local_99.f_73 != Global_1689921)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_99.f_73));
		}
		else
		{
			Local_99.f_73 = -1;
		}
		if (func_62())
		{
			func_61();
		}
		HUD::DISPLAY_RADAR(true);
	}
	func_60(1);
	func_57(1, -1);
	func_766(PLAYER::PLAYER_ID(), 0);
	if (func_35(0))
	{
		func_70(PLAYER::PLAYER_ID(), 1, 0);
	}
	StringCopy(&(Local_99.f_367), "", 64);
	Local_99.f_383 = 0;
	Local_99.f_384 = 0f;
	Local_99.f_47 = -1;
	Var0.f_1 = 271;
	Local_99.f_74 = { Var0 };
	func_32(0);
	func_53();
	func_52();
	func_723(0);
	func_23(&(Local_99.f_33));
	func_23(&(Local_99.f_29));
	func_23(&(Local_99.f_41));
	func_51(-1);
	func_50(0);
}

void func_50(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_99.f_391, iParam0))
	{
		MISC::CLEAR_BIT(&(Local_99.f_391), iParam0);
	}
}

void func_51(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		Local_98[PLAYER::PLAYER_ID() /*5*/].f_4 = iParam0;
	}
}

void func_52()
{
	func_786(PLAYER::PLAYER_ID(), 0);
}

void func_53()
{
	Local_99 = 0;
	func_56(5000);
	Local_99.f_2 = 0;
	Local_99.f_3 = 0;
	Local_99.f_4 = 0;
	Local_99.f_5 = 0;
	Local_99.f_6 = 0;
	Local_99.f_8 = 0;
	Local_99.f_9 = 0;
	func_55(-1);
	Local_99.f_11 = -1;
	Local_99.f_12 = 0;
	Local_99.f_13 = 0;
	Local_99.f_15 = 0;
	Local_99.f_18 = 0f;
	Local_99.f_19 = 0f;
	Local_99.f_16 = 0;
	Local_99.f_20 = 0f;
	Local_99.f_21 = 0f;
	func_51(-1);
	Local_99.f_46 = 1;
	func_54(-1);
	func_23(&(Local_99.f_27));
	func_23(&(Local_99.f_29));
	func_23(&(Local_99.f_31));
	func_23(&(Local_99.f_39));
}

void func_54(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_98[PLAYER::PLAYER_ID() /*5*/] != iParam0)
		{
			Local_98[PLAYER::PLAYER_ID() /*5*/] = iParam0;
		}
	}
}

void func_55(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_98[PLAYER::PLAYER_ID() /*5*/].f_2 != iParam0)
		{
			Local_98[PLAYER::PLAYER_ID() /*5*/].f_2 = iParam0;
		}
	}
}

void func_56(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_98[PLAYER::PLAYER_ID() /*5*/].f_3 != iParam0)
		{
			Local_98[PLAYER::PLAYER_ID() /*5*/].f_3 = iParam0;
		}
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
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
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

void func_60(bool bParam0)
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_99.f_386))
	{
		AUDIO::STOP_SOUND(Local_99.f_386);
		AUDIO::RELEASE_SOUND_ID(Local_99.f_386);
		Local_99.f_386 = -1;
	}
	if (!bParam0)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_99.f_388))
		{
			AUDIO::STOP_SOUND(Local_99.f_388);
			AUDIO::RELEASE_SOUND_ID(Local_99.f_388);
			Local_99.f_388 = -1;
		}
		if (!AUDIO::HAS_SOUND_FINISHED(Local_99.f_389))
		{
			AUDIO::STOP_SOUND(Local_99.f_389);
			AUDIO::RELEASE_SOUND_ID(Local_99.f_389);
			Local_99.f_389 = -1;
		}
	}
}

void func_61()
{
	Global_2437364.f_1155.f_10 = 0;
}

bool func_62()
{
	return Global_2437364.f_1155.f_10;
}

void func_63(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_67())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_66(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_64(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_64(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_65(&(uParam0->f_13));
	func_65(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_65(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_66(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

int func_67()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_68()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_69(iVar0) != 2147483647)
		{
			if (func_66(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_69(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65;
	}
	return -1;
}

void func_70(int iParam0, bool bParam1, int iParam2)
{
	if (func_82(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		func_71(iParam0, bParam1, iParam2, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, !bParam1);
	}
}

void func_71(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_81())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_79())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_77(PLAYER::PLAYER_ID(), 0) && !func_76()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_75(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, true);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_74();
					func_73();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_75(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, true);
						}
					}
					if (func_72(Global_4456448.f_161209))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_72(int iParam0)
{
	return iParam0 == 17;
}

void func_73()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_74()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_76()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_77(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_78(-1, 0) == 8;
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

int func_78(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_79()
{
	if (func_80() == 0)
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	return Global_1312467.f_18;
}

int func_81()
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_83()
{
	func_84(0);
}

void func_84(bool bParam0)
{
	if (bParam0)
	{
		func_90();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_89(0))
		{
			func_85(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_85(int iParam0)
{
	if (func_88())
	{
		return;
	}
	if (Global_14725)
	{
		func_87(0, 0);
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
	if (!func_86())
	{
		Global_14553.f_1 = 3;
	}
}

int func_86()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_87(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
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

bool func_88()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

int func_89(int iParam0)
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

void func_90()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_91()
{
	if (func_67())
	{
		if (func_94(&(Local_99.f_405), 147735386, (Local_99.f_390 + 86400)))
		{
			if (Local_99.f_405 == 2)
			{
				func_92(0);
				func_32(17);
			}
			Local_99.f_405 = 0;
		}
	}
	else
	{
		func_92(0);
		func_32(17);
	}
}

void func_92(bool bParam0)
{
	func_93(joaat("MPPLY_LUCKY_WHEEL_USAGE"), (Local_99.f_390 + 86400));
	if (!bParam0)
	{
		func_12(8349, (Local_99.f_390 + 86400), -1, 1, 0);
	}
	Global_2458546 = 1;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

bool func_94(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_68() != -1)
		{
			return 0;
		}
		if (func_102(78225582, 1888666031, iParam1, 1668906031, iParam2, 0, iParam2, 1, 0, 3))
		{
			if (func_97())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else
		{
			*uParam0 = 3;
		}
	}
	else if (*uParam0 == 1)
	{
		if (func_96(func_68()))
		{
			if (func_95(func_68()) == 2)
			{
				*uParam0 = 2;
			}
			else
			{
				*uParam0 = 3;
			}
			func_63(func_68());
		}
	}
	return *uParam0 != 1;
}

int func_95(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

int func_97()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_67())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_68();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_14()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_101(Global_4263509[iVar2 /*84*/].f_65.f_6, Global_4263509[iVar2 /*84*/].f_65.f_4, Global_4263509[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4264085 = 1;
			}
			return 0;
		}
		if (Global_2459772)
		{
			if (Global_4263509[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4263509[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_69(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4263509[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4263509[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar2 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263509[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4263509[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4263509[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_98(Global_4263509[iVar2 /*84*/], iVar2);
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	return 0;
}

void func_98(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_100(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_99();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_99()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_100(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1727256317:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_67())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_14()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_68();
	if (iVar1 == -1)
	{
		if (!func_104(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_103(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263509[iVar1 /*84*/].f_65.f_1 = Var2.f_2;
		Global_4263509[iVar1 /*84*/].f_65.f_15 = Var2;
		Global_4263509[iVar1 /*84*/].f_65.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_67())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_14()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263509[iVar1 /*84*/].f_65.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263509[iVar1 /*84*/].f_65.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_105(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_67())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_98(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_106()
{
	if (func_700(1))
	{
		func_47(14);
	}
	if ((func_35(14) && ENTITY::DOES_ENTITY_EXIST(Local_99.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_99.f_72))
	{
		func_682(1);
	}
}

void func_107()
{
	if (func_725(Local_97))
	{
		func_54(func_113(Local_97));
		func_56(func_112(Local_97));
		Local_99.f_15 = func_111();
		Local_99.f_8 = func_110();
		func_108();
		func_32(15);
	}
}

void func_108()
{
	char* sVar0;
	
	sVar0 = func_109(func_721(Local_97));
	ENTITY::SET_ENTITY_ROTATION(Local_99.f_72, 0f, 0f, 0f, 2, 1);
	ENTITY::PLAY_ENTITY_ANIM(Local_99.f_72, sVar0, Local_99.f_23, 1000f, false, 1, 0, 0f, 2);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_99.f_72);
}

char* func_109(int iParam0)
{
	char* sVar0;
	
	sVar0 = "null";
	switch (iParam0)
	{
		case 0:
			if (func_34(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_99.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_99.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20";
						break;
					}
			}
			break;
		
		case 1:
			if (func_34(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_99.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_20_wheel";
						break;
					
					case 1:
						return "spinningwheel_med_effort_01_wheel";
						break;
					
					case 2:
						return "spinningwheel_med_effort_02_wheel";
						break;
					
					case 3:
						return "spinningwheel_med_effort_03_wheel";
						break;
					
					case 4:
						return "spinningwheel_med_effort_04_wheel";
						break;
					
					case 5:
						return "spinningwheel_med_effort_05_wheel";
						break;
					
					case 6:
						return "spinningwheel_med_effort_06_wheel";
						break;
					
					case 7:
						return "spinningwheel_med_effort_07_wheel";
						break;
					
					case 8:
						return "spinningwheel_med_effort_08_wheel";
						break;
					
					case 9:
						return "spinningwheel_med_effort_09_wheel";
						break;
					
					case 10:
						return "spinningwheel_med_effort_10_wheel";
						break;
					
					case 11:
						return "spinningwheel_med_effort_11_wheel";
						break;
					
					case 12:
						return "spinningwheel_med_effort_12_wheel";
						break;
					
					case 13:
						return "spinningwheel_med_effort_13_wheel";
						break;
					
					case 14:
						return "spinningwheel_med_effort_14_wheel";
						break;
					
					case 15:
						return "spinningwheel_med_effort_15_wheel";
						break;
					
					case 16:
						return "spinningwheel_med_effort_16_wheel";
						break;
					
					case 17:
						return "spinningwheel_med_effort_17_wheel";
						break;
					
					case 18:
						return "spinningwheel_med_effort_18_wheel";
						break;
					
					case 19:
						return "spinningwheel_med_effort_19_wheel";
						break;
				}
			}
			else
			{
				switch (Local_99.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_01";
						break;
					
					case 1:
						return "spinningwheel_med_effort_02";
						break;
					
					case 2:
						return "spinningwheel_med_effort_03";
						break;
					
					case 3:
						return "spinningwheel_med_effort_04";
						break;
					
					case 4:
						return "spinningwheel_med_effort_05";
						break;
					
					case 5:
						return "spinningwheel_med_effort_06";
						break;
					
					case 6:
						return "spinningwheel_med_effort_07";
						break;
					
					case 7:
						return "spinningwheel_med_effort_08";
						break;
					
					case 8:
						return "spinningwheel_med_effort_09";
						break;
					
					case 9:
						return "spinningwheel_med_effort_10";
						break;
					
					case 10:
						return "spinningwheel_med_effort_11";
						break;
					
					case 11:
						return "spinningwheel_med_effort_12";
						break;
					
					case 12:
						return "spinningwheel_med_effort_13";
						break;
					
					case 13:
						return "spinningwheel_med_effort_14";
						break;
					
					case 14:
						return "spinningwheel_med_effort_15";
						break;
					
					case 15:
						return "spinningwheel_med_effort_16";
						break;
					
					case 16:
						return "spinningwheel_med_effort_17";
						break;
					
					case 17:
						return "spinningwheel_med_effort_18";
						break;
					
					case 18:
						return "spinningwheel_med_effort_19";
						break;
					
					case 19:
						return "spinningwheel_med_effort_20";
						break;
					}
			}
			break;
		
		case 2:
			if (func_34(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_99.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_99.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20";
						break;
					}
			}
			break;
	}
	return sVar0;
}

int func_110()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_112(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 4;
	}
	else if (func_112(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_111()
{
	int iVar0;
	
	iVar0 = 535;
	if (func_112(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 110;
	}
	else if (func_112(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 353;
	}
	return iVar0;
}

int func_112(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_98[iParam0 /*5*/].f_3;
}

int func_113(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_98[iParam0 /*5*/];
}

void func_114()
{
	int iVar0;
	char* sVar1;
	
	if (!Global_262145.f_25801)
	{
		return;
	}
	if (func_122())
	{
		return;
	}
	Local_99.f_48 = MISC::GET_HASH_KEY("LUCKYWHEEL");
	Local_99.f_48.f_1 = MISC::GET_HASH_KEY("STANDARD");
	Local_99.f_48.f_4 = MISC::GET_HASH_KEY("WIN");
	Local_99.f_48.f_11 = func_121(PLAYER::PLAYER_ID());
	Local_99.f_48.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	Local_99.f_48.f_19 = NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	iVar0 = func_120();
	sVar1 = func_119(iVar0);
	Local_99.f_48.f_21 = MISC::GET_HASH_KEY(sVar1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_117()))
	{
		Local_99.f_48.f_22 = 0;
	}
	else
	{
		Local_99.f_48.f_22 = MISC::GET_HASH_KEY(func_117());
	}
	switch (func_113(PLAYER::PLAYER_ID()))
	{
		case 3:
			Local_99.f_48.f_6 = 10000;
			break;
		
		case 7:
			Local_99.f_48.f_6 = 15000;
			break;
		
		case 10:
			Local_99.f_48.f_6 = 20000;
			break;
		
		case 15:
			Local_99.f_48.f_6 = 25000;
			break;
		
		case 11:
			switch (Local_99.f_47)
			{
				case 2:
					Local_99.f_48.f_6 = Local_99.f_383;
					break;
			}
			break;
	}
	Local_99.f_48.f_7 = func_116();
	Local_99.f_48.f_23 = func_115();
	Local_99.f_48.f_15 = 1;
	if (func_121(PLAYER::PLAYER_ID()))
	{
		Local_99.f_48.f_20 = MISC::GET_HASH_KEY("VIP membership");
	}
	else
	{
		Local_99.f_48.f_20 = MISC::GET_HASH_KEY("paid membership");
	}
	Local_99.f_48.f_10 = 1;
	STATS::_PLAYSTATS_CASINO_LUCKYSEVEN(&(Local_99.f_48));
}

int func_115()
{
	int iVar0;
	
	iVar0 = func_113(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 2500;
		
		case 2:
			return 20000;
		
		case 3:
			return 10000;
		
		case 5:
			return 5000;
		
		case 7:
			return 15000;
		
		case 9:
			return 7500;
		
		case 6:
			return 30000;
		
		case 10:
			return 20000;
		
		case 13:
			return 10000;
		
		case 14:
			return 40000;
		
		case 17:
			return 15000;
		
		case 19:
			return 50000;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_99.f_47)
			{
				case 2:
				case 4:
				case 3:
					return Local_99.f_383;
					break;
			}
			break;
	}
	return 0;
}

int func_116()
{
	return func_15(8248, -1, 0);
}

char* func_117()
{
	int iVar0;
	
	iVar0 = func_113(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 18:
			return func_118(&(Local_99.f_367));
			break;
		
		case 11:
			switch (Local_99.f_47)
			{
				case 0:
				case 6:
				case 1:
				case 5:
					return func_118(&(Local_99.f_367));
					break;
			}
			break;
	}
	return "";
}

char* func_118(char* sParam0)
{
	return sParam0;
}

char* func_119(int iParam0)
{
	if (iParam0 == 5)
	{
		switch (Local_99.f_47)
		{
			case 0:
				return "MYSTREYCLOTHING";
			
			case 1:
				return "MYSTREYVEHICLE";
			
			case 2:
				return "MYSTREYCHIPS";
			
			case 3:
				return "MYSTREYCASH";
			
			case 4:
				return "MYSTREYRP";
			
			case 5:
				return "MYSTREYINVENTORY";
			
			case 6:
				return "MYSTREYBUSINESS";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "CLOTHING";
			
			case 1:
				return "RP";
			
			case 2:
				return "CASH";
			
			case 3:
				return "HOUSECHIPS";
			
			case 4:
				return "DISCOUNTVOUCHER";
			
			case 6:
				return "PODIUMVEHICLE";
			}
		
		default:
	}
	return "";
}

int func_120()
{
	int iVar0;
	
	iVar0 = func_113(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 0:
			return 0;
		
		case 5:
			return 1;
		
		case 7:
			return 3;
		
		case 11:
			return 5;
		
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 6:
			return 2;
		
		case 10:
			return 3;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 18:
			return 6;
		
		case 14:
			return 2;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 19:
			return 2;
		
		case 15:
			return 3;
		
		case 4:
			return 4;
		
		default:
	}
	return -1;
}

int func_121(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_122()
{
	if (MISC::ARE_STRINGS_EQUAL(&(Local_99.f_367), "INVALID"))
	{
		if (func_113(PLAYER::PLAYER_ID()) == 11 && Local_99.f_47 == 1)
		{
			return 1;
		}
		if (func_113(PLAYER::PLAYER_ID()) == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_123()
{
	if (func_134() || (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_99.f_367)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_99.f_367))))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_99.f_367)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_99.f_367)))
		{
			func_133("CAS_LW_RP", 20000, -1);
			MISC::SET_BIT(&(Local_99.f_1), 2);
		}
		else
		{
			func_133(func_132(), func_131(), -1);
			MISC::SET_BIT(&(Local_99.f_1), 2);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_99.f_367)))
	{
		if (!MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_99.f_367)))
		{
			func_18(func_132(), -1);
			MISC::SET_BIT(&(Local_99.f_1), 2);
		}
	}
	else
	{
		func_18(func_132(), -1);
		MISC::SET_BIT(&(Local_99.f_1), 2);
	}
	if (Local_99.f_14 == 4)
	{
		if (!MISC::IS_BIT_SET(Local_99.f_1, 4))
		{
			MISC::SET_BIT(&(Local_99.f_1), 4);
		}
	}
	if (func_130())
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_99.f_367)) && !MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_99.f_367))) && !MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_99.f_367)))
		{
			HUD::_0x15CFA549788D35EF();
			if (func_129())
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("TWOSTRINGS");
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_99.f_367));
			}
			if (func_129())
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_126(Local_99.f_74.f_292, 1));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Local_99.f_367));
			}
			if (Local_99.f_14 == 11 && func_134())
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Local_99.f_383);
			}
			HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(func_125(), func_124(), &(Local_99.f_367), 1);
		}
	}
}

int func_124()
{
	switch (Local_99.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return 7;
			break;
		
		case 4:
			return 18;
			break;
		
		case 11:
			return 19;
			break;
		
		case 18:
			return 5;
			break;
	}
	return -1;
}

char* func_125()
{
	switch (Local_99.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_RCLO";
			break;
		
		case 4:
			return "CAS_LW_RDISC";
			break;
		
		case 11:
			return "CAS_LW_RMYST";
			break;
		
		case 18:
			return "CAS_LW_RVEHI";
			break;
	}
	return "";
}

char* func_126(int iParam0, bool bParam1)
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
	{
		return func_128(iParam0, bParam1);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		return func_127(iParam0, bParam1);
	}
	switch (iParam0)
	{
		case joaat("khamelion"):
			return "HIJAK";
			break;
		
		case joaat("ISSI2"):
		case joaat("issi7"):
			return "WEENY";
			break;
		
		case joaat("ELEGY2"):
		case joaat("hellion"):
			return "ANNIS";
			break;
		
		case joaat("ROMERO"):
			return "CHARIOT";
			break;
		
		case joaat("BALLER"):
		case joaat("BALLER2"):
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("BALLER5"):
		case joaat("BALLER6"):
			if (bParam1)
			{
				return "GALLIVAN";
			}
			else
			{
				return "GALIVANTER";
			}
			break;
		
		case joaat("SURFER"):
		case joaat("SURFER2"):
		case joaat("DUNE"):
		case joaat("bfinjection"):
			return "BF";
			break;
		
		case joaat("feltzer2"):
		case joaat("DUBSTA"):
		case joaat("SURANO"):
		case joaat("schwarzer"):
		case joaat("SCHAFTER2"):
		case joaat("SERRANO"):
		case joaat("dubsta2"):
		case joaat("FELTZER3"):
			if (bParam1)
			{
				return "BENEFAC";
			}
			else
			{
				return "BENEFACTOR";
			}
			break;
		
		case joaat("SENTINEL"):
		case joaat("SENTINEL2"):
		case joaat("ZION"):
		case joaat("ZION2"):
		case joaat("zion3"):
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
			if (bParam1)
			{
				return "UBERMACH";
			}
			else
			{
				return "UBERMACHT";
			}
			break;
		
		case joaat("ZTYPE"):
		case joaat("ADDER"):
		case joaat("thrax"):
			return "TRUFFADE";
			break;
		
		case joaat("JB700"):
		case joaat("RAPIDGT"):
		case joaat("rapidgt2"):
		case joaat("EXEMPLAR"):
		case joaat("MASSACRO"):
		case joaat("MASSACRO2"):
			if (bParam1)
			{
				return "DEWBAUCH";
			}
			else
			{
				return "DEWBAUCHEE";
			}
			break;
		
		case joaat("TAILGATER"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("ROCOTO"):
		case joaat("drafter"):
			return "OBEY";
			break;
		
		case joaat("PICADOR"):
		case joaat("SURGE"):
		case joaat("FUGITIVE"):
		case joaat("MARSHALL"):
			return "CHEVAL";
			break;
		
		case joaat("MOWER"):
			if (bParam1)
			{
				return "JACKSHP";
			}
			else
			{
				return "JACKSHEEPE";
			}
			break;
		
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
		case joaat("BURRITO"):
		case joaat("burrito2"):
		case joaat("PREMIER"):
		case joaat("VOODOO2"):
		case joaat("SABREGT"):
		case joaat("rancherxl"):
		case joaat("VIGERO"):
		case joaat("ASEA"):
		case joaat("asea2"):
		case joaat("GRANGER"):
		case joaat("PRANGER"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
		case joaat("GBURRITO"):
		case joaat("GBURRITO2"):
		case joaat("STALION"):
			return "DECLASSE";
			break;
		
		case joaat("buccaneer"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("EMPEROR"):
		case joaat("EMPEROR2"):
		case joaat("MANANA"):
		case joaat("PRIMO"):
		case joaat("washington"):
		case joaat("VIRGO"):
			return "ALBANY";
			break;
		
		case joaat("BANSHEE"):
		case joaat("BISON"):
		case joaat("GRESLEY"):
		case joaat("YOUGA"):
		case joaat("GAUNTLET"):
		case joaat("BUFFALO"):
		case joaat("BUFFALO2"):
		case joaat("ratloader"):
		case joaat("DLOADER"):
		case joaat("ratloader2"):
		case joaat("RUMPO"):
		case joaat("BANSHEE2"):
		case joaat("gauntlet3"):
			return "BRAVADO";
			break;
		
		case joaat("STINGER"):
		case joaat("stingergt"):
		case joaat("CHEETAH"):
		case joaat("carbonizzare"):
			if (bParam1)
			{
				return "GROTTI";
			}
			else
			{
				return "Grotti_2";
			}
			break;
		
		case joaat("COQUETTE"):
		case joaat("COQUETTE3"):
			if (bParam1)
			{
				return "INVERTO";
			}
			else
			{
				return "Invetero";
			}
			break;
		
		case joaat("RADI"):
		case joaat("SADLER"):
		case joaat("dominator"):
		case joaat("SANDKING"):
		case joaat("sandking2"):
		case joaat("POLICE"):
		case joaat("police3"):
		case joaat("POLICET"):
		case joaat("BENSON"):
		case joaat("BULLET"):
		case joaat("MINIVAN"):
		case joaat("SPEEDO"):
		case joaat("SPEEDO2"):
		case joaat("PEYOTE"):
		case joaat("TOWTRUCK"):
		case joaat("towtruck2"):
		case joaat("BOBCATXL"):
		case joaat("STANIER"):
		case joaat("HOTKNIFE"):
		case joaat("SLAMVAN"):
		case joaat("GUARDIAN"):
		case joaat("CHINO"):
		case joaat("caracara2"):
			return "VAPID";
			break;
		
		case joaat("TIPTRUCK"):
		case joaat("TACO"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("CAMPER"):
		case joaat("RIOT"):
		case joaat("TOURBUS"):
		case joaat("ambulance"):
		case joaat("STOCKADE"):
		case joaat("BOXVILLE"):
		case joaat("PONY"):
			return "BRUTE";
			break;
		
		case joaat("PRAIRIE"):
			return "BOLLOKAN";
			break;
		
		case joaat("JACKAL"):
		case joaat("F620"):
		case joaat("locust"):
			return "OCELOT";
			break;
		
		case joaat("MESA"):
		case joaat("MESA3"):
		case joaat("BODHI2"):
		case joaat("SEMINOLE"):
		case joaat("CRUSADER"):
			return "CANIS";
			break;
		
		case joaat("ENTITYXF"):
			return "OVERFLOD";
			break;
		
		case joaat("MONROE"):
		case joaat("INFERNUS"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("VACCA"):
		case joaat("RUFFIAN"):
		case joaat("faggio2"):
		case joaat("OSIRIS"):
		case joaat("zorrusso"):
			return "PEGASSI";
			break;
		
		case joaat("PHOENIX"):
		case joaat("RUINER"):
		case joaat("DUKES"):
		case joaat("DUKES2"):
			return "IMPONTE";
			break;
		
		case joaat("BJXL"):
		case joaat("REBEL"):
		case joaat("REBEL2"):
		case joaat("asterope"):
		case joaat("INTRUDER"):
		case joaat("FUTO"):
		case joaat("SULTAN"):
		case joaat("dilettante"):
		case joaat("dilettante2"):
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
		case joaat("SULTANRS"):
			return "KARIN";
			break;
		
		case joaat("PENUMBRA"):
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
		case joaat("MULE"):
			return "MAIBATSU";
			break;
		
		case joaat("BLISTA"):
		case joaat("BLISTA2"):
		case joaat("BLISTA3"):
		case joaat("DOUBLE"):
		case joaat("JESTER"):
		case joaat("JESTER2"):
		case joaat("ENDURO"):
		case joaat("VINDICATOR"):
		case joaat("AKUMA"):
			return "DINKA";
			break;
		
		case joaat("FQ2"):
			return "FATHOM";
			break;
		
		case joaat("VOLTIC"):
		case joaat("BRAWLER"):
			return "COIL";
			break;
	}
	switch (iParam0)
	{
		case joaat("FELON"):
		case joaat("FELON2"):
		case joaat("CASCO"):
		case joaat("Novak"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
		
		case joaat("COMET2"):
			return "PFISTER";
			break;
		
		case joaat("FUSILADE"):
			return "SCHYSTER";
			break;
		
		case joaat("STRETCH"):
		case joaat("REGINA"):
		case joaat("LANDSTALKER"):
			if (bParam1)
			{
				return "DUNDREAR";
			}
			else
			{
				return "DUNDREARY";
			}
			break;
		
		case joaat("HANDLER"):
		case joaat("bulldozer"):
		case joaat("DOCKTUG"):
		case joaat("CUTTER"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("BARRACKS"):
		case joaat("BARRACKS2"):
		case joaat("BIFF"):
		case joaat("forklift"):
		case joaat("RIPLEY"):
		case joaat("AIRTUG"):
		case joaat("DUMP"):
		case joaat("INSURGENT2"):
		case joaat("INSURGENT"):
			return "HVY";
			break;
		
		case joaat("PACKER"):
		case joaat("FLATBED"):
		case joaat("TIPTRUCK2"):
		case joaat("POUNDER"):
		case joaat("FIRETRUK"):
			return "MTL";
			break;
		
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
			return "STANLEY";
			break;
		
		case joaat("HAULER"):
		case joaat("PHANTOM"):
		case joaat("TRASH"):
			return "JOBUILT";
			break;
		
		case joaat("PATRIOT"):
			return "MAMMOTH";
			break;
		
		case joaat("JOURNEY"):
		case joaat("STRATUM"):
			if (bParam1)
			{
				return "ZIRCONIU";
			}
			else
			{
				return "ZIRCONIUM";
			}
			break;
		
		case joaat("VADER"):
		case joaat("PCJ"):
			return "SHITZU";
			break;
		
		case joaat("BAGGER"):
		case joaat("DAEMON"):
		case joaat("SOVEREIGN"):
			if (bParam1)
			{
				return "WESTERN";
			}
			else
			{
				return "WESTERNMOTORCYCLE";
			}
			break;
		
		case joaat("BLAZER"):
		case joaat("CADDY"):
		case joaat("carbonrs"):
		case joaat("BLAZER3"):
		case joaat("BLAZER2"):
			return "NAGASAKI";
			break;
		
		case joaat("NEMESIS"):
		case joaat("LECTRO"):
			if (bParam1)
			{
				return "PRINCIPL";
			}
			else
			{
				return "PRINCIPE";
			}
			break;
		
		case joaat("HEXER"):
			return "LCC";
			break;
		
		case joaat("BMX"):
		case joaat("CRUISER"):
		case joaat("SCORCHER"):
			if (!bParam1)
			{
				return "Ped";
			}
			break;
		
		case joaat("TRIBIKE"):
		case joaat("TRIBIKE2"):
		case joaat("TRIBIKE3"):
			if (!bParam1)
			{
				return "TriCycles";
			}
			break;
		
		case joaat("cogcabrio"):
		case joaat("SUPERD"):
		case joaat("WINDSOR"):
			return "ENUS";
			break;
		
		case joaat("HABANERO"):
			if (bParam1)
			{
				return "EMPEROR";
			}
			else
			{
				return "EMPORER";
			}
			break;
		
		case joaat("INGOT"):
		case joaat("nebula"):
			return "VULCAR";
			break;
		
		case joaat("T20"):
			return "PROGEN";
			break;
	}
	if (iParam0 == joaat("BIFTA"))
	{
		return "BF";
	}
	else if (iParam0 == joaat("KALAHARI"))
	{
		return "CANIS";
	}
	else if (iParam0 == joaat("PARADISE"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("BTYPE"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("ZENTORNO"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("JESTER"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("MASSACRO"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	else if (iParam0 == joaat("TURISMOR"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	else if (iParam0 == joaat("HUNTLEY"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("ALPHA"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("THRUST"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("SOVEREIGN"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("THRUST"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("BLADE") || iParam0 == joaat("MONSTER"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("WARRENER"))
	{
		return "VULCAR";
	}
	if ((iParam0 == joaat("GLENDALE") || iParam0 == joaat("PANTO")) || iParam0 == joaat("DUBSTA3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("RHAPSODY"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("PIGALLE"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("COQUETTE2"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	if (iParam0 == joaat("INNOVATION"))
	{
		return "LCC";
	}
	if (iParam0 == joaat("HAKUCHOU"))
	{
		return "SHITZU";
	}
	if (iParam0 == joaat("furoregt"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("ratloader2"))
	{
		return "BRAVADO";
	}
	else if (iParam0 == joaat("SLAMVAN"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("JESTER2"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("MASSACRO2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("WINDSOR"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("CHINO") || iParam0 == joaat("CHINO2"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("VINDICATOR"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("VIRGO"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("SWIFT2") || iParam0 == joaat("LUXOR2"))
	{
		return "BUCKING";
	}
	else if (iParam0 == joaat("FELTZER3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	else if (iParam0 == joaat("T20"))
	{
		return "PROGEN";
	}
	else if (iParam0 == joaat("OSIRIS"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("COQUETTE3"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	else if (iParam0 == joaat("TORO"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	else if (iParam0 == joaat("BRAWLER"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("PRIMO2") || iParam0 == joaat("buccaneer2"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("FACTION") || iParam0 == joaat("FACTION2"))
	{
		return "WILLARD";
	}
	else if ((iParam0 == joaat("MOONBEAM2") || iParam0 == joaat("VOODOO")) || iParam0 == joaat("MOONBEAM"))
	{
		return "DECLASSE";
	}
	else if (iParam0 == joaat("CHINO2") || iParam0 == joaat("DUKES2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("FACTION3"))
	{
		return "WILLARD";
	}
	if ((iParam0 == joaat("SABREGT2") || iParam0 == joaat("TORNADO5")) || iParam0 == joaat("VIRGO"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("VIRGO2") || iParam0 == joaat("VIRGO3"))
	{
		if (bParam1)
		{
			return "DUNDREAR";
		}
		else
		{
			return "DUNDREARY";
		}
	}
	if (iParam0 == joaat("SLAMVAN3") || iParam0 == joaat("MINIVAN2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("LURCHER") || iParam0 == joaat("BTYPE2"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("MAMBA") || iParam0 == joaat("TAMPA"))
	{
		return "DECLASSE";
	}
	if (((iParam0 == joaat("cognoscenti") || iParam0 == joaat("COG55")) || iParam0 == joaat("COG552")) || iParam0 == joaat("cognoscenti2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("verlierer2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("SCHAFTER4") || iParam0 == joaat("SCHAFTER3")) || iParam0 == joaat("SCHAFTER5")) || iParam0 == joaat("SCHAFTER6"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (((iParam0 == joaat("BALLER3") || iParam0 == joaat("BALLER4")) || iParam0 == joaat("BALLER5")) || iParam0 == joaat("BALLER6"))
	{
		if (bParam1)
		{
			return "GALLIVAN";
		}
		else
		{
			return "GALIVANTER";
		}
	}
	if (iParam0 == joaat("nightshade"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("btype3"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("PFISTER811"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("SEVEN70"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("RUMPO3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("BESTIAGTS"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("XLS") || iParam0 == joaat("XLS2"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("FMJ"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("WINDSOR2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("REAPER"))
	{
		return "PEGASSI";
	}
	if (((iParam0 == joaat("CONTENDER") || iParam0 == joaat("trophytruck")) || iParam0 == joaat("trophytruck2")) || iParam0 == joaat("DOMINATOR2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("BF400"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("CLIFFHANGER") || iParam0 == joaat("GARGOYLE"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("BUFFALO3") || iParam0 == joaat("GAUNTLET2"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("OMNIS"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("LE7B"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("TROPOS"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("TAMPA2") || iParam0 == joaat("STALION2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("BRIOSO"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("TYRUS"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("LYNX"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("SHEAVA"))
	{
		if (bParam1)
		{
			return "EMPEROR";
		}
		else
		{
			return "EMPORER";
		}
	}
	if (iParam0 == joaat("RALLYTRUCK"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("TORNADO6"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("AVARUS") || iParam0 == joaat("SANCTUS"))
	{
		return "LCC";
	}
	if ((iParam0 == joaat("CHIMERA") || iParam0 == joaat("SHOTARO")) || iParam0 == joaat("BLAZER4"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("DEFILER") || iParam0 == joaat("HAKUCHOU2"))
	{
		return "SHITZU";
	}
	if (((((iParam0 == joaat("NIGHTBLADE") || iParam0 == joaat("ZOMBIEA")) || iParam0 == joaat("ZOMBIEB")) || iParam0 == joaat("DAEMON2")) || iParam0 == joaat("RATBIKE")) || iParam0 == joaat("WOLFSBANE"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("YOUGA2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("ESSKEY") || iParam0 == joaat("VORTEX")) || iParam0 == joaat("FAGGIO3")) || iParam0 == joaat("FAGGIO"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("RAPTOR"))
	{
		return "BF";
	}
	if (iParam0 == joaat("MANCHEZ"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("BLAZER5"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("COMET3"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("DIABLOUS") || iParam0 == joaat("DIABLOUS2"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((iParam0 == joaat("FCR") || iParam0 == joaat("FCR2")) || iParam0 == joaat("TEMPESTA"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("NERO") || iParam0 == joaat("NERO2"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("penetrator"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("RUINER2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("TECHNICAL2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("PHANTOM2"))
	{
		return "JOBUILT";
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("wastelander"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("ITALIGTB") || iParam0 == joaat("ITALIGTB2"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("DUNE5") || iParam0 == joaat("DUNE4"))
	{
		return "BF";
	}
	if (iParam0 == joaat("ELEGY") || iParam0 == joaat("ELEGY2"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("SPECTER") || iParam0 == joaat("SPECTER2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("INFERNUS2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("RUSTON"))
	{
		return "HIJAK";
	}
	if (iParam0 == joaat("TURISMO2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("DUKES2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("ARDENT") || iParam0 == joaat("XA21"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("CHEETAH2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("INSURGENT3") || iParam0 == joaat("NIGHTSHARK")) || iParam0 == joaat("APC"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("TECHNICAL3"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("HALFTRACK"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("TORERO") || iParam0 == joaat("OPPRESSOR"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("DUNE3"))
	{
		return "BF";
	}
	if (iParam0 == joaat("TAMPA3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("VAGNER") || iParam0 == joaat("RAPIDGT3"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("CYCLONE"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("RETINUE") || iParam0 == joaat("hustler")) || iParam0 == joaat("riata"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("VISIONE") || iParam0 == joaat("VIGILANTE"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("z190"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("avenger") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("deluxo"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("stromberg") || iParam0 == joaat("pariah"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("hermes"))
	{
		return "ALBANY";
	}
	if ((iParam0 == joaat("sentinel3") || iParam0 == joaat("sc1")) || iParam0 == joaat("revolter"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("savestra"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("yosemite"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("raiden"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("neon") || iParam0 == joaat("comet4")) || iParam0 == joaat("comet5"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("streiter"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("kamacho"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("gt500"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("viseris"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("barrage"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("autarch") || iParam0 == joaat("tyrant")) || iParam0 == joaat("entity2"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("issi3"))
	{
		return "WEENY";
	}
	if ((((iParam0 == joaat("gb200") || iParam0 == joaat("ellie")) || iParam0 == joaat("flashgt")) || iParam0 == joaat("caracara")) || iParam0 == joaat("dominator3"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("fagaloa"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("michelli"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("hotring"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("tezeract"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("jester3"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("taipan"))
	{
		return "CHEVAL";
	}
	if (iParam0 == joaat("cheburek"))
	{
		return "RUNE";
	}
	if (iParam0 == joaat("swinger"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("freecrawler"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("mule4"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("pounder2"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("speedo4"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("patriot2"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("oppressor2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("stafford"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("menacer"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("scramjet"))
	{
		return "DECLASSE";
	}
	if ((iParam0 == joaat("monster3") || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		return "BRAVADO";
	}
	if ((iParam0 == joaat("scarab") || iParam0 == joaat("scarab2")) || iParam0 == joaat("scarab3"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("issi4") || iParam0 == joaat("issi5")) || iParam0 == joaat("issi6"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("toros"))
	{
		return "PEGASSI";
	}
	if (((((((((iParam0 == joaat("clique") || iParam0 == joaat("imperator")) || iParam0 == joaat("imperator2")) || iParam0 == joaat("imperator3")) || iParam0 == joaat("dominator4")) || iParam0 == joaat("dominator5")) || iParam0 == joaat("dominator6")) || iParam0 == joaat("slamvan4")) || iParam0 == joaat("slamvan5")) || iParam0 == joaat("slamvan6"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("deveste"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if (((((((((iParam0 == joaat("impaler") || iParam0 == joaat("impaler2")) || iParam0 == joaat("impaler3")) || iParam0 == joaat("impaler4")) || iParam0 == joaat("vamos")) || iParam0 == 276065473) || iParam0 == joaat("tulip")) || iParam0 == joaat("brutus")) || iParam0 == joaat("brutus2")) || iParam0 == joaat("brutus3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("deviant"))
	{
		return "SCHYSTER";
	}
	if (iParam0 == joaat("schlagen"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("italigto"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		return "MTL";
	}
	if ((iParam0 == joaat("deathbike") || iParam0 == joaat("deathbike2")) || iParam0 == joaat("deathbike3"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if ((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if ((iParam0 == joaat("zr380") || iParam0 == joaat("zr3802")) || iParam0 == joaat("zr3803"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("caracara2") || iParam0 == joaat("peyote2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("drafter"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("Dynasty") || iParam0 == joaat("issi7"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("gauntlet3") || iParam0 == joaat("gauntlet4"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("hellion") || iParam0 == joaat("s80"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("krieger"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("locust") || iParam0 == joaat("jugular"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("nebula"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("Novak"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("paragon") || iParam0 == joaat("paragon2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("thrax"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("zion3"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("emerus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("neo"))
	{
		return "VYSSER";
	}
	if (iParam0 == joaat("rrocket"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	return "";
}

char* func_127(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("FROGGER"):
		case joaat("frogger2"):
			return "MAIBATSU";
		
		case joaat("MAVERICK"):
		case joaat("POLMAV"):
		case joaat("LUXOR"):
		case joaat("SHAMAL"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("CARGOBOB"):
		case joaat("annihilator"):
		case joaat("CUBAN800"):
		case joaat("DUSTER"):
		case joaat("STUNT"):
			return "WESTERN";
			break;
		
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
			return "NAGASAKI";
			break;
		
		case joaat("MAMMATUS"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("LAZER"):
			return "JOBUILT";
			break;
	}
	if (iParam0 == joaat("VESTRA"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (((((iParam0 == joaat("MILJET") || iParam0 == joaat("SWIFT")) || iParam0 == joaat("SWIFT2")) || iParam0 == joaat("LUXOR2")) || iParam0 == joaat("supervolito")) || iParam0 == joaat("supervolito2"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (iParam0 == joaat("BESRA"))
	{
		return "WESTERN";
	}
	if (iParam0 == joaat("HYDRA") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("VOLATUS") || iParam0 == joaat("NIMBUS"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	return "";
}

char* func_128(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("SQUALO"):
		case joaat("TROPIC"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("JETMAX"):
		case joaat("SUNTRAP"):
			return "OCELOT";
			break;
		
		case joaat("DINGHY"):
			if (!bParam1)
			{
				return "OCELOT";
			}
			break;
		
		case joaat("seashark2"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark3"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("SEASHARK"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("TORO"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
	}
	if (iParam0 == joaat("SPEEDER") || iParam0 == joaat("speeder2"))
	{
		if (bParam1)
		{
			return "PEGASSI";
		}
		else
		{
			return "PEGASSI";
		}
	}
	return "";
}

int func_129()
{
	switch (Local_99.f_14)
	{
		case 11:
			switch (Local_99.f_47)
			{
				case 1:
					return 1;
				
				default:
			}
			break;
		
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_130()
{
	switch (Local_99.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 4:
		case 11:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_131()
{
	switch (Local_99.f_14)
	{
		case 1:
			return 2500;
			break;
		
		case 5:
			return 5000;
			break;
		
		case 9:
			return 7500;
			break;
		
		case 13:
			return 10000;
			break;
		
		case 17:
			return 15000;
			break;
		
		case 2:
			return 20000;
			break;
		
		case 6:
			return 30000;
			break;
		
		case 14:
			return 40000;
			break;
		
		case 19:
			return 50000;
			break;
		
		case 3:
			return 10000;
			break;
		
		case 7:
			return 15000;
			break;
		
		case 10:
			return 20000;
			break;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_99.f_47)
			{
				case 2:
				case 3:
				case 4:
					return Local_99.f_383;
					break;
			}
			break;
	}
	return 0;
}

char* func_132()
{
	switch (Local_99.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_CLO";
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
			return "CAS_LW_RP";
			break;
		
		case 2:
		case 6:
		case 14:
		case 19:
			return "CAS_LW_CASH";
			break;
		
		case 4:
			return "CAS_LW_DISC";
			break;
		
		case 3:
		case 7:
		case 10:
		case 15:
			return "CAS_LW_CHIP";
			break;
		
		case 11:
			return "CAS_LW_MYST";
			break;
		
		case 18:
			return "CAS_LW_VEHI";
			break;
	}
	return "";
}

void func_133(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam2);
}

int func_134()
{
	switch (Local_99.f_14)
	{
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
		case 2:
		case 6:
		case 14:
		case 19:
		case 3:
		case 7:
		case 10:
		case 15:
			return 1;
			break;
		
		case 11:
			switch (Local_99.f_47)
			{
				case 2:
				case 3:
				case 4:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_135()
{
	switch (func_677(Local_99.f_14))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return func_670(&(Local_99.f_367), &Local_99, func_677(Local_99.f_14), 0);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_662(&(Local_99.f_383), &(Local_99.f_367), func_677(Local_99.f_14), 0);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return func_649(&(Local_99.f_383), &(Local_99.f_367), func_677(Local_99.f_14), 0);
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return func_619(&(Local_99.f_383), &(Local_99.f_367), &(Local_99.f_405), func_677(Local_99.f_14), 0);
			break;
		
		case 17:
			if (!MISC::IS_BIT_SET(Local_99, 19))
			{
				Local_99.f_47 = func_617();
				MISC::SET_BIT(&Local_99, 19);
			}
			else
			{
				return func_477(&(Local_99.f_383), &(Local_99.f_367), &(Local_99.f_73), &(Local_99.f_74), Local_99.f_47, &Local_99, Local_100, &(Local_99.f_405));
			}
			break;
		
		case 18:
			return func_145(&(Local_99.f_367), &(Local_99.f_73), &(Local_99.f_74), func_677(Local_99.f_14), 0);
			break;
		
		case 19:
			return func_136(&(Local_99.f_367), func_677(Local_99.f_14));
			break;
	}
	return 0;
}

int func_136(char* sParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		iVar0 = func_143();
		func_138(func_142(iVar0));
		StringCopy(sParam0, func_137(iVar0), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ELT_NAME";
		
		case 1:
			return "BOATS_NAMEb";
		
		case 2:
			return "LGM_NAME";
		
		case 3:
			return "SSS_NAME";
		
		case 4:
			return "CANDC_NAMEb";
		
		case 5:
			return "PAM_NAME";
		
		default:
	}
	return "LRMVOUCHER_INVALID";
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if (iParam0 == 8)
	{
		func_141(129, 1, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_141(135, 1, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_141(136, 1, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_141(137, 1, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_12(8269, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_12(8270, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_12(8271, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_12(8272, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_12(8273, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		iVar5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_12(8274, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar6 = true;
			MISC::SET_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || !MISC::IS_BIT_SET(Global_2097152[func_140() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar6 = true;
		MISC::SET_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::SET_BIT(&(Global_2097152[func_140() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_STR");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_139(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar7, &cVar7, 1, 0, "", 0);
	}
}

char* func_139(int iParam0)
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

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_141(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
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

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		
		case 1:
			return 13;
		
		case 2:
			return 14;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 17;
		
		default:
	}
	return 14;
}

int func_143()
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_144(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_144(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_144(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25835;
		
		case 1:
			return Global_262145.f_25835;
		
		case 2:
			return Global_262145.f_25835;
		
		case 3:
			return Global_262145.f_25835;
		
		case 4:
			return Global_262145.f_25835;
		
		case 5:
			return Global_262145.f_25835;
		
		default:
	}
	return 0;
}

int func_145(char* sParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		if (!func_476() && ENTITY::DOES_ENTITY_EXIST(Global_1689921))
		{
			*iParam1 = Global_1689921;
			if (func_221(*iParam1, uParam2, &(uParam2->f_284), &(uParam2->f_285), &(uParam2->f_286), &(uParam2->f_287), 1, 0, 1, 1))
			{
				if (uParam2->f_287 != 3)
				{
					StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
					Global_1689923 = NETWORK::GET_CLOUD_TIME_AS_INT();
					if (func_67())
					{
						Global_1689922 = 1;
					}
					else
					{
						func_93(joaat("MPPLY_LW_PODIUM_VEH_MODEL"), ENTITY::GET_ENTITY_MODEL(*iParam1));
						func_220();
					}
					func_201(158, "LUCKY_POD_TXT", 1, 0, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					StringCopy(sParam0, "INVALID", 64);
				}
				MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 0);
				func_199();
				return 1;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1689921))
			{
			}
			StringCopy(sParam0, "GIVE_RP_FOR_VEH", 64);
			func_146(0, PLAYER::PLAYER_PED_ID(), "200000", -1827353931, 1223799452, 20000, 1, -1, 0, 0, 0);
			return 1;
		}
	}
	else if (iParam3 == -1)
	{
		if (func_221(*iParam1, uParam2, &(uParam2->f_284), &(uParam2->f_285), &(uParam2->f_286), &(uParam2->f_287), 1, 0, 1, 0))
		{
			if (uParam2->f_287 != 3)
			{
				StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
			}
			else
			{
				StringCopy(sParam0, "INVALID", 64);
			}
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 0);
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_156(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_152(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_147(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_147(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_150(iParam0, 1) };
	if (iParam0 == func_149(PLAYER::PLAYER_PED_ID()))
	{
		func_148(1);
	}
	func_152(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_148(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_149(int iParam0)
{
	return iParam0;
}

Vector3 func_150(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_151(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_151(int iParam0)
{
	return iParam0;
}

void func_152(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437364.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437364.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437364.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_155(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_154();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_153();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_153()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_154()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_155(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_156(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_157(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_198(PLAYER::PLAYER_ID()) || func_197(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_194() || func_190(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_189(sParam2))
	{
	}
	if (func_188())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_186(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_185(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_182(0, &iVar1);
					break;
				
				case 3:
					func_182(1, &iVar1);
					break;
				
				case 1:
					func_178(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_176(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_167((func_175(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_2 != -1)
				{
					func_176(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_161(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_158((func_159(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_158((func_159(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_158(int iParam0)
{
	if (func_188())
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_5 = iParam0;
		func_93(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

int func_159(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_160(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_160(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_161(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_166(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_164(func_165(&Var0));
			if (iVar1 == 0)
			{
				func_163(&Global_1382581, iParam0);
				func_162(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_163(&Global_1382582, iParam0);
				func_162(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_163(&Global_1382583, iParam0);
				func_162(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_163(&Global_1382584, iParam0);
				func_162(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_163(&Global_1382585, iParam0);
				func_162(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1382585);
			}
		}
	}
}

void func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1382576 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1382579 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1382580 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1382581 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1382582 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1382583 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1382584 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1382585 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1382586 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1382587 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1382588 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1382589 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1382590 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1382591 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1382592 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_164(int iParam0)
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_165(var uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

struct<13> func_166(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	if (func_188())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_13(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_13(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_174(PLAYER::PLAYER_ID()))
		{
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_6 = func_172(iParam0, 1);
		}
		func_171(639, iParam0, -1, 1);
		func_12(640, func_172(iParam0, 1), -1, 1, 0);
		Global_1382702[func_13(-1)] = iParam0;
		func_168(7, 0);
	}
}

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_170(iParam0, iParam1))
	{
		iVar0 = func_169();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_169()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_170(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_13(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_13(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_13(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_13(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_13(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_13(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_13(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_13(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_13(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_13(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_13(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_13(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_13(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_13(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_13(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_13(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_13(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_13(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_13(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_13(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_13(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_13(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_13(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_13(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_13(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_13(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_13(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_13(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_13(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_13(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_13(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_13(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_13(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_13(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_13(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_13(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_13(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_13(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_13(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_13(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_13(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_13(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_13(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_13(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_13(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_13(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_172(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_173(iParam0, 0);
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2437364.f_1, iParam0);
	}
	return 1;
}

int func_175(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_13(-1)];
			}
			else if (func_174(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_13(-1)];
	}
	return 0;
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_15(iParam0, func_13(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_177(iParam0))
	{
		func_12(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_171(iParam0, iVar0, iParam2, 1);
	}
}

int func_177(int iParam0)
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_181(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_180(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_179(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_179(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_179(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_180(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2505680 = { func_166(iParam0) };
		Global_2505693 = { func_166(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505680))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505693))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_182(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_180(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_183(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_180(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_179(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_179(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_183(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_184(iParam0), func_184(iParam1));
	return 0f;
}

Vector3 func_184(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_185(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_179(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_186(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_175(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_175(PLAYER::PLAYER_ID());
		}
	}
	if (func_187(8000, 0, 0) > 0)
	{
		if (func_187(8000, 0, 0) < (iParam0 + func_175(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_187(8000, 0, 0) - func_175(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_187(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_289559[iParam0];
}

int func_188()
{
	return 1;
}

int func_189(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	return func_191(func_192(iParam0));
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_196();
	}
	return func_195(Global_4456448.f_138474);
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5003[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_196()
{
	return Global_2448756.f_16;
}

bool func_197(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_198(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_199()
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2038212297;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = 1;
	iVar1 = func_200(1, 1);
	if (iVar1 != -1)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_200(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_77(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_201(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2423, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_202(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			MISC::SET_BIT(&Global_2423, 1);
			MISC::SET_BIT(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_202(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_214();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_213() == 0)
	{
		func_211();
		return 0;
	}
	func_210(Global_16933);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/]), sParam1, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_24 = iParam2;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_25 = iParam7;
	Global_106565.f_14135[Global_16933 /*104*/].f_26 = uParam8;
	Global_106565.f_14135[Global_16933 /*104*/].f_29 = uParam9;
	Global_106565.f_14135[Global_16933 /*104*/].f_30 = uParam12;
	Global_106565.f_14135[Global_16933 /*104*/].f_31 = uParam11;
	Global_106565.f_14135[Global_16933 /*104*/].f_28 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_33), sParam4, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_50), sParam5, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2423, 10))
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
		Global_3129 = 4;
		func_209(0);
		func_209(2);
		func_209(1);
	}
	else
	{
		func_214();
		switch (iParam16)
		{
			case 3:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[Global_14553] = 1;
				break;
			
			case 0:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14553)
			{
				case 0:
					func_209(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_209(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_209(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_209(3);
					Global_3129 = 3;
					break;
				
				default:
					Global_3129 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2423, 10))
		{
			Global_106565.f_14045[0 /*20*/].f_17 = 1;
			Global_106565.f_14045[1 /*20*/].f_17 = 1;
			Global_106565.f_14045[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106565.f_14045[Global_14553 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106565.f_14045[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106565.f_14045[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106565.f_14045[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16935[Global_16933] = 0;
	if (bParam10)
	{
		func_214();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_208())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_207(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_203(int iParam0)
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
		if (func_206(14))
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
								func_205(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_2430[iVar1 /*15*/]));
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
								func_205(&(Global_2430[iVar1 /*15*/]));
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
								func_205(&(Global_2430[iVar1 /*15*/]));
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
								func_205(&(Global_2430[iVar1 /*15*/]));
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
								func_205(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_204(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_204(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
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
		func_205(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_205(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_205(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_205(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_205(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_205(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_206(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_207(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
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

bool func_208()
{
	return Global_1312867;
}

void func_209(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_106565.f_14135[iParam0 /*104*/].f_18 = iVar0;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_211()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_212(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_212(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_213()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0)
		{
			Global_16933 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0 || Global_106565.f_14135[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_212(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
			{
				Global_16933 = iVar2;
			}
		}
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16933 == 34)
	{
		return 0;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 0;
	return 1;
}

void func_214()
{
	if (func_206(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_215();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_215()
{
	func_216();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_216()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_219(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_218(PLAYER::PLAYER_PED_ID());
			if (func_217(iVar0) && (!func_206(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_217(Global_106565.f_2357.f_539.f_4321))
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

bool func_217(int iParam0)
{
	return iParam0 < 3;
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_219(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_219(int iParam0)
{
	if (func_217(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_220()
{
	func_12(8350, (Global_1689923 + 604800), -1, 1, 0);
	Global_2458546 = 1;
}

int func_221(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_475(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				func_467(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_466(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_458(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!MISC::IS_BIT_SET(uParam1->f_278, 7))
					{
						if (func_350(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, 0, -1, 0, 0, 1, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !func_349())
						{
							if (PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::CLEAR_BIT(&(uParam1->f_278), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2, 202) || func_348())
							{
								MISC::CLEAR_BIT(&(uParam1->f_278), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_278), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_347(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (func_346())
				{
					iVar5 = 0;
					while (iVar5 < 271)
					{
						if (func_342(iVar5))
						{
							bVar2 = true;
							iVar5 = 272;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, 0, -1, 0, 0, 1, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_348())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (MISC::IS_BIT_SET(Global_1323594[0 /*141*/].f_102, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, 0, -1, 0, 0, 1, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_348())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		
		case 1:
			if (func_82(iParam0))
			{
				if (func_67())
				{
					if (func_296(iParam0, *iParam3, uParam2, 0, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_292(*uParam4, *iParam3, -1);
							}
							if (!func_475(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								func_287(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							func_248(iParam0, *iParam3, 1, bParam6, bParam7, 1, 0, -1);
							MISC::SET_BIT(&(Global_1323594[*iParam3 /*141*/].f_102), 13);
							func_222(iParam0, *iParam3);
							MISC::SET_BIT(&(Global_1323594[*iParam3 /*141*/].f_102), 15);
							if (bParam9)
							{
								MISC::SET_BIT(&(Global_1323594[*iParam3 /*141*/].f_102), 27);
							}
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_292(*uParam4, *iParam3, -1);
					}
					if (!func_475(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						func_287(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					func_248(iParam0, *iParam3, 1, bParam6, bParam7, 1, 0, -1);
					MISC::SET_BIT(&(Global_1323594[*iParam3 /*141*/].f_102), 13);
					func_222(iParam0, *iParam3);
					MISC::SET_BIT(&(Global_1323594[*iParam3 /*141*/].f_102), 15);
					if (bParam9)
					{
						MISC::SET_BIT(&(Global_1323594[*iParam3 /*141*/].f_102), 27);
					}
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_222(int iParam0, int iParam1)
{
	func_247(iParam0);
	func_223(iParam1);
}

void func_223(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 271)
	{
		MISC::SET_BIT(&(Global_1323594[iParam0 /*141*/].f_102), 2);
		func_245(101, 1, -1, 1);
		func_226(iParam0, &(Global_1323594[iParam0 /*141*/]), 1, -1, 0, 0);
		if (!Global_1315792)
		{
			func_224(91, 3, 1);
			Global_1315792 = 1;
		}
		else
		{
			func_224(91, 3, 0);
		}
	}
}

void func_224(int iParam0, int iParam1, bool bParam2)
{
	Global_3109 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		func_214();
		if (iParam1 == 4)
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[2] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71590)
			{
				if (iParam1 != 4)
				{
					if (Global_14553 != iParam1)
					{
						Global_3082[iParam1 /*4*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3099[iParam1] = 1;
						Global_3104[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14553)
					{
					}
					else
					{
						Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3033[1 /*6*/].f_5 = iParam1;
						func_225();
					}
				}
				else
				{
					Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
					Global_3033[1 /*6*/].f_5 = iParam1;
					func_225();
				}
			}
			else
			{
				Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
				Global_3033[1 /*6*/].f_5 = iParam1;
				func_225();
			}
		}
	}
}

void func_225()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_3109 /*29*/].f_7)), 64);
	if (Global_3128 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_3033[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_3033[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2423, 0);
}

int func_226(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_140() /*10778*/].f_6165.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_244(1411, iParam0);
	func_17(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_244(1412, iParam0);
	func_17(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_243(iParam0))
	{
	}
	else
	{
		iVar1 = func_244(1413, iParam0);
		func_17(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_244(1414, iParam0) + iVar0);
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_242(iParam0) + (iVar0 - 25));
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_244(1439, iParam0) + iVar0);
			func_17(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_244(1441, iParam0);
	func_17(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_244(1442, iParam0);
	func_17(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_244(1443, iParam0);
	func_17(iVar1, uParam1->f_64, iParam3, 1);
	if (func_243(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_244(1444, iParam0);
		func_17(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_244(1445, iParam0);
	func_17(iVar1, uParam1->f_67, iParam3, 1);
	if (func_243(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_244(1446, iParam0);
		func_17(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_244(1447, iParam0);
	func_17(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_244(1448, iParam0);
	func_17(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_244(1449, iParam0);
	func_17(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_244(1450, iParam0);
	func_17(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_244(1451, iParam0);
	func_17(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_244(1452, iParam0);
	func_17(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_244(1453, iParam0);
	func_17(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_244(1454, iParam0);
	func_17(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_244(1455, iParam0);
	func_17(iVar1, uParam1->f_8, iParam3, 1);
	if (func_243(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_244(3880, iParam0);
		func_17(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_244(3881, iParam0);
		func_17(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_244(3882, iParam0);
		func_17(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_241(iParam0);
		func_17(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_240(iParam0);
		func_17(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_229(iParam0);
		func_17(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_140() /*10778*/].f_6165.f_1274;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_12(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_12(func_228(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_12(func_228(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_12(func_228(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_12(func_228(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_12(func_228(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_12(func_228(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_243(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_227(func_228(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_227(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
	}
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_229(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_230(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_239(iParam0);
		return func_238(iVar0);
	}
	return (func_231(iParam0, -1) * iParam0 + 1);
}

int func_231(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_234(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_233(iParam1))
			{
				return 0;
			}
			else if (func_232(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 <= 125 && iParam1 > 0)
			{
				if (Global_1049815[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049815[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049815[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
	}
	return 0;
}

int func_232(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_234(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_235(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_235(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_235(int iParam0, bool bParam1)
{
	if (Global_1589660 != func_8())
	{
		if (!func_237(Global_1589660))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589660)
			{
				if (MISC::IS_BIT_SET(Global_2424047[Global_1589660 /*416*/].f_195, 24) || func_236(Global_1589660))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 24);
}

int func_236(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 9);
	}
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 2);
	}
	return 0;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_239(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_240(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_230(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_230(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_230(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	return 0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_230(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_230(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_230(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_230(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	return iVar0;
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_246())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_13(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_246()
{
	return 1;
	return 0;
}

void func_247(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_248(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	var uVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_285();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 12);
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 15);
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 2);
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 8);
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 9);
			func_283();
			func_282(iParam1, 1);
			Global_1676127 = 1;
		}
		func_252(iParam0, &(Global_1323594[iParam1 /*141*/]), bParam5);
		Global_1323594[iParam1 /*141*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 1);
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 6);
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 0);
		}
		if (bParam4)
		{
			func_251(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 15);
			MISC::SET_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 2);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (MISC::IS_BIT_SET(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_250(&iParam0, &(Global_1323594[iParam1 /*141*/].f_9), &(Global_1323594[iParam1 /*141*/].f_59));
			if (func_249(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2097152[func_140() /*10778*/].f_6077.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 25);
				MISC::CLEAR_BIT(&(Global_1323594[iParam1 /*141*/].f_102), 26);
			}
		}
		Global_2097152[func_140() /*10778*/].f_6165.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_226(iParam1, &(Global_1323594[iParam1 /*141*/]), 0, iParam7, 0, 0);
	}
}

bool func_249(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_250(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_251(int iParam0)
{
	Global_2097152[func_140() /*10778*/].f_6165.f_2 = iParam0;
}

void func_252(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	func_281(uParam1);
	if (bParam2)
	{
		uParam1->f_102 = 0;
		uParam1->f_104 = 0;
		StringCopy(&(uParam1->f_105), "", 64);
		StringCopy(&(uParam1->f_121), "", 64);
		uParam1->f_139 = 0;
		uParam1->f_137 = -1;
		uParam1->f_138 = -1;
		uParam1->f_140 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_10507)
		{
			MISC::SET_BIT(&(uParam1->f_102), 22);
		}
	}
	if (func_280(iParam0, 0))
	{
		func_279();
		MISC::SET_BIT(&(uParam1->f_102), 3);
	}
	func_255(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_102), 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(uParam1->f_102, 8))
	{
		if (!func_253(iParam0))
		{
		}
	}
	else if (func_253(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_102), 8);
		MISC::SET_BIT(&(uParam1->f_102), 9);
	}
}

int func_253(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_254(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return MISC::IS_BIT_SET(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_255(int iParam0, var uParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_275(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (MISC::IS_BIT_SET(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_253(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_273(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::_GET_VEHICLE_DEFAULT_HORN_VARIATION(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam0, &(uParam1->f_97));
		VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0);
		iVar0 = func_263(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_8())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_262(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_256(func_259(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_258(iParam0);
	func_257(iVar1, &iVar0);
	return iVar0;
}

bool func_257(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_260()) && Global_1314023)
	{
		if ((iParam0 == Global_1314024 && iParam1 == Global_1314025) && iParam2 == Global_1314026)
		{
			return 13;
		}
	}
	return 0;
}

int func_260()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_261() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_261()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_262(int iParam0)
{
	if (Global_2528542.f_287 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (func_272(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_271(iParam0);
		}
		else if (func_270(iParam0, 1))
		{
			return func_269(iParam0, 1, 0);
		}
		else if (func_268(iParam0, 1))
		{
			return func_267(iParam0, 1, 0);
		}
		else if (func_266(iParam0, 1))
		{
			*uParam1 = 2;
			return func_264(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return func_265(iVar0, 0, 1, 0);
}

int func_265(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_6(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_6(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_8();
}

int func_266(int iParam0, bool bParam1)
{
	if (Global_71590)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_268(iParam0, 1))
	{
		return func_8();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return func_265(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_268(int iParam0, bool bParam1)
{
	if (Global_71590)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_269(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_270(iParam0, 1))
	{
		return func_8();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_265(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_270(int iParam0, bool bParam1)
{
	if (Global_71590)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	if (!func_272(iParam0, 1))
	{
		return func_8();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_265(iVar0, 0, 1, 0);
}

int func_272(int iParam0, bool bParam1)
{
	if (Global_71590)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1315721));
			iVar3 = 20000;
			if (Global_1574400)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_274(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_274(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!MISC::IS_BIT_SET(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_275(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_278(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_277(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_250(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_276(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		
		default:
	}
	return 0;
}

void func_278(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_279()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 271)
	{
		if (MISC::IS_BIT_SET(Global_1323594[iVar0 /*141*/].f_102, 3))
		{
			MISC::CLEAR_BIT(&(Global_1323594[iVar0 /*141*/].f_102), 3);
		}
		iVar0++;
	}
}

int func_280(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_281(var uParam0)
{
	func_278(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_282(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2528542.f_2235[iVar0 /*44*/].f_40 == iParam0)
			{
				func_282(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2528542.f_2235[iParam0 /*44*/]), "", 24);
		Global_2528542.f_2235[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2528542.f_2235[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2528542.f_2235[iParam0 /*44*/].f_23), "", 64);
		Global_2528542.f_2235[iParam0 /*44*/].f_39 = -1;
		Global_2528542.f_2235[iParam0 /*44*/].f_40 = -1;
		func_23(&(Global_2528542.f_2235[iParam0 /*44*/].f_41));
		Global_2528542.f_2235[iParam0 /*44*/].f_43 = 0;
	}
}

void func_283()
{
	func_284(10);
}

void func_284(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1574567.f_3[iVar0]), iVar1);
}

void func_285()
{
	Global_2437364.f_502.f_49 = 0;
	func_286(25);
	func_286(24);
}

void func_286(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2437364.f_502.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2437364.f_502.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2437364.f_502.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2437364.f_502.f_2), (iParam0 - 32));
	}
}

void func_287(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_291() < 0 && Global_1681471)
	{
		return;
	}
	if (func_290(35))
	{
		bParam0 = true;
	}
	if (MISC::IS_BIT_SET(Global_2437364.f_502.f_43, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_289(2);
	}
	else
	{
		func_289(1);
	}
	if (bParam1)
	{
		func_289(11);
	}
	if (bParam2)
	{
		func_289(32);
		if (bParam3)
		{
			if (func_291() >= 0 && MISC::IS_BIT_SET(Global_1323594[func_291() /*141*/].f_102, 0))
			{
				func_289(33);
			}
		}
		else
		{
			func_286(33);
		}
		if (func_291() >= 0)
		{
			if (func_288(Global_1323594[func_291() /*141*/].f_66))
			{
				func_289(40);
			}
		}
	}
	else if (bParam5)
	{
		func_289(37);
	}
	if (bParam4)
	{
		func_289(36);
	}
	if (func_290(36))
	{
		if (func_290(2))
		{
			func_286(36);
		}
	}
	if (bParam6)
	{
		func_289(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2528542.f_380 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_288(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_2437364.f_502.f_1, iParam0))
		{
			MISC::SET_BIT(&(Global_2437364.f_502.f_1), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2437364.f_502.f_2, (iParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2437364.f_502.f_2), (iParam0 - 32));
	}
}

bool func_290(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2437364.f_502.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2437364.f_502.f_2, (iParam0 - 32));
}

int func_291()
{
	if (Global_2097152[func_140() /*10778*/].f_6165.f_2 >= 271)
	{
		Global_2097152[func_140() /*10778*/].f_6165.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_140() /*10778*/].f_6165.f_2;
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_293(iParam0, iParam1, iParam2);
	if (iParam0 >= 271)
	{
		return;
	}
	if (iParam2 == func_14() || iParam2 == -1)
	{
		Global_1666267[iParam0] = iParam1;
	}
}

void func_293(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_17(func_295(iParam0), iParam1, iParam2, 1);
		func_17(func_294(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_17(func_295(iParam0), 255, iParam2, 1);
		func_17(func_294(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_294(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	return (24625 + iParam0);
}

int func_295(int iParam0)
{
	if (iParam0 <= 38)
	{
		return (4036 + iParam0);
	}
	else if (iParam0 <= 48)
	{
		return ((5905 + iParam0) - 39);
	}
	else if (iParam0 <= 51)
	{
		return ((6025 + iParam0) - 49);
	}
	else if (iParam0 <= 64)
	{
		return ((7199 + iParam0) - 52);
	}
	else if (iParam0 <= 87)
	{
		return ((9207 + iParam0) - 65);
	}
	else if (iParam0 < 158)
	{
		return ((14734 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 184)
	{
		return ((17911 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18903 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21757 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24595 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	return (4036 + iParam0);
}

bool func_296(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_341() && Global_1688706)
			{
				return 0;
			}
			iVar0 = func_340(iParam1);
			iVar1 = func_338(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (func_102(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_102(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_297(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_97())
			{
			}
			else
			{
				*uParam2 = 3;
				func_63(func_68());
			}
			break;
		
		case 1:
			if (func_68() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_96(func_68()))
			{
				if (func_95(func_68()) == 2)
				{
					*uParam2 = 2;
					func_63(func_68());
				}
				else
				{
					*uParam2 = 3;
					func_63(func_68());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_297(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	
	iVar10 = func_337(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4267558 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_336(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_335(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_334(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_334(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_332(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_333(iVar0)))
			{
				return 0;
			}
			if (!func_334(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_332(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_333(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		iVar12 = func_330(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = func_329(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = func_325(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = func_324(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = func_323(iParam1);
		if (bVar11)
		{
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_321(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_321(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_320(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_318(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_319(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_317(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_317(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_315(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_322(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_322(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_322(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_322(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_322(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_335(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = func_314(iVar9);
		if (!func_322(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (func_313(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_334(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_334(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_332(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_333(iVar0)))
		{
			return 0;
		}
		if (!func_334(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_332(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_333(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (func_310(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			
			case 2:
				iVar29 = 4;
				break;
			
			case 3:
				iVar29 = 5;
				break;
			
			case 4:
				iVar29 = 6;
				break;
			
			case 5:
				iVar29 = 11;
				break;
			
			case 6:
				iVar29 = 7;
				break;
			
			case 7:
				iVar29 = 10;
				break;
			
			case 8:
				iVar29 = 8;
				break;
			
			case 9:
				iVar29 = 12;
				break;
			
			case 10:
				iVar29 = 13;
				break;
			
			case 11:
				iVar29 = -1;
				break;
			
			case 12:
				iVar29 = 9;
				break;
			
			case 0:
				if (func_309(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_308(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = func_307(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_306(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = func_259(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_306(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_322(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_305(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_322(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam1), 39, iVar14, func_305(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_304(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_303(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_302(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_301(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_257(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_300(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_301(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!func_299(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_298(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_298(int iParam0, char* sParam1)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_299(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("EMPEROR2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("MESA3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("MULE3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_301(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_303(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_304(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WINDSOR"):
			return 1;
			break;
	}
	return -1;
}

int func_306(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_307(bool bParam0, bool bParam1, bool bParam2)
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("annihilator"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314024 && iParam1 == Global_1314025) && iParam2 == Global_1314026)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_312())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_311())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_311()
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_312()
{
	return DLC::IS_DLC_PRESENT(42019760);
}

bool func_313(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_314(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_315(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_316(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_316(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_317(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_318(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_319(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
		
		case -443787204:
			return 53;
			break;
		
		case -882105348:
			return 54;
			break;
		
		case -920707230:
			return 55;
			break;
		
		case 246182814:
			return 56;
			break;
		
		case 1804608241:
			return 57;
			break;
		
		case -1496922658:
			return 58;
			break;
	}
	return 0;
}

int func_321(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !MISC::IS_BIT_SET(Global_4267887[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FACTION3"):
			return 12;
			break;
		
		case joaat("DIABLOUS"):
			return 4;
			break;
		
		case joaat("FCR"):
			return 4;
			break;
	}
	return func_337(iParam0);
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BTYPE2"):
			return 9;
			break;
		
		case joaat("LURCHER"):
			return 8;
			break;
		
		case joaat("SULTANRS"):
			return 6;
			break;
		
		case joaat("BANSHEE2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("OMNIS"):
			return 13;
			break;
		
		case joaat("BF400"):
			return 14;
			break;
		
		case joaat("TROPOS"):
			return 15;
			break;
		
		case joaat("BRIOSO"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("CLIFFHANGER"):
			return 19;
			break;
		
		case joaat("TAMPA2"):
			return 20;
			break;
		
		case joaat("GARGOYLE"):
			return 21;
			break;
		
		case joaat("LE7B"):
			return 22;
			break;
		
		case joaat("LYNX"):
			return 24;
			break;
		
		case joaat("SHEAVA"):
			return 25;
			break;
		
		case joaat("DIABLOUS2"):
			return 28;
			break;
		
		case joaat("FCR2"):
			return 28;
			break;
		
		case joaat("ITALIGTB2"):
			return 27;
			break;
		
		case joaat("SPECTER2"):
			return 27;
			break;
		
		case joaat("NERO2"):
			return 27;
			break;
		
		case joaat("COMET3"):
			return 26;
			break;
		
		case joaat("ELEGY"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
	}
	if (func_328(iParam0))
	{
		return 33;
	}
	else if (func_327(iParam0))
	{
		return 34;
	}
	if (func_326(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case -398987772:
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HUNTER"):
		case joaat("BOMBUSHKA"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
			return 1;
			break;
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAVOK"):
		case joaat("MICROLIGHT"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("SEABREEZE"):
		case joaat("TULA"):
		case joaat("PYRO"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("STARLING"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("CUBAN800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
			break;
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VIRGO2"):
			return 10;
			break;
		
		case joaat("SLAMVAN3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("SULTANRS"):
			return 6;
			break;
		
		case joaat("BANSHEE2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("FACTION3"):
			return 3;
			break;
		
		case joaat("MINIVAN2"):
			return 3;
			break;
		
		case joaat("SABREGT2"):
			return 3;
			break;
		
		case joaat("SLAMVAN3"):
			return 3;
			break;
		
		case joaat("TORNADO5"):
			return 3;
			break;
		
		case joaat("VIRGO2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("DIABLOUS2"):
			return 28;
			break;
		
		case joaat("FCR2"):
			return 28;
			break;
		
		case joaat("ITALIGTB2"):
			return 27;
			break;
		
		case joaat("SPECTER2"):
			return 27;
			break;
		
		case joaat("NERO2"):
			return 27;
			break;
		
		case joaat("COMET3"):
			return 26;
			break;
		
		case joaat("ELEGY"):
			return 26;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
	}
	if (func_326(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VIRGO2"):
			return 10;
			break;
		
		case joaat("SLAMVAN3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("SULTANRS"):
			return 6;
			break;
		
		case joaat("BANSHEE2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("FACTION3"):
			return 3;
			break;
		
		case joaat("MINIVAN2"):
			return 0;
			break;
		
		case joaat("SABREGT2"):
			return 0;
			break;
		
		case joaat("SLAMVAN3"):
			return 0;
			break;
		
		case joaat("TORNADO5"):
			return 0;
			break;
		
		case joaat("VIRGO2"):
			return 3;
			break;
		
		case joaat("VIRGO3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("FCR"):
			return 0;
			break;
		
		case joaat("DIABLOUS"):
			return 0;
			break;
		
		case joaat("DIABLOUS2"):
			return 28;
			break;
		
		case joaat("FCR2"):
			return 28;
			break;
		
		case joaat("ITALIGTB"):
			return 3;
			break;
		
		case joaat("SPECTER"):
			return 3;
			break;
		
		case joaat("NERO"):
			return 3;
			break;
		
		case joaat("ITALIGTB2"):
			return 27;
			break;
		
		case joaat("SPECTER2"):
			return 27;
			break;
		
		case joaat("NERO2"):
			return 27;
			break;
		
		case joaat("COMET3"):
			return 26;
			break;
		
		case joaat("ELEGY"):
			return 26;
			break;
	}
	switch (iParam0)
	{
		case joaat("APC"):
			return 29;
			break;
		
		case joaat("HALFTRACK"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("DUNE3"):
			return 30;
			break;
		
		case joaat("INSURGENT3"):
			return 30;
			break;
		
		case joaat("TAMPA3"):
			return 30;
			break;
		
		case joaat("TECHNICAL3"):
			return 30;
			break;
		
		case joaat("OPPRESSOR"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("PHANTOM3"):
			return 32;
			break;
		
		case joaat("HAULER2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
	}
	if (func_328(iParam0))
	{
		return 33;
	}
	else if (func_327(iParam0))
	{
		return 34;
	}
	else if (func_326(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("VIGILANTE"):
			return 31;
			break;
	}
	if (func_331(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("ADDER"):
			return 3;
			break;
		
		case joaat("AIRBUS"):
			return 0;
			break;
		
		case joaat("AKUMA"):
			return 4;
			break;
		
		case joaat("ALPHA"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("ASEA"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("BALLER2"):
			return 2;
			break;
		
		case joaat("BANSHEE"):
			return 3;
			break;
		
		case joaat("BARRACKS"):
			return 0;
			break;
		
		case joaat("BATI"):
			return 4;
			break;
		
		case joaat("BATI2"):
			return 4;
			break;
		
		case joaat("BESRA"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("BIFTA"):
			return 0;
			break;
		
		case joaat("BISON"):
			return 2;
			break;
		
		case joaat("BLADE"):
			return 3;
			break;
		
		case joaat("BLAZER"):
			return 0;
			break;
		
		case joaat("BLAZER3"):
			return 0;
			break;
		
		case joaat("BMX"):
			return 0;
			break;
		
		case joaat("BOBCATXL"):
			return 2;
			break;
		
		case joaat("BODHI2"):
			return 0;
			break;
		
		case joaat("BTYPE"):
			return 0;
			break;
		
		case joaat("BUFFALO"):
			return 0;
			break;
		
		case joaat("BUFFALO2"):
			return 1;
			break;
		
		case joaat("BULLET"):
			return 3;
			break;
		
		case joaat("BUS"):
			return 0;
			break;
		
		case joaat("BUZZARD"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("CHEETAH"):
			return 3;
			break;
		
		case joaat("COACH"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("COMET2"):
			return 3;
			break;
		
		case joaat("COQUETTE"):
			return 3;
			break;
		
		case joaat("COQUETTE2"):
			return 1;
			break;
		
		case joaat("CRUISER"):
			return 0;
			break;
		
		case joaat("CRUSADER"):
			return 0;
			break;
		
		case joaat("CUBAN800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("DOMINATOR2"):
			return 1;
			break;
		
		case joaat("DOUBLE"):
			return 4;
			break;
		
		case joaat("DUBSTA3"):
			return 3;
			break;
		
		case joaat("DUMP"):
			return 0;
			break;
		
		case joaat("DUNE"):
			return 0;
			break;
		
		case joaat("DUSTER"):
			return 0;
			break;
		
		case joaat("ELEGY2"):
			return 3;
			break;
		
		case joaat("ENTITYXF"):
			return 3;
			break;
		
		case joaat("EXEMPLAR"):
			return 3;
			break;
		
		case joaat("F620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("FELON"):
			return 0;
			break;
		
		case joaat("FELON2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("FROGGER"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("FUGITIVE"):
			return 0;
			break;
		
		case joaat("FUSILADE"):
			return 1;
			break;
		
		case joaat("GAUNTLET"):
			return 0;
			break;
		
		case joaat("GAUNTLET2"):
			return 0;
			break;
		
		case joaat("GLENDALE"):
			return 3;
			break;
		
		case joaat("GRANGER"):
			return 2;
			break;
		
		case joaat("GRESLEY"):
			return 2;
			break;
		
		case joaat("HEXER"):
			return 4;
			break;
		
		case joaat("HOTKNIFE"):
			return 3;
			break;
		
		case joaat("HUNTLEY"):
			return 1;
			break;
		
		case joaat("HYDRA"):
			return 0;
			break;
		
		case joaat("INFERNUS"):
			return 3;
			break;
		
		case joaat("INGOT"):
			return 0;
			break;
		
		case joaat("INTRUDER"):
			return 0;
			break;
		
		case joaat("ISSI2"):
			return 0;
			break;
		
		case joaat("JACKAL"):
			return 1;
			break;
		
		case joaat("JB700"):
			return 3;
			break;
		
		case joaat("JESTER"):
			return 3;
			break;
		
		case joaat("JESTER2"):
			return 3;
			break;
		
		case joaat("JETMAX"):
			return 0;
			break;
		
		case joaat("JOURNEY"):
			return 0;
			break;
		
		case joaat("KALAHARI"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("LANDSTALKER"):
			return 2;
			break;
		
		case joaat("LUXOR"):
			return 0;
			break;
		
		case joaat("MAMMATUS"):
			return 0;
			break;
		
		case joaat("MARQUIS"):
			return 0;
			break;
		
		case joaat("MASSACRO"):
			return 3;
			break;
		
		case joaat("MASSACRO2"):
			return 3;
			break;
		
		case joaat("MAVERICK"):
			return 0;
			break;
		
		case joaat("MESA"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("MESA3"):
			return 2;
			break;
		
		case joaat("MILJET"):
			return 0;
			break;
		
		case joaat("MINIVAN"):
			return 0;
			break;
		
		case joaat("MONROE"):
			return 3;
			break;
		
		case joaat("MONSTER"):
			return 0;
			break;
		
		case joaat("MULE"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("MULE3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("NEMESIS"):
			return 4;
			break;
		
		case joaat("NINEF"):
			return 3;
			break;
		
		case joaat("NINEF2"):
			return 3;
			break;
		
		case joaat("ORACLE"):
			return 1;
			break;
		
		case joaat("ORACLE2"):
			return 1;
			break;
		
		case joaat("PANTO"):
			return 3;
			break;
		
		case joaat("PARADISE"):
			return 0;
			break;
		
		case joaat("PCJ"):
			return 4;
			break;
		
		case joaat("PENUMBRA"):
			return 1;
			break;
		
		case joaat("PICADOR"):
			return 0;
			break;
		
		case joaat("PIGALLE"):
			return 3;
			break;
		
		case joaat("PREMIER"):
			return 0;
			break;
		
		case joaat("PRIMO"):
			return 0;
			break;
		
		case joaat("RADI"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("RAPIDGT"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("REBEL"):
			return 2;
			break;
		
		case joaat("REBEL2"):
			return 2;
			break;
		
		case joaat("REGINA"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("RHAPSODY"):
			return 3;
			break;
		
		case joaat("RHINO"):
			return 0;
			break;
		
		case joaat("ROCOTO"):
			return 2;
			break;
		
		case joaat("RUFFIAN"):
			return 4;
			break;
		
		case joaat("RUMPO"):
			return 0;
			break;
		
		case joaat("SADLER"):
			return 2;
			break;
		
		case joaat("SANCHEZ"):
			return 4;
			break;
		
		case joaat("SANCHEZ2"):
			return 4;
			break;
		
		case joaat("SANDKING"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("SCHAFTER2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("SCORCHER"):
			return 0;
			break;
		
		case joaat("SEASHARK"):
			return 0;
			break;
		
		case joaat("SEMINOLE"):
			return 2;
			break;
		
		case joaat("SENTINEL"):
			return 1;
			break;
		
		case joaat("SENTINEL2"):
			return 1;
			break;
		
		case joaat("SHAMAL"):
			return 0;
			break;
		
		case joaat("SOVEREIGN"):
			return 4;
			break;
		
		case joaat("SPEEDER"):
			return 0;
			break;
		
		case joaat("SQUALO"):
			return 0;
			break;
		
		case joaat("STANIER"):
			return 0;
			break;
		
		case joaat("STINGER"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("STRATUM"):
			return 0;
			break;
		
		case joaat("STRETCH"):
			return 0;
			break;
		
		case joaat("STUNT"):
			return 0;
			break;
		
		case joaat("SUNTRAP"):
			return 0;
			break;
		
		case joaat("SUPERD"):
			return 3;
			break;
		
		case joaat("SURANO"):
			return 3;
			break;
		
		case joaat("SURFER"):
			return 0;
			break;
		
		case joaat("SURGE"):
			return 0;
			break;
		
		case joaat("TAILGATER"):
			return 0;
			break;
		
		case joaat("THRUST"):
			return 4;
			break;
		
		case joaat("TITAN"):
			return 0;
			break;
		
		case joaat("TRIBIKE"):
			return 4;
			break;
		
		case joaat("TRIBIKE2"):
			return 4;
			break;
		
		case joaat("TRIBIKE3"):
			return 4;
			break;
		
		case joaat("TROPIC"):
			return 0;
			break;
		
		case joaat("TURISMOR"):
			return 3;
			break;
		
		case joaat("VACCA"):
			return 3;
			break;
		
		case joaat("VADER"):
			return 4;
			break;
		
		case joaat("VALKYRIE"):
			return 0;
			break;
		
		case joaat("VELUM"):
			return 0;
			break;
		
		case joaat("VESTRA"):
			return 0;
			break;
		
		case joaat("VIGERO"):
			return 1;
			break;
		
		case joaat("VOLTIC"):
			return 3;
			break;
		
		case joaat("WARRENER"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("YOUGA"):
			return 2;
			break;
		
		case joaat("ZENTORNO"):
			return 3;
			break;
		
		case joaat("ZION"):
			return 1;
			break;
		
		case joaat("ZION2"):
			return 1;
			break;
		
		case joaat("ZTYPE"):
			return 3;
			break;
		
		case joaat("SWIFT"):
			return 0;
			break;
		
		case joaat("INNOVATION"):
			return 4;
			break;
		
		case joaat("HAKUCHOU"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("KURUMA"):
			return 3;
			break;
		
		case joaat("BLISTA2"):
			return 0;
			break;
		
		case joaat("BLISTA3"):
			return 0;
			break;
		
		case joaat("BUFFALO3"):
			return 1;
			break;
		
		case joaat("DODO"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("DOMINATOR2"):
			return 1;
			break;
		
		case joaat("DUKES"):
			return 1;
			break;
		
		case joaat("DUKES2"):
			return 0;
			break;
		
		case joaat("MARSHALL"):
			return 0;
			break;
		
		case joaat("STALION"):
			return 0;
			break;
		
		case joaat("STALION2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("BAGGER"):
			return 4;
			break;
		
		case joaat("BALLER"):
			return 2;
			break;
		
		case joaat("BJXL"):
			return 2;
			break;
		
		case joaat("BLISTA"):
			return 0;
			break;
		
		case joaat("BLISTA2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("DAEMON"):
			return 4;
			break;
		
		case joaat("DLOADER"):
			return 0;
			break;
		
		case joaat("FQ2"):
			return 0;
			break;
		
		case joaat("HABANERO"):
			return 0;
			break;
		
		case joaat("MANANA"):
			return 0;
			break;
		
		case joaat("PATRIOT"):
			return 2;
			break;
		
		case joaat("PEYOTE"):
			return 0;
			break;
		
		case joaat("PHOENIX"):
			return 0;
			break;
		
		case joaat("PRAIRIE"):
			return 0;
			break;
		
		case joaat("SABREGT"):
			return 0;
			break;
		
		case joaat("SERRANO"):
			return 2;
			break;
		
		case joaat("SPEEDO"):
			return 0;
			break;
		
		case joaat("SPEEDO2"):
			return 0;
			break;
		
		case joaat("VOODOO2"):
			return 0;
			break;
		
		case joaat("ROMERO"):
			return 0;
			break;
		
		case joaat("SURFER2"):
			return 0;
			break;
		
		case joaat("EMPEROR2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("BLAZER2"):
			return 0;
			break;
		
		case joaat("ORACLE2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("DUBSTA"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("BOXVILLE4"):
			return 0;
			break;
		
		case joaat("MESA"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("WINDSOR"):
		case joaat("OSIRIS"):
		case joaat("FELTZER3"):
		case joaat("VIRGO"):
			return 3;
			break;
		
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("MOONBEAM2"):
		case joaat("MOONBEAM"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("CHINO2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 0;
			break;
		
		case joaat("BTYPE2"):
		case joaat("LURCHER"):
			return 3;
			break;
		
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("TYRUS"):
		case joaat("LE7B"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
		case joaat("ARDENT"):
		case joaat("CHEETAH2"):
		case joaat("TORERO"):
		case joaat("VAGNER"):
		case joaat("XA21"):
			return 3;
			break;
		
		case joaat("CONTENDER"):
			return 2;
			break;
		
		case joaat("TAMPA3"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("trailersmall2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
			return 3;
			break;
	}
	return 0;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ADDER"):
		case joaat("BANSHEE"):
		case joaat("BULLET"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("CHEETAH"):
		case joaat("cogcabrio"):
		case joaat("COMET2"):
		case joaat("COQUETTE"):
		case joaat("ELEGY2"):
		case joaat("ENTITYXF"):
		case joaat("EXEMPLAR"):
		case joaat("feltzer2"):
		case joaat("HOTKNIFE"):
		case joaat("INFERNUS"):
		case joaat("JB700"):
		case joaat("khamelion"):
		case joaat("MONROE"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("RAPIDGT"):
		case joaat("rapidgt2"):
		case joaat("STINGER"):
		case joaat("stingergt"):
		case joaat("SUPERD"):
		case joaat("SURANO"):
		case joaat("VACCA"):
		case joaat("VOLTIC"):
		case joaat("ZTYPE"):
		case joaat("DUBSTA3"):
		case joaat("BLADE"):
		case joaat("GLENDALE"):
		case joaat("RHAPSODY"):
		case joaat("WARRENER"):
		case joaat("PANTO"):
		case joaat("PIGALLE"):
		case joaat("CASCO"):
		case joaat("KURUMA2"):
		case joaat("LECTRO"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("TECHNICAL"):
			return 1;
			break;
		
		case joaat("WINDSOR"):
		case joaat("OSIRIS"):
		case joaat("FELTZER3"):
		case joaat("VIRGO"):
			return 1;
			break;
		
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("MOONBEAM"):
		case joaat("MOONBEAM2"):
			return 1;
			break;
		
		case joaat("FACTION3"):
		case joaat("VIRGO2"):
			return 1;
			break;
		
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("cognoscenti"):
		case joaat("COG55"):
		case joaat("LIMO2"):
		case joaat("MAMBA"):
		case joaat("nightshade"):
		case joaat("SCHAFTER3"):
		case joaat("SCHAFTER4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("TAMPA"):
			return 1;
			break;
		
		case joaat("BANSHEE2"):
			return 1;
			break;
		
		case joaat("BESTIAGTS"):
		case joaat("BRICKADE"):
		case joaat("FMJ"):
		case joaat("NIMBUS"):
		case joaat("PFISTER811"):
		case joaat("PROTOTIPO"):
		case joaat("RUMPO3"):
		case joaat("SEVEN70"):
		case joaat("TUG"):
		case joaat("VOLATUS"):
		case joaat("WINDSOR2"):
		case joaat("XLS"):
		case joaat("XLS2"):
		case joaat("REAPER"):
			return 1;
			break;
		
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("TYRUS"):
		case joaat("LE7B"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
			return 1;
			break;
		
		case joaat("AVARUS"):
		case joaat("DEFILER"):
		case joaat("NIGHTBLADE"):
		case joaat("ZOMBIEA"):
		case joaat("ZOMBIEB"):
		case joaat("CHIMERA"):
		case joaat("ESSKEY"):
		case joaat("RATBIKE"):
		case joaat("HAKUCHOU2"):
		case joaat("DAEMON2"):
		case joaat("SHOTARO"):
		case joaat("RAPTOR"):
		case joaat("BLAZER4"):
		case joaat("SANCTUS"):
		case joaat("VORTEX"):
		case joaat("MANCHEZ"):
		case joaat("TORNADO6"):
		case joaat("YOUGA2"):
		case joaat("WOLFSBANE"):
		case joaat("FAGGIO3"):
		case joaat("FAGGIO"):
			return 1;
			break;
		
		case joaat("BLAZER5"):
		case joaat("BOXVILLE5"):
		case joaat("COMET3"):
		case joaat("DIABLOUS"):
		case joaat("DIABLOUS2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("FCR"):
		case joaat("FCR2"):
		case joaat("ITALIGTB"):
		case joaat("NERO"):
		case joaat("penetrator"):
		case joaat("PHANTOM2"):
		case joaat("RUINER2"):
		case joaat("TECHNICAL2"):
		case joaat("TEMPESTA"):
		case joaat("VOLTIC2"):
		case joaat("wastelander"):
		case joaat("ELEGY"):
		case joaat("ITALIGTB2"):
		case joaat("NERO2"):
		case joaat("ruiner3"):
		case joaat("SPECTER"):
		case joaat("SPECTER2"):
			return 1;
			break;
		
		case joaat("GP1"):
		case joaat("RUSTON"):
		case joaat("INFERNUS2"):
		case joaat("TURISMO2"):
			return 1;
			break;
		
		case joaat("ARDENT"):
		case joaat("VAGNER"):
		case joaat("CHEETAH2"):
		case joaat("NIGHTSHARK"):
		case joaat("TORERO"):
		case joaat("XA21"):
		case joaat("TAMPA3"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("trailersmall2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
			return 1;
			break;
		
		case joaat("CYCLONE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("Dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("Novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("SLAMVAN2"):
			return 1;
			break;
	}
	return 0;
}

int func_332(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_333(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_334(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_102(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_335(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *uParam10);
}

int func_336(int iParam0)
{
	if (iParam0 == joaat("BMX"))
	{
		return 1;
	}
	if (iParam0 == joaat("CRUISER"))
	{
		return 1;
	}
	if (iParam0 == joaat("SCORCHER"))
	{
		return 1;
	}
	if ((iParam0 == joaat("TRIBIKE") || iParam0 == joaat("TRIBIKE2")) || iParam0 == joaat("TRIBIKE3"))
	{
		return 1;
	}
	if (iParam0 == joaat("FIXTER"))
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("MOONBEAM2"):
		case joaat("buccaneer2"):
		case joaat("CHINO2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
		case joaat("btype3"):
		case joaat("FACTION3"):
		case joaat("MINIVAN2"):
		case joaat("SABREGT2"):
		case joaat("SLAMVAN3"):
		case joaat("TORNADO5"):
		case joaat("VIRGO2"):
		case joaat("DIABLOUS2"):
		case joaat("FCR2"):
		case joaat("ITALIGTB2"):
		case joaat("SPECTER2"):
		case joaat("NERO2"):
		case joaat("COMET3"):
		case joaat("ELEGY"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("trailersmall2"):
		case joaat("DUNE3"):
		case joaat("INSURGENT3"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("OPPRESSOR"):
		case joaat("trailerlarge"):
		case joaat("HAULER2"):
		case joaat("PHANTOM3"):
		case joaat("BOMBUSHKA"):
		case joaat("HUNTER"):
		case joaat("MICROLIGHT"):
		case joaat("ROGUE"):
		case joaat("TULA"):
		case joaat("HAVOK"):
		case joaat("MOGUL"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("CYCLONE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("PYRO"):
		case joaat("CUBAN800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
			return 3;
			break;
	}
	if (func_326(iParam0))
	{
		return 3;
	}
	return func_330(iParam0);
}

int func_338(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	char* sVar2;
	
	iVar0 = func_330(iParam0);
	StringCopy(&Var1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
	if (bParam1)
	{
		func_339(&sVar2, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
	}
	else
	{
		func_339(&sVar2, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
	}
	return MISC::GET_HASH_KEY(&sVar2);
}

void func_339(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_68786)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_68787)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_68788)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_68789)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_68790)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("MESA3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				if (iParam4 == joaat("FCR2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam4 == joaat("DIABLOUS2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam4 == joaat("COMET3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
					{
						return;
					}
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("MESA3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_340(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_341()
{
	if (((func_68() == -1 && Global_2505892 == -1) && Global_2505885 == -1) && Global_2505886 != 2)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)
{
	if (func_343(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 6);
	}
	return 0;
}

int func_343(int iParam0)
{
	int iVar0;
	
	func_345(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 271) && !func_344(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

void func_345(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 271)
		{
			if (iParam0 == (Global_1666267[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_346()
{
	return Global_2437364.f_502.f_41;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TECHNICAL2"):
		case joaat("BOXVILLE5"):
		case joaat("wastelander"):
		case joaat("PHANTOM2"):
		case joaat("VOLTIC2"):
		case joaat("DUNE5"):
		case joaat("RUINER2"):
		case joaat("BLAZER5"):
			return 1;
			break;
	}
	return 0;
}

int func_348()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_349()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_350(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_6(PLAYER::PLAYER_ID(), 1, 1)) || func_457()) || Global_1312791) || Global_2449538.f_3463.f_32)
	{
		*iParam1 = -1;
		func_456(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_455();
	func_37();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 1, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_452(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_278), 1);
	if (func_450(0, iParam5, 0))
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_278, 0))
			{
				func_402(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_278), 0);
				func_394(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_362(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_361(8, -1)) && !Global_2448756.f_672.f_5)
			{
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					if (func_360())
					{
						if (uParam0->f_274 == 0)
						{
							if (Global_4268040 != uParam0->f_275)
							{
								uParam0->f_275 = Global_4268040;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_278), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4268040 != uParam0->f_276)
						{
							uParam0->f_276 = Global_4268040;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_278), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!MISC::IS_BIT_SET(uParam0->f_281, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || func_359()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_274 == 0)
						{
							uParam0->f_283 = 0;
							if (uParam0->f_275 >= 0 && uParam0->f_1[uParam0->f_275] >= 0)
							{
								*uParam2 = func_458(1, 0, iParam3, func_356(uParam0->f_1[uParam0->f_275], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_355(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_466(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_278), 0);
									func_456(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_275 < 0)
							{
							}
							if (uParam0->f_275 < 0)
							{
								uParam0->f_283 = 0;
							}
							else
							{
								uParam0->f_283 = uParam0->f_1[uParam0->f_275];
							}
							uParam0->f_274 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_278), 0);
							bVar1 = true;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_281, 2) && !MISC::IS_BIT_SET(uParam0->f_273, uParam0->f_276))
						{
							func_354(-1);
							func_353(176, "BB_YES", -1);
							func_353(177, "BB_NO", -1);
							MISC::SET_BIT(&(uParam0->f_281), 2);
						}
						else if (uParam0->f_276 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_276];
							func_355(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_466(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_278), 0);
								func_456(uParam0, iParam5, 0);
							}
							else
							{
								func_456(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_281), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 201) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_281), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_281, 1))
				{
					if ((((func_352() || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || (func_348() && Global_4268040 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_274 == 0)
						{
							func_394(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_362(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							func_456(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_278), 7);
							return 1;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_281, 2))
						{
							uParam0->f_274 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_278), 0);
						}
						else
						{
							func_354(-1);
							func_353(176, "BB_SELECT", -1);
							func_353(177, "BB_BACK", -1);
							MISC::CLEAR_BIT(&(uParam0->f_281), 2);
						}
						MISC::SET_BIT(&(uParam0->f_281), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2, 202) && !PAD::IS_CONTROL_PRESSED(2, 238)) && !func_352())
				{
					MISC::CLEAR_BIT(&(uParam0->f_281), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_281, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_281, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))
						{
							if (uParam0->f_274 == 0)
							{
								uParam0->f_275 = (uParam0->f_275 - 1);
							}
							else
							{
								uParam0->f_276 = (uParam0->f_276 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_281), 4);
							MISC::CLEAR_BIT(&(uParam0->f_278), 0);
							func_23(&(uParam0->f_279));
						}
					}
					else if (func_351(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_281), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_281, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))
						{
							if (uParam0->f_274 == 0)
							{
								uParam0->f_275++;
							}
							else
							{
								uParam0->f_276++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_281), 5);
							MISC::CLEAR_BIT(&(uParam0->f_278), 0);
							func_23(&(uParam0->f_279));
						}
					}
					else if (func_351(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_281), 5);
					}
				}
				if (uParam0->f_274 == 0)
				{
					if (uParam0->f_275 >= uParam0->f_277)
					{
						uParam0->f_275 = 0;
					}
					if (uParam0->f_275 < 0)
					{
						uParam0->f_275 = (uParam0->f_277 - 1);
					}
				}
				else
				{
					if (uParam0->f_276 >= uParam0->f_277)
					{
						uParam0->f_276 = 0;
					}
					if (uParam0->f_276 < 0)
					{
						uParam0->f_276 = (uParam0->f_277 - 1);
					}
				}
				func_394(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!MISC::IS_BIT_SET(uParam0->f_281, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_362(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_351(var uParam0, int iParam1)
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_24(&(uParam0->f_279), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_352()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_353(int iParam0, char* sParam1, int iParam2)
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
	MISC::CLEAR_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_354(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_17411.f_5052 = 0;
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_59(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_355(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10054)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1666267[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_356(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_14();
	}
	if (iParam0 == 7 && !Global_262145.f_16859)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_239(iParam0);
		if (iVar1 == 0 && func_15(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_358(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_357(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1382708[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2573644[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 22)
		{
			return 0;
		}
		return Global_2573513[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_357(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316 != 0;
	}
	return 0;
}

bool func_358(int iParam0)
{
	if (!Global_262145.f_23529)
	{
		return 0;
	}
	return func_15(7207, iParam0, 0) != 0;
}

int func_359()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_360()
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

bool func_361(int iParam0, int iParam1)
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

void func_362(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	if (!func_392(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_17411)
	{
		if (func_390(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_389())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_389())
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
			func_385(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_384(29), 64);
					StringCopy(&cVar64, func_382(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_381(Global_17408, Global_17409, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_381(Global_17408, (Global_17409 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17411.f_1)) != 0)
				{
					func_380();
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
					func_380();
					func_378((((Global_17408 + fParam5) - 0.00390625f) - func_379("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_380();
						func_378((((Global_17408 + fParam5) - 0.00390625f) - func_379("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
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
				func_381(Global_17408, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_390(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_377(fVar40);
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
				func_381(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_377(fVar40);
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
					func_390(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_376(Global_17411.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4768), func_382(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_390(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_377(fVar40);
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
				func_381(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_377(fVar40);
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
					func_390(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_376(Global_4267964.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_384(Global_4267964.f_67), func_382(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_372(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_370(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_390(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_390(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_390(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_384(26), func_382(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_390(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_390(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_384(27), func_382(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_370(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_369(bVar32);
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
												if (func_390(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_390(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_376(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4433[(iVar22 + iVar28)]), func_382(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4433[(iVar22 + iVar28)]), func_382(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_368() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_370(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_390(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_390(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_376(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4433[(iVar22 + iVar14)]), func_382(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4433[(iVar22 + iVar14)]), func_382(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4433[(iVar22 + iVar14)]), func_382(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_370(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_369(bVar32);
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
										if (func_390(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_390(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_384(26), func_382(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_390(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_390(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_384(27), func_382(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_370(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										func_367((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
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
										func_370(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_369(bVar32);
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
										if (func_390(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_390(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_384(26), func_382(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_390(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_390(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_384(27), func_382(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_370(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
									func_366((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_390(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_390(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_390(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_376(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_384(26), func_382(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_390(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_390(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_376(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_384(27), func_382(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_390(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_376(Global_17411.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_384(Global_17411.f_4433[iVar22]), func_382(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_365(Global_17411.f_4433[iVar22])), (fVar37 * func_365(Global_17411.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_390(26, 1, 1, &fVar36, &fVar37, bParam7))
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
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_17411.f_5876);
	if (!Global_17411.f_8318)
	{
		func_364(0);
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
		func_363(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_363(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_364(int iParam0)
{
	if (func_88())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_89(0))
		{
			func_85(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

float func_365(int iParam0)
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

void func_366(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_367(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_368()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_369(bool bParam0)
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

void func_370(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_371(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_371(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_372(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
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
	if (iParam3 && !func_392(bParam4, bParam8))
	{
		return;
	}
	if (func_374())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_77(PLAYER::PLAYER_ID(), 0))
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
					func_373(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_373(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_205(&(Global_17411.f_4964[iVar1 /*4*/]));
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
				func_373(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_205(&(Global_4267964.f_16));
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

void func_373(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_374()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_375())
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

int func_375()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_377(float fParam0)
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

void func_378(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_379(char* sParam0, int iParam1, int iParam2)
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
	func_380();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_380()
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

void func_381(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_382(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_166(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_383(&uVar1);
			}
		}
		else
		{
			return func_383(&(Global_17411.f_6997[iParam0 /*16*/]));
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

var func_383(var uParam0)
{
	return uParam0;
}

char* func_384(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_166(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_383(&uVar0);
		}
		else
		{
			return func_383(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_385(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_388(Global_17411.f_5218, 1);
	}
	else
	{
		func_388(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_387(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_390(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_386(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
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

float func_386(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_387(char* sParam0)
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
	func_370(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_388(int iParam0, bool bParam1)
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

int func_389()
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

int func_390(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_384(iParam0), 64);
	StringCopy(&cVar1, func_382(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_389())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_389())
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
		vVar7.x = (vVar7.x * (func_391(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_391(iParam0) / fVar4));
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

float func_391(int iParam0)
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

int func_392(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_361(8, -1) && func_393() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_71850) || Global_17411.f_8352) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_393()
{
	return Global_1312802;
}

void func_394(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam2)
	{
		if (uParam0->f_274 == 0)
		{
			if (uParam0->f_1[uParam0->f_275] == 12)
			{
				if (!bParam4)
				{
					func_401("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_401("CAS_VEH_SELLV", 0, 0);
					func_400(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_401("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_401("CAS_VEH_SELLV", 0, 0);
				func_400(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_281, 2))
		{
			if (func_395(uParam0->f_1[uParam0->f_275], 0, -1, 1))
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, 0, -1, 0, 0, 1, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, 0, -1, 0, 0, 1, 0);
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_273, uParam0->f_276))
		{
			if (func_395(uParam0->f_1[uParam0->f_275], 0, -1, 1))
			{
				func_401("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_401("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_395(uParam0->f_1[uParam0->f_275], 0, -1, 0))
			{
				func_401("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_401("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_395(uParam0->f_1[uParam0->f_275], 0, -1, 1))
		{
			func_401("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_401("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_395(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (bParam1)
	{
		func_398(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_345(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_396(12) && iVar0 < func_230(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_239(iParam0);
		return func_397(iVar0);
	}
	return (func_231(iParam0, -1) * iParam0);
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

void func_398(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 271)
	{
		if (iParam0 == (func_399(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_399(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_19(func_295(iParam0), iParam1, -1);
	iVar0 = (iVar0 + func_19(func_294(iParam0), iParam1, -1));
	return iVar0;
}

void func_400(char* sParam0)
{
	if (Global_17411.f_4765 >= 3 || Global_17411.f_4762 >= 4)
	{
		return;
	}
	Global_17411.f_4696[Global_17411.f_4762] = 1;
	Global_17411.f_4762++;
	StringCopy(&(Global_17411.f_4713[Global_17411.f_4765 /*16*/]), sParam0, 64);
	Global_17411.f_4765++;
}

void func_401(char* sParam0, int iParam1, int iParam2)
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

void func_402(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	struct<16> Var13;
	struct<4> Var14;
	
	iVar0 = 0;
	func_449(0, 0);
	if (bParam2)
	{
		func_444(func_448(), 0);
	}
	func_443(1, 1, 0, 0, 0);
	func_442(1, 2, 1, 1, 1);
	func_441(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = func_336(iParam1);
	iVar11 = 1;
	switch (uParam0->f_274)
	{
		case 0:
			uParam0->f_283 = 0;
			func_440("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 22)
			{
				iVar3 = func_356(iVar1, -1);
				if (iVar3 > 0 && func_439(iVar3))
				{
					if (!func_437(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1049815[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, func_435(func_436(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, func_433(func_434(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, func_432(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, func_432(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, func_432(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, func_431(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, func_431(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, func_431(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME", 16);
						}
						if (!func_430())
						{
							if (!func_429() && !func_428(iVar3))
							{
								func_385(iVar0, &Var14, 0, 1, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								func_385(iVar0, &Var6, 0, 1, 0, 0);
							}
						}
						else
						{
							func_385(iVar0, "PIM_DNAME", 1, 1, 0, 0);
							func_427(HUD::_GET_LABEL_TEXT(&Var14), 0, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_15(5393, -1, 0) != 0 && func_19(15270, -1, -1) == 7) && !Global_262145.f_20483) && func_417(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_385(iVar0, func_416(0), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_415(0);
				iVar0++;
			}
			if (func_358(-1) && func_417(iParam1, 223))
			{
				func_385(iVar0, func_416(2), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_415(2);
				iVar0++;
			}
			uParam0->f_277 = iVar0;
			func_414(uParam0->f_275, 1, 1);
			break;
		
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_440("DEL_VEH_SEL3ac");
			}
			else
			{
				func_440("DEL_VEH_SEL3");
			}
			uParam0->f_273 = 0;
			iVar4 = func_396(uParam0->f_283);
			iVar5 = (10 + func_396(uParam0->f_283));
			if (uParam0->f_283 >= 22)
			{
				iVar10 = func_239(uParam0->f_283);
				iVar1 = 0;
				while (iVar1 < func_413(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (func_344(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!func_344(iVar8))
					{
						bVar2 = true;
					}
					if (!func_417(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_355(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1323594[iVar9 /*141*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1323594[iVar9 /*141*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&vVar12, "", 24);
							if (func_412(&(Global_1323594[iVar9 /*141*/])))
							{
								iVar11++;
							}
							if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_408(-1, iVar8, 1) };
							if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 1))
							{
								if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 2) && !bVar7)
								{
									StringCopy(&vVar12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&vVar12, iVar11, 24);
									func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_404(&Var13, 0, 0, 1);
									}
									if (func_412(&(Global_1323594[iVar9 /*141*/])))
									{
										func_407("VEH_LIVERY", 0);
									}
									if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
									{
										func_407("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_385(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_273), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_336(Global_1323594[iVar9 /*141*/].f_66))
								{
									if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 6))
									{
										StringCopy(&vVar12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&vVar12, iVar11, 24);
										func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_404(&Var13, 0, 0, 1);
										}
										if (func_412(&(Global_1323594[iVar9 /*141*/])))
										{
											func_407("VEH_LIVERY", 0);
										}
										if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
										{
											func_407("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&vVar12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&vVar12, iVar11, 24);
										func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_404(&Var13, 0, 0, 1);
										}
										if (func_412(&(Global_1323594[iVar9 /*141*/])))
										{
											func_407("VEH_LIVERY", 0);
										}
										if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
										{
											func_407("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_336(Global_1323594[iVar9 /*141*/].f_66))
							{
								if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 6))
								{
									StringCopy(&vVar12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&vVar12, iVar11, 24);
									func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_404(&Var13, 0, 0, 1);
									}
									if (func_412(&(Global_1323594[iVar9 /*141*/])))
									{
										func_407("VEH_LIVERY", 0);
									}
									if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
									{
										func_407("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&vVar12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&vVar12, iVar11, 24);
									func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_404(&Var13, 0, 0, 1);
									}
									if (func_412(&(Global_1323594[iVar9 /*141*/])))
									{
										func_407("VEH_LIVERY", 0);
									}
									if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
									{
										func_407("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_385(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_273), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_356(uParam0->f_283, -1);
				iVar1 = 0;
				while (iVar1 < func_231(uParam0->f_283, -1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1049815[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1049815[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && func_344(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_403(iVar8, iVar3, uParam0->f_283))
					{
						bVar2 = true;
					}
					if (!func_417(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_355(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1323594[iVar9 /*141*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1323594[iVar9 /*141*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&vVar12, "", 24);
							if (func_412(&(Global_1323594[iVar9 /*141*/])))
							{
								iVar11++;
							}
							if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_408(-1, iVar8, 1) };
							if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 1))
							{
								if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 2) && !bVar7)
								{
									StringCopy(&vVar12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&vVar12, iVar11, 24);
									func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_404(&Var13, 0, 0, 1);
									}
									if (func_412(&(Global_1323594[iVar9 /*141*/])))
									{
										func_407("VEH_LIVERY", 0);
									}
									if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
									{
										func_407("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_385(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_273), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_336(Global_1323594[iVar9 /*141*/].f_66))
								{
									if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 6))
									{
										StringCopy(&vVar12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&vVar12, iVar11, 24);
										func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_404(&Var13, 0, 0, 1);
										}
										if (func_412(&(Global_1323594[iVar9 /*141*/])))
										{
											func_407("VEH_LIVERY", 0);
										}
										if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
										{
											func_407("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&vVar12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&vVar12, iVar11, 24);
										func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_404(&Var13, 0, 0, 1);
										}
										if (func_412(&(Global_1323594[iVar9 /*141*/])))
										{
											func_407("VEH_LIVERY", 0);
										}
										if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
										{
											func_407("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_336(Global_1323594[iVar9 /*141*/].f_66))
							{
								if (MISC::IS_BIT_SET(Global_1323594[iVar9 /*141*/].f_102, 6))
								{
									StringCopy(&vVar12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&vVar12, iVar11, 24);
									func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_404(&Var13, 0, 0, 1);
									}
									if (func_412(&(Global_1323594[iVar9 /*141*/])))
									{
										func_407("VEH_LIVERY", 0);
									}
									if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
									{
										func_407("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&vVar12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&vVar12, iVar11, 24);
									func_385(iVar0, &vVar12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_407(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323594[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_404(&Var13, 0, 0, 1);
									}
									if (func_412(&(Global_1323594[iVar9 /*141*/])))
									{
										func_407("VEH_LIVERY", 0);
									}
									if (func_411(Global_1323594[iVar9 /*141*/].f_66, Global_1323594[iVar9 /*141*/].f_77, Global_1323594[iVar9 /*141*/].f_9[10]) && func_410(Global_1323594[iVar9 /*141*/].f_66))
									{
										func_407("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_385(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_273), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_277 = iVar0;
			if (uParam0->f_276 >= uParam0->f_277)
			{
				uParam0->f_276 = 0;
			}
			func_414(uParam0->f_276, 1, 1);
			break;
	}
	func_354(-1);
	func_353(176, "BB_SELECT", -1);
	func_353(177, "BB_BACK", -1);
}

int func_403(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 125) && func_439(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_396(iParam2)) >= 0 && (iParam0 - func_396(iParam2)) < Global_1049815[iParam1 /*1951*/].f_33) && iParam0 < 271)
			{
				return 1;
			}
			if (Global_1049815[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_396(iParam2)))
			{
				return 1;
			}
			if ((Global_1049815[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_396(iParam2))) && iParam0 <= (11 + func_396(iParam2)))
			{
				return 1;
			}
			if (Global_1049815[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_232(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_396(iParam2)) && iParam0 <= (12 + func_396(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_396(iParam2)) && iParam0 < func_230(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_396(iParam2) && iParam0 < func_230(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_396(iParam2) && iParam0 < func_230(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_396(iParam2) && iParam0 < func_230(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_396(iParam2) && iParam0 < func_230(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_404(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17411.f_5221 >= 32)
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
	StringCopy(&(Global_2459153[Global_17411.f_5221 /*16*/]), sParam0, 64);
	Global_17411.f_5221++;
	if (bParam3)
	{
		Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 9;
	}
	else
	{
		Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 7;
	}
	Global_17411.f_5743++;
	fVar0 = func_406();
	if (bParam2)
	{
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_406();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_390(26, 1, 0, &fVar1, &fVar2, 0);
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
			fVar3 = func_405();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

float func_405()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
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
			if (func_390(Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
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

float func_406()
{
	float fVar0;
	float fVar1;
	float fVar2;
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
	func_370(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_390(Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_407(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17411.f_5220 >= 256)
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
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam0, 24);
	Global_17411.f_5220++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 1;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_406();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_390(26, 1, 0, &fVar1, &fVar2, 0);
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
			fVar3 = func_405();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

struct<16> func_408(int iParam0, int iParam1, bool bParam2)
{
	struct<16> Var0;
	
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_409(iParam1) != -1)
		{
			Var0 = { Global_2097152[func_140() /*10778*/].f_5506.f_90[func_409(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2097152[func_140() /*10778*/].f_5506.f_90[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_409(int iParam0)
{
	int iVar0;
	
	func_345(Global_4008468, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_457())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FACTION3"):
		case joaat("CONTENDER"):
			return 0;
			break;
	}
	return 1;
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("BANSHEE"):
		case joaat("BANSHEE2"):
			if (!MISC::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("STINGER"):
		case joaat("COQUETTE2"):
		case joaat("COQUETTE3"):
			if (!MISC::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("CHINO"):
		case joaat("VOLTIC"):
		case joaat("STALION"):
		case joaat("CHINO2"):
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("FACTION3"):
			if (!MISC::IS_BIT_SET(iParam1, 1) && !MISC::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("buccaneer2"):
		case joaat("peyote2"):
			if ((!MISC::IS_BIT_SET(iParam1, 1) && !MISC::IS_BIT_SET(iParam1, 2)) && !MISC::IS_BIT_SET(iParam1, 3))
			{
				return 1;
			}
			break;
		
		case joaat("COQUETTE"):
			if (!MISC::IS_BIT_SET(iParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("MAMBA"):
			if (!MISC::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("PFISTER811"):
			if (!MISC::IS_BIT_SET(iParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("CONTENDER"):
		case joaat("kamacho"):
			if (!MISC::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_412(var uParam0)
{
	switch (uParam0->f_66)
	{
		case joaat("WINDSOR"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	return (func_238(iParam0) - func_397(iParam0));
}

void func_414(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_5739 = iParam0;
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

int func_415(int iParam0)
{
	return (1000 + iParam0);
}

char* func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		default:
	}
	return "";
}

int func_417(int iParam0, int iParam1)
{
	if (!func_426(iParam1) && !func_347(iParam0))
	{
		if (func_425(iParam0, 0))
		{
			if (iParam1 == func_424(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_423(iParam1))
		{
			return 0;
		}
	}
	if (func_336(iParam0))
	{
		if (!func_344(iParam1))
		{
			return 0;
		}
	}
	else if (func_344(iParam1))
	{
		return 0;
	}
	if (func_422(iParam1))
	{
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)))
		{
			return 0;
		}
	}
	if (func_426(iParam1))
	{
		if (!func_347(iParam0))
		{
			return 0;
		}
		else if ((func_421(iParam0) + func_396(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_420(iParam1))
	{
		if (!func_309(iParam0))
		{
			return 0;
		}
	}
	else if (func_309(iParam0))
	{
		return 0;
	}
	if (!func_419(iParam1, 1))
	{
		if (func_418(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("oppressor2"))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_419(int iParam0, bool bParam1)
{
	if (iParam0 >= func_396(18) && iParam0 < func_230(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	if (iParam0 >= func_396(12) && iParam0 < func_230(12))
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
			break;
		
		case joaat("BOXVILLE5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("PHANTOM2"):
			return 3;
			break;
		
		case joaat("VOLTIC2"):
			return 4;
			break;
		
		case joaat("DUNE4"):
			return 5;
			break;
		
		case joaat("DUNE5"):
			return 5;
			break;
		
		case joaat("RUINER2"):
			return 6;
			break;
		
		case joaat("BLAZER5"):
			return 7;
			break;
	}
	return -1;
}

int func_422(int iParam0)
{
	if (iParam0 >= func_396(6) && iParam0 < func_230(6))
	{
		return 1;
	}
	return 0;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
			return 1;
			break;
	}
	if (iParam0 >= func_396(11) && iParam0 < func_230(11))
	{
		return 1;
	}
	return 0;
}

int func_424(int iParam0)
{
	if (func_347(iParam0))
	{
		return (func_421(iParam0) + func_396(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("trailersmall2"):
				return 157;
				break;
			
			case joaat("HAULER2"):
			case joaat("PHANTOM3"):
				return 158;
				break;
			
			case joaat("avenger"):
				return 190;
				break;
			
			case joaat("khanjali"):
				return 188;
				break;
			
			case joaat("chernobog"):
				return 187;
				break;
			
			case joaat("riot2"):
				return 186;
				break;
			
			case joaat("thruster"):
				return 189;
				break;
		}
		if (iParam0 == joaat("terbyte"))
		{
			return 222;
		}
		else if (iParam0 == joaat("speedo4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("mule4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("pounder2"))
		{
			return 226;
		}
		if (iParam0 == joaat("rcbandito"))
		{
			return 257;
		}
	}
	return -1;
}

int func_425(int iParam0, bool bParam1)
{
	if (func_347(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("HAULER2"):
		case joaat("PHANTOM3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case joaat("avenger"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
			return 1;
			break;
	}
	if (((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	if (iParam0 == joaat("rcbandito"))
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 >= func_396(11) && iParam0 < func_230(11))
	{
		return 1;
	}
	return 0;
}

void func_427(char* sParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17411.f_5221 >= 32)
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
	StringCopy(&(Global_2459153[Global_17411.f_5221 /*16*/]), sParam0, 64);
	Global_17411.f_5221++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 5;
	Global_17411.f_5743++;
	fVar0 = func_406();
	if (bParam2)
	{
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_406();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_390(26, 1, 0, &fVar1, &fVar2, 0);
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
			fVar3 = func_405();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

int func_428(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_429()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_430()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_431(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_432(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_433(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_434(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_265;
	}
	return 0;
}

char* func_435(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_436(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258;
	}
	return 0;
}

int func_437(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((((iParam0 == joaat("thruster") || iParam0 == joaat("khanjali")) || iParam0 == joaat("riot2")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("avenger"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_347(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3")) || iParam0 == joaat("monster3")) || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_309(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_438())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if (((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_421(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_438()
{
	return joaat("terbyte");
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_440(char* sParam0)
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

void func_441(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5075[0] = iParam0;
	Global_17411.f_5075[1] = iParam1;
	Global_17411.f_5075[2] = iParam2;
	Global_17411.f_5075[3] = iParam3;
	Global_17411.f_5075[4] = iParam4;
}

void func_442(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5083[0] = iParam0;
	Global_17411.f_5083[1] = iParam1;
	Global_17411.f_5083[2] = iParam2;
	Global_17411.f_5083[3] = iParam3;
	Global_17411.f_5083[4] = iParam4;
}

void func_443(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_444(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = func_447(iParam0, iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_445(1, sVar0, sVar0);
	}
}

void func_445(int iParam0, char* sParam1, char* sParam2)
{
	Global_17411 = iParam0;
	func_446(29, sParam1, sParam2);
}

void func_446(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17411.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_6997[iParam0 /*16*/]), sParam2, 64);
}

char* func_447(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
			return "ShopUI_Title_GR_GunMod";
			break;
		
		case 47:
			return "ShopUI_Title_GR_GunMod";
		
		case 48:
			return "ShopUI_Title_GR_GunMod";
		
		case 49:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
			return "ShopUI_Title_Casino";
		
		case 51:
			return "ShopUI_Title_Casino";
	}
	return "";
}

int func_448()
{
	return Global_93734.f_430;
}

void func_449(bool bParam0, bool bParam1)
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

bool func_450(char* sParam0, int iParam1, bool bParam2)
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
	bVar2 = func_451(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_451(var uParam0)
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

void func_452(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_454();
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
				func_453(0);
			}
			return;
		}
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= (fVar3 + fVar6)) && Global_4268035 < (fVar3 + 0.034722f))
		{
			Global_4268040 = -3;
			if (bParam3)
			{
				func_453(0);
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
				func_381(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17410, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_453(bool bParam0)
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
		func_381(fVar0, fVar1, Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268040 == -3)
	{
		func_381(fVar0, (fVar1 + fVar2), Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_454()
{
	Global_4268036 = Global_4268034;
	Global_4268037 = Global_4268035;
	Global_4268034 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268035 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268038 = (Global_4268034 - Global_4268036);
	Global_4268039 = (Global_4268035 - Global_4268037);
}

void func_455()
{
	Global_2528542.f_4523 = 0;
}

void func_456(var uParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_BIT_SET(uParam0->f_278, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_275 = 0;
	uParam0->f_277 = 0;
	uParam0->f_278 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_278), 7);
	}
	uParam0->f_281 = 0;
	func_57(1, iParam1);
}

bool func_457()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196 != 0;
}

int func_458(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_262145.f_10054)
	{
		if (bParam5)
		{
			return func_463(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_466(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_234(iParam3, 0, 0))
	{
		iParam3 = func_462(iParam3);
	}
	if (!func_347(iParam2) && func_425(iParam2, 0))
	{
		iVar6 = func_424(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_461(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_355(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (MISC::IS_BIT_SET(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1323594[iVar7 /*141*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < 22)
	{
		if (func_460(iVar1))
		{
		}
		else if (func_356(iVar1, iParam4) >= Global_1049815)
		{
			return -1;
		}
		else if (func_356(iVar1, iParam4) > 0 && func_356(iVar1, iParam4) <= 125)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_356(iVar1, iParam4))
			{
				iVar4 = Global_1049815[func_356(iVar1, iParam4) /*1951*/].f_33;
				if (func_356(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_356(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_356(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_356(iVar1, iParam4) == 119 || func_356(iVar1, iParam4) == 120) || func_356(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_356(iVar1, iParam4) == 122 || func_356(iVar1, iParam4) == 123) || func_356(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_356(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				if (func_336(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_396(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_403(iVar6, func_356(iVar1, iParam4), iVar1) && func_417(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_461(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_355(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (MISC::IS_BIT_SET(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1323594[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_403(iVar6, func_356(iVar1, iParam4), iVar1) && func_417(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_461(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_355(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1323594[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_403(iVar6, func_356(iVar1, iParam4), iVar1) && func_417(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_461(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_355(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
											if (MISC::IS_BIT_SET(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_403(iVar6, func_356(iVar1, iParam4), iVar1) && func_417(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_461(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_355(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
										if (MISC::IS_BIT_SET(iVar5, 1) && !MISC::IS_BIT_SET(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_403(iVar6, func_356(iVar1, iParam4), iVar1) && func_417(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_461(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_355(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (MISC::IS_BIT_SET(iVar5, 0))
												{
													return iVar6;
												}
												else if (MISC::IS_BIT_SET(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (MISC::IS_BIT_SET(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1323594[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
										else if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 1))
										{
											return iVar6;
										}
									}
									else if (MISC::IS_BIT_SET(Global_1323594[iVar7 /*141*/].f_102, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if (((func_15(5393, iParam4, 0) != 0 && func_19(15270, iParam4, -1) == 7) && !Global_262145.f_20483) && func_417(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_459(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_358(iParam4) && func_417(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_459(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

int func_459(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_417(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_461(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_355(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_15(func_228(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_15(func_228(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (MISC::IS_BIT_SET(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1323594[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 1:
			iVar1 = -1;
			if (func_417(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_461(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_355(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_15(func_228(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1323594[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_417(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_461(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_355(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_15(func_228(1, iVar1), iParam4, 0);
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_417(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_461(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_355(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_15(func_228(1, iVar1), iParam4, 0);
						if (MISC::IS_BIT_SET(iVar0, 1) && !MISC::IS_BIT_SET(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 2:
			iVar1 = -1;
			if (func_417(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_461(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_355(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_15(func_228(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_15(func_228(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (MISC::IS_BIT_SET(iVar0, 0))
								{
									return iParam0;
								}
								else if (MISC::IS_BIT_SET(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (MISC::IS_BIT_SET(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1323594[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
						else if (MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 1))
						{
							return iParam0;
						}
					}
					else if (MISC::IS_BIT_SET(Global_1323594[iVar1 /*141*/].f_102, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
	}
	return 0;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (func_399(iParam0, iParam2) - 1);
}

int func_462(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_463(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	bVar6 = func_67();
	bVar6 = true;
	if (func_234(iParam3, 0, 0))
	{
		iParam3 = func_462(iParam3);
	}
	if (!func_347(iParam2) && func_425(iParam2, 0))
	{
		iVar7 = func_424(iParam2);
		return func_465(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 22)
	{
		if ((bVar6 || func_356(iVar1, iParam4) > 0) && !func_460(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_356(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_231(iVar1, -1);
				}
				else
				{
					iVar4 = Global_1049815[func_356(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_336(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_396(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_464(iParam2, iVar7))
							{
								if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (MISC::IS_BIT_SET(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_464(iParam2, iVar7))
							{
								if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_464(iParam2, iVar7))
								{
									iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
									if (MISC::IS_BIT_SET(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_464(iParam2, iVar7))
							{
								iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
								if (MISC::IS_BIT_SET(iVar5, 1) && !MISC::IS_BIT_SET(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_464(iParam2, iVar7))
							{
								if (func_15(func_228(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_15(func_228(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (MISC::IS_BIT_SET(iVar5, 0))
										{
											return iVar7;
										}
										else if (MISC::IS_BIT_SET(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (MISC::IS_BIT_SET(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_15(5393, iParam4, 0) != 0 && !Global_262145.f_20483) && func_417(iParam2, 156))
	{
		iVar7 = func_465(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_358(iParam4) && func_417(iParam2, 223))
	{
		iVar7 = func_465(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_464(int iParam0, int iParam1)
{
	if (!func_347(iParam0))
	{
		if (func_425(iParam0, 0))
		{
			if (iParam1 == func_424(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_426(iParam1) && func_423(iParam1))
		{
			return 0;
		}
	}
	if (func_336(iParam0))
	{
		if (!func_243(iParam1))
		{
			return 0;
		}
	}
	else if (func_243(iParam1))
	{
		return 0;
	}
	if (func_420(iParam1))
	{
		if (!func_309(iParam0))
		{
			return 0;
		}
	}
	else if (func_309(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_465(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (iParam0 == 158 && iParam6)
	{
		if (func_464(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_15(func_228(4, iParam0), iParam5, 0) == joaat("HAULER2") || func_15(func_228(4, iParam0), iParam5, 0) == joaat("PHANTOM3"))
				{
					return iParam0;
				}
				else if (func_15(func_228(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1323594[iParam0 /*141*/].f_66 == joaat("HAULER2") || Global_1323594[iParam0 /*141*/].f_66 == joaat("PHANTOM3"))
			{
				return iParam0;
			}
			else if (Global_1323594[iParam0 /*141*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_464(iParam3, iParam0))
				{
					if (func_15(func_228(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_15(func_228(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_464(iParam3, iParam0))
				{
					if (func_15(func_228(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_464(iParam3, iParam0))
					{
						iVar0 = func_15(func_228(1, iParam0), iParam5, 0);
						if (MISC::IS_BIT_SET(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_464(iParam3, iParam0))
				{
					iVar0 = func_15(func_228(1, iParam0), iParam5, 0);
					if (MISC::IS_BIT_SET(iVar0, 1) && !MISC::IS_BIT_SET(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			
			case 2:
				if (func_464(iParam3, iParam0))
				{
					if (func_15(func_228(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_15(func_228(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
							else if (MISC::IS_BIT_SET(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (MISC::IS_BIT_SET(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_464(iParam3, iParam0))
				{
				}
				else if (Global_1323594[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
				}
				break;
			
			case 1:
				if (!func_464(iParam3, iParam0))
				{
				}
				else if (Global_1323594[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_464(iParam3, iParam0))
					{
					}
					else if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
				}
				if (!func_464(iParam3, iParam0))
				{
				}
				else if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 2))
				{
					return iParam0;
				}
				else if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 1))
				{
				}
				break;
			
			case 2:
				if (!func_464(iParam3, iParam0))
				{
				}
				else if (Global_1323594[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
					else if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 1))
					{
						return iParam0;
					}
				}
				else if (MISC::IS_BIT_SET(Global_1323594[iParam0 /*141*/].f_102, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_466(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = func_67();
	bVar5 = true;
	if (func_234(iParam3, 0, 0))
	{
		iParam3 = func_462(iParam3);
	}
	if (!func_347(iParam2) && func_425(iParam2, 0))
	{
		iVar6 = func_424(iParam2);
		return func_465(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 22)
	{
		if (func_460(iVar1))
		{
		}
		else if (!bVar5 && func_356(iVar1, iParam4) >= Global_1049815)
		{
			return -1;
		}
		else if (bVar5 || (func_356(iVar1, iParam4) > 0 && func_356(iVar1, iParam4) <= 125))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_356(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_231(iVar1, -1);
				}
				else
				{
					iVar4 = Global_1049815[func_356(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_336(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_396(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_464(iParam2, iVar6))
							{
							}
							else if (Global_1323594[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_464(iParam2, iVar6))
							{
							}
							else if (Global_1323594[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_464(iParam2, iVar6))
								{
								}
								else if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_464(iParam2, iVar6))
							{
							}
							else if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 2))
							{
								return iVar6;
							}
							else if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 1))
							{
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_464(iParam2, iVar6))
							{
							}
							else if (Global_1323594[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
								else if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 1))
								{
									return iVar6;
								}
							}
							else if (MISC::IS_BIT_SET(Global_1323594[iVar6 /*141*/].f_102, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_15(5393, iParam4, 0) != 0 && !Global_262145.f_20483) && func_417(iParam2, 156))
	{
		iVar6 = func_465(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_358(iParam4))
	{
		if (func_464(iParam2, 223))
		{
			iVar6 = func_465(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_467(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (func_356(0, -1) >= 1 && func_437(iParam0, 0))
	{
		if (((((((((func_356(1, -1) >= 1 || (func_356(6, -1) >= 1 && func_437(iParam0, 6))) || func_356(8, -1) >= 1) || func_474()) || (func_472() && func_417(iParam0, 159))) || (func_470() && func_437(iParam0, 13))) || (func_468() && func_437(iParam0, 14))) || (func_358(-1) && iParam0 == joaat("oppressor2"))) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = func_356(0, -1);
		return;
	}
	else if (func_356(6, -1) >= 1 && func_437(iParam0, 6))
	{
		if (((((((func_356(8, -1) >= 1 || func_474()) || (func_472() && func_417(iParam0, 159))) || (func_470() && func_437(iParam0, 13))) || (func_468() && func_437(iParam0, 14))) || (func_358(-1) && iParam0 == joaat("oppressor2"))) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = func_356(6, -1);
		return;
	}
	else if (func_356(8, -1) >= 1 && func_437(iParam0, 8))
	{
		if ((((((func_474() || (func_472() && func_417(iParam0, 159))) || (func_470() && func_437(iParam0, 13))) || (func_468() && func_437(iParam0, 14))) || (func_358(-1) && iParam0 == joaat("oppressor2"))) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = func_356(8, -1);
		return;
	}
	else if (func_474() && func_417(iParam0, 156))
	{
		if ((((((func_472() && func_417(iParam0, 159)) || (func_470() && func_437(iParam0, 13))) || (func_468() && func_437(iParam0, 14))) || (func_358(-1) && iParam0 == joaat("oppressor2"))) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_472() && func_417(iParam0, 159))
	{
		if (((((func_470() && func_437(iParam0, 13)) || (func_468() && func_437(iParam0, 14))) || (func_358(-1) && iParam0 == joaat("oppressor2"))) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = func_356(12, -1);
		return;
	}
	else if (func_470() && func_437(iParam0, 13))
	{
		if (((func_468() && func_437(iParam0, 14)) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		if (func_358(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_356(13, -1);
		return;
	}
	else if (func_468() && func_437(iParam0, 14))
	{
		if ((((func_468() && func_356(15, -1) >= 1) && func_437(iParam0, 15)) || (func_356(18, -1) >= 1 && func_437(iParam0, 18))) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		if (func_358(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_356(14, -1);
		return;
	}
	else if (func_358(-1) && iParam0 == joaat("oppressor2"))
	{
		if ((func_356(18, -1) >= 1 && func_437(iParam0, 18)) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_356(18, -1) >= 1 && func_437(iParam0, 18))
	{
		if ((func_356(19, -1) >= 1 && func_437(iParam0, 18)) || (func_356(21, -1) >= 1 && func_437(iParam0, 21)))
		{
			return;
		}
		*iParam1 = func_356(18, -1);
		return;
	}
	else if (func_356(21, -1) >= 1 && func_437(iParam0, 21))
	{
		*iParam1 = func_356(21, -1);
		return;
	}
}

bool func_468()
{
	return func_469() != 0;
}

int func_469()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_316;
}

bool func_470()
{
	return func_471() != 0;
}

int func_471()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_265;
}

bool func_472()
{
	return func_473() != 0;
}

int func_473()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_258;
}

bool func_474()
{
	return func_15(5393, -1, 0) != 0;
}

int func_475(int iParam0, int iParam1)
{
	if (func_356(0, iParam1) != 0 && func_437(iParam0, 0))
	{
		return 1;
	}
	else if (func_356(6, iParam1) != 0 && func_437(iParam0, 6))
	{
		return 1;
	}
	else if (func_356(8, iParam1) != 0 && func_437(iParam0, 8))
	{
		return 1;
	}
	else if (func_356(11, iParam1) != 0 && func_437(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (((func_15(5393, iParam1, 0) != 0 && func_19(15270, iParam1, -1) == 7) && !Global_262145.f_20483) && func_417(iParam0, 156))
	{
		return 1;
	}
	else if (func_356(12, iParam1) != 0 && func_437(iParam0, 12))
	{
		return 1;
	}
	else if (func_356(13, -1) != 0 && func_437(iParam0, 13))
	{
		return 1;
	}
	else if (func_356(15, iParam1) != 0 && func_437(iParam0, 15))
	{
		return 1;
	}
	else if (func_358(iParam1) && func_417(iParam0, 223))
	{
		return 1;
	}
	else if (func_356(14, -1) != 0 && func_437(iParam0, 14))
	{
		return 1;
	}
	else if (func_356(18, iParam1) != 0 && func_437(iParam0, 18))
	{
		return 1;
	}
	else if (func_356(21, iParam1) != 0 && func_437(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_476()
{
	int iVar0;
	int iVar1;
	
	if (func_160(joaat("MPPLY_LW_PODIUM_VEH_MODEL")) != Global_262145.f_25746)
	{
		return 0;
	}
	iVar0 = func_15(8350, -1, 0);
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iVar1 > iVar0)
	{
		return 0;
	}
	return 1;
}

int func_477(var uParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, struct<92> Param6, var uParam7)
{
	switch (iParam4)
	{
		case 0:
			return func_670(sParam1, iParam5, -1, 1);
			break;
		
		case 1:
			return func_565(sParam1, iParam2, uParam3);
			break;
		
		case 2:
			return func_619(uParam0, sParam1, uParam7, -1, 1);
			break;
		
		case 3:
			return func_649(uParam0, sParam1, -1, 1);
			break;
		
		case 4:
			return func_662(uParam0, sParam1, -1, 1);
			break;
		
		case 5:
			return func_520(sParam1, uParam3, Param6);
			break;
		
		case 6:
			if (func_518())
			{
				return func_478(sParam1, func_489(0));
			}
			else
			{
				MISC::CLEAR_BIT(iParam5, 19);
			}
			break;
	}
	return 0;
}

int func_478(char* sParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 5;
				func_484(iVar0);
				break;
			
			case 1:
				iVar0 = func_482(PLAYER::PLAYER_ID(), 1);
				func_484(iVar0);
				break;
			
			case 2:
				iVar0 = func_482(PLAYER::PLAYER_ID(), 3);
				func_484(iVar0);
				break;
			
			case 3:
				iVar0 = func_482(PLAYER::PLAYER_ID(), 4);
				func_484(iVar0);
				break;
			
			case 4:
				iVar0 = func_482(PLAYER::PLAYER_ID(), 2);
				func_484(iVar0);
				break;
			
			case 5:
				iVar0 = func_482(PLAYER::PLAYER_ID(), 0);
				func_484(iVar0);
				break;
			
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				func_480(func_481(iParam1));
				break;
		}
		StringCopy(sParam0, func_479(iParam1), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMDO_OBJ_140";
			break;
		
		case 1:
			return "AMDO_OBJ_136";
			break;
		
		case 2:
			return "AMDO_OBJ_138";
			break;
		
		case 3:
			return "AMDO_OBJ_135";
			break;
		
		case 4:
			return "AMDO_OBJ_137";
			break;
		
		case 5:
			return "AMDO_OBJ_139";
			break;
		
		case 6:
			return "BYCB_FREEL";
			break;
		
		case 7:
			return "BYCB_SASHDE";
			break;
		
		case 8:
			return "BYCB_MGUN";
			break;
		
		case 9:
			return "BYCB_EGG";
			break;
		
		case 10:
			return "BYCB_DMND";
			break;
		
		case 11:
			return "BYCB_WATCH";
			break;
	}
	return "INVALID";
}

void func_480(int iParam0)
{
	if (0 == iParam0)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "CASINO_LUCKY_WHEEL"))
	{
		return;
	}
	Global_1689933 = iParam0;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5;
		
		case 7:
			return 4;
		
		case 8:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 3;
		
		case 11:
			return 6;
		
		default:
	}
	return 0;
}

int func_482(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
		{
			if (func_483(Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/]) == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

void func_484(int iParam0)
{
	int iVar0;
	
	if (!func_488(iParam0))
	{
		return;
	}
	iVar0 = func_487(PLAYER::PLAYER_ID(), iParam0);
	MISC::SET_BIT(&Global_2505896, iParam0);
	Global_1365043[iParam0] = 0;
	Global_2505897[iParam0] = func_485(PLAYER::PLAYER_ID(), iVar0);
}

int func_485(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_486(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_486(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_487(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_486(Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/]))
	{
		uVar0 = Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_488(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_489(int iParam0)
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 12)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_490(iVar0[iVar2], iParam0));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (iVar3 <= func_490(iVar0[iVar2], iParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_490(iVar0[iVar2], iParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_490(int iParam0, var uParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (func_516(PLAYER::PLAYER_ID()))
			{
				iVar0 = func_487(PLAYER::PLAYER_ID(), 5);
				if (((func_514(PLAYER::PLAYER_ID(), iVar0) && func_512(PLAYER::PLAYER_ID(), 5)) && func_485(PLAYER::PLAYER_ID(), iVar0) < 80) || uParam1)
				{
					return Global_262145.f_25835;
				}
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (func_510(PLAYER::PLAYER_ID(), func_511(iParam0)))
			{
				if (func_507(func_511(iParam0)) || uParam1)
				{
					return Global_262145.f_25835;
				}
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (func_493() || uParam1)
			{
				if (!func_491(iParam0) || uParam1)
				{
					return Global_262145.f_25835;
				}
			}
			break;
	}
	return 0;
}

bool func_491(int iParam0)
{
	int iVar0;
	
	iVar0 = func_481(iParam0);
	return func_492(iVar0);
}

int func_492(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1671007[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_493()
{
	if ((func_506(PLAYER::PLAYER_ID()) && func_501() < 6) && func_494())
	{
		return 1;
	}
	return 0;
}

int func_494()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iVar0 /*3*/] != 0)
		{
			if (!func_495(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iVar0 /*3*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_495(int iParam0)
{
	return 0 == func_496(iParam0);
}

int func_496(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_500(iParam0))
	{
		iVar0 = func_499(iParam0);
		iVar1 = func_497(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_497(int iParam0)
{
	if (func_498(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_498(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_499(int iParam0)
{
	int iVar0;
	
	if (func_498(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iVar0 /*3*/])
			{
				return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	if (func_498(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_501()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_505(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_502(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	if (func_498(iParam0))
	{
		iVar0 = func_503(func_504(iParam0));
		return func_15(iVar0, -1, 0);
	}
	return 0;
}

int func_503(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_504(int iParam0)
{
	int iVar0;
	
	if (func_498(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_505(int iParam0)
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iParam0 /*3*/] != 0)
	{
		return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_100[iParam0 /*3*/];
	}
	return 0;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_100[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_507(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_487(PLAYER::PLAYER_ID(), iVar0);
		if (iVar1 != 0)
		{
			if (func_483(iVar1) == iParam0)
			{
				if (((func_514(PLAYER::PLAYER_ID(), iVar1) && func_508(PLAYER::PLAYER_ID(), iVar0)) && func_512(PLAYER::PLAYER_ID(), iVar0)) && func_485(PLAYER::PLAYER_ID(), iVar1) < 80)
				{
					return 1;
				}
				else
				{
					if (!func_514(PLAYER::PLAYER_ID(), iVar1))
					{
					}
					if (!func_508(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (!func_512(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (func_485(PLAYER::PLAYER_ID(), iVar1) >= 80)
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = func_487(iParam0, iParam1);
	iVar2 = func_483(iVar1);
	switch (iVar2)
	{
		case 1:
			if (func_509(iParam0, iVar1) > 8)
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (func_509(iParam0, iVar1) > 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (func_509(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0:
			if (func_509(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (func_509(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if (func_509(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_509(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_486(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_510(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/];
			if (func_483(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 3;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		default:
	}
	return -1;
}

int func_512(int iParam0, int iParam1)
{
	if (iParam0 != func_8() && func_513(iParam0, func_487(iParam0, iParam1)))
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/].f_6;
	}
	return 0;
}

int func_513(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_486(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_513(iParam0, iParam1))
	{
		iVar0 = func_515(iParam0, iParam1);
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_4 > 0 && Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_515(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_486(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_516(int iParam0)
{
	return func_517(iParam0) != 0;
}

int func_517(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_177[5 /*12*/];
}

int func_518()
{
	bool bVar0;
	int iVar1[5];
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_516(PLAYER::PLAYER_ID()))
	{
		iVar3 = func_487(PLAYER::PLAYER_ID(), 5);
		if ((func_514(PLAYER::PLAYER_ID(), iVar3) && func_512(PLAYER::PLAYER_ID(), 5)) && func_485(PLAYER::PLAYER_ID(), iVar3) < 80)
		{
			bVar0 = true;
		}
		if (!func_514(PLAYER::PLAYER_ID(), iVar3))
		{
		}
		if (!func_512(PLAYER::PLAYER_ID(), 5))
		{
		}
		if (func_485(PLAYER::PLAYER_ID(), iVar3) >= 80)
		{
		}
	}
	if (func_519(PLAYER::PLAYER_ID()))
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			iVar5 = func_487(PLAYER::PLAYER_ID(), iVar4);
			if ((((iVar5 != 0 && func_514(PLAYER::PLAYER_ID(), iVar5)) && func_508(PLAYER::PLAYER_ID(), iVar4)) && func_512(PLAYER::PLAYER_ID(), iVar4)) && func_485(PLAYER::PLAYER_ID(), iVar5) < 80)
			{
				iVar1[iVar4] = 1;
			}
			if (iVar5 == 0)
			{
			}
			else
			{
				if (!func_514(PLAYER::PLAYER_ID(), iVar5))
				{
				}
				if (!func_508(PLAYER::PLAYER_ID(), iVar4))
				{
				}
				if (!func_512(PLAYER::PLAYER_ID(), iVar4))
				{
				}
				if (func_485(PLAYER::PLAYER_ID(), iVar5) >= 80)
				{
				}
			}
			iVar4++;
		}
	}
	if (func_493())
	{
		iVar6 = 6;
		while (iVar6 <= 11)
		{
			if (!func_491(iVar6))
			{
				bVar2 = true;
			}
			iVar6++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iVar7 = 0;
	while (iVar7 < 5)
	{
		if (iVar1[iVar7])
		{
			return 1;
		}
		iVar7++;
	}
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_519(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_520(char* sParam0, var uParam1, struct<92> Param2)
{
	if (!MISC::IS_BIT_SET(uParam1->f_288, 0))
	{
		uParam1->f_289 = func_563();
		MISC::SET_BIT(&(uParam1->f_288), 0);
	}
	else if (uParam1->f_289 == -1)
	{
	}
	else
	{
		switch (uParam1->f_289)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				return func_556(sParam0, uParam1->f_289, uParam1, Param2);
			
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				return func_548(sParam0, uParam1, uParam1->f_289, 0);
			
			case 14:
				return func_548(sParam0, uParam1, uParam1->f_289, 1);
			
			case 15:
				if (func_547(PLAYER::PLAYER_ID()) >= 5)
				{
					func_522(func_14(), func_172(func_546(PLAYER::PLAYER_ID(), 1), 0));
					func_521();
					StringCopy(sParam0, "CAS_LW_ARMU", 64);
					return 1;
					break;
				}
				MISC::CLEAR_BIT(&(uParam1->f_288), 0);
			}
		
		default:
	}
	return 0;
}

void func_521()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = SYSTEM::ROUND((50f * Global_262145.f_110));
		func_12(816, iVar0, -1, 1, 0);
		iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
		iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
		iVar3 = (iVar1 - iVar2);
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
	}
}

void func_522(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 >= func_545(238))
	{
		func_531(238, 1, 0);
	}
	if (iParam1 >= func_545(239))
	{
		func_531(239, 1, 0);
	}
	if (iParam1 >= func_545(240))
	{
		func_531(240, 1, 0);
	}
	if (iParam1 >= func_545(241))
	{
		func_531(241, 1, 0);
	}
	if (iParam1 >= func_545(242))
	{
		func_531(242, 1, 0);
	}
	if (iParam1 >= func_545(243))
	{
		func_531(243, 1, 0);
	}
	if (iParam1 >= func_545(244))
	{
		func_531(244, 1, 0);
	}
	if (iParam1 >= func_545(245))
	{
		func_531(245, 1, 0);
	}
	if (iParam1 >= func_545(246))
	{
		func_531(246, 1, 0);
	}
	if (iParam1 >= func_545(247))
	{
		func_531(247, 1, 0);
	}
	if (iParam1 >= func_545(156))
	{
		func_531(156, 1, 0);
	}
	if (iParam1 >= func_545(157))
	{
		func_531(157, 1, 0);
	}
	if (iParam1 >= func_545(158))
	{
		func_531(158, 1, 0);
	}
	if (iParam1 >= func_545(159))
	{
		func_531(159, 1, 0);
	}
	if (iParam1 >= func_545(160))
	{
		func_531(160, 1, 0);
	}
	iVar0 = 0;
	if (func_523(238))
	{
		iVar0++;
	}
	if (func_523(239))
	{
		iVar0++;
	}
	if (func_523(240))
	{
		iVar0++;
	}
	if (func_523(241))
	{
		iVar0++;
	}
	if (func_523(242))
	{
		iVar0++;
	}
	if (func_523(243))
	{
		iVar0++;
	}
	if (func_523(244))
	{
		iVar0++;
	}
	if (func_523(245))
	{
		iVar0++;
	}
	if (func_523(246))
	{
		iVar0++;
	}
	if (func_523(247))
	{
		iVar0++;
	}
	if (func_523(156))
	{
		func_12(1879, iVar0, iParam0, 1, 0);
	}
	if (func_523(157))
	{
		func_12(1880, iVar0, iParam0, 1, 0);
	}
	if (func_523(158))
	{
		func_12(1881, iVar0, iParam0, 1, 0);
	}
	if (func_523(159))
	{
		func_12(1882, iVar0, iParam0, 1, 0);
	}
	if (func_523(160))
	{
		func_12(1883, iVar0, iParam0, 1, 0);
	}
}

bool func_523(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_530())
	{
		return 0;
	}
	iVar0 = func_525(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_524(iVar1));
}

int func_524(int iParam0)
{
	return (iParam0 % 32);
}

int func_525(var uParam0)
{
	int iVar0;
	
	iVar0 = func_15(func_526(uParam0, 999), -1, 0);
	return iVar0;
}

int func_526(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_529(iVar0);
	if (((func_528() == 0 || func_527() == 0) || iParam1 == 0) || (func_528() == 999 && func_527() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 696;
				break;
			
			case 1:
				return 697;
				break;
			
			case 2:
				return 698;
				break;
			
			case 3:
				return 699;
				break;
			
			case 4:
				return 700;
				break;
			
			case 5:
				return 701;
				break;
			
			case 6:
				return 702;
				break;
			
			case 7:
				return 703;
				break;
			
			case 8:
				return 704;
				break;
			
			case 9:
				return 2053;
				break;
			
			case 10:
				return 2065;
				break;
			
			case 11:
				return 2092;
				break;
			
			case 12:
				return 2428;
				break;
			
			case 13:
				return 2947;
				break;
			
			case 14:
				return 5510;
				break;
			
			case 15:
				return 5514;
				break;
			
			case 16:
				return 5518;
				break;
			
			case 17:
				return 5522;
				break;
			
			case 18:
				return 5526;
				break;
			
			case 19:
				return 5530;
				break;
			
			case 20:
				return 5590;
				break;
			
			case 21:
				return 5594;
				break;
			
			case 22:
				return 5598;
				break;
			
			case 23:
				return 5602;
				break;
			
			case 24:
				return 5606;
				break;
			
			case 25:
				return 5610;
				break;
			
			case 26:
				return 5614;
				break;
			
			case 27:
				return 5635;
				break;
			
			case 28:
				return 5639;
				break;
			
			case 29:
				return 5643;
				break;
			
			case 30:
				return 5647;
				break;
			
			case 31:
				return 5651;
				break;
			
			case 32:
				return 5655;
				break;
			
			case 33:
				return 6465;
				break;
			
			case 34:
				return 6469;
				break;
			
			case 35:
				return 6473;
				break;
			
			case 36:
				return 6477;
				break;
			
			case 37:
				return 6481;
				break;
			
			case 38:
				return 6485;
				break;
			
			case 39:
				return 6489;
				break;
			}
	}
	return 10383;
}

int func_527()
{
	return Global_25766;
}

int func_528()
{
	return Global_25765;
}

int func_529(int iParam0)
{
	return (iParam0 / 32);
}

bool func_530()
{
	return Global_1312846;
}

void func_531(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_523(iParam0))
		{
			func_544(iParam0, 1);
		}
		if (bParam2)
		{
			if (func_542(iParam0) == 0)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(func_541(iParam0));
				HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK(func_540(iParam0), 2, func_541(iParam0));
				if (AUDIO::HAS_SOUND_FINISHED(-1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
				}
				func_533(29, func_541(iParam0), func_539(iParam0), func_537(iParam0), func_535(iParam0), -1, 0, 0, 0, -1, 0);
				func_532(iParam0, 1);
			}
		}
	}
	else if (func_523(iParam0))
	{
		func_544(iParam0, 0);
	}
}

void func_532(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2538129.f_1011[func_529(iVar0)]), func_524(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2538129.f_1011[func_529(iVar0)]), func_524(iVar0));
		}
	}
}

void func_533(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_534(&Global_1379695);
	Global_1379695[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1379695[iVar0 /*106*/].f_97 = iParam5;
	Global_1379695[iVar0 /*106*/].f_104 = iParam9;
	Global_1379695[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1379695[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_534(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_535(int iParam0)
{
	char* sVar0;
	
	sVar0 = "MpAwards1";
	switch (iParam0)
	{
		case 155:
			return func_536(joaat("WEAPON_SMOKEGRENADE"), 0);
			break;
	}
	return sVar0;
}

char* func_536(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0";
			break;
		
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("COMPONENT_SMG_CLIP_01"):
				case joaat("COMPONENT_SMG_CLIP_02"):
				case joaat("COMPONENT_AT_PI_SUPP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_RAILCOVER_01"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_SUPP"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP"):
				case joaat("COMPONENT_AT_PI_FLSH"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0";
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon";
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon";
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_SUPP"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
				case joaat("COMPONENT_AT_PI_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("COMPONENT_MG_CLIP_01"):
				case joaat("COMPONENT_MG_CLIP_02"):
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
				case joaat("COMPONENT_AT_PI_FLSH"):
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon";
			break;
	}
	return "";
}

char* func_537(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GenericKit";
	switch (iParam0)
	{
		case 155:
			return func_538(joaat("WEAPON_SMOKEGRENADE"), 0, 0);
			break;
	}
	return sVar0;
}

char* func_538(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return "W_ME_KNIFE_01";
				break;
			
			case joaat("WEAPON_STUNGUN"):
				return "W_PI_Stungun";
				break;
			
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_Pistol";
						break;
					
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						return "W_PI_Pistol_Mag1";
						break;
					
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						return "W_PI_Pistol_Mag2";
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_Pistol_Flash";
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						return "W_PI_Pistol_Supp";
						break;
				}
				break;
			
			case joaat("GADGET_PARACHUTE"):
				return "Parachute_Main";
				break;
			
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_SMG";
						break;
					
					case joaat("COMPONENT_SMG_CLIP_01"):
						return "W_SB_SMG_Mag1";
						break;
					
					case joaat("COMPONENT_SMG_CLIP_02"):
						return "W_SB_SMG_Mag2";
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_SB_SMG_Supp";
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_SB_SMG_Flash";
						break;
				}
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_SniperRifle";
						break;
					
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						return "W_SR_SniperRifle_Mag1";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						return "W_SR_SniperRifle_Scope";
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SR_SniperRifle_Supp";
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_CarbineRifle";
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						return "W_AR_CarbineRifle_Mag1";
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						return "W_AR_CarbineRifle_Mag2";
						break;
					
					case joaat("COMPONENT_AT_RAILCOVER_01"):
						return "CarbineRifle_RAILCOVER_1";
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_AR_CarbineRifle_Grip";
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_AR_CarbineRifle_Flash";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "W_AR_CarbineRifle_Scope";
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						return "W_AR_CarbineRifle_Supp";
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_PumpShotgun";
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP"):
						return "W_SG_PumpShotgun_Supp";
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_SG_PumpShotgun_Flash";
						break;
				}
				break;
			
			case joaat("WEAPON_GRENADE"):
				return "W_Ex_GrenadeFrag";
				break;
			
			case joaat("WEAPON_STICKYBOMB"):
				return "W_Ex_PE";
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case 0:
						return "W_R_GrenadeLauncher";
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_R_GrenadeLauncher_Grip";
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_R_GrenadeLauncher_Flash";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						return "W_R_GrenadeLauncher_Scope";
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_CombatMG";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "W_MG_CombatMG_Scope";
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_MG_CombatMG_Grip";
						break;
					
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						return "W_MG_CombatMG_Mag2";
						break;
					
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						return "W_MG_CombatMG_Mag1";
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_AssaultShotgun";
						break;
					
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						return "W_SG_AssaultShotgun_Mag1";
						break;
					
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						return "W_SG_AssaultShotgun_Mag2";
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_SG_AssaultShotgun_Grip";
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_SG_AssaultShotgun_Flsh";
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SG_AssaultShotgun_Supp";
						break;
				}
				break;
			
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_AppPistol";
						break;
					
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						return "W_PI_AppPistol_Mag1";
						break;
					
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						return "W_PI_AppPistol_Mag2";
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_AppPistol_Flash";
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_PI_AppPistol_Supp";
						break;
				}
				break;
			
			case joaat("WEAPON_RPG"):
				return "W_LR_RPG";
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_HeavySniper";
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						return "W_SR_HeavySniper_Mag1";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						return "W_SR_HeavySniper_Scope";
						break;
				}
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AdvancedRifle";
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						return "W_AR_AdvancedRifle_mag1";
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						return "W_AR_AdvancedRifle_Mag2";
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "AdvancedRifle_AFGRIP";
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "AssaultRifle_FLASHLIGHT";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "AssaultRifle_SCOPE_SMALL";
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						return "AdvancedRifle_SUPPRESSOR";
						break;
				}
				break;
			
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_MicroSMG";
						break;
					
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						return "W_SB_MicroSMG_Mag1";
						break;
					
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						return "W_SB_MicroSMG_Mag2";
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_SB_MicroSMG_Flash";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						return "W_SB_MicroSMG_Scope";
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SB_MicroSMG_Supp";
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AssaultRifle";
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						return "W_AR_AssaultRifle_Mag1";
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						return "W_AR_AssaultRifle_Mag2";
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_AR_AssaultRifle_Grip";
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_AR_AssaultRifle_Flash";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						return "W_AR_AssaultRifle_Scope";
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_AR_AssaultRifle_Supp";
						break;
				}
				break;
			
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_MG";
						break;
					
					case joaat("COMPONENT_MG_CLIP_01"):
						return "W_MG_MG_Mag1";
						break;
					
					case joaat("COMPONENT_MG_CLIP_02"):
						return "W_MG_MG_Mag2";
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						return "W_MG_MG_Scope";
						break;
				}
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return "W_SG_SAWNOFF";
				break;
			
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_Minigun";
						break;
					
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						return "W_MG_Minigun_Laser";
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_CombatPistol";
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_PI_CombatPistol_Supp";
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_CombatPistol_Flash";
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						return "W_PI_CombatPistol_Mag1";
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						return "W_PI_CombatPistol_Mag2";
						break;
				}
				break;
			
			case joaat("WEAPON_SMOKEGRENADE"):
				return "W_Ex_GrenadeSmoke";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return "W_ME_Knife_SILHOUETTE";
				break;
			
			case joaat("WEAPON_STUNGUN"):
				return "W_PI_Stungun_SILHOUETTE";
				break;
			
			case joaat("WEAPON_PISTOL"):
				return "W_PI_Pistol_SILHOUETTE";
				break;
			
			case joaat("GADGET_PARACHUTE"):
				return "Parachute_Main";
				break;
			
			case joaat("WEAPON_SMG"):
				return "W_SB_SMG_SILHOUETTE";
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				return "W_SR_SniperRifle_SILHOUETTE";
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				return "W_SG_PumpShotgun_SILHOUETTE";
				break;
			
			case joaat("WEAPON_GRENADE"):
				return "W_Ex_GrenadeFrag_SILHOUETTE";
				break;
			
			case joaat("WEAPON_STICKYBOMB"):
				return "W_Ex_PE_SILHOUETTE";
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				return "W_R_GrenadeLauncher_SILHOUETTE";
				break;
			
			case joaat("WEAPON_COMBATMG"):
				return "W_MG_CombatMG_SILHOUETTE";
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return "W_SG_AssaultShotgun_SILHOUETTE";
				break;
			
			case joaat("WEAPON_APPISTOL"):
				return "W_PI_AppPistol_SILHOUETTE";
				break;
			
			case joaat("WEAPON_RPG"):
				return "W_LR_RPG_SILHOUETTE";
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				return "W_SR_HeavySniper_SILHOUETTE";
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return "W_AR_AdvancedRifle_SILHOUETTE";
				break;
			
			case joaat("WEAPON_MICROSMG"):
				return "W_SB_MicroSMG_SILHOUETTE";
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				return "W_AR_AssaultRifle_SILHOUETTE";
				break;
			
			case joaat("WEAPON_MG"):
				return "W_MG_MG_SILHOUETTE";
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return "W_SG_SAWNOFF_SILHOUETTE";
				break;
			
			case joaat("WEAPON_MINIGUN"):
				return "W_MG_Minigun_SILHOUETTE";
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				return "W_PI_CombatPistol_SILHOUETTE";
				break;
			
			case joaat("WEAPON_SMOKEGRENADE"):
				return "W_Ex_GrenadeSmoke_SILHOUETTE";
				break;
			}
	}
	return "";
}

char* func_539(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "WT_PARA";
			break;
		
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
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
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
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
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
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
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return "WM_TINTD";
			break;
	}
	return sVar0;
}

char* func_540(int iParam0)
{
	switch (iParam0)
	{
		case 56:
		case 76:
		case 96:
		case 116:
			return "TINT_PISTOL";
			break;
		
		case 57:
		case 77:
		case 97:
		case 117:
			return "TINT_CMBTPISTOL";
			break;
		
		case 58:
		case 78:
		case 98:
		case 118:
			return "TINT_APPISTOL";
			break;
		
		case 59:
		case 79:
		case 99:
		case 119:
			return "TINT_MICROSMG";
			break;
		
		case 60:
		case 80:
		case 100:
		case 120:
			return "TINT_SMG";
			break;
		
		case 61:
		case 81:
		case 101:
		case 121:
			return "TINT_ASLTRIFLE";
			break;
		
		case 62:
		case 82:
		case 102:
		case 122:
			return "TINT_CRBNRIFLE";
			break;
		
		case 63:
		case 83:
		case 103:
		case 123:
			return "TINT_ADVRRIFLE";
			break;
		
		case 64:
		case 84:
		case 104:
		case 124:
			return "TINT_MG";
			break;
		
		case 65:
		case 85:
		case 105:
		case 125:
			return "TINT_CMBTMG";
			break;
		
		case 66:
		case 86:
		case 106:
		case 126:
			return "TINT_PUMP";
			break;
		
		case 67:
		case 87:
		case 107:
		case 127:
			return "TINT_SAWOFF";
			break;
		
		case 68:
		case 88:
		case 108:
		case 128:
			return "TINT_ASLTSHTGN";
			break;
		
		case 71:
		case 91:
		case 111:
		case 131:
			return "TINT_SNIPERRFL";
			break;
		
		case 72:
		case 92:
		case 112:
		case 132:
			return "TINT_HVYSNIPER";
			break;
		
		case 73:
		case 93:
		case 113:
		case 133:
			return "TINT_GRNLAUNCH";
			break;
		
		case 74:
		case 94:
		case 114:
		case 134:
			return "TINT_RPG";
			break;
		
		case 75:
		case 95:
		case 115:
		case 135:
			return "TINT_MINIGUN";
			break;
		
		case 192:
		case 163:
		case 164:
		case 165:
			return "TINT_ASSAULTSMG";
			break;
		
		case 169:
		case 170:
		case 171:
			return "TINT_ASSAULTSNIPER";
			break;
		
		case 175:
		case 176:
		case 177:
		case 194:
			return "TINT_Pistol50";
			break;
		
		case 181:
		case 182:
		case 183:
		case 193:
			return "TINT_ASSAULTMG";
			break;
		
		case 187:
		case 188:
		case 189:
		case 191:
			return "TINT_HEAVYRIFLE";
			break;
	}
	return "WEAPON_UNLOCK";
}

char* func_541(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
			return "AWT_651";
		
		case 17:
			return "AWT_651";
		
		case 18:
			return "AWT_651";
		
		case 19:
			return "AWT_651";
		
		case 20:
			return "AWT_651";
		
		case 21:
			return "AWT_651";
		
		case 22:
			return "AWT_651";
		
		case 23:
			return "AWT_651";
		
		case 24:
			return "AWT_651";
		
		case 25:
			return "AWT_651";
		
		case 26:
			return "AWT_651";
		
		case 27:
			return "AWT_651";
		
		case 28:
			return "AWT_651";
		
		case 29:
			return "AWT_651";
		
		case 30:
			return "AWT_651";
		
		case 31:
			return "AWT_651";
		
		case 32:
			return "AWT_651";
		
		case 33:
			return "AWT_651";
		
		case 34:
			return "AWT_651";
		
		case 35:
			return "AWT_651";
		
		case 36:
			return "AWT_650";
		
		case 37:
			return "AWT_650";
		
		case 38:
			return "AWT_650";
		
		case 39:
			return "AWT_650";
		
		case 40:
			return "AWT_650";
		
		case 41:
			return "AWT_650";
		
		case 42:
			return "AWT_650";
		
		case 43:
			return "AWT_650";
		
		case 44:
			return "AWT_650";
		
		case 45:
			return "AWT_650";
		
		case 46:
			return "AWT_650";
		
		case 47:
			return "AWT_650";
		
		case 48:
			return "AWT_650";
		
		case 49:
			return "AWT_650";
		
		case 50:
			return "AWT_650";
		
		case 51:
			return "AWT_650";
		
		case 52:
			return "AWT_650";
		
		case 53:
			return "AWT_650";
		
		case 54:
			return "AWT_650";
		
		case 55:
			return "AWT_650";
		
		case 136:
			return "AWT_657";
		
		case 137:
			return "AWT_657";
		
		case 138:
			return "AWT_657";
		
		case 139:
			return "AWT_657";
		
		case 140:
			return "AWT_657";
		
		case 141:
			return "AWT_657";
		
		case 142:
			return "AWT_657";
		
		case 143:
			return "AWT_657";
		
		case 144:
			return "AWT_657";
		
		case 145:
			return "AWT_657";
		
		case 146:
			return "AWT_657";
		
		case 147:
			return "AWT_657";
		
		case 148:
			return "AWT_657";
		
		case 149:
			return "AWT_657";
		
		case 150:
			return "AWT_657";
		
		case 151:
			return "AWT_657";
		
		case 152:
			return "AWT_657";
		
		case 153:
			return "AWT_657";
		
		case 154:
			return "AWT_657";
		
		case 155:
			return "AWT_657";
		
		case 56:
			return "TAN_TINT_HEAD";
			break;
		
		case 57:
			return "TAN_TINT_HEAD";
			break;
		
		case 58:
			return "TAN_TINT_HEAD";
			break;
		
		case 59:
			return "TAN_TINT_HEAD";
			break;
		
		case 60:
			return "TAN_TINT_HEAD";
			break;
		
		case 61:
			return "TAN_TINT_HEAD";
			break;
		
		case 62:
			return "TAN_TINT_HEAD";
			break;
		
		case 63:
			return "TAN_TINT_HEAD";
			break;
		
		case 64:
			return "TAN_TINT_HEAD";
			break;
		
		case 65:
			return "TAN_TINT_HEAD";
			break;
		
		case 66:
			return "TAN_TINT_HEAD";
			break;
		
		case 67:
			return "TAN_TINT_HEAD";
			break;
		
		case 68:
			return "TAN_TINT_HEAD";
			break;
		
		case 71:
			return "TAN_TINT_HEAD";
			break;
		
		case 72:
			return "TAN_TINT_HEAD";
			break;
		
		case 73:
			return "TAN_TINT_HEAD";
			break;
		
		case 74:
			return "TAN_TINT_HEAD";
			break;
		
		case 75:
			return "TAN_TINT_HEAD";
			break;
		
		case 76:
			return "GREEN_TINT_HEAD";
			break;
		
		case 77:
			return "GREEN_TINT_HEAD";
			break;
		
		case 78:
			return "GREEN_TINT_HEAD";
			break;
		
		case 79:
			return "GREEN_TINT_HEAD";
			break;
		
		case 80:
			return "GREEN_TINT_HEAD";
			break;
		
		case 81:
			return "GREEN_TINT_HEAD";
			break;
		
		case 82:
			return "GREEN_TINT_HEAD";
			break;
		
		case 83:
			return "GREEN_TINT_HEAD";
			break;
		
		case 84:
			return "GREEN_TINT_HEAD";
			break;
		
		case 85:
			return "GREEN_TINT_HEAD";
			break;
		
		case 86:
			return "GREEN_TINT_HEAD";
			break;
		
		case 87:
			return "GREEN_TINT_HEAD";
			break;
		
		case 88:
			return "GREEN_TINT_HEAD";
			break;
		
		case 91:
			return "GREEN_TINT_HEAD";
			break;
		
		case 92:
			return "GREEN_TINT_HEAD";
			break;
		
		case 93:
			return "GREEN_TINT_HEAD";
			break;
		
		case 94:
			return "GREEN_TINT_HEAD";
			break;
		
		case 95:
			return "GREEN_TINT_HEAD";
			break;
		
		case 96:
			return "RED_TINT_HEAD";
			break;
		
		case 97:
			return "RED_TINT_HEAD";
			break;
		
		case 98:
			return "RED_TINT_HEAD";
			break;
		
		case 99:
			return "RED_TINT_HEAD";
			break;
		
		case 100:
			return "RED_TINT_HEAD";
			break;
		
		case 101:
			return "RED_TINT_HEAD";
			break;
		
		case 102:
			return "RED_TINT_HEAD";
			break;
		
		case 103:
			return "RED_TINT_HEAD";
			break;
		
		case 104:
			return "RED_TINT_HEAD";
			break;
		
		case 105:
			return "RED_TINT_HEAD";
			break;
		
		case 106:
			return "RED_TINT_HEAD";
			break;
		
		case 107:
			return "RED_TINT_HEAD";
			break;
		
		case 108:
			return "RED_TINT_HEAD";
			break;
		
		case 111:
			return "RED_TINT_HEAD";
			break;
		
		case 112:
			return "RED_TINT_HEAD";
			break;
		
		case 113:
			return "RED_TINT_HEAD";
			break;
		
		case 114:
			return "RED_TINT_HEAD";
			break;
		
		case 115:
			return "RED_TINT_HEAD";
			break;
		
		case 116:
			return "BLUE_TINT_HEAD";
			break;
		
		case 117:
			return "BLUE_TINT_HEAD";
			break;
		
		case 118:
			return "BLUE_TINT_HEAD";
			break;
		
		case 119:
			return "BLUE_TINT_HEAD";
			break;
		
		case 120:
			return "BLUE_TINT_HEAD";
			break;
		
		case 121:
			return "BLUE_TINT_HEAD";
			break;
		
		case 122:
			return "BLUE_TINT_HEAD";
			break;
		
		case 123:
			return "BLUE_TINT_HEAD";
			break;
		
		case 124:
			return "BLUE_TINT_HEAD";
			break;
		
		case 125:
			return "BLUE_TINT_HEAD";
			break;
		
		case 126:
			return "BLUE_TINT_HEAD";
			break;
		
		case 127:
			return "BLUE_TINT_HEAD";
			break;
		
		case 128:
			return "BLUE_TINT_HEAD";
			break;
		
		case 131:
			return "BLUE_TINT_HEAD";
			break;
		
		case 132:
			return "BLUE_TINT_HEAD";
			break;
		
		case 133:
			return "BLUE_TINT_HEAD";
			break;
		
		case 134:
			return "BLUE_TINT_HEAD";
			break;
		
		case 135:
			return "BLUE_TINT_HEAD";
			break;
		
		case 163:
			return "TAN_TINT_HEAD";
			break;
		
		case 164:
			return "BLUE_TINT_HEAD";
			break;
		
		case 165:
			return "RED_TINT_HEAD";
			break;
		
		case 169:
			return "TAN_TINT_HEAD";
			break;
		
		case 170:
			return "BLUE_TINT_HEAD";
			break;
		
		case 171:
			return "RED_TINT_HEAD";
			break;
		
		case 175:
			return "TAN_TINT_HEAD";
			break;
		
		case 176:
			return "BLUE_TINT_HEAD";
			break;
		
		case 177:
			return "RED_TINT_HEAD";
			break;
		
		case 181:
			return "TAN_TINT_HEAD";
			break;
		
		case 182:
			return "BLUE_TINT_HEAD";
			break;
		
		case 183:
			return "RED_TINT_HEAD";
			break;
		
		case 187:
			return "TAN_TINT_HEAD";
			break;
		
		case 188:
			return "BLUE_TINT_HEAD";
			break;
		
		case 189:
			return "RED_TINT_HEAD";
			break;
		
		case 191:
			return "GREEN_TINT_HEAD";
			break;
		
		case 192:
			return "GREEN_TINT_HEAD";
			break;
		
		case 193:
			return "GREEN_TINT_HEAD";
			break;
		
		case 194:
			return "GREEN_TINT_HEAD";
			break;
	}
	return sVar0;
}

bool func_542(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_543(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_524(iVar1));
}

var func_543(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_2538129.f_1011[func_529(iParam0)];
	return uVar0;
}

void func_544(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_525(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_524(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_524(iVar1));
		}
		func_12(func_526(iParam0, 999), iVar0, -1, 1, 0);
	}
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2857 > -1)
			{
				return Global_262145.f_2857;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2863 > -1)
			{
				return Global_262145.f_2863;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2864 > -1)
			{
				return Global_262145.f_2864;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2865 > -1)
			{
				return Global_262145.f_2865;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2866 > -1)
			{
				return Global_262145.f_2866;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case 79:
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1184:
			return 11;
			break;
		
		case 1185:
			return 11;
			break;
	}
	return 0;
}

int func_546(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_175(iParam0);
}

int func_547(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

int func_548(char* sParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_67())
	{
		if (func_553(uParam1, iParam2, bParam3))
		{
		}
		else if (uParam1->f_284 == 2)
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_69(func_68()));
			if (!bParam3)
			{
				func_552(iParam2);
				StringCopy(sParam0, func_550(func_551(iParam2)), 64);
			}
			else
			{
				func_549();
				StringCopy(sParam0, "CAS_LW_ALS", 64);
			}
			func_63(func_68());
			return 1;
		}
	}
	else
	{
		if (!bParam3)
		{
			func_552(iParam2);
			StringCopy(sParam0, func_550(func_551(iParam2)), 64);
		}
		else
		{
			func_549();
			StringCopy(sParam0, "CAS_LW_ALS", 64);
		}
		return 1;
	}
	return 0;
}

void func_549()
{
	int iVar0;
	
	if (func_15(1275, -1, 0) < 30)
	{
		iVar0 = (20 - func_15(1275, -1, 0));
	}
	func_176(1275, iVar0, -1);
	func_141(16, 1, -1, 1);
	if (func_15(1276, -1, 0) < 15)
	{
		iVar0 = (15 - func_15(1276, -1, 0));
	}
	func_176(1276, iVar0, -1);
	func_141(15, 1, -1, 1);
	if (func_15(1277, -1, 0) < 5)
	{
		iVar0 = (5 - func_15(1277, -1, 0));
	}
	func_141(14, 1, -1, 1);
	func_176(1277, iVar0, -1);
	if (func_15(1097, -1, 0) < 20)
	{
		iVar0 = (20 - func_15(1097, -1, 0));
	}
	func_176(1097, iVar0, -1);
	if (func_15(62, -1, 0) < 10)
	{
		iVar0 = (10 - func_15(62, -1, 0));
	}
	func_176(62, iVar0, -1);
	if (func_15(63, -1, 0) < 10)
	{
		iVar0 = (10 - func_15(63, -1, 0));
	}
	func_176(63, iVar0, -1);
}

char* func_550(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "CAS_LW_S1";
		
		case 1:
			return "CAS_LW_S2";
		
		case 2:
			return "CAS_LW_S3";
		
		case 4:
			return "CAS_LW_S4";
		
		case 0:
			return "CAS_LW_S5";
		
		case 5:
			return "CAS_LW_S6";
		
		default:
	}
	return "INVALID";
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		default:
	}
	return -1;
}

void func_552(int iParam0)
{
	int iVar0;
	
	switch (func_551(iParam0))
	{
		case 3:
			if (func_15(1275, -1, 0) < 30)
			{
				iVar0 = (20 - func_15(1275, -1, 0));
			}
			func_176(1275, iVar0, -1);
			func_141(16, 1, -1, 1);
			break;
		
		case 1:
			if (func_15(1276, -1, 0) < 15)
			{
				iVar0 = (15 - func_15(1276, -1, 0));
			}
			func_176(1276, iVar0, -1);
			func_141(15, 1, -1, 1);
			break;
		
		case 2:
			if (func_15(1277, -1, 0) < 5)
			{
				iVar0 = (5 - func_15(1277, -1, 0));
			}
			func_141(14, 1, -1, 1);
			func_176(1277, iVar0, -1);
			break;
		
		case 4:
			if (func_15(1097, -1, 0) < 20)
			{
				iVar0 = (20 - func_15(1097, -1, 0));
			}
			func_176(1097, iVar0, -1);
			break;
		
		case 0:
			if (func_15(62, -1, 0) < 10)
			{
				iVar0 = (10 - func_15(62, -1, 0));
			}
			func_176(62, iVar0, -1);
			break;
		
		case 5:
			if (func_15(63, -1, 0) < 10)
			{
				iVar0 = (10 - func_15(63, -1, 0));
			}
			func_176(63, iVar0, -1);
			break;
	}
}

int func_553(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	char* sVar5;
	
	bVar0 = false;
	switch (uParam0->f_290)
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
			{
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar3)
				{
					iVar2 = iVar3;
				}
				else
				{
					iVar2 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
				}
				iVar3 = (iVar3 - iVar2);
			}
			if (iVar3 > 0)
			{
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
					}
					iVar3 = (iVar3 - iVar1);
				}
			}
			cVar4 = func_555(func_551(iParam1));
			func_554(&sVar5, cVar4, 3);
			if (bParam2)
			{
				cVar4 = func_555(3);
				func_554(&sVar5, cVar4, 3);
				if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_555(1);
				func_554(&sVar5, cVar4, 3);
				if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_555(2);
				func_554(&sVar5, cVar4, 3);
				if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_555(4);
				func_554(&sVar5, cVar4, 3);
				if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_555(0);
				func_554(&sVar5, cVar4, 3);
				if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_555(5);
				func_554(&sVar5, cVar4, 3);
				if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (func_97())
					{
						HUD::_0x170F541E1CADD1DE(1);
						HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
						uParam0->f_290 = 1;
					}
					else
					{
						uParam0->f_290 = 3;
					}
				}
			}
			else if (func_102(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
			{
				if (func_97())
				{
					HUD::_0x170F541E1CADD1DE(1);
					HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
					uParam0->f_290 = 1;
				}
				else
				{
					uParam0->f_290 = 3;
				}
			}
			else
			{
				uParam0->f_290 = 3;
			}
			break;
		
		case 1:
			if (func_96(func_68()))
			{
				if (func_95(func_68()) == 2)
				{
					uParam0->f_290 = 2;
				}
				else
				{
					uParam0->f_290 = 3;
				}
			}
			break;
		
		case 2:
			uParam0->f_290 = 0;
			HUD::_0x170F541E1CADD1DE(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_284 = 2;
			return 0;
			break;
		
		case 3:
			func_63(func_68());
			uParam0->f_290 = 0;
			HUD::_0x170F541E1CADD1DE(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_284 = 0;
			return 0;
			break;
	}
	return 1;
	uParam0->f_290 = 0;
	uParam0->f_284 = -1;
	return 0;
}

void func_554(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

char* func_555(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

int func_556(char* sParam0, int iParam1, var uParam2, struct<5> Param3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam1)
	{
		case 4:
			if (MISC::IS_BIT_SET(Param3.f_4, 1))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 7:
			if (MISC::IS_BIT_SET(Param3.f_4, 2))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 5:
			if (MISC::IS_BIT_SET(Param3.f_4, 3))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MG"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 6:
			if (MISC::IS_BIT_SET(Param3.f_4, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Param3.f_4, 5))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 0:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), 0))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
		
		case 1:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADELAUNCHER"), 0) || func_557(joaat("WEAPON_GRENADE"), -1, 0))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADELAUNCHER"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_562(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_288), 0);
			}
			break;
	}
	return 0;
}

bool func_557(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_530())
	{
		return 0;
	}
	iVar0 = func_560(iParam0, iParam1);
	iVar1 = func_558(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_524(iVar1));
}

int func_558(int iParam0)
{
	return func_559(iParam0);
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 3;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 4;
			break;
		
		case joaat("WEAPON_SMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 7;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
			break;
		
		case joaat("WEAPON_MG"):
			return 12;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 16;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
			break;
		
		case joaat("WEAPON_RPG"):
			return 27;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 33;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 34;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 36;
			break;
		
		case joaat("WEAPON_BAT"):
			return 37;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 38;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 41;
			break;
		
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 43;
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 45;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 51;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 57;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 53;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 54;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 60;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 58;
			break;
		
		case joaat("WEAPON_RAILGUN"):
			return 59;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 64;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 62;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 65;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 70;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
	}
	return 0;
}

int func_560(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_15(func_561(iParam0), iParam1, 0);
	return iVar0;
}

int func_561(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_558(iParam0);
	iVar1 = func_529(iVar0);
	if ((func_528() == 0 || func_527() == 0) || (func_528() == 999 && func_527() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
				break;
			
			case 1:
				return 680;
				break;
			
			case 2:
				return 2427;
				break;
			}
	}
	return 10383;
}

char* func_562(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAS_LW_AM1";
		
		case 1:
			return "CAS_LW_AM2";
		
		case 2:
			return "CAS_LW_AM3";
		
		case 3:
			return "CAS_LW_AM4";
		
		case 4:
			return "CAS_LW_AM5";
		
		case 5:
			return "CAS_LW_AM6";
		
		case 6:
			return "CAS_LW_AM7";
		
		case 7:
			return "CAS_LW_AM8";
		
		default:
	}
	return "INVALID";
}

int func_563()
{
	int iVar0[16];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_564(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		if (iVar3 <= func_564(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_564(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25835;
		
		case 1:
			return Global_262145.f_25835;
		
		case 2:
			return Global_262145.f_25835;
		
		case 3:
			return Global_262145.f_25835;
		
		case 4:
			return Global_262145.f_25835;
		
		case 5:
			return Global_262145.f_25835;
		
		case 6:
			return Global_262145.f_25835;
		
		case 7:
			return Global_262145.f_25835;
		
		case 8:
			return Global_262145.f_25835;
		
		case 9:
			return Global_262145.f_25835;
		
		case 10:
			return Global_262145.f_25835;
		
		case 11:
			return Global_262145.f_25835;
		
		case 12:
			return Global_262145.f_25835;
		
		case 13:
			return Global_262145.f_25835;
		
		case 14:
			return Global_262145.f_25835;
		
		case 15:
			return Global_262145.f_25835;
		
		default:
	}
	return 0;
}

int func_565(char* sParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam2->f_288, 0))
	{
		uParam2->f_292 = func_613(func_614());
		MISC::SET_BIT(&(uParam2->f_288), 0);
	}
	else if (!func_612(uParam2->f_292) || (func_309(uParam2->f_292) && !func_475(uParam2->f_292, -1)))
	{
		if (func_309(uParam2->f_292) && !func_475(uParam2->f_292, -1))
		{
		}
		iVar0 = func_611(uParam2->f_292);
		func_569(iVar0, &(uParam2->f_284), &(uParam2->f_291));
		if (uParam2->f_291 == 0)
		{
			StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam2->f_292), 64);
			return 1;
		}
	}
	else if (func_566(iParam1, uParam2->f_292))
	{
		return func_145(sParam0, iParam1, uParam2, -1, 1);
	}
	return 0;
}

int func_566(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (func_568(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, 947.0432f, 116.779f, 79.4955f, 318.573f, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_FULLBEAM(*iParam0, 0);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam0, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 0f);
				VEHICLE::_0xDBC631F109350B8C(*iParam0, 1);
				VEHICLE::_0x2311DD7159F00582(*iParam0, 1);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*iParam0, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(*iParam0, false);
				ENTITY::_SET_ENTITY_SOMETHING(*iParam0, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			else if (func_82(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(*iParam0, iParam1))
				{
					return 1;
				}
				else if (func_567(*iParam0, &uLocal_96))
				{
					VEHICLE::DELETE_VEHICLE(iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_567(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_568(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_569(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	*uParam2 = -1;
	iVar0 = func_590(iParam0, 0);
	if (iVar0 == -1)
	{
		*uParam2 = 1;
		*uParam1 = 3;
		return 1;
	}
	if (func_584(iVar0))
	{
		*uParam2 = 2;
		*uParam1 = 3;
		return 1;
	}
	if (!func_67())
	{
		func_581(iVar0);
		func_580();
		*uParam2 = 0;
		*uParam1 = 2;
		return 1;
	}
	func_570(&sVar1, iParam0, 0, -1, 0);
	switch (*uParam1)
	{
		case 0:
			if (!func_102(78225582, -1843039992, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, 0, 1, 4, 0, 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_63(func_68());
				return 1;
			}
			sVar2 = "PO_COUPON_CAR_XMAS2017";
			if (!func_102(78225582, -1843039992, MISC::GET_HASH_KEY(sVar2), 537254313, 1, 0, 1, 4, MISC::GET_HASH_KEY(&sVar1), 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_63(func_68());
				return 1;
			}
			if (func_97())
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_63(func_68());
				return 1;
			}
			break;
		
		case 1:
			if (func_96(func_68()))
			{
				if (func_95(func_68()) == 2)
				{
					*uParam2 = 0;
					*uParam1 = 2;
					func_63(func_68());
					func_581(iVar0);
					func_580();
					return 1;
				}
				else
				{
					*uParam2 = 3;
					*uParam1 = 3;
					func_63(func_68());
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_570(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	
	iVar0 = func_590(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, func_579(iParam1), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == -515263000)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar2 = func_578(iParam1, -1);
	if (iVar2 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	func_339(sParam0, Var1, iVar2, 4, 1, iParam2, -1, -1, 1, bParam4);
	if (func_577(iParam1) || func_576(iParam1))
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_19624)
			{
				if ((func_577(iParam1) && func_575()) || (func_576(iParam1) && !func_571(iParam1)))
				{
					func_339(sParam0, Var1, iVar2, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			func_339(sParam0, Var1, iVar2, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		func_339(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if (iParam1 == 414)
	{
		func_339(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
}

int func_571(int iParam0)
{
	int iVar0;
	
	if (!Global_71590)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_572(iVar0);
}

bool func_572(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_530())
	{
		return 0;
	}
	iVar0 = func_573(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_524(iVar1));
}

int func_573(var uParam0)
{
	int iVar0;
	
	iVar0 = func_15(func_574(uParam0), -1, 0);
	return iVar0;
}

int func_574(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_529(iVar0);
	if ((func_528() == 0 || func_527() == 0) || (func_528() == 999 && func_527() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
			}
	}
	return 10383;
}

int func_575()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_576(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_577(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_578(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ZTYPE");
		
		case 1:
			return joaat("STINGER");
		
		case 2:
			return joaat("JB700");
		
		case 3:
			return joaat("CHEETAH");
		
		case 4:
			return joaat("ENTITYXF");
		
		case 5:
			return joaat("ADDER");
		
		case 6:
			return joaat("MONROE");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("SHAMAL");
		
		case 11:
			return joaat("STUNT");
		
		case 12:
			return joaat("CUBAN800");
		
		case 13:
			return joaat("DUSTER");
		
		case 14:
			return joaat("LUXOR");
		
		case 15:
			return joaat("FROGGER");
		
		case 16:
			return joaat("MAVERICK");
		
		case 17:
			return joaat("RHINO");
		
		case 18:
			return joaat("TITAN");
		
		case 19:
			return joaat("CARGOBOB");
		
		case 20:
			return joaat("BUZZARD");
		
		case 21:
			return joaat("CRUSADER");
		
		case 22:
			return joaat("BARRACKS");
		
		case 24:
			return joaat("MARQUIS");
		
		case 25:
			return joaat("JETMAX");
		
		case 27:
			return joaat("SQUALO");
		
		case 29:
			return joaat("TROPIC");
		
		case 30:
			return joaat("SEASHARK");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("SUNTRAP");
		
		case 258:
			return joaat("TUG");
		
		case 33:
			return joaat("BMX");
		
		case 34:
			return joaat("SCORCHER");
		
		case 35:
			return joaat("TRIBIKE");
		
		case 36:
			return joaat("TRIBIKE2");
		
		case 37:
			return joaat("TRIBIKE3");
		
		case 38:
			return joaat("CRUISER");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("ZION");
		
		case 41:
			return joaat("GAUNTLET");
		
		case 42:
			return joaat("VIGERO");
		
		case 43:
			return joaat("ISSI2");
		
		case 44:
			return joaat("INFERNUS");
		
		case 45:
			return joaat("SURANO");
		
		case 46:
			return joaat("VACCA");
		
		case 47:
			return joaat("NINEF");
		
		case 48:
			return joaat("COMET2");
		
		case 49:
			return joaat("BANSHEE");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("SANDKING");
		
		case 53:
			return joaat("FUGITIVE");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("SUPERD");
		
		case 56:
			return joaat("EXEMPLAR");
		
		case 57:
			return joaat("BALLER2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("ROCOTO");
		
		case 60:
			return joaat("FELON");
		
		case 61:
			return joaat("ORACLE2");
		
		case 62:
			return joaat("BATI");
		
		case 63:
			return joaat("AKUMA");
		
		case 64:
			return joaat("RUFFIAN");
		
		case 65:
			return joaat("VADER");
		
		case 66:
			return joaat("BLAZER");
		
		case 67:
			return joaat("PCJ");
		
		case 68:
			return joaat("SANCHEZ");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("BULLET");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("COQUETTE");
		
		case 73:
			return joaat("NINEF2");
		
		case 74:
			return joaat("RAPIDGT");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("VOLTIC");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("MAMMATUS");
		
		case 80:
			return joaat("VELUM");
		
		case 81:
			return joaat("DUMP");
		
		case 82:
			return joaat("AIRBUS");
		
		case 83:
			return joaat("BUS");
		
		case 84:
			return joaat("COACH");
		
		case 85:
			return joaat("JOURNEY");
		
		case 86:
			return joaat("MULE");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("STRETCH");
		
		case 89:
			return joaat("BISON");
		
		case 90:
			return joaat("DOUBLE");
		
		case 91:
			return joaat("FELON2");
		
		case 92:
			return joaat("HEXER");
		
		case 93:
			return joaat("ZION2");
		
		case 94:
			return joaat("BATI2");
		
		case 95:
			return joaat("ELEGY2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("HOTKNIFE");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("BIFTA");
		
		case 100:
			return joaat("KALAHARI");
		
		case 101:
			return joaat("PARADISE");
		
		case 102:
			return joaat("SPEEDER");
		
		case 103:
			return joaat("BODHI2");
		
		case 104:
			return joaat("DUNE");
		
		case 105:
			return joaat("REBEL");
		
		case 106:
			return joaat("SADLER");
		
		case 107:
			return joaat("SANCHEZ2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("BTYPE");
		
		case 111:
			return joaat("JESTER");
		
		case 114:
			return joaat("MASSACRO");
		
		case 112:
			return joaat("TURISMOR");
		
		case 115:
			return joaat("ZENTORNO");
		
		case 116:
			return joaat("HUNTLEY");
		
		case 110:
			return joaat("ALPHA");
		
		case 113:
			return joaat("VESTRA");
		
		case 117:
			return joaat("COQUETTE");
		
		case 118:
			return joaat("BANSHEE");
		
		case 119:
			return joaat("STINGER");
		
		case 120:
			return joaat("VOLTIC");
		
		case 121:
			return joaat("THRUST");
		
		case 128:
			return joaat("ASEA");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("BOBCATXL");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("GRANGER");
		
		case 133:
			return joaat("INGOT");
		
		case 134:
			return joaat("INTRUDER");
		
		case 135:
			return joaat("MINIVAN");
		
		case 136:
			return joaat("PREMIER");
		
		case 137:
			return joaat("RADI");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("STANIER");
		
		case 141:
			return joaat("STRATUM");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("F620");
		
		case 124:
			return joaat("FUSILADE");
		
		case 125:
			return joaat("PENUMBRA");
		
		case 126:
			return joaat("SENTINEL");
		
		case 127:
			return joaat("SENTINEL2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("BLADE");
		
		case 144:
			return joaat("WARRENER");
		
		case 145:
			return joaat("GLENDALE");
		
		case 146:
			return joaat("RHAPSODY");
		
		case 147:
			return joaat("PANTO");
		
		case 148:
			return joaat("DUBSTA3");
		
		case 149:
			return joaat("PIGALLE");
		
		case 150:
			return joaat("PICADOR");
		
		case 151:
			return joaat("REGINA");
		
		case 152:
			return joaat("SURFER");
		
		case 153:
			return joaat("YOUGA");
		
		case 154:
			return joaat("BLAZER3");
		
		case 155:
			return joaat("REBEL2");
		
		case 156:
			return joaat("PRIMO");
		
		case 157:
			return joaat("BUFFALO");
		
		case 158:
			return joaat("BUFFALO2");
		
		case 159:
			return joaat("TAILGATER");
		
		case 160:
			return joaat("MONSTER");
		
		case 161:
			return joaat("SOVEREIGN");
		
		case 162:
			return joaat("MILJET");
		
		case 163:
			return joaat("BESRA");
		
		case 164:
			return joaat("SWIFT");
		
		case 165:
			return joaat("COQUETTE2");
		
		case 166:
			return joaat("COQUETTE2");
		
		case 167:
			return joaat("INNOVATION");
		
		case 168:
			return joaat("HAKUCHOU");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("KALAHARI");
		
		case 187:
			return joaat("VALKYRIE");
		
		case 177:
			return joaat("HYDRA");
		
		case 185:
			return joaat("SAVAGE");
		
		case 174:
			return joaat("ENDURO");
		
		case 171:
			return joaat("BOXVILLE4");
		
		case 172:
			return joaat("CASCO");
		
		case 173:
			return joaat("DINGHY3");
		
		case 175:
			return joaat("GBURRITO2");
		
		case 176:
			return joaat("GUARDIAN");
		
		case 178:
			return joaat("INSURGENT");
		
		case 179:
			return joaat("INSURGENT2");
		
		case 183:
			return joaat("MULE3");
		
		case 180:
			return joaat("KURUMA");
		
		case 181:
			return joaat("KURUMA2");
		
		case 182:
			return joaat("LECTRO");
		
		case 184:
			return joaat("PBUS");
		
		case 186:
			return joaat("TECHNICAL");
		
		case 188:
			return joaat("VELUM2");
		
		case 189:
			return joaat("GRESLEY");
		
		case 190:
			return joaat("JACKAL");
		
		case 191:
			return joaat("LANDSTALKER");
		
		case 192:
			return joaat("MESA3");
		
		case 193:
			return joaat("NEMESIS");
		
		case 194:
			return joaat("ORACLE");
		
		case 195:
			return joaat("RUMPO");
		
		case 196:
			return joaat("SCHAFTER2");
		
		case 197:
			return joaat("SEMINOLE");
		
		case 198:
			return joaat("SURGE");
		
		case 199:
			return joaat("DODO");
		
		case 200:
			return joaat("MARSHALL");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("BLISTA2");
		
		case 203:
			return joaat("STALION");
		
		case 204:
			return joaat("DUKES");
		
		case 205:
			return joaat("DUKES2");
		
		case 206:
			return joaat("STALION2");
		
		case 207:
			return joaat("DOMINATOR2");
		
		case 208:
			return joaat("GAUNTLET2");
		
		case 209:
			return joaat("BUFFALO3");
		
		case 210:
			return joaat("SLAMVAN");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("JESTER2");
		
		case 213:
			return joaat("MASSACRO2");
		
		case 214:
			return joaat("FELTZER3");
		
		case 215:
			return joaat("LUXOR2");
		
		case 216:
			return joaat("OSIRIS");
		
		case 217:
			return joaat("SWIFT2");
		
		case 218:
			return joaat("VIRGO");
		
		case 219:
			return joaat("WINDSOR");
		
		case 220:
			return joaat("BRAWLER");
		
		case 221:
			return joaat("CHINO");
		
		case 222:
			return joaat("COQUETTE3");
		
		case 223:
			return joaat("T20");
		
		case 224:
			return joaat("TORO");
		
		case 225:
			return joaat("VINDICATOR");
		
		case 229:
			return joaat("PRIMO");
		
		case 228:
			return joaat("MOONBEAM");
		
		case 227:
			return joaat("FACTION");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("VOODOO2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("XLS");
			}
			else if (iParam1 == 1)
			{
				return joaat("XLS2");
			}
			else
			{
				return joaat("XLS");
			}
			break;
		
		case 264:
			return joaat("SEVEN70");
		
		case 259:
			return joaat("WINDSOR2");
		
		case 260:
			return joaat("PROTOTIPO");
		
		case 261:
			return joaat("FMJ");
		
		case 262:
			return joaat("BESTIAGTS");
		
		case 265:
			return joaat("PFISTER811");
		
		case 266:
			return joaat("REAPER");
		
		case 231:
			return joaat("BTYPE2");
		
		case 232:
			return joaat("LURCHER");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("BALLER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER5");
			}
			else
			{
				return joaat("BALLER3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("BALLER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER6");
			}
			else
			{
				return joaat("BALLER4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("COG55");
			}
			else if (iParam1 == 1)
			{
				return joaat("COG552");
			}
			else
			{
				return joaat("COG55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("LIMO2");
		
		case 238:
			return joaat("MAMBA");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER5");
			}
			else
			{
				return joaat("SCHAFTER3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER6");
			}
			else
			{
				return joaat("SCHAFTER4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68786;
		
		case 251:
			return joaat("VIRGO3");
		
		case 250:
			return joaat("TORNADO");
		
		case 249:
			return joaat("SABREGT");
		
		case 252:
			return joaat("FACTION");
		
		case 246:
			return joaat("TAMPA");
		
		case 247:
			return joaat("SULTAN");
		
		case 49:
			return joaat("BANSHEE");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("VOLATUS");
		
		case 254:
			return joaat("CARGOBOB2");
		
		case 255:
			return joaat("RUMPO3");
		
		case 256:
			return joaat("BRICKADE");
		
		case 257:
			return joaat("NIMBUS");
		
		case 267:
			return joaat("LE7B");
		
		case 268:
			return joaat("OMNIS");
		
		case 269:
			return joaat("TROPOS");
		
		case 270:
			return joaat("BRIOSO");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("CONTENDER");
		
		case 274:
			return joaat("CLIFFHANGER");
		
		case 275:
			return joaat("BF400");
		
		case 279:
			return joaat("TYRUS");
		
		case 280:
			return joaat("LYNX");
		
		case 281:
			return joaat("SHEAVA");
		
		case 276:
			return joaat("RALLYTRUCK");
		
		case 277:
			return joaat("TAMPA2");
		
		case 278:
			return joaat("GARGOYLE");
		
		case 282:
			return joaat("BAGGER");
		
		case 283:
			return joaat("ESSKEY");
		
		case 284:
			return joaat("NIGHTBLADE");
		
		case 285:
			return joaat("DEFILER");
		
		case 286:
			return joaat("AVARUS");
		
		case 287:
			return joaat("ZOMBIEA");
		
		case 288:
			return joaat("ZOMBIEB");
		
		case 289:
			return joaat("CHIMERA");
		
		case 290:
			return joaat("DAEMON2");
		
		case 291:
			return joaat("RATBIKE");
		
		case 292:
			return joaat("SHOTARO");
		
		case 293:
			return joaat("RAPTOR");
		
		case 294:
			return joaat("HAKUCHOU2");
		
		case 296:
			return joaat("BLAZER4");
		
		case 297:
			return joaat("SANCTUS");
		
		case 295:
			return joaat("VORTEX");
		
		case 298:
			return joaat("MANCHEZ");
		
		case 299:
			return joaat("TORNADO6");
		
		case 300:
			return joaat("YOUGA2");
		
		case 301:
			return joaat("WOLFSBANE");
		
		case 302:
			return joaat("FAGGIO3");
		
		case 303:
			return joaat("FAGGIO");
		
		case 304:
			return joaat("DUNE5");
		
		case 305:
			return joaat("PHANTOM2");
		
		case 306:
			return joaat("TECHNICAL2");
		
		case 307:
			return joaat("BLAZER5");
		
		case 308:
			return joaat("BOXVILLE5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("RUINER2");
		
		case 311:
			return joaat("VOLTIC2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("TEMPESTA");
		
		case 314:
			return joaat("ITALIGTB");
		
		case 315:
			return joaat("NERO");
		
		case 316:
			return joaat("DIABLOUS");
		
		case 317:
			return joaat("FCR");
		
		case 318:
			return joaat("SPECTER");
		
		case 319:
			return joaat("GP1");
		
		case 320:
			return joaat("INFERNUS2");
		
		case 321:
			return joaat("RUSTON");
		
		case 322:
			return joaat("TURISMO2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_68787;
		
		case 324:
			return Global_68788;
		
		case 325:
			return joaat("CHEETAH2");
		
		case 326:
			return joaat("TORERO");
		
		case 327:
			return joaat("VAGNER");
		
		case 328:
			return joaat("XA21");
		
		case 329:
			return joaat("APC");
		
		case 330:
			return joaat("DUNE3");
		
		case 331:
			return joaat("HALFTRACK");
		
		case 332:
			return joaat("OPPRESSOR");
		
		case 333:
			return joaat("TAMPA3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ARDENT");
		
		case 336:
			return joaat("NIGHTSHARK");
		
		case 337:
			return joaat("LAZER");
		
		case 338:
			return joaat("MICROLIGHT");
		
		case 339:
			return joaat("MOGUL");
		
		case 340:
			return joaat("ROGUE");
		
		case 341:
			return joaat("STARLING");
		
		case 342:
			return joaat("SEABREEZE");
		
		case 343:
			return joaat("TULA");
		
		case 344:
			return joaat("PYRO");
		
		case 345:
			return joaat("MOLOTOK");
		
		case 346:
			return joaat("NOKOTA");
		
		case 347:
			return joaat("BOMBUSHKA");
		
		case 348:
			return joaat("HUNTER");
		
		case 349:
			return joaat("HAVOK");
		
		case 350:
			return joaat("HOWARD");
		
		case 351:
			return joaat("ALPHAZ1");
		
		case 352:
			return joaat("CYCLONE");
		
		case 353:
			return joaat("VISIONE");
		
		case 354:
			return joaat("RETINUE");
		
		case 355:
			return joaat("RAPIDGT3");
		
		case 356:
			return joaat("VIGILANTE");
		
		case 357:
			return Global_68789;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_68790;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("FUTO");
		
		case 416:
			return joaat("RUINER");
		
		case 417:
			return joaat("ROMERO");
		
		case 418:
			return joaat("PRAIRIE");
		
		case 419:
			return joaat("BALLER");
		
		case 420:
			return joaat("SERRANO");
		
		case 421:
			return joaat("BJXL");
		
		case 422:
			return joaat("HABANERO");
		
		case 423:
			return joaat("FQ2");
		
		case 424:
			return joaat("PATRIOT");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("TAXI");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("SPEEDO2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("BARRACKS2");
		
		case 455:
			return joaat("MIXER");
		
		case 456:
			return joaat("DUNE2");
		
		case 457:
			return joaat("TRACTOR");
		
		case 458:
			return joaat("BLISTA3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("Novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("Dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		default:
	}
	return 0;
}

char* func_579(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_578(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

void func_580()
{
	if (!Global_2528542.f_4889.f_330)
	{
		Global_2528542.f_4889.f_330 = 1;
	}
}

void func_581(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&(Global_2097152[func_140() /*10778*/].f_5500.f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2097152[func_140() /*10778*/].f_5500 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_583();
		func_582();
	}
}

void func_582()
{
}

void func_583()
{
	func_12(1724, Global_2097152[func_140() /*10778*/].f_5500, -1, 1, 0);
	func_12(1725, Global_2097152[func_140() /*10778*/].f_5500.f_1[0], -1, 1, 0);
	func_12(1726, Global_2097152[func_140() /*10778*/].f_5500.f_1[1], -1, 1, 0);
	func_12(1727, Global_2097152[func_140() /*10778*/].f_5500.f_1[2], -1, 1, 0);
	func_12(1728, Global_2097152[func_140() /*10778*/].f_5500.f_1[3], -1, 1, 0);
}

int func_584(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_67())
	{
		if (iParam0 == func_590(245, 0) && func_15(3168, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_590(323, 0) && func_15(5393, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_590(324, 0) && func_587(9461, -1, -1))
		{
			return 1;
		}
		if (iParam0 == func_590(357, 0) && func_15(6156, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_590(402, 0) && func_15(7207, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				
				case 1:
					iVar1 = 451;
					break;
				
				case 2:
					iVar1 = 452;
					break;
				
				case 3:
					iVar1 = 453;
					break;
				
				case 4:
					iVar1 = 454;
					break;
				
				case 5:
					iVar1 = 455;
					break;
				
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_590(iVar1, 0) && func_585(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_2097152[func_140() /*10778*/].f_5500.f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_585(int iParam0)
{
	return func_587(func_586(iParam0), -1, -1);
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_587(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_589(iParam0, iParam1);
	uVar2 = func_588(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_588(int iParam0)
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

int func_589(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

int func_590(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_591(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_591(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		default:
	}
	return -1;
}

int func_591(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_578(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_575() && func_610())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_575())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_609(iParam0))
	{
		if (Global_70349)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_421(iVar0);
	if (iVar1 != -1)
	{
		if (func_607(func_608(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_577(iParam0))
	{
		if (func_575())
		{
			if ((iParam0 == 205 && Global_262145.f_19625) || (iParam0 != 205 && Global_262145.f_19624))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_576(iParam0))
	{
		if (func_571(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_606(iVar0);
	if (iVar2 != -1)
	{
		if (func_604(func_605(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_603(iVar0);
	if (iVar3 > 0)
	{
		if (func_601(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_600(iVar0);
	if (iVar4 != -1)
	{
		if (func_598(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_597(iVar0);
	if (iVar5 != -1)
	{
		if (func_595(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_594(iVar0);
	if (iVar6 != -1)
	{
		if (func_592(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_592(int iParam0)
{
	if (!Global_71590)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_594(iParam0) != -1)
	{
		if (func_585(func_593(iParam0)))
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

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("GLENDALE"):
			return 104;
			break;
		
		case joaat("SLAMVAN"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("GARGOYLE"):
			return 108;
			break;
	}
	return -1;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("GLENDALE"):
			return 16;
		
		case joaat("SLAMVAN"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("GARGOYLE"):
			return 21;
		
		default:
	}
	return -1;
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_15(7230, -1, 0) >= func_596(iParam0) || Global_262145.f_24027)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_15(7230, -1, 0) >= func_596(iParam0) || Global_262145.f_24028)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_19(22050, -1, -1) >= func_596(iParam0) || Global_262145.f_24029)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_275.f_7, 1) || Global_262145.f_24031)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_15(7228, -1, 0) >= func_596(iParam0) || Global_262145.f_24032)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_15(7228, -1, 0) >= func_596(iParam0) || Global_262145.f_24033)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("scramjet"):
			if (func_587(22123, -1, -1) || Global_262145.f_24030)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24034;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24035;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24036;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24037;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24038;
			break;
	}
	return 0;
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("scramjet"):
			return 3;
			break;
		
		case joaat("pbus2"):
			return 4;
			break;
		
		case joaat("patriot2"):
			return 5;
			break;
		
		case joaat("blimp3"):
			return 6;
			break;
	}
	return -1;
}

int func_598(int iParam0)
{
	int iVar0;
	
	if (!Global_71590)
	{
		return 0;
	}
	iVar0 = func_15(5661, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return MISC::IS_BIT_SET(iVar0, func_599(1));
		
		case joaat("akula"):
			return MISC::IS_BIT_SET(iVar0, func_599(2));
		
		case joaat("riot2"):
			return MISC::IS_BIT_SET(iVar0, func_599(6));
		
		case joaat("stromberg"):
			return MISC::IS_BIT_SET(iVar0, func_599(7));
		
		case joaat("chernobog"):
			return MISC::IS_BIT_SET(iVar0, func_599(10));
		
		case joaat("barrage"):
			return MISC::IS_BIT_SET(iVar0, func_599(11));
		
		case joaat("khanjali"):
			return MISC::IS_BIT_SET(iVar0, func_599(12));
		
		case joaat("volatol"):
			return MISC::IS_BIT_SET(iVar0, func_599(13));
		
		case joaat("thruster"):
			return MISC::IS_BIT_SET(iVar0, func_599(15));
		
		default:
	}
	return 0;
}

int func_599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_71590)
	{
		return 0;
	}
	iVar0 = func_603(iParam0);
	iVar1 = func_602();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_602()
{
	return func_15(6113, -1, 0);
}

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICROLIGHT"):
			return Global_262145.f_22084;
		
		case joaat("ROGUE"):
			return Global_262145.f_22085;
		
		case joaat("ALPHAZ1"):
			return Global_262145.f_22086;
		
		case joaat("HAVOK"):
			return Global_262145.f_22087;
		
		case joaat("STARLING"):
			return Global_262145.f_22088;
		
		case joaat("MOLOTOK"):
			return Global_262145.f_22089;
		
		case joaat("TULA"):
			return Global_262145.f_22090;
		
		case joaat("BOMBUSHKA"):
			return Global_262145.f_22091;
		
		case joaat("HOWARD"):
			return Global_262145.f_22092;
		
		case joaat("MOGUL"):
			return Global_262145.f_22093;
		
		case joaat("PYRO"):
			return Global_262145.f_22094;
		
		case joaat("SEABREEZE"):
			return Global_262145.f_22095;
		
		case joaat("NOKOTA"):
			return Global_262145.f_22096;
		
		case joaat("HUNTER"):
			return Global_262145.f_22097;
		
		default:
	}
	return 0;
}

bool func_604(int iParam0)
{
	if (!Global_71590)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(func_15(5463, -1, 0), iParam0);
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
		
		case joaat("HALFTRACK"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("APC"):
			return 3;
		
		case joaat("TAMPA3"):
			return 5;
		
		case joaat("OPPRESSOR"):
			return 7;
		
		default:
	}
	return 3;
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
			break;
		
		case joaat("HALFTRACK"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("APC"):
			return 3;
			break;
		
		case joaat("TAMPA3"):
			return 4;
			break;
		
		case joaat("OPPRESSOR"):
			return 5;
			break;
	}
	return -1;
}

bool func_607(int iParam0)
{
	if (!Global_71590)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(func_15(5326, -1, 0), iParam0);
}

int func_608(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE4"):
			return 0;
		
		case joaat("DUNE5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("BLAZER5"):
			return 2;
		
		case joaat("PHANTOM2"):
			return 3;
		
		case joaat("VOLTIC2"):
			return 4;
		
		case joaat("TECHNICAL2"):
			return 5;
		
		case joaat("BOXVILLE5"):
			return 6;
		
		case joaat("RUINER2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_609(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_610()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_145399.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_611(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ZTYPE"):
			return 0;
		
		case joaat("STINGER"):
			return 1;
		
		case joaat("JB700"):
			return 2;
		
		case joaat("CHEETAH"):
			return 3;
		
		case joaat("ENTITYXF"):
			return 4;
		
		case joaat("ADDER"):
			return 5;
		
		case joaat("MONROE"):
			return 6;
		
		case joaat("cogcabrio"):
			return 7;
		
		case joaat("SHAMAL"):
			return 10;
		
		case joaat("STUNT"):
			return 11;
		
		case joaat("CUBAN800"):
			return 12;
		
		case joaat("DUSTER"):
			return 13;
		
		case joaat("LUXOR"):
			return 14;
		
		case joaat("FROGGER"):
			return 15;
		
		case joaat("MAVERICK"):
			return 16;
		
		case joaat("RHINO"):
			return 17;
		
		case joaat("TITAN"):
			return 18;
		
		case joaat("CARGOBOB"):
			return 19;
		
		case joaat("BUZZARD"):
			return 20;
		
		case joaat("CRUSADER"):
			return 21;
		
		case joaat("BARRACKS"):
			return 22;
		
		case joaat("MARQUIS"):
			return 24;
		
		case joaat("JETMAX"):
			return 25;
		
		case joaat("SQUALO"):
			return 27;
		
		case joaat("TROPIC"):
			return 29;
		
		case joaat("SEASHARK"):
			return 30;
		
		case joaat("submersible"):
			return 31;
		
		case joaat("SUNTRAP"):
			return 32;
		
		case joaat("TUG"):
			return 258;
		
		case joaat("BMX"):
			return 33;
		
		case joaat("SCORCHER"):
			return 34;
		
		case joaat("TRIBIKE"):
			return 35;
		
		case joaat("TRIBIKE2"):
			return 36;
		
		case joaat("TRIBIKE3"):
			return 37;
		
		case joaat("CRUISER"):
			return 38;
		
		case joaat("schwarzer"):
			return 39;
		
		case joaat("ZION"):
			return 40;
		
		case joaat("GAUNTLET"):
			return 41;
		
		case joaat("VIGERO"):
			return 42;
		
		case joaat("ISSI2"):
			return 43;
		
		case joaat("INFERNUS"):
			return 44;
		
		case joaat("SURANO"):
			return 45;
		
		case joaat("VACCA"):
			return 46;
		
		case joaat("NINEF"):
			return 47;
		
		case joaat("COMET2"):
			return 48;
		
		case joaat("BANSHEE"):
			return 49;
		
		case joaat("feltzer2"):
			return 50;
		
		case joaat("bfinjection"):
			return 51;
		
		case joaat("SANDKING"):
			return 52;
		
		case joaat("FUGITIVE"):
			return 53;
		
		case joaat("dilettante"):
			return 54;
		
		case joaat("SUPERD"):
			return 55;
		
		case joaat("EXEMPLAR"):
			return 56;
		
		case joaat("BALLER2"):
			return 57;
		
		case joaat("cavalcade"):
			return 58;
		
		case joaat("ROCOTO"):
			return 59;
		
		case joaat("FELON"):
			return 60;
		
		case joaat("ORACLE2"):
			return 61;
		
		case joaat("BATI"):
			return 62;
		
		case joaat("AKUMA"):
			return 63;
		
		case joaat("RUFFIAN"):
			return 64;
		
		case joaat("VADER"):
			return 65;
		
		case joaat("BLAZER"):
			return 66;
		
		case joaat("PCJ"):
			return 67;
		
		case joaat("SANCHEZ"):
			return 68;
		
		case joaat("faggio2"):
			return 69;
		
		case joaat("AIRBUS"):
			return 82;
		
		case joaat("annihilator"):
			return 78;
		
		case joaat("BATI2"):
			return 94;
		
		case joaat("BISON"):
			return 89;
		
		case joaat("BULLET"):
			return 70;
		
		case joaat("BUS"):
			return 83;
		
		case joaat("carbonizzare"):
			return 71;
		
		case joaat("COACH"):
			return 84;
		
		case joaat("COQUETTE"):
			return 72;
		
		case joaat("DOUBLE"):
			return 90;
		
		case joaat("DUMP"):
			return 81;
		
		case joaat("FELON2"):
			return 91;
		
		case joaat("HEXER"):
			return 92;
		
		case joaat("JOURNEY"):
			return 85;
		
		case joaat("MAMMATUS"):
			return 79;
		
		case joaat("MULE"):
			return 86;
		
		case joaat("NINEF2"):
			return 73;
		
		case joaat("RAPIDGT"):
			return 74;
		
		case joaat("rapidgt2"):
			return 75;
		
		case joaat("rentalbus"):
			return 87;
		
		case joaat("stingergt"):
			return 76;
		
		case joaat("STRETCH"):
			return 88;
		
		case joaat("VELUM"):
			return 80;
		
		case joaat("VOLTIC"):
			return 77;
		
		case joaat("ZION2"):
			return 93;
		
		case joaat("ELEGY2"):
			return 95;
		
		case joaat("khamelion"):
			return 96;
		
		case joaat("HOTKNIFE"):
			return 97;
		
		case joaat("carbonrs"):
			return 98;
		
		case joaat("BODHI2"):
			return 103;
		
		case joaat("DUNE"):
			return 104;
		
		case joaat("REBEL"):
			return 105;
		
		case joaat("SADLER"):
			return 106;
		
		case joaat("SANCHEZ2"):
			return 107;
		
		case joaat("sandking2"):
			return 108;
		
		case joaat("ASEA"):
			return 128;
		
		case joaat("asterope"):
			return 129;
		
		case joaat("BOBCATXL"):
			return 130;
		
		case joaat("cavalcade2"):
			return 131;
		
		case joaat("GRANGER"):
			return 132;
		
		case joaat("INGOT"):
			return 133;
		
		case joaat("INTRUDER"):
			return 134;
		
		case joaat("MINIVAN"):
			return 135;
		
		case joaat("PREMIER"):
			return 136;
		
		case joaat("RADI"):
			return 137;
		
		case joaat("rancherxl"):
			return 138;
		
		case joaat("ratloader"):
			return 139;
		
		case joaat("STANIER"):
			return 140;
		
		case joaat("STRATUM"):
			return 141;
		
		case joaat("washington"):
			return 142;
		
		case joaat("dominator"):
			return 122;
		
		case joaat("F620"):
			return 123;
		
		case joaat("FUSILADE"):
			return 124;
		
		case joaat("PENUMBRA"):
			return 125;
		
		case joaat("SENTINEL"):
			return 126;
		
		case joaat("SENTINEL2"):
			return 127;
		
		case joaat("PICADOR"):
			return 150;
		
		case joaat("REGINA"):
			return 151;
		
		case joaat("SURFER"):
			return 152;
		
		case joaat("YOUGA"):
			return 153;
		
		case joaat("BLAZER3"):
			return 154;
		
		case joaat("REBEL2"):
			return 155;
		
		case joaat("PRIMO"):
			return 156;
		
		case joaat("BUFFALO"):
			return 157;
		
		case joaat("BUFFALO2"):
			return 158;
		
		case joaat("TAILGATER"):
			return 159;
		
		default:
	}
	if (iParam0 == joaat("BIFTA"))
	{
		return 99;
	}
	else if (iParam0 == joaat("KALAHARI"))
	{
		return 100;
	}
	else if (iParam0 == joaat("PARADISE"))
	{
		return 101;
	}
	else if (iParam0 == joaat("SPEEDER"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("BTYPE"))
	{
		return 109;
	}
	else if (iParam0 == joaat("JESTER"))
	{
		return 111;
	}
	else if (iParam0 == joaat("MASSACRO"))
	{
		return 114;
	}
	else if (iParam0 == joaat("TURISMOR"))
	{
		return 112;
	}
	else if (iParam0 == joaat("ZENTORNO"))
	{
		return 115;
	}
	else if (iParam0 == joaat("HUNTLEY"))
	{
		return 116;
	}
	else if (iParam0 == joaat("ALPHA"))
	{
		return 110;
	}
	else if (iParam0 == joaat("VESTRA"))
	{
		return 113;
	}
	else if (iParam0 == joaat("COQUETTE"))
	{
		return 117;
	}
	else if (iParam0 == joaat("BANSHEE"))
	{
		return 118;
	}
	else if (iParam0 == joaat("STINGER"))
	{
		return 119;
	}
	else if (iParam0 == joaat("VOLTIC"))
	{
		return 120;
	}
	else if (iParam0 == joaat("THRUST"))
	{
		return 121;
	}
	else if (iParam0 == joaat("BLADE"))
	{
		return 143;
	}
	else if (iParam0 == joaat("WARRENER"))
	{
		return 144;
	}
	else if (iParam0 == joaat("GLENDALE"))
	{
		return 145;
	}
	else if (iParam0 == joaat("RHAPSODY"))
	{
		return 146;
	}
	else if (iParam0 == joaat("PANTO"))
	{
		return 147;
	}
	else if (iParam0 == joaat("DUBSTA3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("PIGALLE"))
	{
		return 149;
	}
	else if (iParam0 == joaat("MONSTER"))
	{
		return 160;
	}
	else if (iParam0 == joaat("SOVEREIGN"))
	{
		return 161;
	}
	else if (iParam0 == joaat("MILJET"))
	{
		return 162;
	}
	else if (iParam0 == joaat("BESRA"))
	{
		return 163;
	}
	else if (iParam0 == joaat("SWIFT"))
	{
		return 164;
	}
	else if (iParam0 == joaat("COQUETTE2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("COQUETTE2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("INNOVATION"))
	{
		return 167;
	}
	else if (iParam0 == joaat("HAKUCHOU"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("KALAHARI"))
	{
		return 170;
	}
	else if (iParam0 == joaat("VALKYRIE"))
	{
		return 187;
	}
	else if (iParam0 == joaat("HYDRA"))
	{
		return 177;
	}
	else if (iParam0 == joaat("SAVAGE"))
	{
		return 185;
	}
	else if (iParam0 == joaat("ENDURO"))
	{
		return 174;
	}
	else if (iParam0 == joaat("BOXVILLE4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("CASCO"))
	{
		return 172;
	}
	else if (iParam0 == joaat("DINGHY3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("GBURRITO2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("GUARDIAN"))
	{
		return 176;
	}
	else if (iParam0 == joaat("INSURGENT"))
	{
		return 178;
	}
	else if (iParam0 == joaat("MULE3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("INSURGENT2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("LECTRO"))
	{
		return 182;
	}
	else if (iParam0 == joaat("PBUS"))
	{
		return 184;
	}
	else if (iParam0 == joaat("TECHNICAL"))
	{
		return 186;
	}
	else if (iParam0 == joaat("VELUM2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("GRESLEY"))
	{
		return 189;
	}
	else if (iParam0 == joaat("JACKAL"))
	{
		return 190;
	}
	else if (iParam0 == joaat("KURUMA"))
	{
		return 180;
	}
	else if (iParam0 == joaat("KURUMA2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("LANDSTALKER"))
	{
		return 191;
	}
	else if (iParam0 == joaat("MESA3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("NEMESIS"))
	{
		return 193;
	}
	else if (iParam0 == joaat("ORACLE"))
	{
		return 194;
	}
	else if (iParam0 == joaat("RUMPO"))
	{
		return 195;
	}
	else if (iParam0 == joaat("SCHAFTER2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("SEMINOLE"))
	{
		return 197;
	}
	else if (iParam0 == joaat("SURGE"))
	{
		return 198;
	}
	else if (iParam0 == joaat("DODO"))
	{
		return 199;
	}
	else if (iParam0 == joaat("MARSHALL"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("BLISTA2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("STALION"))
	{
		return 203;
	}
	else if (iParam0 == joaat("DUKES"))
	{
		return 204;
	}
	else if (iParam0 == joaat("DUKES2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("STALION2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("SLAMVAN"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("JESTER2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("MASSACRO2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("FELTZER3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("LUXOR2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("OSIRIS"))
	{
		return 216;
	}
	else if (iParam0 == joaat("SWIFT2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("VIRGO"))
	{
		return 218;
	}
	else if (iParam0 == joaat("WINDSOR"))
	{
		return 219;
	}
	else if (iParam0 == joaat("BRAWLER"))
	{
		return 220;
	}
	else if (iParam0 == joaat("CHINO"))
	{
		return 221;
	}
	else if (iParam0 == joaat("COQUETTE3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("T20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("TORO"))
	{
		return 224;
	}
	else if (iParam0 == joaat("VINDICATOR"))
	{
		return 225;
	}
	else if (iParam0 == joaat("PRIMO"))
	{
		return 229;
	}
	else if (iParam0 == joaat("MOONBEAM"))
	{
		return 228;
	}
	else if (iParam0 == joaat("FACTION"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("VOODOO2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("BTYPE2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("LURCHER"))
	{
		return 232;
	}
	else if (iParam0 == joaat("MINIVAN"))
	{
		return 135;
	}
	else if (iParam0 == joaat("VIRGO3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("TORNADO"))
	{
		return 250;
	}
	else if (iParam0 == joaat("SABREGT"))
	{
		return 249;
	}
	else if (iParam0 == joaat("SLAMVAN"))
	{
		return 210;
	}
	else if (iParam0 == joaat("FACTION"))
	{
		return 252;
	}
	else if (iParam0 == joaat("BALLER3") || iParam0 == joaat("BALLER5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("BALLER4") || iParam0 == joaat("BALLER6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("COG55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("LIMO2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("MAMBA"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("SCHAFTER3") || iParam0 == joaat("SCHAFTER5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("SCHAFTER4") || iParam0 == joaat("SCHAFTER6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_68786)
	{
		return 245;
	}
	else if (iParam0 == joaat("TAMPA"))
	{
		return 246;
	}
	else if (iParam0 == joaat("SULTAN"))
	{
		return 247;
	}
	else if (iParam0 == joaat("BANSHEE"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("VOLATUS"))
	{
		return 253;
	}
	else if (iParam0 == joaat("CARGOBOB2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("RUMPO3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("BRICKADE"))
	{
		return 256;
	}
	else if (iParam0 == joaat("NIMBUS"))
	{
		return 257;
	}
	else if (iParam0 == joaat("WINDSOR2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("PROTOTIPO"))
	{
		return 260;
	}
	else if (iParam0 == joaat("FMJ"))
	{
		return 261;
	}
	else if (iParam0 == joaat("BESTIAGTS"))
	{
		return 262;
	}
	else if (iParam0 == joaat("XLS") || iParam0 == joaat("XLS2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("REAPER"))
	{
		return 266;
	}
	else if (iParam0 == joaat("LE7B"))
	{
		return 267;
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		return 268;
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		return 269;
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		return 273;
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		return 274;
	}
	else if (iParam0 == joaat("BF400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		return 279;
	}
	else if (iParam0 == joaat("LYNX"))
	{
		return 280;
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		return 281;
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		return 276;
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		return 278;
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		return 282;
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		return 283;
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		return 284;
	}
	else if (iParam0 == joaat("DEFILER"))
	{
		return 285;
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		return 286;
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		return 287;
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		return 288;
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		return 289;
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		return 291;
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		return 292;
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		return 293;
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		return 297;
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		return 295;
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		return 298;
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		return 301;
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		return 303;
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("VOLTIC2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		return 313;
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		return 314;
	}
	else if (iParam0 == joaat("NERO"))
	{
		return 315;
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		return 316;
	}
	else if (iParam0 == joaat("FCR"))
	{
		return 317;
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		return 318;
	}
	else if (iParam0 == joaat("GP1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		return 321;
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		return 322;
	}
	else if (iParam0 == Global_68786)
	{
		return 245;
	}
	else if (iParam0 == Global_68788)
	{
		return 324;
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("TORERO"))
	{
		return 326;
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		return 327;
	}
	else if (iParam0 == joaat("XA21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("APC"))
	{
		return 329;
	}
	else if (iParam0 == joaat("DUNE3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("HALFTRACK"))
	{
		return 331;
	}
	else if (iParam0 == joaat("OPPRESSOR"))
	{
		return 332;
	}
	else if (iParam0 == joaat("TAMPA3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		return 335;
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		return 336;
	}
	else if (iParam0 == joaat("LAZER"))
	{
		return 337;
	}
	else if (iParam0 == joaat("MICROLIGHT"))
	{
		return 338;
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		return 339;
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		return 340;
	}
	else if (iParam0 == joaat("STARLING"))
	{
		return 341;
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		return 342;
	}
	else if (iParam0 == joaat("TULA"))
	{
		return 343;
	}
	else if (iParam0 == joaat("PYRO"))
	{
		return 344;
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		return 345;
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		return 346;
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		return 347;
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		return 348;
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		return 349;
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		return 350;
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		return 352;
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		return 353;
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		return 354;
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("FUTO"))
	{
		return 415;
	}
	else if (iParam0 == joaat("RUINER"))
	{
		return 416;
	}
	else if (iParam0 == joaat("ROMERO"))
	{
		return 417;
	}
	else if (iParam0 == joaat("PRAIRIE"))
	{
		return 418;
	}
	else if (iParam0 == joaat("BALLER"))
	{
		return 419;
	}
	else if (iParam0 == joaat("SERRANO"))
	{
		return 420;
	}
	else if (iParam0 == joaat("BJXL"))
	{
		return 421;
	}
	else if (iParam0 == joaat("HABANERO"))
	{
		return 422;
	}
	else if (iParam0 == joaat("FQ2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("PATRIOT"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("TAXI"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("SPEEDO2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("BARRACKS2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("MIXER"))
	{
		return 455;
	}
	else if (iParam0 == joaat("DUNE2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("TRACTOR"))
	{
		return 457;
	}
	else if (iParam0 == joaat("BLISTA3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("Novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("Dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	return -1;
}

int func_612(int iParam0)
{
	if (func_309(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("BLAZER5") || iParam0 == joaat("BOXVILLE5")) || iParam0 == joaat("DUNE5")) || iParam0 == joaat("PHANTOM2")) || iParam0 == joaat("RUINER2")) || iParam0 == joaat("TECHNICAL2")) || iParam0 == joaat("VOLTIC2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("TECHNICAL3")) || iParam0 == joaat("INSURGENT3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("AIRBUS"):
		case joaat("AIRTUG"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("ARMYTANKER"):
		case joaat("ARMYTRAILER"):
		case joaat("asea2"):
		case joaat("BALETRAILER"):
		case joaat("BARRACKS"):
		case joaat("BARRACKS2"):
		case joaat("barracks3"):
		case joaat("BENSON"):
		case joaat("BESRA"):
		case joaat("BIFF"):
		case joaat("BLIMP"):
		case joaat("BLIMP2"):
		case joaat("BOATTRAILER"):
		case joaat("BOXVILLE"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("BOXVILLE4"):
		case joaat("bulldozer"):
		case joaat("BURRITO"):
		case joaat("burrito2"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("BUS"):
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
		case joaat("CADDY"):
		case joaat("caddy2"):
		case joaat("CAMPER"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("COACH"):
		case joaat("CRUSADER"):
		case joaat("CUBAN800"):
		case joaat("CUTTER"):
		case joaat("dilettante2"):
		case joaat("DINGHY"):
		case joaat("dinghy2"):
		case joaat("DINGHY3"):
		case joaat("docktrailer"):
		case joaat("DOCKTUG"):
		case joaat("DODO"):
		case joaat("DUMP"):
		case joaat("DUNE2"):
		case joaat("DUSTER"):
		case joaat("emperor3"):
		case joaat("FBI"):
		case joaat("FBI2"):
		case joaat("FIRETRUK"):
		case joaat("FIXTER"):
		case joaat("FLATBED"):
		case joaat("forklift"):
		case joaat("FREIGHT"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("FROGGER"):
		case joaat("frogger2"):
		case joaat("GBURRITO"):
		case joaat("GRAINTRAILER"):
		case joaat("HANDLER"):
		case joaat("HAULER"):
		case joaat("HYDRA"):
		case joaat("INSURGENT"):
		case joaat("JET"):
		case joaat("JETMAX"):
		case joaat("JOURNEY"):
		case joaat("LAZER"):
		case joaat("LGUARD"):
		case joaat("LIMO2"):
		case joaat("LUXOR"):
		case joaat("LUXOR2"):
		case joaat("MAMMATUS"):
		case joaat("MARSHALL"):
		case joaat("MARQUIS"):
		case joaat("MAVERICK"):
		case joaat("mesa2"):
		case joaat("METROTRAIN"):
		case joaat("MONSTER"):
		case joaat("MILJET"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("MOWER"):
		case joaat("MULE"):
		case joaat("mule2"):
		case joaat("MULE3"):
		case joaat("PACKER"):
		case joaat("PBUS"):
		case joaat("PHANTOM"):
		case joaat("POLICE"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("POLICE2"):
		case joaat("police3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("PONY"):
		case joaat("pony2"):
		case joaat("POUNDER"):
		case joaat("PRANGER"):
		case joaat("PREDATOR"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("RHINO"):
		case joaat("RIOT"):
		case joaat("RIPLEY"):
		case joaat("RUBBLE"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("SAVAGE"):
		case joaat("SCRAP"):
		case joaat("SEASHARK"):
		case joaat("seashark2"):
		case joaat("SHAMAL"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
		case joaat("SKYLIFT"):
		case joaat("SPEEDER"):
		case joaat("SPEEDO2"):
		case joaat("SQUALO"):
		case joaat("STOCKADE"):
		case joaat("stockade3"):
		case joaat("STRETCH"):
		case joaat("STUNT"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("SUNTRAP"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("TACO"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("TAXI"):
		case joaat("TECHNICAL"):
		case joaat("TOWTRUCK"):
		case joaat("towtruck2"):
		case joaat("TIPTRUCK"):
		case joaat("TIPTRUCK2"):
		case joaat("TITAN"):
		case joaat("TORO"):
		case joaat("TOURBUS"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("TRAILERS3"):
		case joaat("trailersmall"):
		case joaat("TRASH"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("TROPIC"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("VALKYRIE"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("VESTRA"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("DUNE4"):
		case joaat("ruiner3"):
		case joaat("BRICKADE"):
		case joaat("HAULER2"):
		case joaat("PHANTOM3"):
			return 0;
			break;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DODO");
		
		case 1:
			return joaat("TURISMOR");
		
		case 2:
			return joaat("toros");
		
		case 3:
			return joaat("MONROE");
		
		case 4:
			return joaat("VELUM");
		
		case 5:
			return joaat("furoregt");
		
		case 6:
			return joaat("INFERNUS");
		
		case 7:
			return joaat("INFERNUS2");
		
		case 8:
			return joaat("RUSTON");
		
		case 9:
			return joaat("MARQUIS");
		
		case 10:
			return joaat("DEFILER");
		
		case 11:
			return joaat("PIGALLE");
		
		case 12:
			return joaat("MASSACRO2");
		
		case 13:
			return joaat("TORNADO6");
		
		case 14:
			return joaat("TAMPA");
		
		case 15:
			return joaat("issi3");
		
		case 16:
			return joaat("JB700");
		
		case 17:
			return joaat("JESTER2");
		
		case 18:
			return joaat("kamacho");
		
		case 19:
			return joaat("fagaloa");
		
		case 20:
			return joaat("impaler");
		
		case 21:
			return joaat("DOMINATOR2");
		
		case 22:
			return joaat("MAMMATUS");
		
		case 23:
			return joaat("JETMAX");
		
		case 24:
			return joaat("STALION2");
		
		case 25:
			return joaat("MASSACRO");
		
		case 26:
			return joaat("ESSKEY");
		
		case 27:
			return joaat("cognoscenti");
		
		case 28:
			return joaat("XLS");
		
		case 29:
			return joaat("SUPERD");
		
		case 30:
			return joaat("STUNT");
		
		case 31:
			return joaat("CUBAN800");
		
		case 32:
			return joaat("VACCA");
		
		case 33:
			return joaat("JESTER");
		
		case 34:
			return joaat("GAUNTLET2");
		
		case 35:
			return joaat("EXEMPLAR");
		
		case 36:
			return joaat("SLAMVAN2");
		
		case 37:
			return joaat("GLENDALE");
		
		case 38:
			return joaat("SQUALO");
		
		case 39:
			return joaat("carbonizzare");
		
		case 40:
			return joaat("VIRGO");
		
		case 41:
			return joaat("cogcabrio");
		
		case 42:
			return joaat("DINGHY3");
		
		case 43:
			return joaat("BLADE");
		
		case 44:
			return joaat("BULLET");
		
		case 45:
			return joaat("BRIOSO");
		
		case 46:
			return joaat("VOLTIC");
		
		case 47:
			return joaat("VOLTIC2");
		
		case 48:
			return joaat("ALPHA");
		
		case 49:
			return joaat("feltzer2");
		
		case 50:
			return joaat("cheburek");
		
		case 51:
			return joaat("rapidgt2");
		
		case 52:
			return joaat("RHAPSODY");
		
		case 53:
			return joaat("COQUETTE");
		
		case 54:
			return joaat("COQUETTE2");
		
		case 55:
			return joaat("RAPIDGT");
		
		case 56:
			return joaat("NINEF2");
		
		case 57:
			return joaat("KURUMA");
		
		case 58:
			return joaat("NINEF");
		
		case 59:
			return joaat("SCHAFTER3");
		
		case 60:
			return joaat("SURANO");
		
		case 61:
			return joaat("BANSHEE");
		
		case 62:
			return joaat("khamelion");
		
		case 63:
			return joaat("NIGHTBLADE");
		
		case 64:
			return joaat("CHINO");
		
		case 65:
			return joaat("DIABLOUS");
		
		case 66:
			return joaat("VIRGO3");
		
		case 67:
			return joaat("FCR");
		
		case 68:
			return joaat("COMET2");
		
		case 69:
			return joaat("ZOMBIEA");
		
		case 70:
			return joaat("FELON2");
		
		case 71:
			return joaat("BF400");
		
		case 72:
			return joaat("FELON");
		
		case 73:
			return joaat("BALLER2");
		
		case 74:
			return joaat("HOTKNIFE");
		
		case 75:
			return joaat("MESA3");
		
		case 76:
			return joaat("PANTO");
		
		case 77:
			return joaat("HAKUCHOU");
		
		case 78:
			return joaat("BLAZER4");
		
		case 79:
			return joaat("F620");
		
		case 80:
			return joaat("ORACLE2");
		
		case 81:
			return joaat("BIFTA");
		
		case 82:
			return joaat("STALION");
		
		case 83:
			return joaat("BLAZER3");
		
		case 84:
			return joaat("MANCHEZ");
		
		case 85:
			return joaat("SCHAFTER2");
		
		case 86:
			return joaat("ZION2");
		
		case 87:
			return joaat("DUKES");
		
		case 88:
			return joaat("JACKAL");
		
		case 89:
			return joaat("SERRANO");
		
		case 90:
			return joaat("PATRIOT");
		
		case 91:
			return joaat("FQ2");
		
		case 92:
			return joaat("SLAMVAN");
		
		case 93:
			return joaat("ENDURO");
		
		case 94:
			return joaat("FAGGIO");
		
		case 95:
			return joaat("BLISTA2");
		
		case 96:
			return joaat("carbonrs");
		
		case 97:
			return joaat("KALAHARI");
		
		case 98:
			return joaat("ratloader2");
		
		case 99:
			return joaat("FACTION");
		
		case 100:
			return joaat("BUFFALO");
		
		case 101:
			return joaat("dominator");
		
		case 102:
			return joaat("MOONBEAM");
		
		case 103:
			return joaat("GAUNTLET");
		
		case 104:
			return joaat("TORNADO");
		
		case 105:
			return joaat("buccaneer");
		
		case 106:
			return joaat("PRAIRIE");
		
		case 107:
			return joaat("PENUMBRA");
		
		case 108:
			return joaat("FUGITIVE");
		
		case 109:
			return joaat("ISSI2");
		
		case 110:
			return joaat("SEASHARK");
		
		case 111:
			return joaat("INTRUDER");
		
		case 112:
			return joaat("BAGGER");
		
		case 113:
			return joaat("bfinjection");
		
		case 114:
			return joaat("HEXER");
		
		case 115:
			return joaat("washington");
		
		case 116:
			return joaat("BATI");
		
		case 117:
			return joaat("BATI2");
		
		case 118:
			return joaat("SABREGT");
		
		case 119:
			return joaat("SULTAN");
		
		case 120:
			return joaat("NEMESIS");
		
		case 121:
			return joaat("DOUBLE");
		
		case 122:
			return joaat("TRIBIKE");
		
		case 123:
			return joaat("TRIBIKE2");
		
		case 124:
			return joaat("TRIBIKE3");
		
		case 125:
			return joaat("RUFFIAN");
		
		case 126:
			return joaat("RUINER");
		
		case 127:
			return joaat("PICADOR");
		
		case 128:
			return joaat("AKUMA");
		
		case 129:
			return joaat("PCJ");
		
		case 130:
			return joaat("PRIMO");
		
		case 131:
			return joaat("FUTO");
		
		case 132:
			return joaat("BLAZER");
		
		case 133:
			return joaat("SANCHEZ2");
		
		case 134:
			return joaat("SANCHEZ");
		
		case 135:
			return joaat("VOODOO2");
		
		case 136:
			return joaat("faggio2");
		
		case 137:
			return joaat("SCORCHER");
		
		case 138:
			return joaat("CRUISER");
		
		case 139:
			return joaat("BMX");
		
		case 140:
			return joaat("MINIVAN");
		
		default:
	}
	return 0;
}

int func_614()
{
	int iVar0[141];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 141)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_615(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 141)
	{
		if (iVar3 <= func_615(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_615(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_616(joaat("DODO"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 1:
		case 2:
		case 3:
			return Global_262145.f_25834;
			break;
		
		case 4:
			if (func_616(joaat("VELUM"), 0))
			{
				return 0;
			}
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return Global_262145.f_25834;
			break;
		
		case 9:
			if (func_616(joaat("MARQUIS"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
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
		case 19:
		case 20:
		case 21:
			return Global_262145.f_25834;
			break;
		
		case 22:
			if (func_616(joaat("MAMMATUS"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 23:
			if (func_616(joaat("JETMAX"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return Global_262145.f_25834;
			break;
		
		case 30:
			if (func_616(joaat("STUNT"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 31:
			if (func_616(joaat("CUBAN800"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			return Global_262145.f_25834;
			break;
		
		case 37:
			return Global_262145.f_25835;
			break;
		
		case 38:
			if (func_616(joaat("SQUALO"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25835;
			}
			break;
		
		case 39:
		case 40:
		case 41:
			return Global_262145.f_25835;
			break;
		
		case 42:
			if (func_616(joaat("SQUALO"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25835;
			}
			break;
		
		case 43:
		case 44:
		case 45:
			return Global_262145.f_25835;
			break;
		
		case 46:
			return Global_262145.f_25836;
			break;
		
		case 47:
			if (func_475(joaat("VOLTIC2"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
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
			return Global_262145.f_25835;
			break;
		
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
			return Global_262145.f_25836;
			break;
		
		case 110:
			if (func_616(joaat("SEASHARK"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return Global_262145.f_25836;
			break;
		
		case 122:
			if (func_475(joaat("TRIBIKE"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
		case 123:
			if (func_475(joaat("TRIBIKE2"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
		case 124:
			if (func_475(joaat("TRIBIKE3"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return Global_262145.f_25836;
			break;
		
		case 137:
			if (func_475(joaat("SCORCHER"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
		case 138:
			if (func_475(joaat("CRUISER"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
		case 139:
			if (func_475(joaat("BMX"), -1))
			{
				return Global_262145.f_25836;
			}
			else
			{
				return 0;
			}
			break;
		
		case 140:
			return Global_262145.f_25836;
			break;
	}
	return 0;
}

int func_616(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_611(iParam0);
	iVar1 = func_590(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return func_584(iVar1);
	}
	return 0;
}

int func_617()
{
	int iVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_618(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (iVar3 <= func_618(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_618(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25827;
		
		case 1:
			return Global_262145.f_25828;
		
		case 2:
			return Global_262145.f_25829;
		
		case 3:
			return Global_262145.f_25830;
		
		case 4:
			return Global_262145.f_25831;
		
		case 5:
			return Global_262145.f_25832;
		
		case 6:
			return Global_262145.f_25833;
		
		default:
	}
	return 0;
}

int func_619(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		iVar0 = func_648(iParam3);
	}
	else if (iParam3 == -1)
	{
		iVar1 = func_646();
		iVar0 = func_645(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam4)
		{
			StringCopy(sParam1, func_644(), 64);
		}
		if (func_620(iVar0, 3, uParam2, 4, -1))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_620(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_643(iParam1))
	{
	}
	else
	{
		iVar0 = func_116();
		iVar1 = (Global_262145.f_26157 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_641();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_640(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_116() - Global_1689891);
			func_639(iVar4, 1);
			func_637();
			func_635();
			Global_1689891 = (Global_1689891 + iVar4);
			if (iParam1 == 0)
			{
				func_629(iVar4);
				Global_2458546 = 1;
			}
			else if (iParam1 == 3)
			{
				func_624(iVar4);
				if (iVar4 >= Global_262145.f_26165)
				{
					Global_2458547 = 1;
				}
				else if (iVar4 >= Global_262145.f_26164)
				{
					Global_2458546 = 1;
				}
			}
			Var5 = func_623(iParam1);
			Var5.f_1 = func_622(iParam1, iParam3, iParam4);
			if (func_621(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1689891;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_622(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_623(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_624(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_628();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_627();
	if (iVar0 == 0)
	{
		func_626();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26159)
	{
		func_625();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26161)
	{
		func_93(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26161);
		func_625();
		Global_2458546 = 1;
	}
	else
	{
		func_93(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_625()
{
	func_626();
}

void func_626()
{
	func_93(joaat("MPPLY_CASINO_CHIPS_WONTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_627()
{
	return func_160(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_628()
{
	return func_160(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_634();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_633();
	if (iVar0 == 0)
	{
		func_632();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26158)
	{
		func_631();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_630()
	{
		func_93(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_630());
		func_631();
		Global_2458546 = 1;
	}
	else
	{
		func_93(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

int func_630()
{
	if (func_121(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_25953;
	}
	return Global_262145.f_25952;
}

void func_631()
{
	func_632();
}

void func_632()
{
	func_93(joaat("MPPLY_CASINO_CHIPS_PURTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_633()
{
	return func_160(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_634()
{
	return func_160(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_635()
{
	if (MISC::IS_BIT_SET(Global_1689926, 6))
	{
		MISC::SET_BIT(&Global_1689926, 9);
		func_636(&Global_1689929, 0, 0);
	}
}

void func_636(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_637()
{
	if (func_638())
	{
		MISC::SET_BIT(&Global_1689926, 1);
	}
}

bool func_638()
{
	return (MISC::IS_BIT_SET(Global_1689926, 6) || MISC::IS_BIT_SET(Global_1689926, 5));
}

void func_639(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1689926, 6);
	Global_1689927 = iParam0;
	Global_1689928 = iParam1;
}

bool func_640(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_621(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_67())
	{
		if (*uParam0 == 0)
		{
			if (func_68() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_623(iParam1);
			iVar5 = -22148635;
			if (func_643(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_102(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_102(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_97())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_96(func_68()))
			{
				if (func_95(func_68()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_69(func_68()));
					if (func_643(iParam1))
					{
						MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_63(func_68());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 0))
	{
		if (func_643(iParam1))
		{
			MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

int func_641()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_630() - func_633());
	iVar1 = (Global_262145.f_26157 - func_116());
	iVar2 = func_642();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_642()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_630();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_643(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_644()
{
	return "CAS_LW_MCI1";
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26179;
		
		case 1:
			return Global_262145.f_26180;
		
		case 2:
			return Global_262145.f_26177;
		
		case 3:
			return Global_262145.f_26178;
		
		case 4:
			return Global_262145.f_26175;
		
		case 5:
			return Global_262145.f_26176;
		
		default:
	}
	return 0;
}

int func_646()
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_647(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_647(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_647(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25836;
		
		case 1:
			return Global_262145.f_25836;
		
		case 2:
			return Global_262145.f_25835;
		
		case 3:
			return Global_262145.f_25835;
		
		case 4:
			return Global_262145.f_25834;
		
		case 5:
			return Global_262145.f_25834;
		
		default:
	}
	return 0;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 10000;
		
		case 14:
			return 15000;
		
		case 15:
			return 20000;
		
		case 16:
			return 25000;
		
		default:
	}
	return 0;
}

int func_649(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_661(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_659();
		iVar0 = func_658(iVar1);
	}
	if (iVar0 > 0)
	{
		if (func_67())
		{
			func_654(1261538664, iVar0, &uVar2, 0, 0, 0);
			if (bParam3)
			{
				StringCopy(sParam1, func_653(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
		else
		{
			func_650(iVar0, 0);
			MONEY::_NETWORK_EARN_FROM_SPIN_THE_WHEEL_CASH(iVar0);
			if (bParam3)
			{
				StringCopy(sParam1, func_653(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

void func_650(int iParam0, int iParam1)
{
	func_652(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_651(iParam0, 0);
	}
}

void func_651(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_652(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_4 = iVar1;
	Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_3 = (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_651(iVar1, 0);
	}
}

char* func_653()
{
	return "CAS_LW_MC1";
}

void func_654(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_67())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_655(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_655(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_655(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_655(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case 1727256317:
		case -2017925037:
			func_655(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_655(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_67())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_14()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_105(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_657(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_656(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_63(iParam0);
	}
}

void func_657(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_658(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26186;
		
		case 1:
			return Global_262145.f_26187;
		
		case 2:
			return Global_262145.f_26188;
		
		case 3:
			return Global_262145.f_26183;
		
		case 4:
			return Global_262145.f_26184;
		
		case 5:
			return Global_262145.f_26185;
		
		case 6:
			return Global_262145.f_26181;
		
		case 7:
			return Global_262145.f_26182;
		
		default:
	}
	return 0;
}

int func_659()
{
	int iVar0[8];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_660(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iVar3 <= func_660(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_660(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25836;
		
		case 1:
			return Global_262145.f_25836;
		
		case 2:
			return Global_262145.f_25836;
		
		case 3:
			return Global_262145.f_25835;
		
		case 4:
			return Global_262145.f_25835;
		
		case 5:
			return Global_262145.f_25835;
		
		case 6:
			return Global_262145.f_25834;
		
		case 7:
			return Global_262145.f_25834;
		
		default:
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 20000;
		
		case 10:
			return 30000;
		
		case 11:
			return 40000;
		
		case 12:
			return 50000;
		
		default:
	}
	return 0;
}

int func_662(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_669(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_667();
		iVar0 = func_666(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam3)
		{
			StringCopy(sParam1, func_665(), 64);
		}
		*uParam0 = iVar0;
		func_664();
		func_146(0, PLAYER::PLAYER_PED_ID(), func_663(iParam2), -1827353931, 1223799452, iVar0, 1, -1, 0, 0, 0);
		return 1;
	}
	return 0;
}

char* func_663(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "LUCKY WHEEL RP2500";
		
		case 5:
			return "LUCKY WHEEL RP5000";
		
		case 6:
			return "LUCKY WHEEL RP7500";
		
		case 7:
			return "LUCKY WHEEL RP10K";
		
		case 8:
			return "LUCKY WHEEL RP15K";
		
		default:
	}
	return "UNKNOWN";
}

void func_664()
{
	Global_2460154 = 1;
}

char* func_665()
{
	return "CAS_LW_MRP1";
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26173;
		
		case 1:
			return Global_262145.f_26174;
		
		case 2:
			return Global_262145.f_26171;
		
		case 3:
			return Global_262145.f_26172;
		
		case 4:
			return Global_262145.f_26169;
		
		case 5:
			return Global_262145.f_26170;
		
		default:
	}
	return 0;
}

int func_667()
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_668(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_668(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_668(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25836;
		
		case 1:
			return Global_262145.f_25836;
		
		case 2:
			return Global_262145.f_25835;
		
		case 3:
			return Global_262145.f_25835;
		
		case 4:
			return Global_262145.f_25834;
		
		case 5:
			return Global_262145.f_25834;
		
		default:
	}
	return 0;
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 2500;
		
		case 5:
			return 5000;
		
		case 6:
			return 7500;
		
		case 7:
			return 10000;
		
		case 8:
			return 15000;
		
		default:
	}
	return 0;
}

int func_670(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_675(bParam3);
		if (iVar0 != -1)
		{
			if (func_674())
			{
				func_141(func_672(MISC::GET_HASH_KEY(func_673(iVar0))), 1, -1, 1);
				StringCopy(sParam0, func_673(iVar0), 64);
				return 1;
			}
			else if (!func_671(iVar0))
			{
				func_141(func_672(MISC::GET_HASH_KEY(func_673(iVar0))), 1, -1, 1);
				StringCopy(sParam0, func_673(iVar0), 64);
				return 1;
			}
		}
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_675(bParam3);
		if (iVar1 != -1)
		{
			if (func_674())
			{
				MISC::CLEAR_BIT(iParam1, 19);
				StringCopy(sParam0, func_673(iVar1), 64);
				return 0;
			}
			else if (!func_671(iVar1))
			{
				func_141(func_672(MISC::GET_HASH_KEY(func_673(iVar1))), 1, -1, 1);
				StringCopy(sParam0, func_673(iVar1), 64);
				return 1;
			}
		}
	}
	return 0;
}

bool func_671(int iParam0)
{
	return func_587(func_672(MISC::GET_HASH_KEY(func_673(iParam0))), -1, -1);
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 1436451705:
			return 26970;
		
		case joaat("CLO_ARF_O_12"):
			return 26971;
		
		case joaat("CLO_IEF_O_2"):
			return 26972;
		
		case -2066046545:
			return 26973;
		
		case joaat("CLO_BIF_O_11"):
			return 26974;
		
		case joaat("CLO_STF_O_5"):
			return 26975;
		
		case joaat("CLO_SMF_O_1"):
			return 26976;
		
		case 1210095949:
			return 26977;
		
		case joaat("CLO_STF_O_8"):
			return 26978;
		
		case joaat("CLO_HSTF_O_20"):
			return 26979;
		
		case -1811256960:
			return 26979;
		
		case 1396642220:
			return 26980;
		
		case 217769821:
			return 26981;
		
		case joaat("CLO_GRF_O_1"):
			return 26982;
		
		case joaat("CLO_LXF_U_3_8"):
			return 26983;
		
		case -211022504:
			return 26984;
		
		case 549611408:
			return 26985;
		
		case joaat("CLO_HSTF_S_1_1"):
			return 26986;
		
		case joaat("CLO_IEF_O_11"):
			return 26987;
		
		case joaat("CLO_BIF_U_23_1"):
			return 26988;
		
		case -2056056404:
			return 26989;
		
		case joaat("CLO_EXF_OB_14"):
			return 26990;
		
		case -1153506760:
			return 26991;
		
		case 1699990915:
			return 26992;
		
		case joaat("CLO_L2F_U_7_15"):
			return 26993;
		
		case -1396600463:
			return 26994;
		
		case joaat("CLO_L2F_U_7_12"):
			return 26995;
		
		case joaat("CLO_L2F_U_7_11"):
			return 26996;
		
		case joaat("CLO_STF_U_7_4"):
			return 26997;
		
		case joaat("CLO_IEF_U_3_7"):
			return 26998;
		
		case joaat("CLO_L2F_U_7_1"):
			return 26999;
		
		case joaat("CLO_EXF_OA_0"):
			return 27000;
		
		case 440842954:
			return 27001;
		
		case joaat("CLO_HSTF_O_G_3"):
			return 27001;
		
		case -1708271834:
			return 27002;
		
		case 573367806:
			return 27003;
		
		case -1146312016:
			return 27004;
		
		case joaat("CLO_STF_U_5_9"):
			return 27005;
		
		case -247904379:
			return 27006;
		
		case 1384042054:
			return 27007;
		
		case joaat("CLO_STF_U_5_1"):
			return 27008;
		
		case 926596245:
			return 27009;
		
		case joaat("CLO_HSTF_O_J_2"):
			return 27010;
		
		case -1803247262:
			return 27010;
		
		case joaat("CLO_STF_U_5_6"):
			return 27011;
		
		case joaat("CLO_GRF_U_21_12"):
			return 27012;
		
		case 1117115207:
			return 27013;
		
		case joaat("CLO_GRF_U_21_20"):
			return 27014;
		
		case 1111421610:
			return 27015;
		
		case joaat("CLO_SMF_U_2_15"):
			return 27016;
		
		case joaat("CLO_IEF_U_14_4"):
			return 27017;
		
		case joaat("CLO_IEF_U_14_21"):
			return 27018;
		
		case joaat("CLO_IEF_U_14_9"):
			return 27019;
		
		case 605265254:
			return 27020;
		
		case joaat("CLO_BIF_U_31_1"):
			return 27021;
		
		case joaat("CLO_SMF_U_2_7"):
			return 27022;
		
		case 1586867035:
			return 27023;
		
		case joaat("CLO_SMF_U_2_23"):
			return 27024;
		
		case joaat("CLO_STF_U_5_12"):
			return 27025;
		
		case joaat("CLO_SMF_U_2_19"):
			return 27026;
		
		case joaat("CLO_STF_U_6_18"):
			return 27027;
		
		case joaat("CLO_IEF_U_14_0"):
			return 27028;
		
		case joaat("CLO_EXF_EU_5_0"):
			return 27029;
		
		case joaat("CLO_IEF_U_14_7"):
			return 27030;
		
		case -111410208:
			return 27031;
		
		case -1198246502:
			return 27032;
		
		case joaat("CLO_LXF_U_5_0"):
			return 27033;
		
		case joaat("CLO_IEF_U_4_8"):
			return 27034;
		
		case joaat("CLO_HSTF_O_L_0"):
			return 27035;
		
		case -2106125641:
			return 27035;
		
		case joaat("CLO_HSTF_S_0_0"):
			return 27036;
		
		case joaat("CLO_GRF_U_20_15"):
			return 27037;
		
		case -1545864427:
			return 27038;
		
		case joaat("CLO_IEF_U_1_9"):
			return 27039;
		
		case joaat("CLO_LTSFU_0_0"):
			return 27040;
		
		case joaat("CLO_S2F_U_3_12"):
			return 27041;
		
		case joaat("CLO_IEF_U_4_5"):
			return 27042;
		
		case joaat("CLO_GRF_U_20_24"):
			return 27043;
		
		case joaat("CLO_SMF_U_3_8"):
			return 27044;
		
		case joaat("CLO_IEF_U_4_22"):
			return 27045;
		
		case joaat("CLO_GRF_U_19_16"):
			return 27046;
		
		case joaat("CLO_HSTF_U_0_3"):
			return 27047;
		
		case joaat("CLO_HSTF_U_16_5"):
			return 27048;
		
		case joaat("CLO_SMF_U_3_5"):
			return 27049;
		
		case joaat("CLO_SMF_U_3_6"):
			return 27050;
		
		case joaat("CLO_LXF_U_6_3"):
			return 27051;
		
		case joaat("CLO_S2F_D_7"):
			return 27052;
		
		case joaat("CLO_GRF_U_19_23"):
			return 27053;
		
		case joaat("CLO_GRF_U_0_13"):
			return 27054;
		
		case joaat("CLO_S2F_D_18"):
			return 27055;
		
		case joaat("CLO_EXF_EU_4_2"):
			return 27056;
		
		case joaat("CLO_HP_F_D_10"):
			return 27057;
		
		case joaat("CLO_LXF_U_6_18"):
			return 27058;
		
		case joaat("CLO_IEF_U_7_5"):
			return 27059;
		
		case joaat("CLO_BIF_DECL_67"):
			return 27060;
		
		case -2129160580:
			return 27061;
		
		case joaat("CLO_S1F_U_3_1"):
			return 27062;
		
		case joaat("CLO_IEF_U_7_14"):
			return 27063;
		
		case joaat("CLO_GRF_U_15_10"):
			return 27064;
		
		case joaat("CLO_GRF_U_2_6"):
			return 27065;
		
		case joaat("CLO_IEF_U_7_12"):
			return 27066;
		
		case joaat("CLO_SMF_DECL_16"):
			return 27067;
		
		case 1819862242:
			return 27068;
		
		case joaat("CLO_SMF_DECL_15"):
			return 27069;
		
		case joaat("CLO_BIF_DECL_2"):
			return 27070;
		
		case joaat("CLO_SMF_DECL_7"):
			return 27071;
		
		case joaat("CLO_HP_F_D_9"):
			return 27072;
		
		case joaat("CLO_EXF_EU_9_5"):
			return 27073;
		
		case joaat("CLO_S2F_D_23"):
			return 27074;
		
		case joaat("CLO_SMF_DECL_5"):
			return 27075;
		
		case 1314232490:
			return 27076;
		
		case 2091337530:
			return 27077;
		
		case 572834473:
			return 27078;
		
		case 202917910:
			return 27079;
		
		case -646852824:
			return 27080;
		
		case -905176471:
			return 27081;
		
		case -2111578974:
			return 27082;
		
		case -1767373458:
			return 27083;
		
		case -777211037:
			return 27084;
		
		case -1077066219:
			return 27085;
		
		case -1649792514:
			return 27086;
		
		case 999687:
			return 27087;
		
		case -706446153:
			return 27088;
		
		case 1446655494:
			return 27120;
		
		case -29489557:
			return 27121;
		
		case 1907813631:
			return 27122;
		
		case -1104607682:
			return 27123;
		
		case 802679194:
			return 27124;
		
		case -108266237:
			return 27125;
		
		case -883777391:
			return 27126;
		
		case -1609398199:
			return 27127;
		
		case -1140765579:
			return 27128;
		
		case -1372049181:
			return 27129;
		
		case -1603496628:
			return 27130;
		
		case 308640072:
			return 27131;
		
		case 74374491:
			return 27132;
		
		case 1026674400:
			return 27133;
		
		case -410770554:
			return 27134;
		
		case 559814457:
			return 27135;
		
		case 1242982569:
			return 27136;
		
		case -2080678794:
			return 27137;
		
		case -1998915058:
			return 27138;
		
		case 1758900608:
			return 27139;
		
		case 1465552520:
			return 27140;
		
		case 871876547:
			return 27141;
		
		case 1233646299:
			return 27142;
		
		case 637217730:
			return 27143;
		
		case 323028558:
			return 27144;
		
		case -19210870:
			return 27145;
		
		default:
	}
	switch (iParam0)
	{
		case 356158649:
			return 26970;
		
		case -1531197816:
			return 26971;
		
		case -1034765426:
			return 26972;
		
		case 606339585:
			return 26973;
		
		case 1640388520:
			return 26974;
		
		case -1782451678:
			return 26975;
		
		case 367900409:
			return 26976;
		
		case -775662644:
			return 26977;
		
		case -2012260675:
			return 26978;
		
		case -1302177064:
			return 26980;
		
		case -1136047157:
			return 26981;
		
		case -1372799004:
			return 26982;
		
		case 104927579:
			return 26983;
		
		case -171114594:
			return 26984;
		
		case -838590238:
			return 26985;
		
		case 2027106086:
			return 26986;
		
		case -1336477820:
			return 26987;
		
		case 705382167:
			return 26988;
		
		case 812088197:
			return 26989;
		
		case 812418446:
			return 26990;
		
		case -1264556776:
			return 26991;
		
		case 1453608509:
			return 26992;
		
		case 1569094027:
			return 26993;
		
		case 980555213:
			return 26994;
		
		case 734984327:
			return 26995;
		
		case -1280109902:
			return 26997;
		
		case 157775689:
			return 26998;
		
		case -806866102:
			return 26999;
		
		case 878989084:
			return 27000;
		
		case 2083622977:
			return 27014;
		
		case -1591628927:
			return 27002;
		
		case 59522077:
			return 27003;
		
		case -618721866:
			return 27004;
		
		case -753950190:
			return 27005;
		
		case 952510537:
			return 27006;
		
		case 1675485666:
			return 27007;
		
		case 1636056825:
			return 27008;
		
		case 1008378545:
			return 27009;
		
		case 1279202415:
			return 26996;
		
		case 541533437:
			return 27011;
		
		case -445352626:
			return 27012;
		
		case 396333646:
			return 27013;
		
		case 1019849569:
			return 27015;
		
		case -1045574863:
			return 27017;
		
		case 2099692609:
			return 27018;
		
		case -1711208698:
			return 27019;
		
		case 1907567974:
			return 27020;
		
		case -1708304112:
			return 27021;
		
		case 1195459540:
			return 27022;
		
		case -289956978:
			return 27023;
		
		case 1139128717:
			return 27024;
		
		case -1728576554:
			return 27025;
		
		case 931720181:
			return 27026;
		
		case -411167027:
			return 27027;
		
		case -1560788630:
			return 27028;
		
		case 1410429459:
			return 27029;
		
		case -305731999:
			return 27030;
		
		case 1850648209:
			return 27031;
		
		case -1816187924:
			return 27032;
		
		case 1783002076:
			return 27033;
		
		case 1828567552:
			return 27034;
		
		case 330659273:
			return 27016;
		
		case -1361580068:
			return 27036;
		
		case -2009519706:
			return 27037;
		
		case 1432405432:
			return 27038;
		
		case 1822394461:
			return 27039;
		
		case -1234554049:
			return 27040;
		
		case -1856607714:
			return 27041;
		
		case -716314589:
			return 27042;
		
		case 1511736932:
			return 27043;
		
		case -413109371:
			return 27044;
		
		case 199661462:
			return 27045;
		
		case 2029318935:
			return 27046;
		
		case 1767898797:
			return 27047;
		
		case -1926488251:
			return 27048;
		
		case -708236452:
			return 27049;
		
		case -410464549:
			return 27050;
		
		case 710288251:
			return 27051;
		
		case -852450789:
			return 27052;
		
		case 1530127197:
			return 27053;
		
		case 1970975125:
			return 27054;
		
		case 578571729:
			return 27055;
		
		case 528977640:
			return 27056;
		
		case -182260974:
			return 27057;
		
		case -650509440:
			return 27058;
		
		case 789331251:
			return 27059;
		
		case -346883788:
			return 27060;
		
		case 997661638:
			return 27061;
		
		case -1732981414:
			return 27062;
		
		case 1831034499:
			return 27063;
		
		case -1457557962:
			return 27064;
		
		case 1666283142:
			return 27065;
		
		case -591080416:
			return 27066;
		
		case -1848613075:
			return 27067;
		
		case joaat("CLO_S1M_DEC_25"):
			return 27068;
		
		case 698226378:
			return 27069;
		
		case 85350297:
			return 27070;
		
		case 1727712047:
			return 27071;
		
		case -1229400975:
			return 27072;
		
		case 2089452078:
			return 27073;
		
		case -1711900307:
			return 27074;
		
		case 355772324:
			return 27075;
		
		case -2071810596:
			return 27076;
		
		case -119844455:
			return 27077;
		
		case 683400644:
			return 27078;
		
		case 601407264:
			return 27079;
		
		case joaat("CLO_GRM_DECL_27"):
			return 27080;
		
		case 795762148:
			return 27081;
		
		case joaat("CLO_HST_A_0"):
			return 27082;
		
		case 366454706:
			return 27083;
		
		case joaat("CLO_HST_A_9"):
			return 27084;
		
		case -1521092209:
			return 27085;
		
		case 1970016848:
			return 27086;
		
		case 807882589:
			return 27087;
		
		case 885717964:
			return 27088;
		
		case 780852563:
			return 27120;
		
		case -133599151:
			return 27121;
		
		case 173741300:
			return 27122;
		
		case -714822904:
			return 27123;
		
		case -406892611:
			return 27124;
		
		case -1362076192:
			return 27125;
		
		case -1022261662:
			return 27126;
		
		case 1673296252:
			return 27127;
		
		case -994642134:
			return 27128;
		
		case -1283304255:
			return 27129;
		
		case -1021447204:
			return 27130;
		
		case -1198989646:
			return 27131;
		
		case -441861897:
			return 27132;
		
		case -54270165:
			return 27133;
		
		case -349092858:
			return 27134;
		
		case 427761825:
			return 27135;
		
		case 263523597:
			return 27136;
		
		case 1037953374:
			return 27137;
		
		case 103365845:
			return 27138;
		
		case 1692546288:
			return 27139;
		
		case 1135702663:
			return 27140;
		
		case 1885162466:
			return 27141;
		
		case 156401098:
			return 27142;
		
		case -456805199:
			return 27143;
		
		case 848285764:
			return 27144;
		
		case -1722442286:
			return 27145;
		
		default:
	}
	return 0;
}

char* func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLO_H2F_O_S_16";
		
		case 1:
			return "CLO_ARF_O_12";
		
		case 2:
			return "CLO_IEF_O_2";
		
		case 3:
			return "CLO_H2F_S_6_0";
		
		case 4:
			return "CLO_BIF_O_11";
		
		case 5:
			return "CLO_STF_O_5";
		
		case 6:
			return "CLO_SMF_O_1";
		
		case 7:
			return "CLO_STF_O_E_1";
		
		case 8:
			return "CLO_STF_O_8";
		
		case 9:
			return "CLO_HSTF_O_20";
		
		case 10:
			return "CLO_H2F_S_4_0";
		
		case 11:
			return "CLO_H2F_O_G_21";
		
		case 12:
			return "CLO_GRF_O_1";
		
		case 13:
			return "CLO_LXF_U_3_8";
		
		case 14:
			return "CLO_H2F_S_9_0";
		
		case 15:
			return "CLO_H2F_S_9_5";
		
		case 16:
			return "CLO_HSTF_S_1_1";
		
		case 17:
			return "CLO_IEF_O_11";
		
		case 18:
			return "CLO_BIF_U_23_1";
		
		case 19:
			return "CLO_BHF_U_11_17";
		
		case 20:
			return "CLO_EXF_OB_14";
		
		case 21:
			return "CLO_H2F_U_3_25";
		
		case 22:
			return "CLO_BHF_U_6_1";
		
		case 23:
			return "CLO_L2F_U_7_15";
		
		case 24:
			return "CLO_BHF_U_14_1";
		
		case 25:
			return "CLO_L2F_U_7_12";
		
		case 26:
			return "CLO_L2F_U_7_11";
		
		case 27:
			return "CLO_STF_U_7_4";
		
		case 28:
			return "CLO_IEF_U_3_7";
		
		case 29:
			return "CLO_L2F_U_7_1";
		
		case 30:
			return "CLO_EXF_OA_0";
		
		case 31:
			return "CLO_HSTF_O_G_3";
		
		case 32:
			return "CLO_BHF_U_5_18";
		
		case 33:
			return "CLO_BHF_U_5_20";
		
		case 34:
			return "CLO_BHF_U_2_14";
		
		case 35:
			return "CLO_STF_U_5_9";
		
		case 36:
			return "CLO_BHF_U_5_3";
		
		case 37:
			return "CLO_BHF_U_13_0";
		
		case 38:
			return "CLO_STF_U_5_1";
		
		case 39:
			return "CLO_BHF_U_4_2";
		
		case 40:
			return "CLO_HSTF_O_J_2";
		
		case 41:
			return "CLO_STF_U_5_6";
		
		case 42:
			return "CLO_GRF_U_21_12";
		
		case 43:
			return "CLO_BHF_U_4_5";
		
		case 44:
			return "CLO_GRF_U_21_20";
		
		case 45:
			return "CLO_BHF_U_7_1";
		
		case 46:
			return "CLO_SMF_U_2_15";
		
		case 47:
			return "CLO_IEF_U_14_4";
		
		case 48:
			return "CLO_IEF_U_14_21";
		
		case 49:
			return "CLO_IEF_U_14_9";
		
		case 50:
			return "CLO_BHF_U_7_14";
		
		case 51:
			return "CLO_BIF_U_31_1";
		
		case 52:
			return "CLO_SMF_U_2_7";
		
		case 53:
			return "CLO_BHF_U_7_7";
		
		case 54:
			return "CLO_SMF_U_2_23";
		
		case 55:
			return "CLO_STF_U_5_12";
		
		case 56:
			return "CLO_SMF_U_2_19";
		
		case 57:
			return "CLO_STF_U_6_18";
		
		case 58:
			return "CLO_IEF_U_14_0";
		
		case 59:
			return "CLO_EXF_EU_5_0";
		
		case 60:
			return "CLO_IEF_U_14_7";
		
		case 61:
			return "CLO_BHF_U_4_18";
		
		case 62:
			return "CLO_BHF_U_0_17";
		
		case 63:
			return "CLO_LXF_U_5_0";
		
		case 64:
			return "CLO_IEF_U_4_8";
		
		case 65:
			return "CLO_HSTM_O_L_0";
		
		case 66:
			return "CLO_HSTF_S_0_0";
		
		case 67:
			return "CLO_GRF_U_20_15";
		
		case 68:
			return "CLO_BHF_U_0_2";
		
		case 69:
			return "CLO_IEF_U_1_9";
		
		case 70:
			return "CLO_LTSFU_0_0";
		
		case 71:
			return "CLO_S2F_U_3_12";
		
		case 72:
			return "CLO_IEF_U_4_5";
		
		case 73:
			return "CLO_GRF_U_20_24";
		
		case 74:
			return "CLO_SMF_U_3_8";
		
		case 75:
			return "CLO_IEF_U_4_22";
		
		case 76:
			return "CLO_GRF_U_19_16";
		
		case 77:
			return "CLO_HSTF_U_0_3";
		
		case 78:
			return "CLO_HSTF_U_16_5";
		
		case 79:
			return "CLO_SMF_U_3_5";
		
		case 80:
			return "CLO_SMF_U_3_6";
		
		case 81:
			return "CLO_LXF_U_6_3";
		
		case 82:
			return "CLO_S2F_D_7";
		
		case 83:
			return "CLO_GRF_U_19_23";
		
		case 84:
			return "CLO_GRF_U_0_13";
		
		case 85:
			return "CLO_S2F_D_18";
		
		case 86:
			return "CLO_EXF_EU_4_2";
		
		case 87:
			return "CLO_HP_F_D_10";
		
		case 88:
			return "CLO_LXF_U_6_18";
		
		case 89:
			return "CLO_IEF_U_7_5";
		
		case 90:
			return "CLO_BIF_DECL_67";
		
		case 91:
			return "CLO_BHF_U_16_1";
		
		case 92:
			return "CLO_S1F_U_3_1";
		
		case 93:
			return "CLO_IEF_U_7_14";
		
		case 94:
			return "CLO_GRF_U_15_10";
		
		case 95:
			return "CLO_GRF_U_2_6";
		
		case 96:
			return "CLO_IEF_U_7_12";
		
		case 97:
			return "CLO_SMF_DECL_16";
		
		case 98:
			return "CLO_S1F_DEC_23";
		
		case 99:
			return "CLO_SMF_DECL_15";
		
		case 100:
			return "CLO_BIF_DECL_2";
		
		case 101:
			return "CLO_SMF_DECL_7";
		
		case 102:
			return "CLO_HP_F_D_9";
		
		case 103:
			return "CLO_EXF_EU_9_5";
		
		case 104:
			return "CLO_S2F_D_23";
		
		case 105:
			return "CLO_SMF_DECL_5";
		
		case 106:
			return "CLO_BIF_DECL_63";
		
		case 107:
			return "CLO_AWF_DECL_23";
		
		case 108:
			return "CLO_BIF_DECL_49";
		
		case 109:
			return "CLO_HALF_D_10";
		
		case 110:
			return "CLO_GRF_DECL_27";
		
		case 111:
			return "CLO_LXF_DEC_35";
		
		case 112:
			return "CLO_HST_F_A_0";
		
		case 113:
			return "CLO_HST_F_A_9";
		
		case 114:
			return "CLO_BHF_DECL_19";
		
		case 115:
			return "CLO_INDF_HT_6_2";
		
		case 116:
			return "CLO_EXF_DECL_3";
		
		case 117:
			return "CLO_X4F_B_7_0";
		
		case 118:
			return "CLO_X2F_B_2_0";
		
		case 119:
			return "CLO_VWF_U_13_0";
		
		case 120:
			return "CLO_VWF_U_13_1";
		
		case 121:
			return "CLO_VWF_U_13_2";
		
		case 122:
			return "CLO_VWF_U_13_3";
		
		case 123:
			return "CLO_VWF_U_13_4";
		
		case 124:
			return "CLO_VWF_U_13_5";
		
		case 125:
			return "CLO_VWF_U_13_6";
		
		case 126:
			return "CLO_VWF_U_18_5";
		
		case 127:
			return "CLO_VWF_PH_0_0";
		
		case 128:
			return "CLO_VWF_PH_0_1";
		
		case 129:
			return "CLO_VWF_PH_0_2";
		
		case 130:
			return "CLO_VWF_PH_0_3";
		
		case 131:
			return "CLO_VWF_PH_0_4";
		
		case 132:
			return "CLO_VWF_PH_0_5";
		
		case 133:
			return "CLO_VWF_PH_0_6";
		
		case 134:
			return "CLO_VWF_PH_0_7";
		
		case 135:
			return "CLO_VWF_PH_0_8";
		
		case 136:
			return "CLO_VWF_PH_0_9";
		
		case 137:
			return "CLO_VWF_PH_0_10";
		
		case 138:
			return "CLO_VWF_DECL_0";
		
		case 139:
			return "CLO_VWF_DECL_1";
		
		case 140:
			return "CLO_VWF_DECL_3";
		
		case 141:
			return "CLO_VWF_DECL_5";
		
		case 142:
			return "CLO_VWF_DECL_7";
		
		case 143:
			return "CLO_VWF_DECL_8";
		
		case 144:
			return "CLO_VWF_DECL_9";
		
		default:
	}
	switch (iParam0)
	{
		case 145:
			return "CLO_H2M_O_S_16";
		
		case 146:
			return "CLO_ARM_O_12";
		
		case 147:
			return "CLO_IEM_O_1";
		
		case 148:
			return "CLO_H2M_S_6_0";
		
		case 149:
			return "CLO_BIM_O_11";
		
		case 150:
			return "CLO_STM_O_5";
		
		case 151:
			return "CLO_SMM_O_1";
		
		case 152:
			return "CLO_STM_O_E_1";
		
		case 153:
			return "CLO_STM_O_8";
		
		case 154:
			return "CLO_HSTM_O_20";
		
		case 155:
			return "CLO_H2M_S_4_0";
		
		case 156:
			return "CLO_H2M_O_G_21";
		
		case 157:
			return "CLO_GRM_O_1";
		
		case 158:
			return "CLO_H2M_S_9_0";
		
		case 159:
			return "CLO_LXM_U_0_7";
		
		case 160:
			return "CLO_H2M_S_9_5";
		
		case 161:
			return "CLO_HSTM_S_1_1";
		
		case 162:
			return "CLO_IEM_O_11";
		
		case 163:
			return "CLO_BIM_U_18_1";
		
		case 164:
			return "CLO_BHM_U_11_17";
		
		case 165:
			return "CLO_H2M_U_3_25";
		
		case 166:
			return "CLO_BHM_U_6_1";
		
		case 167:
			return "CLO_L2M_U_6_15";
		
		case 168:
			return "CLO_BHM_U_14_1";
		
		case 169:
			return "CLO_L2M_U_6_12";
		
		case 170:
			return "CLO_L2M_U_6_11";
		
		case 171:
			return "CLO_HSTM_O_J_2";
		
		case 172:
			return "CLO_EXM_OB_14";
		
		case 173:
			return "CLO_STM_U_7_4";
		
		case 174:
			return "CLO_IEM_U_3_7";
		
		case 175:
			return "CLO_L2M_U_6_1";
		
		case 176:
			return "CLO_EXM_OA_0";
		
		case 177:
			return "CLO_BHM_U_5_18";
		
		case 178:
			return "CLO_BHM_U_5_20";
		
		case 179:
			return "CLO_BHM_U_2_14";
		
		case 180:
			return "CLO_STM_U_5_9";
		
		case 181:
			return "CLO_BHM_U_5_3";
		
		case 182:
			return "CLO_BHM_U_13_0";
		
		case 183:
			return "CLO_STM_U_5_1";
		
		case 184:
			return "CLO_BHM_U_4_2";
		
		case 185:
			return "CLO_STM_U_5_6";
		
		case 186:
			return "CLO_GRM_U_15_12";
		
		case 187:
			return "CLO_BHM_U_4_5";
		
		case 188:
			return "CLO_GRM_U_15_20";
		
		case 189:
			return "CLO_HSTM_O_G_3";
		
		case 190:
			return "CLO_BHM_U_7_1";
		
		case 191:
			return "CLO_HSTM_O_L_0";
		
		case 192:
			return "CLO_SMM_U_2_15";
		
		case 193:
			return "CLO_IEM_U_17_4";
		
		case 194:
			return "CLO_IEM_U_17_21";
		
		case 195:
			return "CLO_IEM_U_17_9";
		
		case 196:
			return "CLO_BHM_U_7_14";
		
		case 197:
			return "CLO_BIM_U_26_1";
		
		case 198:
			return "CLO_SMM_U_2_7";
		
		case 199:
			return "CLO_BHM_U_7_7";
		
		case 200:
			return "CLO_SMM_U_2_23";
		
		case 201:
			return "CLO_STM_U_5_12";
		
		case 202:
			return "CLO_SMM_U_2_19";
		
		case 203:
			return "CLO_STM_U_6_18";
		
		case 204:
			return "CLO_IEM_U_17_0";
		
		case 205:
			return "CLO_EXM_EU_6_0";
		
		case 206:
			return "CLO_IEM_U_17_7";
		
		case 207:
			return "CLO_HSTM_S_0_0";
		
		case 208:
			return "CLO_BHM_U_4_18";
		
		case 209:
			return "CLO_BHM_U_0_17";
		
		case 210:
			return "CLO_LXM_U_1_0";
		
		case 211:
			return "CLO_IEM_U_4_8";
		
		case 212:
			return "CLO_HSTM_U_15_5";
		
		case 213:
			return "CLO_GRM_U_14_15";
		
		case 214:
			return "CLO_BHM_U_0_2";
		
		case 215:
			return "CLO_LTSMU_0_0";
		
		case 216:
			return "CLO_IEM_U_18_9";
		
		case 217:
			return "CLO_S2M_U_5_10";
		
		case 218:
			return "CLO_IEM_U_4_5";
		
		case 219:
			return "CLO_GRM_U_14_24";
		
		case 220:
			return "CLO_SMM_U_3_8";
		
		case 221:
			return "CLO_IEM_U_4_22";
		
		case 222:
			return "CLO_GRM_U_13_16";
		
		case 223:
			return "CLO_HSTM_U_0_3";
		
		case 224:
			return "CLO_SMM_U_3_5";
		
		case 225:
			return "CLO_SMM_U_3_6";
		
		case 226:
			return "CLO_LXM_U_5_3";
		
		case 227:
			return "CLO_S2M_D_16";
		
		case 228:
			return "CLO_GRM_U_13_23";
		
		case 229:
			return "CLO_GRM_U_0_13";
		
		case 230:
			return "CLO_S2M_D_27";
		
		case 231:
			return "CLO_EXM_EU_5_2";
		
		case 232:
			return "CLO_HP_D_10";
		
		case 233:
			return "CLO_LXM_U_5_17";
		
		case 234:
			return "CLO_IEM_U_7_5";
		
		case 235:
			return "CLO_IEM_U_7_23";
		
		case 236:
			return "CLO_BIM_DECL_67";
		
		case 237:
			return "CLO_BHM_U_16_1";
		
		case 238:
			return "CLO_S1M_U_3_1";
		
		case 239:
			return "CLO_SMM_U_7_10";
		
		case 240:
			return "CLO_GRM_U_2_6";
		
		case 241:
			return "CLO_IEM_U_7_19";
		
		case 242:
			return "CLO_SMM_DECL_16";
		
		case 243:
			return "CLO_S1M_DEC_25";
		
		case 244:
			return "CLO_SMM_DECL_15";
		
		case 245:
			return "CLO_BIM_DECL_2";
		
		case 246:
			return "CLO_SMM_DECL_7";
		
		case 247:
			return "CLO_HP_D_9";
		
		case 248:
			return "CLO_EXM_EU_10_5";
		
		case 249:
			return "CLO_S2M_D_4";
		
		case 250:
			return "CLO_SMM_DECL_5";
		
		case 251:
			return "CLO_BIM_DECL_63";
		
		case 252:
			return "CLO_AWM_DECL_23";
		
		case 253:
			return "CLO_BIM_DECL_49";
		
		case 254:
			return "CLO_HALM_D_10";
		
		case 255:
			return "CLO_GRM_DECL_27";
		
		case 256:
			return "CLO_LXM_DEC_35";
		
		case 257:
			return "CLO_HST_A_0";
		
		case 258:
			return "CLO_EXM_DECL_3";
		
		case 259:
			return "CLO_HST_A_9";
		
		case 260:
			return "CLO_BHM_DECL_19";
		
		case 261:
			return "CLO_INDM_HT_6_2";
		
		case 262:
			return "CLO_X4M_B_7_0";
		
		case 263:
			return "CLO_X2M_B_2_0";
		
		case 264:
			return "CLO_VWM_U_15_0";
		
		case 265:
			return "CLO_VWM_U_15_1";
		
		case 266:
			return "CLO_VWM_U_15_2";
		
		case 267:
			return "CLO_VWM_U_15_3";
		
		case 268:
			return "CLO_VWM_U_15_4";
		
		case 269:
			return "CLO_VWM_U_15_5";
		
		case 270:
			return "CLO_VWM_U_15_6";
		
		case 271:
			return "CLO_VWM_U_20_5";
		
		case 272:
			return "CLO_VWM_PH_0_0";
		
		case 273:
			return "CLO_VWM_PH_0_1";
		
		case 274:
			return "CLO_VWM_PH_0_2";
		
		case 275:
			return "CLO_VWM_PH_0_3";
		
		case 276:
			return "CLO_VWM_PH_0_4";
		
		case 277:
			return "CLO_VWM_PH_0_5";
		
		case 278:
			return "CLO_VWM_PH_0_6";
		
		case 279:
			return "CLO_VWM_PH_0_7";
		
		case 280:
			return "CLO_VWM_PH_0_8";
		
		case 281:
			return "CLO_VWM_PH_0_9";
		
		case 282:
			return "CLO_VWM_PH_0_10";
		
		case 283:
			return "CLO_VWM_DECL_0";
		
		case 284:
			return "CLO_VWM_DECL_1";
		
		case 285:
			return "CLO_VWM_DECL_3";
		
		case 286:
			return "CLO_VWM_DECL_5";
		
		case 287:
			return "CLO_VWM_DECL_7";
		
		case 288:
			return "CLO_VWM_DECL_8";
		
		case 289:
			return "CLO_VWM_DECL_9";
		
		default:
	}
	return "LRCLOTHES_INVALID";
}

int func_674()
{
	int iVar0;
	
	iVar0 = 26970;
	while (iVar0 <= 27088)
	{
		if (!func_587(iVar0, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 27120;
	while (iVar0 <= 27145)
	{
		if (!func_587(iVar0, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_675(bool bParam0)
{
	int iVar0[145];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (func_34(PLAYER::PLAYER_PED_ID()))
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar3 = iVar2 + 145;
		}
		iVar0[iVar2] = iVar3;
		iVar1 = (iVar1 + func_676(iVar0[iVar2], bParam0));
		iVar2++;
	}
	iVar4 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (iVar4 <= func_676(iVar0[iVar2], bParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar4 = (iVar4 - func_676(iVar0[iVar2], bParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_676(int iParam0, bool bParam1)
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
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 14:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 13:
		case 15:
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
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
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
			if (func_671(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_25835;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return Global_262145.f_25834;
			break;
	}
	switch (iParam0)
	{
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			if (func_671(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_25835;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 191:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
			if (func_671(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_25835;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 207:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 208:
			if (func_671(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_25835;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25836;
			}
			break;
		
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
			if (func_671(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25834;
			}
			break;
		
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 286:
		case 287:
		case 288:
		case 289:
			return Global_262145.f_25834;
			break;
	}
	return 0;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			return 1;
		
		case 12:
			return 2;
		
		case 16:
			return 3;
		
		case 1:
			return 4;
		
		case 5:
			return 5;
		
		case 9:
			return 6;
		
		case 13:
			return 7;
		
		case 17:
			return 8;
		
		case 2:
			return 9;
		
		case 6:
			return 10;
		
		case 14:
			return 11;
		
		case 19:
			return 12;
		
		case 3:
			return 13;
		
		case 7:
			return 14;
		
		case 10:
			return 15;
		
		case 15:
			return 16;
		
		case 11:
			return 17;
		
		case 18:
			return 18;
		
		case 4:
			return 19;
		
		default:
	}
	return -1;
}

void func_678()
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(func_679(PLAYER::PLAYER_ID())))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(func_679(PLAYER::PLAYER_ID()));
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(func_679(PLAYER::PLAYER_ID()));
		func_55(-1);
	}
}

int func_679(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_98[iParam0 /*5*/].f_2;
}

int func_680()
{
	Local_99.f_3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 128f));
	Local_99.f_4 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 128f));
	Local_99.f_5 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 128f));
	Local_99.f_6 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 128f));
	if (((Local_99.f_3 != 0 || Local_99.f_4 != 0) || Local_99.f_5 != 0) || Local_99.f_6 != 0)
	{
		return 1;
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_681()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 12;
	iVar1 = func_113(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case 10:
		case 15:
		case 14:
		case 19:
			iVar0 = 12;
			break;
		
		case 18:
			iVar0 = 13;
			break;
		
		default:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_682(bool bParam0)
{
	func_693(bParam0);
	func_684(bParam0);
	func_683();
}

void func_683()
{
	if (Local_99.f_45 != 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_99.f_72))
		{
			ENTITY::SET_ENTITY_ROTATION(Local_99.f_72, 0f, Local_99.f_18, 0f, 2, 1);
		}
	}
}

void func_684(bool bParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!func_35(3))
	{
		Local_99.f_25 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), Local_99.f_16);
		Local_99.f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), func_692(&(Local_99.f_16), bParam0));
		func_47(3);
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_99.f_25));
	fVar1 = (1f - ((SYSTEM::TO_FLOAT(iVar0) / IntToFloat(Local_99.f_16)) * 1f));
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	else if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	fVar2 = SYSTEM::POW((1f - fVar1), 3f);
	fVar3 = (1f - fVar2);
	Local_99.f_18 = func_691(Local_99.f_19, Local_99.f_20, fVar3);
	Local_99.f_21 = func_691(Local_99.f_19, Local_99.f_20, fVar3);
	if (Local_99.f_18 > IntToFloat((360 * Local_99.f_9)))
	{
		Local_99.f_9++;
	}
	if (Local_99.f_21 > (IntToFloat(Local_99.f_13 + 1) * SYSTEM::TO_FLOAT(18)))
	{
		Local_99.f_13++;
	}
	Local_99.f_14 = (Local_99.f_13 % 20);
	if (!func_35(17) && PLAYER::PLAYER_ID() == Local_97)
	{
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_99.f_26))
		{
			func_710(func_681(), 0, 0, 1, 0);
			func_47(17);
		}
	}
	if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_99.f_25))
	{
		func_690();
		Local_99.f_17 = 0;
		func_41();
		if (PLAYER::PLAYER_ID() == Local_97)
		{
			func_685();
			func_32(10);
		}
		else
		{
			func_32(17);
		}
	}
}

void func_685()
{
	char* sVar0;
	float fVar1;
	
	func_689(&sVar0, &fVar1);
	func_688(fVar1);
	func_686(func_118(&sVar0));
}

void func_686(char* sParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_99.f_389))
	{
		Local_99.f_389 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_99.f_389, sParam0, func_687(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
	}
}

Vector3 func_687()
{
	return 1111.052f, 229.8579f, -49.133f;
}

void func_688(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_99.f_388))
	{
		Local_99.f_388 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_99.f_388, "Win", func_687(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_99.f_388, "winSize", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_99.f_388, "winSize", fParam0);
	}
}

void func_689(char* sParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_113(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
		case 17:
		case 5:
		case 9:
		case 13:
			StringCopy(sParam0, "Win_RP", 16);
			*uParam1 = 0f;
			break;
		
		case 2:
		case 6:
		case 14:
		case 4:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 0f;
			break;
		
		case 19:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 1f;
			break;
		
		case 3:
		case 7:
		case 10:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 0f;
			break;
		
		case 15:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 1f;
			break;
		
		case 11:
			StringCopy(sParam0, "Win_Mystery", 16);
			*uParam1 = 0f;
			break;
		
		case 18:
			StringCopy(sParam0, "Win_Car", 16);
			*uParam1 = 1f;
			break;
		
		default:
			StringCopy(sParam0, "Win_Clothes", 16);
			*uParam1 = 0f;
			break;
	}
}

void func_690()
{
	Local_99.f_18 = Local_99.f_20;
	Local_99.f_19 = Local_99.f_18;
	Local_99.f_10 = func_113(PLAYER::PLAYER_ID());
	func_724(Local_99.f_10, 0);
	Local_99.f_14 = func_113(PLAYER::PLAYER_ID());
	Local_99.f_7 = Local_99.f_14;
	func_31(3);
	Local_99.f_13 = Local_99.f_12;
}

float func_691(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_692(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar1 = Local_97;
	}
	switch (func_721(iVar1))
	{
		case 0:
			iVar0 = (*uParam0 - 2400);
			break;
		
		case 1:
			iVar0 = (*uParam0 - 2300);
			break;
		
		case 2:
			iVar0 = (*uParam0 - 2000);
			break;
	}
	if (iVar0 < 0)
	{
		iVar0 = *uParam0;
	}
	return iVar0;
}

void func_693(bool bParam0)
{
	int iVar0;
	
	if (func_35(2))
	{
		return;
	}
	iVar0 = func_699();
	Local_99.f_12 = (iVar0 + Local_99.f_8 * 20);
	Local_99.f_12 = (Local_99.f_12 + func_698(bParam0));
	Local_99.f_13 = Local_99.f_14;
	Local_99.f_20 = func_694(bParam0);
	Local_99.f_16 = (Local_99.f_15 * Local_99.f_12);
	func_47(2);
}

float func_694(bool bParam0)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	fVar0 = (IntToFloat(Local_99.f_12) * SYSTEM::TO_FLOAT(18));
	if (fVar0 < 180f)
	{
		fVar0 = (fVar0 + 360f);
		Local_99.f_12 += 20;
	}
	iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_99.f_72, "Base_pivot");
	vVar2 = { ENTITY::_0xBD8D32550E5CEBFE(Local_99.f_72, iVar1) };
	fVar3 = func_696(vVar2.y);
	iVar4 = SYSTEM::FLOOR((fVar3 / 18f));
	fVar5 = SYSTEM::TO_FLOAT(iVar4 * 18);
	fVar6 = (360f - fVar5);
	fVar7 = MISC::ABSF((fVar3 - fVar5));
	fVar0 = ((fVar0 - fVar6) - fVar7);
	iVar8 = func_721(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iVar8 = func_721(Local_97);
	}
	iVar9 = SYSTEM::ROUND((fVar0 / 18f));
	fVar0 = ((SYSTEM::TO_FLOAT(iVar9 * 18) + func_695(iVar8)) + IntToFloat(Local_99.f_10 * 18));
	fVar10 = (fVar0 * -1f);
	return fVar10;
}

float func_695(int iParam0)
{
	if (func_34(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0.4746f;
			
			case 1:
				return ((SYSTEM::TO_FLOAT(18) * 2f) - 3.4757f);
			
			case 2:
				return (SYSTEM::TO_FLOAT(4) + 1.9002f);
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (SYSTEM::TO_FLOAT(4) + 1.3709f);
			
			case 1:
				return (SYSTEM::TO_FLOAT(4) + 3.5184f);
			
			case 2:
				return (SYSTEM::TO_FLOAT(18) + 14.2192f);
			}
		
		default:
	}
	return 0f;
}

float func_696(float fParam0)
{
	fParam0 = func_697(fParam0);
	if (fParam0 < 0f)
	{
		return (360f + fParam0);
	}
	return fParam0;
}

float func_697(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_698(bool bParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		iVar0 = Local_97;
	}
	switch (func_721(iVar0))
	{
		case 1:
			if (Local_99.f_12 <= 30)
			{
				return 20;
			}
			break;
	}
	return 0;
}

int func_699()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_14 > func_113(PLAYER::PLAYER_ID()))
	{
		iVar1 = (20 - Local_99.f_14);
		iVar0 = (iVar1 + func_113(PLAYER::PLAYER_ID()));
	}
	else
	{
		iVar0 = (func_113(PLAYER::PLAYER_ID()) - Local_99.f_14);
	}
	return iVar0;
}

int func_700(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_99.f_72))
	{
		if (!bParam0)
		{
			sVar0 = func_109(func_721(PLAYER::PLAYER_ID()));
		}
		else
		{
			sVar0 = func_109(func_721(Local_97));
		}
		sVar1 = func_33();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_99.f_72, sVar1, sVar0, 3))
			{
				fVar2 = 1f;
				fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_99.f_72, sVar1, sVar0);
				if (fVar3 == fVar2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 9;
		
		case 2:
			return 10;
		
		default:
	}
	return -1;
}

int func_702(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	int iVar5;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar0 = PLAYER::GET_PLAYER_PED(Local_97);
		iVar1 = Local_97;
	}
	if (func_82(iVar0))
	{
		sVar2 = func_704(iParam0);
		sVar3 = func_33();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar3, sVar2, 3))
			{
				fVar4 = func_703(iParam0);
				iVar5 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(func_679(iVar1));
				if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= fVar4) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("BLEND_OUT"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("EARLY_OUT")))
				{
					if (bParam2)
					{
						func_678();
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_703(int iParam0)
{
	float fVar0;
	
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 2:
			if (func_34(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = 0.7f;
			}
			break;
	}
	return fVar0;
}

char* func_704(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Enter_to_ArmRaisedIDLE";
			break;
		
		case 1:
			sVar0 = "ArmRaisedIDLE";
			break;
		
		case 2:
			sVar0 = "ArmRaisedIDLE_to_SpinReadyIDLE";
			break;
		
		case 3:
			sVar0 = "SpinReadyIDLE";
			break;
		
		case 4:
			sVar0 = "SpinStart_ArmRaisedIDLE_to_BaseIDLE";
			break;
		
		case 5:
			if (func_35(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_low";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Low";
			}
			break;
		
		case 6:
			if (func_35(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_med";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Med";
			}
			break;
		
		case 7:
			if (func_35(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_high";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_High";
			}
			break;
		
		case 8:
			sVar0 = "SpinningIDLE_Low";
			break;
		
		case 9:
			sVar0 = "SpinningIDLE_Medium";
			break;
		
		case 10:
			sVar0 = "SpinningIDLE_High";
			break;
		
		case 11:
			sVar0 = "Win";
			break;
		
		case 12:
			sVar0 = "Win_Big";
			break;
		
		case 13:
			sVar0 = "Win_Huge";
			break;
		
		case 14:
			sVar0 = "Exit_to_Standing";
			break;
		
		case 15:
			sVar0 = "SpinReadyIDLE_to_ArmRaisedIDLE";
			break;
	}
	return sVar0;
}

void func_705(float fParam0)
{
	int iVar0;
	
	if (func_35(27))
	{
		if (Local_99.f_387 == -1 && AUDIO::HAS_SOUND_FINISHED(Local_99.f_387))
		{
			Local_99.f_387 = AUDIO::GET_SOUND_ID();
			iVar0 = 1;
			if (fParam0 > 0.5f)
			{
				iVar0 = 0;
			}
			AUDIO::PLAY_SOUND_FROM_COORD(Local_99.f_387, "Spin_Single_Ticks", func_687(), "dlc_vw_casino_lucky_wheel_sounds", iVar0, 0, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_99.f_387, "spinSpeed", fParam0);
		}
		else
		{
			AUDIO::STOP_SOUND(Local_99.f_387);
			AUDIO::RELEASE_SOUND_ID(Local_99.f_387);
			Local_99.f_387 = -1;
			func_705(fParam0);
		}
	}
}

void func_706(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_99.f_386) && Local_99.f_386 == -1)
	{
		Local_99.f_386 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_99.f_386, "Spin_Start", func_687(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_99.f_386, "spinSpeed", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_99.f_386, "spinSpeed", fParam0);
	}
}

void func_707()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_99.f_72, "Base_pivot");
	vVar1 = { ENTITY::_0xBD8D32550E5CEBFE(Local_99.f_72, iVar0) };
	fVar2 = func_696(vVar1.y);
	vVar3 = { ENTITY::GET_ENTITY_ROTATION(Local_99.f_72, 2) };
	fVar4 = func_696(vVar3.y);
	if (!func_700(0))
	{
		fVar5 = fVar2;
	}
	else if (fVar4 == 0f && fVar2 != 0f)
	{
		fVar5 = fVar2;
	}
	else
	{
		fVar5 = fVar4;
	}
	if (!func_35(26))
	{
		Local_99.f_385 = fVar5;
		func_47(26);
	}
	fVar6 = MISC::ABSF((fVar5 - Local_99.f_385));
	if (fVar6 > 100f)
	{
		fVar6 = MISC::ABSF((fVar5 - (360f + Local_99.f_385)));
	}
	iVar7 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_99.f_25));
	fVar8 = (SYSTEM::TO_FLOAT(iVar7) / IntToFloat(Local_99.f_16));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	else if (fVar8 > 1f)
	{
		fVar8 = 1f;
	}
	if (func_708() == 0)
	{
		fVar8 = (fVar8 / 2f);
	}
	Local_99.f_384 = fVar8;
	if (fVar6 >= 18f)
	{
		func_47(27);
		Local_99.f_385 = fVar5;
	}
	else
	{
		func_31(27);
	}
	Local_99.f_384 = fVar8;
}

int func_708()
{
	if (func_112(PLAYER::PLAYER_ID()) > 3000)
	{
		return 2;
	}
	else if (func_112(PLAYER::PLAYER_ID()) > 1500)
	{
		return 1;
	}
	return 0;
}

void func_709(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = iParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

void func_710(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	char cVar5[64];
	char* sVar6;
	
	if (bParam3)
	{
	}
	Local_99.f_22 = func_704(iParam0);
	vVar0 = { func_717(bParam1) };
	vVar1 = { 0f, 0f, func_712(bParam1) };
	fVar2 = 2f;
	fVar3 = -2f;
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		fVar2 = 8f;
		fVar3 = -1.5f;
	}
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		fVar2 = 1.5f;
	}
	if (func_34(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 3)
		{
			fVar2 = 4f;
			fVar3 = -4f;
		}
	}
	if (iParam0 == 2 || iParam0 == 1)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	if (iParam0 == 14)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	iVar4 = 5;
	if (bParam2)
	{
		iVar4 = 69;
	}
	func_55(NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vVar0, vVar1, 2, bParam4, bParam2, 1065353216, 0, 1065353216));
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), func_679(PLAYER::PLAYER_ID()), Local_99.f_23, Local_99.f_22, fVar2, fVar3, iVar4, 0, 1148846080, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(func_679(PLAYER::PLAYER_ID()));
	StringCopy(&cVar5, Local_99.f_22, 64);
	StringConCat(&cVar5, "_Facial", 64);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), &cVar5, Local_99.f_23);
	if (func_711(Local_99.f_22))
	{
		sVar6 = func_109(func_721(PLAYER::PLAYER_ID()));
		ENTITY::SET_ENTITY_ROTATION(Local_99.f_72, 0f, 0f, 0f, 2, 1);
		ENTITY::PLAY_ENTITY_ANIM(Local_99.f_72, sVar6, Local_99.f_23, 1000f, false, 1, 0, 0f, 2);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_99.f_72);
	}
}

int func_711(char* sParam0)
{
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, func_704(7)) || MISC::ARE_STRINGS_EQUAL(sParam0, func_704(6))) || MISC::ARE_STRINGS_EQUAL(sParam0, func_704(5)))
	{
		return 1;
	}
	return 0;
}

float func_712(bool bParam0)
{
	if (bParam0)
	{
		return func_714();
	}
	else
	{
		return func_713();
	}
	return 0f;
}

float func_713()
{
	return 0f;
}

var func_714()
{
	vector3 vVar0;
	
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(Local_99.f_23, Local_99.f_22, func_715(Local_99.f_22), 0f, 0f, 0f, 0f, 2) };
	return vVar0.z;
}

Vector3 func_715(char* sParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar1 = func_716(sParam0);
	if (iVar1 == 0)
	{
		vVar0 = { func_687() };
	}
	return vVar0;
}

int func_716(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Enter_to_ArmRaisedIDLE"))
	{
		iVar0 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinReadyIDLE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE"))
	{
		iVar0 = 3;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinStart_ArmRaisedIDLE_to_BaseIDLE"))
	{
		iVar0 = 4;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_low") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Low"))
	{
		iVar0 = 5;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_med") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Med"))
	{
		iVar0 = 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_high") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_High"))
	{
		iVar0 = 7;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Low"))
	{
		iVar0 = 8;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Med"))
	{
		iVar0 = 9;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_High"))
	{
		iVar0 = 10;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win"))
	{
		iVar0 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Big"))
	{
		iVar0 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Huge"))
	{
		iVar0 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Exit_to_Standing"))
	{
		iVar0 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE_to_ArmRaisedIDLE"))
	{
		iVar0 = 15;
	}
	return iVar0;
}

Vector3 func_717(bool bParam0)
{
	if (bParam0)
	{
		return func_719();
	}
	else
	{
		return func_718();
	}
	return 0f, 0f, 0f;
}

Vector3 func_718()
{
	return 1111.052f, 229.8492f, -50.6409f;
}

Vector3 func_719()
{
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_99.f_23, Local_99.f_22, func_718(), 0f, 0f, 0f, 0, 2);
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		default:
	}
	return -1;
}

int func_721(int iParam0)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Local_98[iParam0 /*5*/].f_4;
}

int func_722(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_723(bool bParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (bParam0)
		{
			if (!MISC::IS_BIT_SET(Local_98[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_98[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
			}
		}
		else if (MISC::IS_BIT_SET(Local_98[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
		{
			MISC::CLEAR_BIT(&(Local_98[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
		}
	}
}

void func_724(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar1;
	
	Var0 = 2032669874;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = func_200(1, 1);
	if (iVar1 != -1)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

bool func_725(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Local_98[iParam0 /*5*/].f_1, 0);
}

void func_726()
{
	if (!func_35(5))
	{
		Local_99.f_2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_99.f_24));
		if (func_35(15))
		{
			func_31(15);
			func_738();
			func_47(5);
		}
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_99.f_24) || func_728())
		{
			Local_99.f_2 = 0;
			if (func_727(3))
			{
				func_710(14, 0, 0, 1, 0);
				func_31(4);
				func_47(10);
				func_32(12);
			}
		}
	}
}

int func_727(int iParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (func_82(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = func_704(iParam0);
		sVar1 = func_33();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar1, sVar0, 3);
		}
	}
	return 0;
}

int func_728()
{
	if (func_729())
	{
		return 1;
	}
	return 0;
}

int func_729()
{
	int iVar0;
	
	if (func_736(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_735();
		if (func_6(iVar0, 1, 1) && MISC::IS_BIT_SET(Global_1589819[iVar0 /*818*/].f_273.f_362.f_3, 6))
		{
			return 1;
		}
		if ((func_193(PLAYER::PLAYER_ID(), 0) && func_733(PLAYER::PLAYER_ID())) || func_730(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_730(int iParam0)
{
	if (func_732(iParam0) != func_8())
	{
		return func_732(iParam0) == func_731(iParam0);
	}
	return 0;
}

int func_731(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_8();
}

int func_732(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_733(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_734(iParam0, 9);
	}
	return 0;
}

bool func_734(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

var func_735()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

bool func_736(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_737(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_8();
}

int func_737(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_8())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_738()
{
	func_56(Local_99.f_2);
	Local_99.f_15 = func_111();
	Local_99.f_8 = func_110();
	func_51(func_708());
}

void func_739()
{
	Local_99.f_3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 128f));
	Local_99.f_4 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 128f));
}

void func_740()
{
	func_743();
	func_739();
	if (func_35(18))
	{
		if (func_702(2, 0, 0))
		{
			func_710(3, 0, 1, 0, 0);
			func_23(&(Local_99.f_27));
			func_31(18);
		}
		else if (func_35(12))
		{
			func_47(16);
			func_32(8);
		}
	}
	else if (!func_702(3, 0, 0))
	{
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			func_18("LUCK_W_SPIN_PC", -1);
		}
		else
		{
			func_18("LUCK_WHEEL_SPIN", -1);
		}
		if (func_35(12))
		{
			func_23(&(Local_99.f_27));
			func_47(16);
			func_32(8);
		}
	}
	else if (func_742() != 7)
	{
		if (!func_741() || func_35(22))
		{
			func_710(15, 0, 0, 0, 1);
			func_32(7);
		}
	}
}

bool func_741()
{
	return ((Local_99.f_3 <= 20 && Local_99.f_3 >= -20) && Local_99.f_4 <= -120);
}

int func_742()
{
	return Local_99.f_45;
}

void func_743()
{
	if (func_742() == 6)
	{
		if (func_26(&(Local_99.f_39)))
		{
			if (func_24(&(Local_99.f_39), 10000, 0))
			{
				func_47(22);
			}
		}
	}
	if (func_35(12) || func_35(13))
	{
		return;
	}
	if (!func_26(&(Local_99.f_27)))
	{
		func_25(&(Local_99.f_27), 0, 0);
	}
	else if (!func_24(&(Local_99.f_27), 5000, 0))
	{
		if (Local_99.f_45 != 5)
		{
			if (func_744())
			{
				Local_99.f_24 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
				func_47(12);
				func_47(15);
				func_23(&(Local_99.f_27));
			}
		}
		else if (func_744())
		{
			func_47(15);
			func_32(8);
		}
		else if (func_741() && !func_35(22))
		{
			func_25(&(Local_99.f_39), 0, 0);
			func_47(12);
			func_23(&(Local_99.f_27));
		}
	}
	else if (func_742() == 6)
	{
		if (!func_741() || func_35(22))
		{
			func_710(15, 0, 0, 0, 1);
			func_32(7);
		}
	}
	else
	{
		func_47(13);
		func_23(&(Local_99.f_27));
	}
}

bool func_744()
{
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		return PAD::IS_CONTROL_JUST_PRESSED(2, 33);
	}
	return ((Local_99.f_3 <= 20 && Local_99.f_3 >= -20) && Local_99.f_4 >= 120);
}

void func_745()
{
	if (func_702(15, 0, 0))
	{
		func_31(12);
		func_31(4);
		func_23(&(Local_99.f_27));
		func_710(1, 0, 1, 0, 0);
		func_32(5);
	}
}

void func_746()
{
	if (!func_35(4))
	{
		Local_99.f_24 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		func_47(4);
	}
	func_743();
	func_739();
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		func_18("LUCK_W_SPIN_PC", -1);
	}
	else
	{
		func_18("LUCK_WHEEL_SPIN", -1);
	}
	if (func_35(12) && !func_728())
	{
		func_710(2, 0, 0, 0, 0);
		func_47(18);
		func_23(&(Local_99.f_27));
		func_32(6);
		func_31(12);
	}
	else if (func_35(13) || func_728())
	{
		func_710(14, 0, 0, 1, 0);
		func_31(4);
		func_47(10);
		func_32(12);
	}
}

void func_747()
{
	func_751();
	if (!func_35(7))
	{
		if (!func_35(8))
		{
			STREAMING::REQUEST_ANIM_DICT(Local_99.f_23);
			if (STREAMING::HAS_ANIM_DICT_LOADED(Local_99.f_23))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_717(1), 1f, 5000, func_712(1), 0.001f);
					func_25(&(Local_99.f_31), 0, 0);
					func_47(8);
				}
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(Local_99.f_23))
		{
			if (func_748())
			{
				func_710(0, 0, 0, 1, 0);
				func_23(&(Local_99.f_31));
				func_47(7);
			}
		}
	}
	else if (func_702(0, 0, 0))
	{
		func_710(1, 0, 1, 0, 0);
		func_31(7);
		func_47(9);
	}
}

int func_748()
{
	if ((func_750(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_717(1), 0.01f, 0) && func_749(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), func_712(1), 5f)) || func_24(&(Local_99.f_31), 5000, 0))
	{
		return 1;
	}
	return 0;
}

int func_749(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_750(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (MISC::ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_751()
{
	if (!func_35(6))
	{
		if (!func_754())
		{
			func_753();
		}
		if (!func_62())
		{
			func_752();
		}
		HUD::_THEFEED_DISABLE();
		HUD::DISPLAY_RADAR(false);
		func_47(6);
	}
}

void func_752()
{
	Global_2437364.f_1155.f_10 = 1;
}

void func_753()
{
	Global_2437364.f_1155.f_9 = 1;
}

bool func_754()
{
	return Global_2437364.f_1155.f_9;
}

void func_755()
{
	func_759(&(Local_99.f_391));
	if (func_450(0, -1, 0))
	{
		if (func_758(0))
		{
			func_757();
			func_50(0);
		}
		else
		{
			func_414(-1, 1, 1);
		}
		if (!func_476())
		{
			func_401("CAS_DIS_MAIN", 0, 0);
		}
		else
		{
			func_401("CAS_DIS_MAIN2", 0, 0);
		}
		func_756();
		func_362(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	}
}

void func_756()
{
	if (Local_99.f_391.f_10 || func_24(&(Local_99.f_41), 20000, 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
		MISC::CLEAR_BIT(&(Local_99.f_1), 3);
		func_32(17);
		func_28(1);
	}
	else if (Local_99.f_391.f_9)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
		func_32(3);
		MISC::SET_BIT(&(Local_99.f_1), 3);
	}
}

void func_757()
{
	func_449(0, 0);
	func_440("CAS_BLP_DT");
	func_442(1, 2, 1, 1, 1);
	func_443(1, 1, 0, 0, 0);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
	func_445(1, "CasinoUI_Lucky_Wheel", "CasinoUI_Lucky_Wheel");
	func_353(202, "TCP_EXIT", -1);
	func_353(201, "TCP_CONT", -1);
}

bool func_758(int iParam0)
{
	return MISC::IS_BIT_SET(Local_99.f_391, iParam0);
}

void func_759(var uParam0)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			func_71(PLAYER::PLAYER_ID(), 0, 33024, 0);
		}
	}
	func_760(uParam0);
}

void func_760(var uParam0)
{
	func_764(&(uParam0->f_4), &(uParam0->f_6), &(uParam0->f_5), &(uParam0->f_7), 0);
	uParam0->f_9 = (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201));
	uParam0->f_10 = (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202));
	uParam0->f_11 = (uParam0->f_6 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
	uParam0->f_12 = (uParam0->f_6 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if ((((func_450(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_93734.f_1409)
	{
		if (MISC::IS_PC_VERSION() && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			if (PAD::_IS_INPUT_JUST_DISABLED(2))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
				if ((Global_4268040 == -1 || Global_4268040 == -4) || Global_4268040 == -6)
				{
					PAD::ENABLE_CONTROL_ACTION(1, 1, 1);
					PAD::ENABLE_CONTROL_ACTION(1, 2, 1);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
					PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
				}
				func_452(0, 0, 0, 1);
				func_763(0, -1, 1);
			}
			if (func_360())
			{
				if (Global_4268040 == uParam0->f_1)
				{
					uParam0->f_9 = 1;
				}
				else
				{
					uParam0->f_1 = Global_4268040;
					func_414(uParam0->f_1, 1, 1);
				}
			}
			if (func_348())
			{
				uParam0->f_10 = 1;
			}
			if (func_762(0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (func_761(0, 0, 0))
			{
				uParam0->f_12 = 1;
			}
		}
	}
}

int func_761(int iParam0, int iParam1, int iParam2)
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268040 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_762(int iParam0, int iParam1, int iParam2)
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268040 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_763(int iParam0, int iParam1, bool bParam2)
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

void func_764(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_765(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_99.f_391, iParam0))
	{
		MISC::SET_BIT(&(Local_99.f_391), iParam0);
	}
}

void func_766(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_4, 6))
		{
			MISC::SET_BIT(&(Global_2424047[iParam0 /*416*/].f_309.f_4), 6);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_4, 6))
	{
		MISC::CLEAR_BIT(&(Global_2424047[iParam0 /*416*/].f_309.f_4), 6);
	}
}

float func_767(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		
		case 1:
			return 18f;
			break;
		
		case 2:
			return 36f;
			break;
		
		case 3:
			return 54f;
			break;
		
		case 4:
			return 72f;
			break;
		
		case 5:
			return 90f;
			break;
		
		case 6:
			return 108f;
			break;
		
		case 7:
			return 126f;
			break;
		
		case 8:
			return 144f;
			break;
		
		case 9:
			return 162f;
			break;
		
		case 10:
			return 180f;
			break;
		
		case 11:
			return 198f;
			break;
		
		case 12:
			return 216f;
			break;
		
		case 13:
			return 234f;
			break;
		
		case 14:
			return 252f;
			break;
		
		case 15:
			return 270f;
			break;
		
		case 16:
			return 288f;
			break;
		
		case 17:
			return 306f;
			break;
		
		case 18:
			return 324f;
			break;
		
		case 19:
			return 342f;
			break;
	}
	return 0f;
}

void func_768()
{
	if (func_722("LW_PLAY"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (!func_771(0))
	{
		func_31(11);
		if (MISC::IS_BIT_SET(Global_1671295.f_6, 4))
		{
			if (func_769("CAS_MG_MEMB2", func_770(0)))
			{
				HUD::CLEAR_HELP(1);
			}
			MISC::CLEAR_BIT(&(Global_1671295.f_6), 4);
		}
		if (func_35(20))
		{
			if (func_722("LUCKY_WHEEL_US"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_31(20);
		}
		if (func_722("CASINO_LUCK_WD"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_35(25))
		{
			if (func_722("CAS_MG_CBAN"))
			{
				HUD::CLEAR_HELP(1);
				func_31(25);
			}
		}
		if (func_35(28))
		{
			if (func_722("CAS_LW_REGL"))
			{
				HUD::CLEAR_HELP(1);
				func_31(28);
			}
		}
	}
}

int func_769(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_770(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_771(bool bParam0)
{
	if (bParam0)
	{
		if ((MISC::GET_FRAME_COUNT() % 3) == 0)
		{
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, 0, true, 0);
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, 0, true, 0);
	}
	return 0;
}

void func_772()
{
	func_53();
	func_781();
	func_780();
	func_774();
	func_70(PLAYER::PLAYER_ID(), 0, 256);
	Local_99.f_23 = func_33();
	Local_99.f_22 = func_704(0);
	Local_99.f_46 = func_773();
}

int func_773()
{
	return 1;
}

void func_774()
{
	if (func_779() || func_778())
	{
		func_777();
		func_775();
	}
}

void func_775()
{
	if ((!func_457() && !func_776()) && Global_2449537)
	{
		Global_4456448.f_138474 = 0;
	}
}

bool func_776()
{
	return Global_2448756.f_579;
}

void func_777()
{
	Global_2448756.f_644 = 1;
}

var func_778()
{
	return Global_2448756.f_623;
}

bool func_779()
{
	return MISC::IS_BIT_SET(Global_2448756.f_2, 11);
}

void func_780()
{
	func_84(1);
}

void func_781()
{
	if (!func_35(1))
	{
		func_54(func_782(func_783()));
		func_47(1);
	}
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 8;
		
		case 2:
			return 12;
		
		case 3:
			return 16;
		
		case 4:
			return 1;
		
		case 5:
			return 5;
		
		case 6:
			return 9;
		
		case 7:
			return 13;
		
		case 8:
			return 17;
		
		case 9:
			return 2;
		
		case 10:
			return 6;
		
		case 11:
			return 14;
		
		case 12:
			return 19;
		
		case 13:
			return 3;
		
		case 14:
			return 7;
		
		case 15:
			return 10;
		
		case 16:
			return 15;
		
		case 17:
			return 11;
		
		case 18:
			return 18;
		
		case 19:
			return 4;
		
		default:
	}
	return 0;
}

int func_783()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_784(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		if (iVar3 <= func_784(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_784(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_25917)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25807;
			}
			break;
		
		case 1:
			if (Global_262145.f_25917)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25808;
			}
			break;
		
		case 2:
			if (Global_262145.f_25917)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25809;
			}
			break;
		
		case 3:
			if (Global_262145.f_25917)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25810;
			}
			break;
		
		case 4:
			if (Global_262145.f_25918)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25811;
			}
			break;
		
		case 5:
			if (Global_262145.f_25918)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25812;
			}
			break;
		
		case 6:
			if (Global_262145.f_25918)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25813;
			}
			break;
		
		case 7:
			if (Global_262145.f_25918)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25814;
			}
			break;
		
		case 8:
			if (Global_262145.f_25918)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25815;
			}
			break;
		
		case 9:
			if (Global_262145.f_25919)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25816;
			}
			break;
		
		case 10:
			if (Global_262145.f_25919)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25817;
			}
			break;
		
		case 11:
			if (Global_262145.f_25919)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25818;
			}
			break;
		
		case 12:
			if (Global_262145.f_25919)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25819;
			}
			break;
		
		case 13:
			if (Global_262145.f_25920)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25820;
			}
			break;
		
		case 14:
			if (Global_262145.f_25920)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25821;
			}
			break;
		
		case 15:
			if (Global_262145.f_25920)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25822;
			}
			break;
		
		case 16:
			if (Global_262145.f_25920)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25823;
			}
			break;
		
		case 17:
			if (Global_262145.f_25921)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25824;
			}
			break;
		
		case 18:
			if (Global_262145.f_25922)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25825;
			}
			break;
		
		case 19:
			if (Global_262145.f_25923)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_25826;
			}
			break;
	}
	return 0;
}

void func_785()
{
	if (func_722("LW_PLAY"))
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_786(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 10))
		{
			MISC::SET_BIT(&(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 10))
	{
		MISC::CLEAR_BIT(&(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2), 10);
	}
}

int func_787()
{
	if (func_35(11))
	{
		if (func_82(PLAYER::PLAYER_PED_ID()))
		{
			return func_788();
		}
	}
	return 0;
}

int func_788()
{
	if (((((PAD::IS_CONTROL_JUST_PRESSED(2, 51) && !PAD::IS_CONTROL_JUST_PRESSED(2, 199)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 200)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 199)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200)) && !func_789(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_789(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1371947.f_241.f_136[func_529(9) /*33*/][iParam0], func_524(9));
}

void func_790()
{
	if (func_771(0))
	{
		func_47(11);
	}
	if (func_35(11))
	{
		if (!MISC::IS_BIT_SET(Local_99.f_1, 2))
		{
			func_18("LW_PLAY", -1);
		}
		if (!func_771(0))
		{
			func_31(11);
		}
	}
}

int func_791()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (!func_803(8.7587f))
	{
		return 1;
	}
	if (func_801(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (Global_2405071.f_2668)
	{
		return 1;
	}
	if (func_800())
	{
		return 1;
	}
	if (!func_799())
	{
		return 1;
	}
	if (func_89(0))
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_798())
	{
		return 1;
	}
	if (func_797())
	{
		return 1;
	}
	if (func_796(1))
	{
		return 1;
	}
	bVar2 = func_771(0);
	if (Global_262145.f_25916)
	{
		if (bVar2)
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_798())
			{
				func_18("CASINO_LUCK_WD", -1);
			}
		}
		iVar0 = 1;
	}
	if (!func_795(PLAYER::PLAYER_ID()))
	{
		if ((bVar2 && !MISC::IS_BIT_SET(Global_1671295.f_6, 4)) && !func_794(4, &uVar1))
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_798())
			{
				MISC::SET_BIT(&(Global_1671295.f_6), 4);
				func_133("CAS_MG_MEMB2", func_770(0), -1);
			}
		}
		iVar0 = 1;
	}
	if (func_793())
	{
		if (bVar2 && !func_35(20))
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_798())
			{
				func_18("LUCKY_WHEEL_US", -1);
				func_47(20);
			}
		}
		iVar0 = 1;
	}
	if (bVar2)
	{
		if (!func_792())
		{
			if (func_722("LW_PLAY"))
			{
				HUD::CLEAR_HELP(1);
			}
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_798())
			{
				func_18("POD_TOO_MANY", -1);
			}
			iVar0 = 1;
		}
		else if (func_722("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	else if (func_722("POD_TOO_MANY"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (MISC::IS_BIT_SET(Local_99.f_1, 1))
	{
		iVar0 = 1;
	}
	if (MISC::IS_BIT_SET(Global_1671295.f_4, 2))
	{
		iVar0 = 1;
	}
	if (func_729())
	{
		iVar0 = 1;
	}
	if (func_794(4, &uVar1))
	{
		if (bVar2)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_18("CAS_LW_REGL", -1);
				func_47(28);
			}
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_792()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_6(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 1109.469f, 228.9432f, -50.64041f, 1111.215f, 228.8777f, -48.39041f, 1.82f, 0, true, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_793()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_15(8349, -1, 0);
	iVar1 = func_160(joaat("MPPLY_LUCKY_WHEEL_USAGE"));
	iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iVar2 > iVar0 || iVar2 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_794(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!MONEY::_NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_795(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_1, 18);
}

bool func_796(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_797()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_798()
{
	return Global_68807;
}

bool func_799()
{
	return SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_718()) < 5f;
}

int func_800()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_34, 4);
	}
	return 0;
}

int func_801(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_802(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_802(int iParam0)
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

int func_803(float fParam0)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { func_805(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0, 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	fVar1 = func_804(ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), vVar0);
	if (fVar1 >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_804(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_805(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_806()
{
	return Local_97 != func_8();
}

void func_807()
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_99.f_386))
	{
		AUDIO::STOP_SOUND(Local_99.f_386);
		AUDIO::RELEASE_SOUND_ID(Local_99.f_386);
		Local_99.f_386 = -1;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_99.f_388))
	{
		AUDIO::STOP_SOUND(Local_99.f_388);
		AUDIO::RELEASE_SOUND_ID(Local_99.f_388);
		Local_99.f_388 = -1;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_99.f_389))
	{
		AUDIO::STOP_SOUND(Local_99.f_389);
		AUDIO::RELEASE_SOUND_ID(Local_99.f_389);
		Local_99.f_389 = -1;
	}
}

void func_808()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_99.f_72))
	{
		STREAMING::REQUEST_MODEL(func_809());
		if (!STREAMING::HAS_MODEL_LOADED(func_809()))
		{
			return;
		}
		Local_99.f_72 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_809(), func_687(), false, false, true);
		ENTITY::_SET_ENTITY_SOMETHING(Local_99.f_72, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_99.f_72, false);
	}
}

int func_809()
{
	return joaat("vw_prop_vw_luckywheel_02a");
}

int func_810()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_813())
	{
		iVar0 = 1;
	}
	if (!func_811(PLAYER::PLAYER_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_CASINO")) < 1)
	{
		iVar0 = 1;
	}
	if (Global_1689888)
	{
		Global_1689888 = 0;
		iVar0 = 1;
	}
	return iVar0;
}

int func_811(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_812(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_812(int iParam0)
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
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_813()
{
	var uVar0;
	
	func_820(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_819())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_818())
	{
		return 1;
	}
	if (func_817(157))
	{
		if (!func_816())
		{
			return 1;
		}
	}
	if (func_817(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_814() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_814()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_814()
{
	switch (func_528())
	{
		case 0:
			return func_815();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_815()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_816()
{
	return Global_2448756.f_586;
}

int func_817(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_818()
{
	return Global_2458613;
}

bool func_819()
{
	return Global_2448756.f_581;
}

void func_820(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_821(iVar0);
					break;
				
				case -42615386:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_821(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_567(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

void func_822()
{
	if (func_35(21))
	{
		func_92(1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_809());
	func_723(0);
	func_824();
	func_678();
	func_766(PLAYER::PLAYER_ID(), 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_99.f_23))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_99.f_23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_99.f_72))
	{
		OBJECT::DELETE_OBJECT(&(Local_99.f_72));
	}
	if (MISC::IS_BIT_SET(Global_1671295.f_6, 4))
	{
		MISC::CLEAR_BIT(&(Global_1671295.f_6), 4);
	}
	func_60(0);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CasinoUI_Lucky_Wheel");
	func_823();
}

void func_823()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_824()
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_109(func_721(PLAYER::PLAYER_ID()));
	sVar1 = func_33();
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_99.f_72, sVar1, sVar0, 3))
	{
		ENTITY::STOP_ENTITY_ANIM(Local_99.f_72, sVar0, sVar1, -8f);
	}
}

void func_825()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_850(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_98, 161);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_97, 2);
	if (!func_849())
	{
		func_822();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_826();
}

void func_826()
{
	func_827(&Local_100);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CasinoUI_Lucky_Wheel", false);
}

void func_827(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam0->f_7, 9))
	{
		iVar0 = 0;
		while (iVar0 <= 84)
		{
			iVar1 = func_848(iVar0, 0);
			if (func_847(iVar1))
			{
				if (!func_846(iVar1))
				{
					if (func_845(iVar1) && func_840(1623028892, iVar1, -1))
					{
						iVar1 = func_839(iVar1);
					}
					if (func_831(iVar1, -1, 0) || func_828(iVar1))
					{
						if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) != 0)
						{
							if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MELEE") || iVar1 == joaat("WEAPON_KNUCKLE"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 0))
								{
									MISC::SET_BIT(&(uParam0->f_4), 0);
									uParam0->f_5++;
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_PISTOL"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 1))
								{
									MISC::SET_BIT(&(uParam0->f_4), 1);
									uParam0->f_5++;
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 30))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23), 30);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_RIFLE"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 3))
								{
									MISC::SET_BIT(&(uParam0->f_4), 3);
									uParam0->f_5++;
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 31))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23), 31);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SHOTGUN") || iVar1 == joaat("WEAPON_MUSKET"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 4))
								{
									MISC::SET_BIT(&(uParam0->f_4), 4);
									uParam0->f_5++;
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 0))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117), 0);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SNIPER") && iVar1 != joaat("WEAPON_MUSKET"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 5))
								{
									MISC::SET_BIT(&(uParam0->f_4), 5);
									uParam0->f_5++;
								}
								if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 5))
								{
									MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117), 5);
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_HEAVY"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 6))
								{
									MISC::SET_BIT(&(uParam0->f_4), 6);
									uParam0->f_5++;
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_THROWN") || iVar1 == joaat("WEAPON_PETROLCAN"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 7))
								{
									MISC::SET_BIT(&(uParam0->f_4), 7);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("WEAPON_STICKYBOMB") || iVar1 == joaat("WEAPON_PROXMINE"))
								{
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 2))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117), 2);
									}
								}
								else if (iVar1 == joaat("WEAPON_GRENADE") || iVar1 == joaat("WEAPON_SMOKEGRENADE"))
								{
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 3))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117), 3);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SMG") || WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MG"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 2))
								{
									MISC::SET_BIT(&(uParam0->f_4), 2);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("WEAPON_MICROSMG"))
								{
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 1))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117), 1);
									}
								}
								if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MG"))
								{
									if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117, 4))
									{
										MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_117), 4);
									}
								}
							}
						}
						else if ((MISC::GET_FRAME_COUNT() % 60) == 0)
						{
						}
					}
					else if ((MISC::GET_FRAME_COUNT() % 60) == 0)
					{
					}
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_7), 9);
	}
}

int func_828(int iParam0)
{
	if (iParam0 == joaat("WEAPON_MOLOTOV"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) > 0)
			{
				return 1;
			}
		}
	}
	if ((((((iParam0 == joaat("WEAPON_GOLFCLUB") || iParam0 == joaat("WEAPON_CROWBAR")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_SMOKEGRENADE")) || iParam0 == joaat("WEAPON_GRENADE")) || iParam0 == joaat("WEAPON_STICKYBOMB")) && func_15(func_830(iParam0), -1, 0) > 0)
	{
		return 1;
	}
	if (iParam0 == joaat("WEAPON_STONE_HATCHET") && func_829())
	{
		return 1;
	}
	return 0;
}

int func_829()
{
	if (func_19(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_830(int iParam0)
{
	if (func_528() == 0 || func_527() == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return 199;
				break;
			
			case joaat("WEAPON_NIGHTSTICK"):
				return 206;
				break;
			
			case joaat("WEAPON_PISTOL"):
				return 257;
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				return 267;
				break;
			
			case joaat("WEAPON_APPISTOL"):
				return 287;
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				return 1746;
				break;
			
			case joaat("WEAPON_MICROSMG"):
				return 297;
				break;
			
			case joaat("WEAPON_SMG"):
				return 307;
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				return 326;
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				return 335;
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				return 8434;
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return 344;
				break;
			
			case joaat("WEAPON_MG"):
				return 353;
				break;
			
			case joaat("WEAPON_COMBATMG"):
				return 362;
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				return 380;
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return 390;
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return 408;
				break;
			
			case joaat("WEAPON_STUNGUN"):
				return 418;
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				return 427;
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				return 436;
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				return 445;
				break;
			
			case joaat("WEAPON_RPG"):
				return 452;
				break;
			
			case joaat("WEAPON_MINIGUN"):
				return 461;
				break;
			
			case joaat("WEAPON_GRENADE"):
				return 469;
				break;
			
			case joaat("WEAPON_SMOKEGRENADE"):
				return 478;
				break;
			
			case joaat("WEAPON_STICKYBOMB"):
				return 486;
				break;
			
			case joaat("WEAPON_MOLOTOV"):
				return 495;
				break;
			
			case joaat("WEAPON_PETROLCAN"):
				return 586;
				break;
			
			case joaat("WEAPON_PISTOL50"):
				return 277;
				break;
			
			case -572349828:
				return 371;
				break;
			
			case joaat("WEAPON_ASSAULTSMG"):
				return 317;
				break;
			
			case 392730790:
				return 439;
				break;
			
			case joaat("WEAPON_HAMMER"):
				return 234;
				break;
			
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				return 399;
				break;
			
			case joaat("WEAPON_BOTTLE"):
				return 1736;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
				return 8424;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 8444;
				break;
			
			case joaat("WEAPON_GUSENBERG"):
				return 8454;
				break;
			
			case joaat("GADGET_PARACHUTE"):
				return 583;
				break;
			
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 8737;
				break;
			
			case joaat("WEAPON_DAGGER"):
				return 8727;
				break;
			
			case joaat("WEAPON_MUSKET"):
				return 8757;
				break;
			
			case joaat("WEAPON_FIREWORK"):
				return 8747;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
				return 8835;
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 8845;
				break;
			
			case joaat("WEAPON_PROXMINE"):
				return 8861;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
				return 8869;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
				return 8879;
				break;
			
			case joaat("WEAPON_KNUCKLE"):
				return 8886;
				break;
			
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 8896;
				break;
			
			case joaat("WEAPON_HATCHET"):
				return 8853;
				break;
			
			case joaat("WEAPON_MACHETE"):
				return 8904;
				break;
			
			case joaat("WEAPON_MACHINEPISTOL"):
				return 8914;
				break;
			
			case joaat("WEAPON_DBSHOTGUN"):
				return 8942;
				break;
			
			case joaat("WEAPON_COMPACTRIFLE"):
				return 8932;
				break;
			
			case joaat("WEAPON_FLASHLIGHT"):
				return 8950;
				break;
			
			case joaat("WEAPON_GOLFCLUB"):
				return 248;
				break;
			
			case joaat("WEAPON_BAT"):
				return 241;
				break;
			
			case joaat("WEAPON_CROWBAR"):
				return 213;
				break;
			
			case joaat("WEAPON_AUTOSHOTGUN"):
				return 9021;
				break;
			
			case joaat("WEAPON_MINISMG"):
				return 9047;
				break;
			
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return 9037;
				break;
			
			case joaat("WEAPON_BATTLEAXE"):
				return 9064;
				break;
			
			case joaat("WEAPON_PIPEBOMB"):
				return 9055;
				break;
			
			case joaat("WEAPON_POOLCUE"):
				return 9065;
				break;
			
			case joaat("WEAPON_WRENCH"):
				return 227;
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				return 326;
				break;
			
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				return 335;
				break;
			
			case joaat("WEAPON_COMBATMG_MK2"):
				return 362;
				break;
			
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				return 436;
				break;
			
			case joaat("WEAPON_PISTOL_MK2"):
				return 257;
				break;
			
			case joaat("WEAPON_SMG_MK2"):
				return 307;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				return 9529;
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				return 9549;
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				return 9539;
				break;
			
			case joaat("WEAPON_REVOLVER_MK2"):
				return 9559;
				break;
			
			case joaat("WEAPON_SNSPISTOL_MK2"):
				return 9579;
				break;
			
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				return 9589;
				break;
			
			case joaat("WEAPON_RAYPISTOL"):
				return 9949;
				break;
			
			case joaat("WEAPON_RAYCARBINE"):
				return 9959;
				break;
			
			case joaat("WEAPON_RAYMINIGUN"):
				return 9969;
				break;
			}
	}
	return 486;
}

bool func_831(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_530())
	{
		return 0;
	}
	if (func_836() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("GADGET_PARACHUTE") && iParam0 != joaat("WEAPON_RAILGUN"))
	{
		if (func_834(func_835(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_832(iParam0, iParam1);
	iVar1 = func_558(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_524(iVar1));
}

var func_832(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_15(func_833(iParam0), uParam1, 0);
	return uVar0;
}

int func_833(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_558(iParam0);
	iVar1 = func_529(iVar0);
	if ((func_528() == 0 || func_527() == 0) || (func_528() == 999 && func_527() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
				break;
			
			case 1:
				return 800;
				break;
			
			case 2:
				return 2418;
				break;
			}
	}
	return 10383;
}

int func_834(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2571340[iParam0 /*3*/][func_13(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 18;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 66;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 68;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 70;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 72;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 18;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 40;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 22;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 24;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 26;
			break;
		
		case joaat("WEAPON_SMG"):
			return 28;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 30;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 32;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 34;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 36;
			break;
		
		case joaat("WEAPON_MG"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 44;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 46;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 48;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 50;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 54;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 56;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		
		case joaat("WEAPON_RPG"):
			return 62;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 64;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 52;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 75;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 2;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 4;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 12;
			break;
		
		case joaat("WEAPON_BAT"):
			return 14;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 6;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 40;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 143;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 263;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 145;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 261;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 265;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 267;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 288;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 290;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 292;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 294;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 306;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 308;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 312;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 314;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 316;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 318;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 320;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 310;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 322;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 324;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 327;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 329;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 331;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 334;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 336;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 341;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 347;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 345;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 343;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 349;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 351;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 10;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 32;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 34;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 40;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 18;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 28;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 308;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 44;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 334;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 145;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 263;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 375;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 381;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 383;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 383;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 383;
			break;
	}
	return 2;
}

int func_836()
{
	if (func_838() && func_837(0))
	{
		return 1;
	}
	return 0;
}

var func_837(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_838()
{
	return func_837(func_14() + 1);
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return joaat("WEAPON_PISTOL_MK2");
		
		case joaat("WEAPON_SMG"):
			return joaat("WEAPON_SMG_MK2");
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
		
		case joaat("WEAPON_CARBINERIFLE"):
			return joaat("WEAPON_CARBINERIFLE_MK2");
		
		case joaat("WEAPON_COMBATMG"):
			return joaat("WEAPON_COMBATMG_MK2");
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return joaat("WEAPON_HEAVYSNIPER_MK2");
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return joaat("WEAPON_REVOLVER_MK2");
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return joaat("WEAPON_SNSPISTOL_MK2");
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return joaat("WEAPON_SPECIALCARBINE_MK2");
			break;
	}
	return 0;
}

bool func_840(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_530())
	{
		return 0;
	}
	iVar0 = func_843(iParam0, iParam1, iParam2);
	iVar1 = func_841(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_524(iVar1));
}

int func_841(int iParam0, int iParam1)
{
	return func_842(iParam0, iParam1);
}

int func_842(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
					break;
				
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
					break;
				
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
					break;
				
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
					break;
				
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
					break;
				
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
					break;
				
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
					break;
				
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
					break;
				
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
					break;
				
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
					break;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
					break;
				
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
					break;
				
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
					break;
				
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
					break;
				
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
					break;
				
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
					break;
				
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
					break;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
					break;
			}
			break;
	}
	return 0;
}

var func_843(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_15(func_844(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_844(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_841(iParam0, iParam1);
	iVar1 = func_529(iVar0);
	if ((func_528() == 0 || func_527() == 0) || (func_528() == 999 && func_527() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
			}
	}
	return 1753;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 1;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 1;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 1;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG"):
			return 1;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_SPECIALCARBINE"):
			return 1;
			break;
	}
	return 0;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_ASSAULTSMG"):
		case -947031628:
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case -572349828:
		case 392730790:
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_FIREWORK"):
		case joaat("WEAPON_MUSKET"):
		case -1523701417:
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_SNOWBALL"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MARKSMANPISTOL"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_MACHINEPISTOL"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_PETROLCAN"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_AUTOSHOTGUN"):
		case joaat("WEAPON_MINISMG"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_DOUBLEACTION"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_RAYPISTOL"):
		case joaat("WEAPON_RAYCARBINE"):
		case joaat("WEAPON_RAYMINIGUN"):
			return 1;
			break;
	}
	return 0;
}

int func_848(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return joaat("WEAPON_PISTOL_MK2");
			
			case 5:
				return joaat("WEAPON_SMG_MK2");
			
			case 8:
				return joaat("WEAPON_ASSAULTRIFLE_MK2");
			
			case 9:
				return joaat("WEAPON_CARBINERIFLE_MK2");
			
			case 13:
				return joaat("WEAPON_COMBATMG_MK2");
			
			case 21:
				return joaat("WEAPON_HEAVYSNIPER_MK2");
			
			default:
		}
		switch (iParam0)
		{
			case 22:
				return joaat("WEAPON_PUMPSHOTGUN_MK2");
			
			case 46:
				return joaat("WEAPON_SPECIALCARBINE_MK2");
			
			case 47:
				return joaat("WEAPON_SNSPISTOL_MK2");
			
			case 56:
				return joaat("WEAPON_MARKSMANRIFLE_MK2");
			
			case 70:
				return joaat("WEAPON_REVOLVER_MK2");
			
			case 48:
				return joaat("WEAPON_BULLPUPRIFLE_MK2");
			}
		
		default:
	}
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
			break;
		
		case 1:
			return joaat("WEAPON_PISTOL");
			break;
		
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		
		case 3:
			return joaat("WEAPON_APPISTOL");
			break;
		
		case 5:
			return joaat("WEAPON_SMG");
			break;
		
		case 7:
			return joaat("WEAPON_MICROSMG");
			break;
		
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		
		case 12:
			return joaat("WEAPON_MG");
			break;
		
		case 13:
			return joaat("WEAPON_COMBATMG");
			break;
		
		case 15:
			return joaat("WEAPON_STICKYBOMB");
			break;
		
		case 16:
			return joaat("WEAPON_GRENADE");
			break;
		
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
			break;
		
		case 60:
			return joaat("WEAPON_PROXMINE");
			break;
		
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
			break;
		
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
			break;
		
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		
		case 27:
			return joaat("WEAPON_RPG");
			break;
		
		case 28:
			return joaat("WEAPON_MINIGUN");
			break;
		
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
			break;
		
		case 31:
			return joaat("WEAPON_STUNGUN");
			break;
		
		case 33:
			return joaat("GADGET_PARACHUTE");
			break;
		
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		
		case 43:
			return joaat("WEAPON_PETROLCAN");
			break;
		
		case 45:
			return joaat("WEAPON_BOTTLE");
			break;
		
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		
		case 47:
			return joaat("WEAPON_SNSPISTOL");
			break;
		
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
			break;
		
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
			break;
		
		case 50:
			return joaat("WEAPON_GUSENBERG");
			break;
		
		case 51:
			return joaat("WEAPON_DAGGER");
			break;
		
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
			break;
		
		case 57:
			return joaat("WEAPON_FLAREGUN");
			break;
		
		case 53:
			return joaat("WEAPON_MUSKET");
			break;
		
		case 54:
			return joaat("WEAPON_FIREWORK");
			break;
		
		case 58:
			return joaat("WEAPON_HATCHET");
			break;
		
		case 59:
			return joaat("WEAPON_RAILGUN");
			break;
		
		case 64:
			return joaat("WEAPON_COMBATPDW");
			break;
		
		case 62:
			return joaat("WEAPON_KNUCKLE");
			break;
		
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
			break;
		
		case 65:
			return joaat("WEAPON_MACHETE");
			break;
		
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
			break;
		
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
			break;
		
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
			break;
		
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
			break;
		
		case 70:
			return joaat("WEAPON_REVOLVER");
			break;
		
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
			break;
		
		case 36:
			return joaat("WEAPON_HAMMER");
			break;
		
		case 4:
			return joaat("WEAPON_PISTOL50");
			break;
		
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
			break;
		
		case 41:
			return joaat("WEAPON_MOLOTOV");
			break;
		
		case 39:
			return joaat("WEAPON_GOLFCLUB");
			break;
		
		case 38:
			return joaat("WEAPON_CROWBAR");
			break;
		
		case 37:
			return joaat("WEAPON_BAT");
			break;
		
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
			break;
		
		case 73:
			return joaat("WEAPON_MINISMG");
			break;
		
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
			break;
		
		case 75:
			return joaat("WEAPON_BATTLEAXE");
			break;
		
		case 76:
			return joaat("WEAPON_PIPEBOMB");
			break;
		
		case 77:
			return joaat("WEAPON_POOLCUE");
			break;
		
		case 78:
			return joaat("WEAPON_WRENCH");
			break;
		
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
			break;
		
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
			break;
		
		case 81:
			return joaat("WEAPON_RAYPISTOL");
			break;
		
		case 82:
			return joaat("WEAPON_RAYCARBINE");
			break;
		
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
			break;
	}
	return joaat("WEAPON_UNARMED");
}

int func_849()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_819())
		{
			return 0;
		}
		if (func_817(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_850(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_823();
			}
			else
			{
				return 0;
			}
		}
		if (!func_851())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_823();
					}
					else
					{
						return 0;
					}
				}
				if (func_819())
				{
					if (!bParam2)
					{
						func_823();
					}
					else
					{
						return 0;
					}
				}
				if (func_817(155))
				{
					if (!bParam2)
					{
						func_823();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_823();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_823();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_823();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_851()
{
	return Global_1312844;
}

