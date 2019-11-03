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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98[54] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_96 = 4;
	iLocal_97 = 10;
	if (func_158() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1312435 = 1;
	iVar0 = 0;
	Global_1370419.f_281 = 1;
	Global_1367983.f_1 = 0;
	Global_1367983.f_3 = 0;
	Global_1367983.f_5 = 0;
	func_156(&Global_1370419);
	func_155(&Global_1370419);
	func_154(&Global_1370419);
	func_150();
	func_149(0, &Global_1370419);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1884422346);
	HUD::_0x4895BDEA16E7C080(0);
	func_148();
	iVar5 = 1;
	switch (iScriptParam_101)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::_0xEC9264727EEC0F28();
							iVar6 = 1;
						}
					}
				}
				if (func_147(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						Global_1367983.f_1 = 0;
						Global_1367983.f_3 = 0;
						iVar5 = 1;
						func_149(0, &Global_1370419);
						func_155(&Global_1370419);
						func_154(&Global_1370419);
						func_146(&Global_1370419, &Global_1367983);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
				if (iVar5 == 0)
				{
					if (func_147(189) || func_147(190))
					{
						iVar0 = 1;
					}
				}
				if (func_147(202))
				{
					func_144();
					if (iVar5 == 1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
						HUD::_0x4895BDEA16E7C080(0);
						func_155(&Global_1370419);
						func_154(&Global_1370419);
						func_149(-1, &Global_1370419);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar0 = 1;
						HUD::_0x14621BB1DF14E2B2();
					}
				}
				if (HUD::_0xF284AC67940C6812())
				{
					HUD::_0x36C1451A88A09630(&iVar2, &uVar3);
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					HUD::_0x7E17BE53E1AAABAF(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1367983.f_1 = (iVar4 % 3);
						Global_1367983.f_3 = (iVar4 / 3);
						func_149(iVar4, &Global_1370419);
						func_154(&Global_1370419);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", false);
				func_9(&Global_1370419, &Global_1367983);
				if (iVar5 == 1)
				{
					func_1(&Global_1370419, &Global_1367983, &uLocal_99);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::_0x14621BB1DF14E2B2();
	HUD::_LOG_DEBUG_INFO(0);
	Global_1312435 = 0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 187) || func_6(187, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 188) || func_6(188, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 241)) || func_6(189, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 242)) || func_6(190, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		MISC::SET_BIT(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_96 > 1)
			{
				func_156(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_96;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_97)
				{
					uParam1->f_1 = ((iLocal_97 - 1) % 3);
					uParam1->f_3 = ((iLocal_97 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_96 && iVar2 >= iLocal_97))
		{
			if (iLocal_96 > 1)
			{
				func_156(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_96)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_96)
			{
				if (iVar0 > (iLocal_97 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_96)
			{
				if (iVar0 > (iLocal_97 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_96)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_97 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_97 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (func_143(8, -1) == 0)
		{
			*uParam1 = func_142();
		}
		func_148();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_106(joaat("WEAPON_PISTOL"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_COMBATPISTOL"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_APPISTOL"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_MICROSMG"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_SMG"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_ASSAULTRIFLE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_CARBINERIFLE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_ADVANCEDRIFLE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_MG"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_106(joaat("WEAPON_COMBATMG"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_ASSAULTSMG"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_PUMPSHOTGUN"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_ASSAULTSHOTGUN"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_SNIPERRIFLE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_HEAVYSNIPER"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_GRENADELAUNCHER"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_MINIGUN"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_RPG"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_106(joaat("WEAPON_KNIFE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_NIGHTSTICK"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_BAT"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_CROWBAR"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_GOLFCLUB"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_MOLOTOV"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_GRENADE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_SMOKEGRENADE"), uParam0, *uParam1, 0);
					func_106(joaat("WEAPON_STICKYBOMB"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_98(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_97(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_87(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_85(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_69(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 0);
						func_59(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("WEAPON_BULLPUPSHOTGUN") || uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL50")) || uParam0->f_85[iVar0] == joaat("WEAPON_SNSPISTOL"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 1);
						func_59(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_94(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL") && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 0))) || func_45(uParam0->f_85[iVar0])) || func_29(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_96(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || MISC::ARE_STRINGS_EQUAL(func_26(uParam0->f_85[iVar0], 0), func_26(0, 0)))
			{
				iVar8 = 0;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_85[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_277);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_21(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
			iVar1 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_20(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			func_20(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_16(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_ACCURACY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_RANGE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_CLIPSIZE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_KD_RATIO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_HEADSHOTS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_MY_ACCURACY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 0;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 0;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 9;
			break;
		
		case joaat("WEAPON_SMG"):
			return 11;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 24;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 21;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 19;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 20;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 17;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 33;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 13;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 15;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 37;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("WEAPON_MG"):
			return 50;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 70;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 80;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 90;
			break;
		
		case joaat("WEAPON_RPG"):
			return 100;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 120;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 0;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 0;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 0;
			break;
		
		case joaat("WEAPON_BAT"):
			return 0;
			break;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
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

void func_20(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_21(var uParam0)
{
	uParam0->f_284 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_284;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_24(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_275);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_282 = 0;
}

int func_25(var uParam0)
{
	return uParam0->f_282;
}

char* func_26(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		default:
			if (func_28(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_27(&(Var0.f_31));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_27(var uParam0)
{
	return uParam0;
}

int func_28(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_42() == 0)
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 388 && func_39(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	iVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return (iParam0 % 32);
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(func_36(iParam0), iParam1, 0);
	return iVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_35(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
				break;
			
			case 1:
				return 686;
				break;
			
			case 2:
				return 2419;
				break;
			}
	}
	return 10383;
}

int func_37()
{
	return Global_25766;
}

int func_38(int iParam0)
{
	return (iParam0 / 32);
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2571340[iParam0 /*3*/][func_35(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 17;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 19;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 23;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 21;
			break;
		
		case joaat("WEAPON_SMG"):
			return 27;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 25;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 31;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 33;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 35;
			break;
		
		case joaat("WEAPON_MG"):
			return 37;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 39;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 43;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 45;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 49;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 55;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 53;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 59;
			break;
		
		case joaat("WEAPON_RPG"):
			return 61;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 63;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 65;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 67;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 69;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 71;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 74;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 73;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 1;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 11;
			break;
		
		case joaat("WEAPON_BAT"):
			return 13;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 5;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 47;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 142;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 262;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 144;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 260;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 264;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 266;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 289;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 287;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 293;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 291;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 281;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 305;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 307;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 311;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 313;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 309;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 315;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 317;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 319;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 321;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 323;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 328;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 326;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 330;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 333;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 335;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 340;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 346;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 344;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 342;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 348;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 350;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 9;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 31;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 33;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 39;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 55;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 17;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 27;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 307;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 43;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 333;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 144;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 262;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 374;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 382;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 384;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 386;
			break;
	}
	return 388;
}

bool func_41()
{
	return Global_1312846;
}

int func_42()
{
	if (func_44() && func_43(0))
	{
		return 1;
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_44()
{
	return func_43(func_142() + 1);
}

int func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
			bVar0 = true;
			iVar3 = 493;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			bVar0 = true;
			iVar3 = 247;
			break;
		
		case joaat("WEAPON_BAT"):
			bVar0 = true;
			iVar3 = 240;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			bVar0 = true;
			iVar3 = 212;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(PLAYER::PLAYER_ID());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_46(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 32;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 64;
				
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 256;
				
				default:
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 1;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 16;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 128;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
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

var func_56(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_57(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 681;
				break;
			
			case 1:
				return 682;
				break;
			
			case 2:
				return 683;
				break;
			
			case 3:
				return 684;
				break;
			
			case 4:
				return 1750;
				break;
			
			case 5:
				return 2432;
				break;
			
			case 6:
				return 2824;
				break;
			
			case 7:
				return 5498;
				break;
			
			case 8:
				return 5502;
				break;
			
			case 9:
				return 5506;
			
			case 10:
				return 5619;
			
			case 11:
				return 5623;
				break;
			
			case 12:
				return 5627;
				break;
			
			case 13:
				return 5631;
				break;
			
			case 14:
				return 6370;
				break;
			
			case 15:
				return 6493;
				break;
			
			case 16:
				return 6513;
				break;
			
			case 17:
				return 6519;
				break;
			}
	}
	return 1750;
}

char* func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP";
			break;
		
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH";
			break;
		
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP";
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP";
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP";
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, -1))
		{
			func_60(iParam0, iParam1, 1);
		}
	}
	else if (func_64(iParam0, iParam1, -1))
	{
		func_60(iParam0, iParam1, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_63(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_62(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
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

var func_63(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_62(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, -1))
		{
			func_66(iParam0, iParam1, 1);
		}
	}
	else if (func_94(iParam0, iParam1, -1))
	{
		func_66(iParam0, iParam1, 0);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_68(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_67(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 810;
				break;
			
			case 1:
				return 811;
				break;
			
			case 2:
				return 812;
				break;
			
			case 3:
				return 813;
				break;
			
			case 4:
				return 1751;
				break;
			
			case 5:
				return 2433;
				break;
			
			case 6:
				return 2825;
				break;
			
			case 7:
				return 5499;
				break;
			
			case 8:
				return 5503;
				break;
			
			case 9:
				return 5507;
				break;
			
			case 10:
				return 5620;
				break;
			
			case 11:
				return 5624;
				break;
			
			case 12:
				return 5628;
				break;
			
			case 13:
				return 5632;
				break;
			
			case 14:
				return 6371;
				break;
			
			case 15:
				return 6494;
				break;
			
			case 16:
				return 6514;
				break;
			
			case 17:
				return 6520;
				break;
			}
	}
	return 10383;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_67(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, -1))
		{
			func_84(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_82(iParam0, iParam1) == 0)
			{
				func_77(16, func_58(iParam0, 0), func_81(iParam0, 0), func_80(iParam1), func_79(iParam1), -1, 0, 0, 0, -1, 0);
				func_75(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_70(iParam0, iParam1, 1);
		}
	}
	else if (func_53(iParam0, iParam1, -1))
	{
		func_84(iParam0, iParam1, 0);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam0, iParam1, -1))
		{
			func_71(iParam0, iParam1, 1);
		}
	}
	else if (func_74(iParam0, iParam1, -1))
	{
		func_71(iParam0, iParam1, 0);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_72(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 654;
				break;
			
			case 1:
				return 655;
				break;
			
			case 2:
				return 656;
				break;
			
			case 3:
				return 657;
				break;
			
			case 4:
				return 1752;
				break;
			
			case 5:
				return 2434;
				break;
			
			case 6:
				return 2826;
				break;
			
			case 7:
				return 5500;
				break;
			
			case 8:
				return 5504;
				break;
			
			case 9:
				return 5508;
				break;
			
			case 10:
				return 5621;
				break;
			
			case 11:
				return 5625;
				break;
			
			case 12:
				return 5629;
				break;
			
			case 13:
				return 5633;
				break;
			
			case 14:
				return 6372;
				break;
			
			case 15:
				return 6495;
				break;
			
			case 16:
				return 6515;
				break;
			
			case 17:
				return 6521;
				break;
			}
	}
	return 10383;
}

var func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_72(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_73(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_2538129.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2538129.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	switch (func_38(iVar0))
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
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
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_78(&Global_1379695);
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

int func_78(var uParam0)
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

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_SMG"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_MG"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_80(int iParam0)
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
			return "W_PI_Pistol";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "Parachute_Main";
			break;
		
		case joaat("WEAPON_SMG"):
			return "W_SB_SMG";
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "W_Ex_PE";
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("WEAPON_RPG"):
			return "W_LR_RPG";
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("WEAPON_MG"):
			return "W_MG_MG";
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return "W_MG_Minigun";
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return "W_EX_Molotov";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "rocket";
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "rocket";
			break;
	}
	return "";
}

char* func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_NONE";
			break;
		
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCD_GRIP";
			break;
		
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCD_FLASH";
			break;
		
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCD_FLASH";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCD_VAR_P";
			break;
		
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_SNP";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCD_VAR_ASMG";
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCD_VAR_BPR";
			break;
		
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCD_VAR_CBMG";
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCD_VAR_CBP";
			break;
		
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCD_VAR_MG";
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCD_VAR_SNS";
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCD_VAR_SCAR";
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCD_REV_VARB";
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCD_REV_VARG";
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCD_CLIP3";
			break;
		
		case 1623028892:
			return "WCD_VAR_GUN";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCD_CLIP2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCD_VAR_RAY18";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_83(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_83(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2538129.f_991[func_76(iParam0, iParam1)];
	return uVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_57(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_28(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_86(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

bool func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_88(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_88(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_89(iParam0), iParam1, 0);
	return uVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
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

bool func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	if (func_42() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("GADGET_PARACHUTE") && iParam0 != joaat("WEAPON_RAILGUN"))
	{
		if (func_39(func_93(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_91(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_92(iParam0), uParam1, 0);
	return uVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
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

int func_93(int iParam0)
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

bool func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_68(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("WEAPON_PISTOL");
		
		case joaat("WEAPON_SMG_MK2"):
			return joaat("WEAPON_SMG");
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("WEAPON_ASSAULTRIFLE");
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("WEAPON_CARBINERIFLE");
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("WEAPON_COMBATMG");
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("WEAPON_HEAVYSNIPER");
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return joaat("WEAPON_BULLPUPRIFLE");
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return joaat("WEAPON_MARKSMANRIFLE");
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return joaat("WEAPON_PUMPSHOTGUN");
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("WEAPON_REVOLVER");
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return joaat("WEAPON_SNSPISTOL");
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return joaat("WEAPON_SPECIALCARBINE");
		
		default:
	}
	return 0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_97(var uParam0)
{
	return uParam0->f_281;
}

void func_98(var uParam0, var uParam1)
{
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")) && iLocal_98[10] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_HAMMER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")) && iLocal_98[0] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_PISTOL50"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")) && iLocal_98[1] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_BULLPUPSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (func_105(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")) && iLocal_98[2] == uParam1->f_5)
		{
			func_106(joaat("WEAPON_SAWNOFFSHOTGUN"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")) && iLocal_98[3] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_BOTTLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")) && iLocal_98[4] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_SNSPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")) && iLocal_98[11] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_GUSENBERG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")) && iLocal_98[7] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_HEAVYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")) && iLocal_98[5] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_SPECIALCARBINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")) && iLocal_98[6] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_BULLPUPRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")) && iLocal_98[8] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_DAGGER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")) && iLocal_98[9] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_VINTAGEPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")) && iLocal_98[14] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_FIREWORK"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")) && iLocal_98[13] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MUSKET"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")) && iLocal_98[12] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_FLAREGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")) && iLocal_98[15] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_HEAVYSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")) && iLocal_98[16] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MARKSMANRIFLE"), uParam0, *uParam1, 0);
	}
	if (func_104() || Global_262145.f_19626)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")) && iLocal_98[22] == uParam1->f_5)
		{
			func_106(joaat("WEAPON_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")) && iLocal_98[17] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_PROXMINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")) && iLocal_98[18] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_HOMINGLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")) && iLocal_98[19] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_COMBATPDW"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")) && iLocal_98[20] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MARKSMANPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")) && iLocal_98[21] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_KNUCKLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")) && iLocal_98[23] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MACHETE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")) && iLocal_98[24] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MACHINEPISTOL"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_11468 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT"))) && iLocal_98[25] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_FLASHLIGHT"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")) && iLocal_98[26] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_REVOLVER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")) && iLocal_98[27] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_SWITCHBLADE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")) && iLocal_98[28] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_DBSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")) && iLocal_98[29] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_COMPACTRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")) && iLocal_98[30] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_AUTOSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")) && iLocal_98[31] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_BATTLEAXE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")) && iLocal_98[32] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_COMPACTLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")) && iLocal_98[33] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MINISMG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")) && iLocal_98[34] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_PIPEBOMB"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")) && iLocal_98[35] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_POOLCUE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")) && iLocal_98[36] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_WRENCH"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")) && iLocal_98[37] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_ASSAULTRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")) && iLocal_98[38] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_CARBINERIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")) && iLocal_98[39] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_COMBATMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")) && iLocal_98[40] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_HEAVYSNIPER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")) && iLocal_98[41] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_PISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")) && iLocal_98[42] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_SMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")) && iLocal_98[43] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_BULLPUPRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")) && iLocal_98[44] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_MARKSMANRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")) && iLocal_98[45] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_PUMPSHOTGUN_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")) && iLocal_98[46] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_REVOLVER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")) && iLocal_98[47] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_SNSPISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")) && iLocal_98[48] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_SPECIALCARBINE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION")) && iLocal_98[49] == uParam1->f_5)
	{
		if (Global_262145.f_22802 && (func_103() || Global_1688018))
		{
			func_106(joaat("WEAPON_DOUBLEACTION"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET")) && iLocal_98[50] == uParam1->f_5)
	{
		if (Global_262145.f_23501 && func_99())
		{
			func_106(joaat("WEAPON_STONE_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && iLocal_98[51] == uParam1->f_5) && Global_262145.f_25731)
	{
		func_106(joaat("WEAPON_RAYCARBINE"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && iLocal_98[52] == uParam1->f_5) && Global_262145.f_25730)
	{
		func_106(joaat("WEAPON_RAYMINIGUN"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_24740)) && iLocal_98[53] == uParam1->f_5)
	{
		func_106(joaat("WEAPON_RAYPISTOL"), uParam0, *uParam1, 0);
	}
}

int func_99()
{
	if (func_100(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar0 = 0;
	iVar1 = func_102(iParam0, iParam1);
	iVar2 = func_101(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_101(int iParam0)
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

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
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

int func_103()
{
	if (func_100(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
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

int func_105(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_668.f_1311, 2))
		{
			return 1;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
		{
			return 0;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	char cVar1[16];
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<5> Var7;
	struct<5> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_26(iParam0, 0), 16);
	if (((iParam0 == joaat("WEAPON_DOUBLEACTION") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE"))
	{
		StringCopy(&cVar1, func_136(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar1, func_136(iParam0, 0), 16);
	}
	fVar2 = func_133(iParam0);
	uVar3 = func_132(iParam0, iParam2);
	uVar4 = func_131(iParam0, iParam2);
	iVar5 = func_130(iParam0, iParam2);
	uVar6 = func_129(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var7);
	Var7.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 <= 8)
	{
		if (uParam1->f_1[iVar12] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (func_96(iParam0))
			{
				if (func_94(1623028892, func_95(iParam0), -1))
				{
					bVar13 = true;
				}
				else
				{
					bVar13 = false;
				}
			}
			else if (func_90(iParam0, iParam2, 0))
			{
				bVar13 = true;
				if (bVar13)
				{
				}
			}
			else
			{
				bVar13 = false;
			}
			iVar11 = 0;
			while (iVar11 <= 35)
			{
				iVar10 = func_85(iParam0, iVar11);
				if (iVar10 != 0)
				{
					if (func_53(iVar10, iParam0, iParam2) && bVar13)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar10, &Var8))
						{
							Var9 = (Var9 + Var8);
							Var9.f_1 = (Var9.f_1 + Var8.f_1);
							Var9.f_3 = (Var9.f_3 + Var8.f_3);
							Var9.f_4 = (Var9.f_4 + Var8.f_4);
						}
					}
					if (func_64(iVar10, iParam0, iParam2))
					{
						if (func_128(iVar10))
						{
							Var9.f_2 = func_127(iParam0);
						}
						else if (func_126(iVar10))
						{
							Var9.f_2 = func_125(iParam0);
						}
					}
					if (func_94(iVar10, iParam0, iParam2))
					{
					}
				}
				iVar11++;
			}
			if (Var9.f_2 == 0)
			{
				Var9.f_2 = Var7.f_2;
			}
			func_124(iVar12, &Var0, &cVar1, uParam1);
			func_123(iVar12, Var7, uParam1);
			func_122(iVar12, Var9, uParam1);
			if (func_15(iParam0))
			{
				func_121(iVar12, -1, uParam1);
				func_120(iVar12, Var9.f_3, uParam1);
				func_119(iVar12, -1, uParam1);
				func_118(iVar12, Var9.f_4, uParam1);
				func_117(iVar12, -1, uParam1);
				func_116(iVar12, Var9.f_2, uParam1);
			}
			else
			{
				func_121(iVar12, Var7.f_3, uParam1);
				func_120(iVar12, Var9.f_3, uParam1);
				func_119(iVar12, Var7.f_4, uParam1);
				func_118(iVar12, Var9.f_4, uParam1);
				func_117(iVar12, Var7.f_2, uParam1);
				func_116(iVar12, Var9.f_2, uParam1);
			}
			func_115(iVar12, uVar4, uParam1);
			func_114(iVar12, uVar3, uParam1);
			if (func_15(iParam0))
			{
				func_113(iVar12, -1f, uParam1);
				func_112(iVar12, -1, uParam1);
			}
			else
			{
				func_113(iVar12, fVar2, uParam1);
				func_112(iVar12, iVar5, uParam1);
			}
			func_111(iVar12, uVar6, uParam1);
			func_110(iVar12, Var7.f_1, uParam1);
			func_109(iVar12, Var9.f_1, uParam1);
			func_108(iVar12, iParam0, uParam1);
			func_107(iParam2, uParam1);
			uParam1->f_1[iVar12] = 1;
			iVar12 = 9;
		}
		iVar12++;
	}
}

void func_107(int iParam0, var uParam1)
{
	uParam1->f_276 = iParam0;
}

void func_108(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_109(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_112(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_113(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_114(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_117(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_118(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_119(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_121(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_122(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_124(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 16;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 16;
		
		case joaat("WEAPON_APPISTOL"):
			return 36;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 16;
		
		case joaat("WEAPON_MICROSMG"):
			return 30;
		
		case joaat("WEAPON_SMG"):
			return 60;
		
		case joaat("WEAPON_SMG_MK2"):
			return 60;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 60;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 60;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 60;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 60;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 60;
		
		case joaat("WEAPON_MG"):
			return 100;
		
		case joaat("WEAPON_COMBATMG"):
			return 200;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 200;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 32;
		
		case joaat("WEAPON_PISTOL50"):
			return 12;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 60;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 12;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 60;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 60;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 36;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 14;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 16;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 12;
		
		case joaat("WEAPON_COMBATPDW"):
			return 60;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 60;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 20;
		
		case joaat("WEAPON_MINISMG"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return 1;
			break;
		
		case -507117574:
			return 1;
			break;
		
		case 1048471894:
			return 1;
			break;
		
		case 1824470811:
			return 1;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_GUSENBERG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MINISMG_CLIP_02"):
			return 1;
			break;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SMG"):
			return 100;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 100;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 100;
		
		case joaat("WEAPON_SMG_MK2"):
			return 100;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 100;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 100;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 100;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 30;
		
		case joaat("WEAPON_COMBATPDW"):
			return 100;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 100;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
			return 1;
			break;
	}
	return 0;
}

float func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_PISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(250, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(251, iParam1, 0)));
		
		case joaat("WEAPON_COMBATPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(260, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(261, iParam1, 0)));
		
		case joaat("WEAPON_APPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(280, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(281, iParam1, 0)));
		
		case joaat("WEAPON_MICROSMG"):
			return (SYSTEM::TO_FLOAT(func_34(290, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(291, iParam1, 0)));
		
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SMG_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(300, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(301, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(329, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(330, iParam1, 0)));
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return (SYSTEM::TO_FLOAT(func_34(338, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(339, iParam1, 0)));
		
		case joaat("WEAPON_MG"):
			return (SYSTEM::TO_FLOAT(func_34(347, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(348, iParam1, 0)));
		
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(356, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(357, iParam1, 0)));
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(374, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(375, iParam1, 0)));
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(383, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(384, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(402, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(403, iParam1, 0)));
		
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(421, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(422, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_34(441, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(442, iParam1, 0)));
		
		case joaat("WEAPON_RPG"):
			return (SYSTEM::TO_FLOAT(func_34(448, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(449, iParam1, 0)));
		
		case joaat("WEAPON_MINIGUN"):
			return (SYSTEM::TO_FLOAT(func_34(455, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(456, iParam1, 0)));
		
		case joaat("WEAPON_GRENADE"):
			return (SYSTEM::TO_FLOAT(func_34(464, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(465, iParam1, 0)));
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return (SYSTEM::TO_FLOAT(func_34(472, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(473, iParam1, 0)));
		
		case joaat("WEAPON_STICKYBOMB"):
			return (SYSTEM::TO_FLOAT(func_34(481, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(482, iParam1, 0)));
		
		case joaat("WEAPON_MOLOTOV"):
			return (SYSTEM::TO_FLOAT(func_34(489, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(490, iParam1, 0)));
		
		case joaat("WEAPON_STUNGUN"):
			return (SYSTEM::TO_FLOAT(func_34(411, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(412, iParam1, 0)));
		
		case joaat("WEAPON_KNIFE"):
			return (SYSTEM::TO_FLOAT(func_34(193, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(195, iParam1, 0)));
		
		case joaat("WEAPON_NIGHTSTICK"):
			return (SYSTEM::TO_FLOAT(func_34(201, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(203, iParam1, 0)));
		
		case joaat("WEAPON_HAMMER"):
			return (SYSTEM::TO_FLOAT(func_34(229, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(231, iParam1, 0)));
		
		case joaat("WEAPON_BAT"):
			return (SYSTEM::TO_FLOAT(func_34(236, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(238, iParam1, 0)));
		
		case joaat("WEAPON_CROWBAR"):
			return (SYSTEM::TO_FLOAT(func_34(208, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(210, iParam1, 0)));
		
		case joaat("WEAPON_GOLFCLUB"):
			return (SYSTEM::TO_FLOAT(func_34(243, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(245, iParam1, 0)));
		
		case joaat("WEAPON_PISTOL50"):
			return (SYSTEM::TO_FLOAT(func_34(270, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(271, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTSMG"):
			return (SYSTEM::TO_FLOAT(func_34(310, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(311, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(393, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(394, iParam1, 0)));
		
		case -572349828:
			return (SYSTEM::TO_FLOAT(func_34(365, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(366, iParam1, 0)));
		
		case 392730790:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case -947031628:
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		
		case -1887867191:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case joaat("WEAPON_BOTTLE"):
			return (SYSTEM::TO_FLOAT(func_34(1729, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1730, iParam1, 0)));
		
		case joaat("WEAPON_SNSPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(1739, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1740, iParam1, 0)));
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return (SYSTEM::TO_FLOAT(func_34(8427, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8428, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return (SYSTEM::TO_FLOAT(func_34(8437, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8438, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(8417, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8418, iParam1, 0)));
		
		case joaat("WEAPON_DAGGER"):
			return (SYSTEM::TO_FLOAT(func_34(8720, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8721, iParam1, 0)));
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(8730, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8731, iParam1, 0)));
		
		case joaat("WEAPON_GUSENBERG"):
			return (SYSTEM::TO_FLOAT(func_34(8447, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8448, iParam1, 0)));
		
		case joaat("WEAPON_MUSKET"):
			return (SYSTEM::TO_FLOAT(func_34(8750, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8751, iParam1, 0)));
		
		case joaat("WEAPON_FIREWORK"):
			return (SYSTEM::TO_FLOAT(func_34(8740, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8741, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(8828, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8829, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return (SYSTEM::TO_FLOAT(func_34(8838, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8839, iParam1, 0)));
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_34(8864, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8865, iParam1, 0)));
		
		case joaat("WEAPON_PROXMINE"):
			return (SYSTEM::TO_FLOAT(func_34(8856, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8857, iParam1, 0)));
		
		case joaat("WEAPON_COMBATPDW"):
			return (SYSTEM::TO_FLOAT(func_34(8872, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8873, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(8889, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8890, iParam1, 0)));
		
		case joaat("WEAPON_KNUCKLE"):
			return (SYSTEM::TO_FLOAT(func_34(8882, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8883, iParam1, 0)));
		
		case joaat("WEAPON_MACHETE"):
			return (SYSTEM::TO_FLOAT(func_34(8899, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8900, iParam1, 0)));
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(8907, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8908, iParam1, 0)));
		
		case joaat("WEAPON_FLASHLIGHT"):
			return (SYSTEM::TO_FLOAT(func_34(8945, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8946, iParam1, 0)));
		
		case joaat("WEAPON_SWITCHBLADE"):
			return (SYSTEM::TO_FLOAT(func_34(8973, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8974, iParam1, 0)));
		
		case joaat("WEAPON_REVOLVER"):
			return (SYSTEM::TO_FLOAT(func_34(8963, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8964, iParam1, 0)));
		
		case joaat("WEAPON_DBSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(8935, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8936, iParam1, 0)));
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return (SYSTEM::TO_FLOAT(func_34(8925, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8926, iParam1, 0)));
		
		case joaat("WEAPON_HATCHET"):
			return (SYSTEM::TO_FLOAT(func_34(8848, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8849, iParam1, 0)));
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(9014, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9015, iParam1, 0)));
		
		case joaat("WEAPON_BATTLEAXE"):
			return (SYSTEM::TO_FLOAT(func_34(9024, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9025, iParam1, 0)));
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_34(9030, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9031, iParam1, 0)));
		
		case joaat("WEAPON_MINISMG"):
			return (SYSTEM::TO_FLOAT(func_34(9040, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9041, iParam1, 0)));
		
		case joaat("WEAPON_PIPEBOMB"):
			return (SYSTEM::TO_FLOAT(func_34(9050, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9051, iParam1, 0)));
		
		case joaat("WEAPON_POOLCUE"):
			return (SYSTEM::TO_FLOAT(func_34(9058, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9059, iParam1, 0)));
		
		case joaat("WEAPON_WRENCH"):
			return (SYSTEM::TO_FLOAT(func_34(222, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(224, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(9522, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9523, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(9542, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9543, iParam1, 0)));
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(9532, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9533, iParam1, 0)));
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(9552, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9553, iParam1, 0)));
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(9572, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9573, iParam1, 0)));
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(9582, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9583, iParam1, 0)));
		
		case joaat("WEAPON_DOUBLEACTION"):
			return (SYSTEM::TO_FLOAT(func_34(9562, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9563, iParam1, 0)));
		
		case joaat("WEAPON_STONE_HATCHET"):
			return (SYSTEM::TO_FLOAT(func_34(9785, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9786, iParam1, 0)));
		
		case joaat("WEAPON_RAYPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(9942, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9943, iParam1, 0)));
		
		case joaat("WEAPON_RAYCARBINE"):
			return (SYSTEM::TO_FLOAT(func_34(9952, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9953, iParam1, 0)));
		
		case joaat("WEAPON_RAYMINIGUN"):
			return (SYSTEM::TO_FLOAT(func_34(9962, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9963, iParam1, 0)));
		
		default:
	}
	return 0f;
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_34(254, iParam1, 0);
		
		case joaat("WEAPON_COMBATPISTOL"):
			return func_34(264, iParam1, 0);
		
		case joaat("WEAPON_APPISTOL"):
			return func_34(284, iParam1, 0);
		
		case joaat("WEAPON_MICROSMG"):
			return func_34(294, iParam1, 0);
		
		case joaat("WEAPON_SMG"):
			return func_34(304, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_34(324, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE"):
			return func_34(333, iParam1, 0);
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_34(342, iParam1, 0);
		
		case joaat("WEAPON_MG"):
			return func_34(351, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG"):
			return func_34(360, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_34(378, iParam1, 0);
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_34(387, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_34(406, iParam1, 0);
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_34(425, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_34(434, iParam1, 0);
		
		case joaat("WEAPON_MINIGUN"):
			return func_34(459, iParam1, 0);
		
		case joaat("WEAPON_PISTOL50"):
			return func_34(274, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSMG"):
			return func_34(314, iParam1, 0);
		
		case -947031628:
			return func_34(434, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_34(397, iParam1, 0);
		
		case -572349828:
			return func_34(369, iParam1, 0);
		
		case 392730790:
			return func_34(324, iParam1, 0);
		
		case -1887867191:
			return func_34(324, iParam1, 0);
		
		case -837150131:
			return func_34(324, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL"):
			return func_34(1743, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_34(8431, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_34(8441, iParam1, 0);
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_34(8421, iParam1, 0);
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_34(8734, iParam1, 0);
		
		case joaat("WEAPON_GUSENBERG"):
			return func_34(8451, iParam1, 0);
		
		case joaat("WEAPON_MUSKET"):
			return func_34(8754, iParam1, 0);
		
		case joaat("WEAPON_FIREWORK"):
			return func_34(8744, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_34(8832, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_34(8842, iParam1, 0);
		
		case joaat("WEAPON_COMBATPDW"):
			return func_34(8876, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_34(8893, iParam1, 0);
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_34(8911, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER"):
			return func_34(8967, iParam1, 0);
		
		case joaat("WEAPON_DBSHOTGUN"):
			return func_34(8939, iParam1, 0);
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_34(8929, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(9018, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_34(9044, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(254, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_34(304, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(434, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(360, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(324, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(333, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(9526, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(9546, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(9536, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(9556, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(9576, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(9586, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(9566, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(9946, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(9956, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(9966, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_34(251, iParam1, 0);
		
		case joaat("WEAPON_COMBATPISTOL"):
			return func_34(261, iParam1, 0);
		
		case joaat("WEAPON_APPISTOL"):
			return func_34(281, iParam1, 0);
		
		case joaat("WEAPON_MICROSMG"):
			return func_34(291, iParam1, 0);
		
		case joaat("WEAPON_SMG"):
			return func_34(301, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_34(321, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE"):
			return func_34(330, iParam1, 0);
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_34(339, iParam1, 0);
		
		case joaat("WEAPON_MG"):
			return func_34(348, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG"):
			return func_34(357, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_34(375, iParam1, 0);
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_34(384, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_34(403, iParam1, 0);
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_34(422, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_34(431, iParam1, 0);
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return func_34(442, iParam1, 0);
		
		case joaat("WEAPON_RPG"):
			return func_34(449, iParam1, 0);
		
		case joaat("WEAPON_MINIGUN"):
			return func_34(456, iParam1, 0);
		
		case joaat("WEAPON_GRENADE"):
			return func_34(465, iParam1, 0);
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return func_34(473, iParam1, 0);
		
		case joaat("WEAPON_STICKYBOMB"):
			return func_34(482, iParam1, 0);
		
		case joaat("WEAPON_MOLOTOV"):
			return func_34(490, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN"):
			return func_34(412, iParam1, 0);
		
		case joaat("WEAPON_KNIFE"):
			return func_34(195, iParam1, 0);
		
		case joaat("WEAPON_NIGHTSTICK"):
			return func_34(203, iParam1, 0);
		
		case joaat("WEAPON_HAMMER"):
			return func_34(231, iParam1, 0);
		
		case joaat("WEAPON_BAT"):
			return func_34(238, iParam1, 0);
		
		case joaat("WEAPON_CROWBAR"):
			return func_34(210, iParam1, 0);
		
		case joaat("WEAPON_GOLFCLUB"):
			return func_34(245, iParam1, 0);
		
		case joaat("WEAPON_PISTOL50"):
			return func_34(271, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSMG"):
			return func_34(311, iParam1, 0);
		
		case -947031628:
			return func_34(431, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_34(394, iParam1, 0);
		
		case -572349828:
			return func_34(366, iParam1, 0);
		
		case 392730790:
			return func_34(321, iParam1, 0);
		
		case -1887867191:
			return func_34(321, iParam1, 0);
		
		case -837150131:
			return func_34(321, iParam1, 0);
		
		case joaat("WEAPON_BOTTLE"):
			return func_34(1730, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL"):
			return func_34(1740, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_34(8428, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_34(8438, iParam1, 0);
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_34(8418, iParam1, 0);
		
		case joaat("WEAPON_DAGGER"):
			return func_34(8721, iParam1, 0);
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_34(8731, iParam1, 0);
		
		case joaat("WEAPON_GUSENBERG"):
			return func_34(8448, iParam1, 0);
		
		case joaat("WEAPON_MUSKET"):
			return func_34(8751, iParam1, 0);
		
		case joaat("WEAPON_FIREWORK"):
			return func_34(8741, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_34(8829, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_34(8839, iParam1, 0);
		
		case joaat("WEAPON_PROXMINE"):
			return func_34(8857, iParam1, 0);
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return func_34(8865, iParam1, 0);
		
		case joaat("WEAPON_COMBATPDW"):
			return func_34(8873, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_34(8890, iParam1, 0);
		
		case joaat("WEAPON_KNUCKLE"):
			return func_34(8883, iParam1, 0);
		
		case joaat("WEAPON_MACHETE"):
			return func_34(8900, iParam1, 0);
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_34(8908, iParam1, 0);
		
		case joaat("WEAPON_FLASHLIGHT"):
			return func_34(8946, iParam1, 0);
		
		case joaat("WEAPON_SWITCHBLADE"):
			return func_34(8974, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER"):
			return func_34(8964, iParam1, 0);
		
		case joaat("WEAPON_DBSHOTGUN"):
			return func_34(8936, iParam1, 0);
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_34(8926, iParam1, 0);
		
		case joaat("WEAPON_HATCHET"):
			return func_34(8849, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(9015, iParam1, 0);
		
		case joaat("WEAPON_BATTLEAXE"):
			return func_34(9025, iParam1, 0);
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_34(9031, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_34(9041, iParam1, 0);
		
		case joaat("WEAPON_PIPEBOMB"):
			return func_34(9051, iParam1, 0);
		
		case joaat("WEAPON_POOLCUE"):
			return func_34(9059, iParam1, 0);
		
		case joaat("WEAPON_WRENCH"):
			return func_34(224, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(251, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_34(301, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(431, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(357, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(321, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(330, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(9523, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(9543, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(9533, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(9553, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(9573, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(9583, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(9563, iParam1, 0);
		
		case joaat("WEAPON_STONE_HATCHET"):
			return func_34(9786, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(9943, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(9953, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(9963, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_34(250, iParam1, 0);
		
		case joaat("WEAPON_COMBATPISTOL"):
			return func_34(260, iParam1, 0);
		
		case joaat("WEAPON_APPISTOL"):
			return func_34(280, iParam1, 0);
		
		case joaat("WEAPON_MICROSMG"):
			return func_34(290, iParam1, 0);
		
		case joaat("WEAPON_SMG"):
			return func_34(300, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_34(320, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE"):
			return func_34(329, iParam1, 0);
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_34(338, iParam1, 0);
		
		case joaat("WEAPON_MG"):
			return func_34(347, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG"):
			return func_34(356, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_34(374, iParam1, 0);
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_34(383, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_34(402, iParam1, 0);
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_34(421, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_34(430, iParam1, 0);
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return func_34(441, iParam1, 0);
		
		case joaat("WEAPON_RPG"):
			return func_34(448, iParam1, 0);
		
		case joaat("WEAPON_MINIGUN"):
			return func_34(455, iParam1, 0);
		
		case joaat("WEAPON_GRENADE"):
			return func_34(464, iParam1, 0);
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return func_34(472, iParam1, 0);
		
		case joaat("WEAPON_STICKYBOMB"):
			return func_34(481, iParam1, 0);
		
		case joaat("WEAPON_MOLOTOV"):
			return func_34(489, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN"):
			return func_34(411, iParam1, 0);
		
		case joaat("WEAPON_KNIFE"):
			return func_34(193, iParam1, 0);
		
		case joaat("WEAPON_NIGHTSTICK"):
			return func_34(201, iParam1, 0);
		
		case joaat("WEAPON_HAMMER"):
			return func_34(229, iParam1, 0);
		
		case joaat("WEAPON_BAT"):
			return func_34(236, iParam1, 0);
		
		case joaat("WEAPON_CROWBAR"):
			return func_34(208, iParam1, 0);
		
		case joaat("WEAPON_GOLFCLUB"):
			return func_34(243, iParam1, 0);
		
		case joaat("WEAPON_PISTOL50"):
			return func_34(270, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSMG"):
			return func_34(310, iParam1, 0);
		
		case -947031628:
			return func_34(430, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_34(393, iParam1, 0);
		
		case -572349828:
			return func_34(365, iParam1, 0);
		
		case 392730790:
			return func_34(320, iParam1, 0);
		
		case -1887867191:
			return func_34(320, iParam1, 0);
		
		case -837150131:
			return func_34(320, iParam1, 0);
		
		case joaat("WEAPON_BOTTLE"):
			return func_34(1729, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL"):
			return func_34(1739, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_34(8427, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_34(8437, iParam1, 0);
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_34(8417, iParam1, 0);
		
		case joaat("WEAPON_DAGGER"):
			return func_34(8720, iParam1, 0);
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_34(8730, iParam1, 0);
		
		case joaat("WEAPON_GUSENBERG"):
			return func_34(8447, iParam1, 0);
		
		case joaat("WEAPON_MUSKET"):
			return func_34(8750, iParam1, 0);
		
		case joaat("WEAPON_FIREWORK"):
			return func_34(8740, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_34(8828, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_34(8838, iParam1, 0);
		
		case joaat("WEAPON_PROXMINE"):
			return func_34(8856, iParam1, 0);
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return func_34(8864, iParam1, 0);
		
		case joaat("WEAPON_COMBATPDW"):
			return func_34(8872, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_34(8889, iParam1, 0);
		
		case joaat("WEAPON_KNUCKLE"):
			return func_34(8882, iParam1, 0);
		
		case joaat("WEAPON_MACHETE"):
			return func_34(8899, iParam1, 0);
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_34(8907, iParam1, 0);
		
		case joaat("WEAPON_FLASHLIGHT"):
			return func_34(8945, iParam1, 0);
		
		case joaat("WEAPON_SWITCHBLADE"):
			return func_34(8973, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER"):
			return func_34(8963, iParam1, 0);
		
		case joaat("WEAPON_DBSHOTGUN"):
			return func_34(8935, iParam1, 0);
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_34(8925, iParam1, 0);
		
		case joaat("WEAPON_HATCHET"):
			return func_34(8848, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(9014, iParam1, 0);
		
		case joaat("WEAPON_BATTLEAXE"):
			return func_34(9024, iParam1, 0);
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_34(9030, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_34(9040, iParam1, 0);
		
		case joaat("WEAPON_PIPEBOMB"):
			return func_34(9050, iParam1, 0);
		
		case joaat("WEAPON_POOLCUE"):
			return func_34(9058, iParam1, 0);
		
		case joaat("WEAPON_WRENCH"):
			return func_34(222, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(250, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_34(300, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(430, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(356, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(320, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(329, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(9522, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(9542, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(9532, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(9552, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(9572, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(9582, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(9562, iParam1, 0);
		
		case joaat("WEAPON_STONE_HATCHET"):
			return func_34(9785, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(9942, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(9952, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(9962, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			iVar0 = 262;
			iVar1 = 263;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			iVar0 = 282;
			iVar1 = 283;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			iVar0 = 292;
			iVar1 = 293;
			break;
		
		case joaat("WEAPON_SMG"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = 322;
			iVar1 = 323;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = 331;
			iVar1 = 332;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			iVar0 = 8429;
			iVar1 = 8430;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			iVar0 = 1741;
			iVar1 = 1742;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar0 = 340;
			iVar1 = 341;
			break;
		
		case joaat("WEAPON_MG"):
			iVar0 = 349;
			iVar1 = 350;
			break;
		
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = 358;
			iVar1 = 359;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar0 = 385;
			iVar1 = 386;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar0 = 376;
			iVar1 = 377;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar0 = 404;
			iVar1 = 405;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			iVar0 = 423;
			iVar1 = 424;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = 432;
			iVar1 = 433;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			iVar0 = 443;
			iVar1 = 441;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			iVar0 = 457;
			iVar1 = 458;
			break;
		
		case joaat("WEAPON_RPG"):
			iVar0 = 450;
			iVar1 = 448;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			iVar0 = 395;
			iVar1 = 396;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			iVar0 = 312;
			iVar1 = 313;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			iVar0 = 272;
			iVar1 = 273;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			iVar0 = 8419;
			iVar1 = 8420;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			iVar0 = 8439;
			iVar1 = 8440;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			iVar0 = 8449;
			iVar1 = 8450;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			iVar0 = 8732;
			iVar1 = 8733;
			break;
		
		case joaat("WEAPON_MUSKET"):
			iVar0 = 8752;
			iVar1 = 8753;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			iVar0 = 8742;
			iVar1 = 8743;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			iVar0 = 8485;
			iVar1 = 8486;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			iVar0 = 8830;
			iVar1 = 8831;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			iVar0 = 8840;
			iVar1 = 8841;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			iVar0 = 8866;
			iVar1 = 8864;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			iVar0 = 8858;
			iVar1 = 8856;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			iVar0 = 8874;
			iVar1 = 8875;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			iVar0 = 8891;
			iVar1 = 8892;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			iVar0 = 8909;
			iVar1 = 8910;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			iVar0 = 8927;
			iVar1 = 8928;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			iVar0 = 8937;
			iVar1 = 8938;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			iVar0 = 8965;
			iVar1 = 8966;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			iVar0 = 9016;
			iVar1 = 9017;
			break;
		
		case joaat("WEAPON_MINISMG"):
			iVar0 = 9042;
			iVar1 = 9043;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			iVar0 = 9032;
			iVar1 = 9030;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			iVar0 = 9564;
			iVar1 = 9565;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar1 = 9522;
			iVar0 = 9524;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar1 = 9542;
			iVar0 = 9544;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar1 = 9532;
			iVar0 = 9534;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar1 = 9552;
			iVar0 = 9554;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar1 = 9572;
			iVar0 = 9574;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar1 = 9582;
			iVar0 = 9584;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			iVar0 = 9954;
			iVar1 = 9955;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			iVar0 = 9964;
			iVar1 = 9965;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			iVar0 = 9944;
			iVar1 = 9945;
			break;
	}
	if ((func_135(iParam0) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || func_134(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(func_34(iVar0, -1, 0));
		fVar3 = SYSTEM::TO_FLOAT(func_34(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
			return 1;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
			return 1;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
	}
	return 0;
}

char* func_136(int iParam0, bool bParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	
	if (func_138(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_MARKSMANRIFLE"):
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case joaat("WEAPON_COMPACTRIFLE"):
				return "WTDE2_CMPRIFLE";
				break;
			
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("WEAPON_UNARMED"):
			return "";
			break;
		
		case joaat("WEAPON_PISTOL"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("WEAPON_SMG"):
			return "WTD_SMG";
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("WEAPON_MG"):
			return "WTD_MG";
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTD_GL";
			break;
		
		case joaat("WEAPON_RPG"):
			return "WTD_RPG";
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "WTD_GNADE";
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return "WTD_STUN";
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return "WTD_PETROL";
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return "WTD_DIGI";
			break;
		
		case joaat("WEAPON_ELECTRIC_FENCE"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("VEHICLE_WEAPON_TANK"):
			return "";
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("OBJECT"):
			return "";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "WTD_PARA";
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("WEAPON_KNIFE"):
			return "WTD_KNIFE";
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("WEAPON_HAMMER"):
			return "WTD_HAMMER";
			break;
		
		case joaat("WEAPON_BAT"):
			return "WTD_BAT";
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("WEAPON_HATCHET"):
			return "WTD_DLC_HATCHET";
			break;
		
		case joaat("WEAPON_RAMMED_BY_CAR"):
			return "";
			break;
		
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			return "";
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("WEAPON_DAGGER"):
			return "WTD_DAGGER";
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("WEAPON_MACHETE"):
			return "WTD_MACHETE";
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return "WTD_REVOLVER";
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (func_137(joaat("MPPLY_HEADSHOTCHLENGECOMPLETED")) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (NETWORK::_0x67A5589628E0CFF6())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE_MK2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var0) != -1)
			{
				return func_27(&(Var0.f_15));
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var1) != -1)
			{
				return func_27(&(Var1.f_15));
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPRIFLE_MK2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var2) != -1)
			{
				return func_27(&(Var2.f_15));
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return "WTD_RAYPISTOL";
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return "WTD_RAYCARBINE";
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return "WTD_RAYMINIGUN";
			break;
		
		default:
			if (func_28(iParam0, &Var3) != -1)
			{
				return func_27(&(Var3.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_137(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_139())
		{
			if ((iParam0 == joaat("WEAPON_MARKSMANRIFLE") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_139()
{
	return (func_141() || func_140());
}

int func_140()
{
	switch (NETWORK::_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_141()
{
	switch (NETWORK::_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_142()
{
	return Global_1312745;
}

bool func_143(int iParam0, int iParam1)
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

void func_144()
{
	func_145(0, -1, -1, 0, 0);
}

void func_145(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_20("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_146(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_148();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_96)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_96 + 1;
	func_145(0, iVar2, iVar3, "HUD_PAGE", 0);
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_6(iParam0, &(Global_1371947.f_1060), 1))
	{
		if (!MISC::IS_BIT_SET(Global_1371947.f_1049[iVar1], iVar2))
		{
			MISC::SET_BIT(&(Global_1371947.f_1049[iVar1]), iVar2);
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1371947.f_1049[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(&(Global_1371947.f_1049[iVar1]), iVar2);
	}
	return 0;
}

void func_148()
{
	iLocal_97 = 0;
	iLocal_96 = 3;
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")))
	{
		iLocal_98[10] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")))
	{
		iLocal_98[0] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")))
	{
		iLocal_98[1] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[1] = -1;
	}
	if (func_105(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")))
		{
			iLocal_98[2] = ((iLocal_97 / 9) + iLocal_96);
			iLocal_97++;
		}
		else
		{
			iLocal_98[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")))
	{
		iLocal_98[3] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")))
	{
		iLocal_98[4] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")))
	{
		iLocal_98[11] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")))
	{
		iLocal_98[7] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")))
	{
		iLocal_98[5] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")))
	{
		iLocal_98[6] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")))
	{
		iLocal_98[8] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")))
	{
		iLocal_98[9] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")))
	{
		iLocal_98[14] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")))
	{
		iLocal_98[13] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")))
	{
		iLocal_98[15] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")))
	{
		iLocal_98[16] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[16] = -1;
	}
	if (func_104() || Global_262145.f_19626)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")))
		{
			iLocal_98[22] = ((iLocal_97 / 9) + iLocal_96);
			iLocal_97++;
		}
		else
		{
			iLocal_98[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")))
	{
		iLocal_98[18] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")))
	{
		iLocal_98[17] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")))
	{
		iLocal_98[12] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")))
	{
		iLocal_98[19] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")))
	{
		iLocal_98[20] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")))
	{
		iLocal_98[21] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[21] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")))
	{
		iLocal_98[23] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[23] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")))
	{
		iLocal_98[24] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[24] = -1;
	}
	if (Global_262145.f_11468 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT")))
	{
		iLocal_98[25] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[25] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")))
	{
		iLocal_98[26] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[26] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")))
	{
		iLocal_98[27] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[27] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")))
	{
		iLocal_98[28] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[28] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")))
	{
		iLocal_98[29] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[29] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")))
	{
		iLocal_98[30] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[30] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")))
	{
		iLocal_98[31] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[31] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")))
	{
		iLocal_98[32] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[32] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")))
	{
		iLocal_98[33] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[33] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")))
	{
		iLocal_98[34] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[34] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")))
	{
		iLocal_98[35] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[35] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")))
	{
		iLocal_98[36] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[36] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")))
	{
		iLocal_98[37] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[37] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")))
	{
		iLocal_98[38] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[38] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")))
	{
		iLocal_98[39] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[39] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")))
	{
		iLocal_98[40] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[40] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")))
	{
		iLocal_98[41] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[41] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")))
	{
		iLocal_98[42] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[42] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")))
	{
		iLocal_98[43] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[43] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")))
	{
		iLocal_98[44] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[44] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")))
	{
		iLocal_98[45] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[45] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")))
	{
		iLocal_98[46] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[46] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")))
	{
		iLocal_98[47] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[47] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")))
	{
		iLocal_98[48] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[48] = -1;
	}
	if ((Global_262145.f_22802 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION"))) && (func_103() || Global_1688018))
	{
		iLocal_98[49] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[49] = -1;
	}
	if ((Global_262145.f_23501 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET"))) && func_99())
	{
		iLocal_98[50] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[50] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && Global_262145.f_25731)
	{
		iLocal_98[51] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[51] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && Global_262145.f_25730)
	{
		iLocal_98[52] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[52] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_24740))
	{
		iLocal_98[53] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[53] = -1;
	}
	if (iLocal_97 == 0)
	{
		iLocal_96 = 2;
		iLocal_97 = 9;
	}
	else
	{
		iLocal_96 = (iLocal_96 + (iLocal_97 / 9));
		iLocal_97 = (iLocal_97 - (9 * (iLocal_97 / 9)));
		if (iLocal_97 == 0)
		{
			iLocal_96 = (iLocal_96 - 1);
			iLocal_97 = 9;
		}
	}
}

void func_149(int iParam0, var uParam1)
{
	uParam1->f_277 = iParam0;
}

void func_150()
{
	func_148();
	func_151();
	func_145(0, 1, iLocal_96 + 1, "HUD_PAGE", 0);
}

void func_151()
{
	func_152(1);
}

void func_152(bool bParam0)
{
	if (bParam0)
	{
		func_153(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_153(0, 2, 0, 2, 1, 0);
	}
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_154(var uParam0)
{
	uParam0->f_284 = 1;
}

void func_155(var uParam0)
{
	uParam0->f_283 = 1;
}

void func_156(var uParam0)
{
	func_157(uParam0);
	uParam0->f_281 = 1;
}

void func_157(var uParam0)
{
	*uParam0 = { Global_1370133 };
}

int func_158()
{
	return Global_25765;
}

