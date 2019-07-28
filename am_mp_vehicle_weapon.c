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
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
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
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 32;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
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
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	struct<150> Local_149 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	struct<21> Local_162 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_201(ScriptParam_162);
	}
	else
	{
		func_192(0);
	}
	while (true)
	{
		func_191();
		if (func_180())
		{
			func_192(0);
		}
		if (func_177())
		{
			func_192(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_174();
	if (func_173(0))
	{
		func_161();
	}
	else if (func_173(1))
	{
		if (func_160())
		{
			func_137();
		}
		else
		{
			func_129();
		}
	}
	else if (func_173(2))
	{
		if (func_112())
		{
			func_111(3);
		}
		func_102();
		if (func_98())
		{
			return;
		}
		func_89();
		func_88();
		func_59();
		func_48();
		func_46();
		func_3();
	}
	else if (func_173(3))
	{
		func_192(1);
	}
}

void func_3()
{
	func_45();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_5(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_6()
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_149.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_149.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		if (!MISC::IS_BIT_SET(Local_149.f_5, 6))
		{
			MISC::SET_BIT(&(Local_149.f_5), 6);
			MISC::CLEAR_BIT(&(Local_149.f_5), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Local_149.f_5, 6))
	{
		MISC::CLEAR_BIT(&(Local_149.f_5), 6);
		MISC::CLEAR_BIT(&(Local_149.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(PLAYER::PLAYER_ID(), 0))
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
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), PAD::_0x80C2FD58D720C801(2, Global_17411.f_5039[iVar1], true), 64);
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
					func_9(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_9(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_8(&(Global_17411.f_4964[iVar1 /*4*/]));
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
				func_9(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_8(&(Global_4267964.f_16));
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

void func_8(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
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

int func_14()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_17(8, -1) && func_16() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_71850) || Global_17411.f_8352) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_16()
{
	return Global_1312802;
}

bool func_17(int iParam0, int iParam1)
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

int func_18(var uParam0, bool bParam1, int iParam2)
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

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_20(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::_0x80C2FD58D720C801(2, iParam0, true);
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
	Global_17411.f_5026[Global_17411.f_4769] = 359;
	Global_17411.f_5039[Global_17411.f_4769] = iParam0;
	Global_17411.f_4769++;
}

void func_21(int iParam0)
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
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_18(&iVar0, 1, iParam1))
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
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_23(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
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

void func_24()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	float fVar9;
	
	if (func_160())
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_149.f_62))
		{
			Local_149.f_62 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_149.f_8 > -1 || MISC::IS_BIT_SET(Local_149.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (CAM::DOES_CAM_EXIST(Local_149.f_61))
		{
			vVar0 = { CAM::GET_CAM_ROT(Local_149.f_61, 2) };
			func_32(SYSTEM::ROUND(-vVar0.z));
		}
		func_31(Local_149.f_33);
	}
	else if (CAM::DOES_CAM_EXIST(Local_149.f_61))
	{
		vVar1 = { CAM::GET_CAM_ROT(Local_149.f_61, 2) };
		fVar2 = vVar1.z;
		if (ENTITY::DOES_ENTITY_EXIST(func_30()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_30(), 0))
			{
				vVar8 = { ENTITY::GET_ENTITY_COORDS(func_30(), 1) };
				fVar4 = ENTITY::GET_ENTITY_HEADING(func_30());
			}
		}
		while (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		while (fVar2 > 360f)
		{
			fVar2 = (fVar2 - 360f);
		}
		while (fVar4 < 0f)
		{
			fVar4 = (fVar4 + 360f);
		}
		while (fVar4 > 360f)
		{
			fVar4 = (fVar4 - 360f);
		}
		fVar7 = fVar2;
		func_25(&fVar9);
		fVar5 = (fVar4 - fVar9);
		fVar6 = (fVar4 + fVar9);
		if (fVar7 < fVar5 && (fVar7 + 360f) <= fVar6)
		{
			fVar7 = (fVar7 + 360f);
		}
		if (fVar7 > fVar6 && (fVar7 - 360f) >= fVar5)
		{
			fVar7 = (fVar7 - 360f);
		}
		fVar3 = ((fVar7 - fVar5) / (fVar6 - fVar5));
		if (fVar3 == 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 == -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 < 0f && fVar3 >= -0.5f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 < 0f && fVar3 > -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 > 1.5f && fVar3 < 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 > 2f || fVar3 < -1f)
		{
			fVar3 = 0.5f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_ALT_FOV_HEADING");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(vVar8.z);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_CAM_LOGO");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_149.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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

int func_28(int iParam0, bool bParam1, bool bParam2)
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

int func_29()
{
	return -1;
}

int func_30()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1365159))
		{
			return Global_1365159;
		}
		if (Global_1589668 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1687946[Global_1589668]))
			{
				return Global_1687946[Global_1589668];
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	return -1;
}

void func_31(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_MISSILE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_32(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_33()
{
	if (Local_149.f_59 <= 60f && Local_149.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_149.f_59 <= 55f && Local_149.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_149.f_59 <= 50f && Local_149.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_149.f_59 <= 45f && Local_149.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_149.f_59 <= 40f && Local_149.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(bool bParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_37(char* sParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_38()
{
	if (func_160())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_43(0))
		{
			func_40(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

void func_40(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (Global_14725)
	{
		func_42(0, 0);
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
	if (!func_41())
	{
		Global_14553.f_1 = 3;
	}
}

int func_41()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)
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

bool func_44()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

void func_45()
{
	MISC::SET_BIT(&Global_2424, 4);
}

void func_46()
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	if (!func_160())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61)) && func_47(Local_149.f_84[iVar1])) && func_47(func_30()))
		{
			vVar6 = { CAM::GET_CAM_COORD(Local_149.f_61) };
			vVar7 = { ENTITY::GET_ENTITY_COORDS(Local_149.f_84[iVar1], 1) };
			switch (Local_149.f_10[iVar1])
			{
				case 0:
					Local_149.f_98[iVar1] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar6, vVar7, 511, 0, 7);
					if (Local_149.f_98[iVar1] != 0)
					{
						Local_149.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_149.f_98[iVar1], &iVar0, &vVar3, &uVar2, &iVar4);
					if (iVar5 == 2)
					{
						if (iVar0 == 0)
						{
							Local_149.f_17[iVar1] = 1;
							vVar3 = { 0f, 0f, 0f };
							if (MISC::IS_BIT_SET(Local_149.f_7, iVar1))
							{
								MISC::CLEAR_BIT(&(Local_149.f_7), iVar1);
							}
						}
						else
						{
							Local_149.f_17[iVar1] = 2;
							if (MISC::IS_BIT_SET(Local_149.f_7, iVar1))
							{
								MISC::CLEAR_BIT(&(Local_149.f_7), iVar1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar4))
							{
								if (Local_149.f_84[iVar1] == iVar4)
								{
									if (!MISC::IS_BIT_SET(Local_149.f_7, iVar1))
									{
										MISC::SET_BIT(&(Local_149.f_7), iVar1);
									}
								}
							}
							Local_149.f_98[iVar1] = 0;
							Local_149.f_10[iVar1] = 0;
						}
					}
					else if (iVar5 == 0)
					{
						Local_149.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (MISC::IS_BIT_SET(Local_149.f_7, iVar1))
		{
			MISC::CLEAR_BIT(&(Local_149.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_47(int iParam0)
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

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	
	if (!func_160())
	{
		return;
	}
	iVar0 = 208;
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		iVar0 = 237;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)) || MISC::IS_BIT_SET(Local_149.f_5, 5))
	{
		iVar1 = 250;
		iVar2 = func_58();
		if (Local_149.f_8 > -1)
		{
			if (!MISC::IS_BIT_SET(Local_149.f_5, 3))
			{
				if (!func_57(&(Local_149.f_115)))
				{
					func_56(&(Local_149.f_115), 0, 0);
					Local_149.f_31 = 0;
					MISC::SET_BIT(&(Local_149.f_5), 5);
				}
				else if (func_55(&(Local_149.f_115), 300, 0) || Local_149.f_31 == 0)
				{
					if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
					{
						Local_149.f_31 = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[Local_149.f_31]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_84[Local_149.f_31], 0))
					{
						iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_54());
						if (iVar3 != -1)
						{
							vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_30(), iVar3) + func_53(Local_149.f_31) };
							vVar5 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
							vVar6 = { (-SYSTEM::SIN(vVar5.z) * SYSTEM::COS(vVar5.x)), (SYSTEM::COS(vVar5.z) * SYSTEM::COS(vVar5.x)), SYSTEM::SIN(vVar5.x) };
							vVar7 = { 1f, 1f, 1f };
							vVar8 = { vVar4 + vVar6 * vVar7 };
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar4, vVar8, iVar1, 1, func_52(0), PLAYER::PLAYER_PED_ID(), 1, 1, -1f, iVar2, 0, 0, Local_149.f_84[Local_149.f_31], 1, 0, 1);
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", vVar4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_149.f_32++;
							func_51(&(Local_149.f_115), 0, 0);
						}
					}
					if (Local_149.f_32 == Local_149.f_8)
					{
						Local_149.f_31 = 0;
						Local_149.f_33 = 0;
						Local_149.f_32 = -1;
						MISC::SET_BIT(&(Local_149.f_5), 3);
						MISC::CLEAR_BIT(&(Local_149.f_5), 5);
						func_56(&(Local_149.f_119), 0, 0);
						func_50(&(Local_149.f_115));
					}
					Local_149.f_31++;
				}
			}
		}
		else if (!MISC::IS_BIT_SET(Local_149.f_5, 1))
		{
			if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
			{
				Local_149.f_31 = 0;
			}
			iVar9 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_54());
			if (iVar9 != -1)
			{
				vVar10 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_30(), iVar9) + func_53(Local_149.f_31) };
				vVar11 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
				vVar12 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
				vVar13 = { (-SYSTEM::SIN(vVar12.z) * SYSTEM::COS(vVar12.x)), (SYSTEM::COS(vVar12.z) * SYSTEM::COS(vVar12.x)), SYSTEM::SIN(vVar12.x) };
				vVar14 = { 10f, 10f, 10f };
				if (!func_49(Local_149.f_56))
				{
					vVar14.x = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_149.f_56, vVar11, false);
					vVar14.y = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_149.f_56, vVar11, false);
					vVar14.z = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_149.f_56, vVar11, false);
				}
				vVar15 = { vVar11 + vVar13 * vVar14 };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar10, vVar15, iVar1, 1, func_52(1), PLAYER::PLAYER_PED_ID(), 1, 1, -1f, iVar2, 0, 0, 0, 1, 0, 1);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", vVar10, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				MISC::SET_BIT(&(Local_149.f_5), 1);
				Local_149.f_33 = 0;
				func_56(&(Local_149.f_134), 0, 0);
				Local_149.f_31++;
			}
		}
	}
}

int func_49(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2)
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

int func_52(int iParam0)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (iParam0 == 0)
		{
			return joaat("VEHICLE_WEAPON_HACKER_MISSILE_HOMING");
		}
		else
		{
			return joaat("VEHICLE_WEAPON_HACKER_MISSILE");
		}
	}
	return 0;
}

Vector3 func_53(int iParam0)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_54()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_55(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_56(uParam0, bParam2, 0);
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

void func_56(var uParam0, bool bParam1, bool bParam2)
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

bool func_57(var uParam0)
{
	return uParam0->f_1;
}

int func_58()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return Global_1365159;
	}
	return -1;
}

void func_59()
{
	int iVar0;
	int iVar1;
	
	if (!func_160())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_149.f_5, 3))
	{
		if (func_57(&(Local_149.f_119)))
		{
			if (!func_55(&(Local_149.f_119), 5000, 0))
			{
				iVar0 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_149.f_119)));
				Local_149.f_33 = (iVar0 / 5000);
				func_87();
				return;
			}
			else
			{
				func_50(&(Local_149.f_119));
				MISC::CLEAR_BIT(&(Local_149.f_5), 3);
				Local_149.f_32 = -1;
				Local_149.f_33 = 100;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_149.f_5, 1))
	{
		if (func_57(&(Local_149.f_134)))
		{
			if (!func_55(&(Local_149.f_134), 1500, 0))
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_149.f_134)));
				Local_149.f_33 = (iVar1 / 1500);
				func_87();
				return;
			}
			else
			{
				func_50(&(Local_149.f_134));
				MISC::CLEAR_BIT(&(Local_149.f_5), 1);
				Local_149.f_33 = 100;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_149.f_5, 1) && !MISC::IS_BIT_SET(Local_149.f_5, 5))
	{
		switch (Local_149.f_111)
		{
			case 0:
				func_84();
				break;
			
			case 1:
				func_74();
				break;
		}
		func_67();
	}
	func_61();
	func_60();
}

void func_60()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	
	if ((CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61)) && func_47(func_30()))
	{
		vVar4 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
		vVar5 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
		vVar6 = { (-SYSTEM::SIN(vVar5.z) * SYSTEM::COS(vVar5.x)), (SYSTEM::COS(vVar5.z) * SYSTEM::COS(vVar5.x)), SYSTEM::SIN(vVar5.x) };
		vVar7 = { 300f, 300f, 300f };
		vVar8 = { vVar4 + vVar6 * vVar7 };
		vVar9 = { vVar4 + vVar6 * Vector(1f, 1f, 1f) };
		switch (Local_149.f_27)
		{
			case 0:
				Local_149.f_106 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar9, vVar8, 511, func_30(), 7);
				if (Local_149.f_106 != 0)
				{
					Local_149.f_27 = 1;
				}
				break;
			
			case 1:
				iVar3 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_149.f_106, &iVar0, &(Local_149.f_56), &uVar1, &uVar2);
				if (iVar3 == 2)
				{
					if (iVar0 == 0)
					{
						Local_149.f_26 = 1;
						Local_149.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_149.f_26 = 2;
						Local_149.f_27 = 0;
					}
				}
				else if (iVar3 == 0)
				{
					Local_149.f_27 = 0;
				}
				break;
			}
	}
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_62(Local_149.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_62(int iParam0, bool bParam1, int iParam2)
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
	
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		if (Local_149.f_8 > -1)
		{
			if (func_47(iParam0))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_66(iVar8, -1))
								{
									VEHICLE::_0x407DC5E97DB1A4D3(PED::GET_VEHICLE_PED_IS_IN(iVar7, 0), 2);
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
					{
						iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), -1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							if (PED::IS_PED_A_PLAYER(iVar9))
							{
								iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									VEHICLE::_0x407DC5E97DB1A4D3(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 2);
								}
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_149.f_48, iParam2))
					{
						if ((AUDIO::HAS_SOUND_FINISHED(Local_149.f_34[iParam2]) && Local_149.f_34[iParam2] == -1) && !func_65())
						{
							Local_149.f_34[iParam2] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_56(&(Local_149.f_136[iParam2 /*2*/]), 0, 0);
							MISC::SET_BIT(&(Local_149.f_48), iParam2);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_149.f_48, iParam2 + 6))
					{
						if (func_57(&(Local_149.f_136[iParam2 /*2*/])))
						{
							if (func_55(&(Local_149.f_136[iParam2 /*2*/]), 1000, 0))
							{
								func_64(iParam2, 0);
								if (AUDIO::HAS_SOUND_FINISHED(Local_149.f_41[iParam2]) && Local_149.f_41[iParam2] == -1)
								{
									Local_149.f_41[iParam2] = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_56(&(Local_149.f_149[iParam2 /*2*/]), 0, 0);
									MISC::SET_BIT(&(Local_149.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_57(&(Local_149.f_149[iParam2 /*2*/])))
					{
						if (func_55(&(Local_149.f_149[iParam2 /*2*/]), 700, 0))
						{
							func_63(iParam2, 0);
						}
					}
					GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0);
					if (!MISC::IS_BIT_SET(Local_149.f_48, iParam2 + 6))
					{
						HUD::GET_HUD_COLOUR(15, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					else
					{
						HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					if (!bParam1)
					{
						GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar3, iVar4, iVar5, iVar6, 1);
					}
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar3, iVar4, iVar5, iVar6, 1);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar3, iVar4, iVar5, iVar6, 1);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar3, iVar4, iVar5, iVar6, 1);
					GRAPHICS::CLEAR_DRAW_ORIGIN();
				}
				else
				{
					func_64(iParam2, 1);
					func_63(iParam2, 1);
				}
			}
			else
			{
				func_64(iParam2, 1);
				func_63(iParam2, 1);
			}
		}
		else
		{
			func_64(iParam2, 1);
			func_63(iParam2, 1);
		}
	}
}

void func_63(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(Local_149.f_48, iParam0 + 6))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_41[iParam0]))
		{
			AUDIO::STOP_SOUND(Local_149.f_41[iParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_149.f_41[iParam0]);
		}
		Local_149.f_41[iParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_149.f_48), iParam0 + 6);
		}
		func_50(&(Local_149.f_149[iParam0 /*2*/]));
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(Local_149.f_48, iParam0))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_34[iParam0]))
		{
			AUDIO::STOP_SOUND(Local_149.f_34[iParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_149.f_34[iParam0]);
		}
		Local_149.f_34[iParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_149.f_48), iParam0);
		}
		func_50(&(Local_149.f_136[iParam0 /*2*/]));
	}
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_34[iVar0]) || !AUDIO::HAS_SOUND_FINISHED(Local_149.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_28(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_149.f_7, iVar0))
				{
					if (func_57(&(Local_149.f_121[iVar0 /*2*/])))
					{
						if (func_55(&(Local_149.f_121[iVar0 /*2*/]), 1000, 0))
						{
							Local_149.f_84[iVar0] = -1;
							if (Local_149.f_8 > -1)
							{
								Local_149.f_17[iVar0] = 0;
								func_50(&(Local_149.f_121[iVar0 /*2*/]));
								Local_149.f_8 = (Local_149.f_8 - 1);
							}
						}
					}
					else
					{
						func_56(&(Local_149.f_121[iVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_50(&(Local_149.f_121[iVar0 /*2*/]));
				}
				if ((!func_73(Local_149.f_84[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0])) || !func_68(Local_149.f_84[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
					{
					}
					if (!func_73(Local_149.f_84[iVar0]))
					{
					}
					Local_149.f_84[iVar0] = -1;
					if (Local_149.f_8 > -1)
					{
						Local_149.f_17[iVar0] = 0;
						func_50(&(Local_149.f_121[iVar0 /*2*/]));
						Local_149.f_8 = (Local_149.f_8 - 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_149.f_8 != iVar1)
	{
		Local_149.f_8 = iVar1;
	}
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (func_72(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_71(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				if (!func_69(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_70(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_29();
}

int func_71(int iParam0)
{
	if (((((((((((((((iParam0 == joaat("POLICE") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("POLICE2")) || iParam0 == joaat("police3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("POLMAV")) || iParam0 == joaat("POLICEB")) || iParam0 == joaat("POLICET")) || iParam0 == joaat("RIOT")) || iParam0 == joaat("SHERIFF")) || iParam0 == joaat("SHERIFF2")) || iParam0 == joaat("PRANGER")) || iParam0 == joaat("POLICET"))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_69(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_69(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_73(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_74()
{
	if (Local_149.f_28 < 0 || Local_149.f_28 >= 20)
	{
		Local_149.f_28 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_63[Local_149.f_28]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_63[Local_149.f_28], 0))
	{
		func_82(Local_149.f_63[Local_149.f_28]);
		if (func_55(&(Local_149.f_117), 1000, 0))
		{
			if (Local_149.f_112 == 2)
			{
				if (MISC::IS_BIT_SET(Local_149.f_5, 0))
				{
					if (Local_149.f_8 < 5)
					{
						if (func_81(Local_149.f_63[Local_149.f_28]))
						{
							Local_149.f_63[Local_149.f_28] = -1;
							MISC::CLEAR_BIT(&(Local_149.f_5), 0);
							func_50(&(Local_149.f_117));
							Local_149.f_28++;
						}
					}
					else
					{
						if (func_78(Local_149.f_63[Local_149.f_28]))
						{
							func_75(Local_149.f_63[Local_149.f_28]);
						}
						Local_149.f_63[Local_149.f_28] = -1;
						MISC::CLEAR_BIT(&(Local_149.f_5), 0);
						Local_149.f_25 = 0;
						func_50(&(Local_149.f_117));
						Local_149.f_28++;
					}
				}
				else
				{
					Local_149.f_25 = 0;
					Local_149.f_63[Local_149.f_28] = -1;
					MISC::CLEAR_BIT(&(Local_149.f_5), 0);
					func_51(&(Local_149.f_117), 0, 0);
					Local_149.f_28++;
				}
			}
		}
	}
	else
	{
		Local_149.f_63[Local_149.f_28] = -1;
		Local_149.f_25 = 0;
		func_50(&(Local_149.f_117));
		Local_149.f_28++;
	}
	if (Local_149.f_28 == 20)
	{
		Local_149.f_111 = 0;
		Local_149.f_25 = 0;
		func_50(&(Local_149.f_117));
		Local_149.f_28 = 0;
	}
}

void func_75(int iParam0)
{
	if (func_76() != -1 && func_76() < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[func_76()]) && ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			Local_149.f_84[func_76()] = iParam0;
		}
	}
}

int func_76()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61))
	{
		vVar2 = { CAM::GET_CAM_COORD(Local_149.f_61) };
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar3]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_84[iVar3], 0))
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_149.f_84[iVar3], 1) - vVar2 };
				fVar5 = func_77(vVar4);
				if (fVar5 > fVar1)
				{
					fVar1 = fVar5;
					iVar0 = iVar3;
				}
			}
			iVar3++;
		}
	}
	Local_149.f_9 = iVar0;
	return iVar0;
}

float func_77(vector3 vParam0)
{
	return SYSTEM::SQRT((((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)) + (vParam0.z * vParam0.z)));
}

int func_78(int iParam0)
{
	if (func_76() != -1)
	{
		if ((func_47(Local_149.f_84[func_76()]) && func_47(iParam0)) && func_47(func_80()))
		{
			if (func_79(func_80(), Local_149.f_84[func_76()], 1) > func_79(func_80(), iParam0, 1) && func_79(Local_149.f_84[func_76()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_79(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

int func_80()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::NETWORK_PLAYER_ID_TO_INT() != -1)
		{
			return Global_2437364.f_1122[PLAYER::NETWORK_PLAYER_ID_TO_INT()];
		}
	}
	return -1;
}

int func_81(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
		{
			Local_149.f_84[iVar0] = uParam0;
			Local_149.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_82(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	if (((CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61)) && func_47(iParam0)) && func_47(func_30()))
	{
		vVar0 = { CAM::GET_CAM_COORD(Local_149.f_61) };
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		switch (Local_149.f_25)
		{
			case 0:
				Local_149.f_105 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar1, 511, 0, 7);
				if (Local_149.f_105 != 0)
				{
					Local_149.f_25 = 1;
				}
				break;
			
			case 1:
				Local_149.f_112 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_149.f_105, &iVar2, &vVar4, &uVar3, &iVar5);
				if (Local_149.f_112 == 2)
				{
					if (iVar2 == 0)
					{
						Local_149.f_24 = 1;
						vVar4 = { 0f, 0f, 0f };
						if (MISC::IS_BIT_SET(Local_149.f_5, 0))
						{
							MISC::CLEAR_BIT(&(Local_149.f_5), 0);
						}
					}
					else
					{
						Local_149.f_24 = 2;
						if (ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (ENTITY::IS_ENTITY_A_VEHICLE(iVar5) || (ENTITY::IS_ENTITY_A_PED(iVar5) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5))))
							{
								if (iVar5 == func_83(iParam0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
									{
										if (!MISC::IS_BIT_SET(Local_149.f_5, 0))
										{
											MISC::SET_BIT(&(Local_149.f_5), 0);
										}
									}
								}
							}
							else if (MISC::IS_BIT_SET(Local_149.f_5, 0))
							{
								MISC::CLEAR_BIT(&(Local_149.f_5), 0);
							}
						}
						Local_149.f_105 = 0;
						Local_149.f_25 = 0;
					}
				}
				else if (Local_149.f_112 == 0)
				{
					Local_149.f_25 = 0;
				}
				break;
		}
	}
	else if (MISC::IS_BIT_SET(Local_149.f_5, 0))
	{
		MISC::CLEAR_BIT(&(Local_149.f_5), 0);
	}
}

int func_83(int iParam0)
{
	return iParam0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61))
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_47(func_80()))
			{
				iVar5 = VEHICLE::_GET_ALL_VEHICLES(&uVar2);
				if (iVar5 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]))
						{
						}
						else if ((!ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_68(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_86(uVar2[iVar0]) && !func_85(uVar2[iVar0]))
						{
							if (func_73(uVar2[iVar0]) && func_79(uVar2[iVar0], func_80(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
					{
						iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
						iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
						if ((iVar3 == PLAYER::PLAYER_ID() || !func_68(iVar4)) || ENTITY::IS_ENTITY_DEAD(iVar4, 0))
						{
						}
						else if (func_86(iVar4) && !func_85(iVar4))
						{
							if (func_79(iVar4, func_80(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = iVar4;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_149.f_111 = 1;
			}
		}
	}
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_84[iVar0], 0)) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (iParam0 == Local_149.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (iParam0 == Local_149.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_64(iVar0, 1);
		func_63(iVar0, 1);
		iVar0++;
	}
}

void func_88()
{
	int iVar0;
	
	if ((func_47(func_30()) && CAM::DOES_CAM_EXIST(Local_149.f_61)) && CAM::IS_CAM_RENDERING(Local_149.f_61))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_54());
		if (iVar0 != -1)
		{
			if (!MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_380, 0))
			{
				MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_380), 0);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_380, 0))
	{
		MISC::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_380), 0);
	}
}

void func_89()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	int iVar16;
	vector3 vVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	vector3 vVar29;
	int iVar30;
	int iVar31;
	
	if (((CAM::DOES_CAM_EXIST(Local_149.f_61) && (CAM::IS_CAM_RENDERING(Local_149.f_61) || !MISC::IS_BIT_SET(Local_149.f_5, 2))) && func_47(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_97(&fVar1);
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_96(&fVar8, &fVar7);
		func_95(&fVar10, &fVar9);
		func_94(&fVar12, &fVar11);
		func_25(&fVar13);
		PAD::_0x7F4724035FDCA1DD(2);
		PAD::SET_INPUT_EXCLUSIVE(0, 39);
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			fVar14 = 15f;
			fVar5 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar14);
			fVar6 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar14);
		}
		else
		{
			iVar4 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar14));
			iVar3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar14));
		}
		iVar2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(0, 39) * fVar14));
		if (!PAD::_IS_INPUT_DISABLED(0))
		{
			iVar16 = SYSTEM::ROUND((IntToFloat(iVar16) * fVar14));
			if (MISC::ABSI(iVar2) < iVar16)
			{
				iVar2 = 0;
			}
			vVar17 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (SYSTEM::VMAG(vVar17) < IntToFloat(iVar16))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar18 = ((vVar15.x / fVar7) * 0.5f);
		if (fVar18 > 0f)
		{
			fVar18 = (fVar18 + 1f);
		}
		else
		{
			fVar18 = 1f;
		}
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			Local_149[2] = ((fVar5 * Local_149.f_59) * fVar1);
			Local_149[3] = (((fVar6 * Local_149.f_59) * fVar1) * fVar18);
		}
		else
		{
			Local_149[2] = (((SYSTEM::TO_FLOAT(iVar4) * Local_149.f_59) * fVar1) * SYSTEM::TIMESTEP());
			Local_149[3] = ((((SYSTEM::TO_FLOAT(iVar3) * Local_149.f_59) * fVar1) * fVar18) * SYSTEM::TIMESTEP());
		}
		Local_149[3] = func_93(Local_149[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			vVar15 = { CAM::GET_CAM_ROT(Local_149.f_61, 2) };
		}
		if (!func_92(CAM::GET_CAM_COORD(Local_149.f_61), 0f, 0f, 0f, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_30(), 0))
			{
				fVar19 = ENTITY::GET_ENTITY_HEADING(func_30());
				fVar20 = (fVar19 - vVar15.z);
				while (MISC::ABSF(fVar20) >= 180f && iVar21 < 30)
				{
					if (fVar20 < 0f)
					{
						fVar20 = (fVar20 + 360f);
					}
					else
					{
						fVar20 = (fVar20 - 360f);
					}
					iVar21++;
					if (iVar21 == 30)
					{
					}
				}
				if (fVar20 >= fVar11)
				{
					if (fVar20 > 0f)
					{
						vVar15.z = (fVar19 - fVar11);
					}
					else
					{
						vVar15.z = (fVar19 + fVar11);
					}
				}
				if (fVar20 < fVar12)
				{
					if (fVar20 > 0f)
					{
						vVar15.z = (fVar19 - MISC::ABSF(fVar12));
					}
					else
					{
						vVar15.z = (fVar19 + MISC::ABSF(fVar12));
					}
				}
			}
			fVar22 = 0f;
			fVar23 = 0f;
			if (func_92(Local_149.f_50, 0f, 0f, 0f, 0))
			{
				Local_149.f_50 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
			}
			else
			{
				vVar24 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
				fVar25 = ((MISC::ABSF(Local_149.f_53.f_2) - 90f) / -90f);
				fVar22 = (fVar22 + ((vVar24.x - Local_149.f_50) * fVar25));
				fVar23 = (fVar23 + (vVar24.z - Local_149.f_50.f_2));
				if (fVar23 > 180f)
				{
					fVar23 = (fVar23 - 360f);
				}
				if (fVar23 < -180f)
				{
					fVar23 = (fVar23 + 360f);
				}
				if (vVar24.x < -80f || vVar24.x > 80f)
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_30()))
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				Local_149.f_50 = { vVar24 };
			}
			if ((((Local_149[2] != 0f || Local_149[3] != 0f) || fVar22 != 0f) || fVar23 != 0f) || !MISC::IS_BIT_SET(Local_149.f_5, 2))
			{
				fVar26 = (((Local_149.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar26 < 3f)
				{
					fVar26 = 3f;
				}
				Local_149[2] = (Local_149[2] * fVar26);
				Local_149[3] = (Local_149[3] * fVar26);
				Local_149.f_53 = (Local_149.f_53 + Local_149[2]);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - Local_149[3]);
				Local_149.f_53 = (Local_149.f_53 - fVar22);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - fVar23);
				if (Local_149.f_53 < fVar8)
				{
					Local_149.f_53 = fVar8;
				}
				if (Local_149.f_53 > fVar7)
				{
					Local_149.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_149.f_53.f_2 > 180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 - 360f);
					}
					while (Local_149.f_53.f_2 < -180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_149.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_149.f_53.f_2 > (fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_149.f_5, 2))
			{
				if (func_160())
				{
					Local_149.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_149.f_53 = { fVar7, 0f, 0f };
				}
				MISC::SET_BIT(&(Local_149.f_5), 2);
			}
			if (!func_91(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_381[0 /*3*/], Local_149.f_53, 0f, Local_149.f_53.f_2, 1056964608, 0))
			{
				Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_381[0 /*3*/] = { Local_149.f_53, 0f, Local_149.f_53.f_2 };
			}
			if (func_160())
			{
				CAM::_ATTACH_CAM_TO_VEHICLE_BONE(Local_149.f_61, func_30(), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), "weapon_1d"), 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_90(), 1);
			}
			else
			{
				CAM::_ATTACH_CAM_TO_VEHICLE_BONE(Local_149.f_61, func_30(), 0, 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_90(), 1);
			}
		}
		Local_149.f_59 = (Local_149.f_59 + (((SYSTEM::TO_FLOAT(iVar2) / 5f) * SYSTEM::TIMESTEP()) * fVar0));
		if (Local_149.f_59 > fVar9)
		{
			Local_149.f_59 = fVar9;
		}
		if (Local_149.f_59 < fVar10)
		{
			Local_149.f_59 = fVar10;
		}
		CAM::_0x487A82C650EB7799(1f);
		CAM::SET_CAM_FOV(Local_149.f_61, Local_149.f_59);
		fVar27 = ((Local_149.f_59 - 5f) / 42f);
		GRAPHICS::_0xE2892E7E55D7073A(fVar27);
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((MISC::ABSI(iVar2) > 0 && Local_149.f_59 <= fVar9) && Local_149.f_59 >= fVar10)
			{
				iVar28 = Local_149.f_29;
				if (iVar28 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar28))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar28, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar28, "Ctrl", SYSTEM::TO_FLOAT(iVar2));
					if (iVar2 < 0)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar28, "Dir", -1f);
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar28, "Dir", 1f);
					}
				}
			}
			else if (Local_149.f_29 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_29))
				{
					AUDIO::STOP_SOUND(Local_149.f_29);
				}
			}
			vVar29 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) };
			if (SYSTEM::VMAG(vVar29) > 0f)
			{
				iVar30 = Local_149.f_30;
				if (iVar30 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar30))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar30, "COP_HELI_CAM_TURN", 0, 1);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar30, "Ctrl", SYSTEM::VMAG(vVar29));
				}
			}
			else
			{
				iVar31 = Local_149.f_30;
				if (iVar31 != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iVar31))
					{
						AUDIO::STOP_SOUND(iVar31);
					}
				}
			}
		}
	}
}

Vector3 func_90()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_30()))
		{
			case joaat("MAVERICK"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_91(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

bool func_92(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

float func_93(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_94(var uParam0, var uParam1)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_97(float fParam0)
{
	*fParam0 = 0.0015f;
}

int func_98()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (func_101(1))
	{
		return 1;
	}
	if (func_99(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_100())
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

bool func_100()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_101(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

void func_102()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_110())
	{
		func_109(1);
	}
	HUD::SET_BIGMAP_ACTIVE(0, 1);
	if (func_160())
	{
		func_108();
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_107))
	{
		NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Local_149.f_107);
	}
	vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_107()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
	{
		HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
		HUD::_0xA17784FCA9548D15(vVar0.x, vVar0.y, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || func_107())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (func_160())
	{
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
		}
	}
	HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	HUD::_0x20FE7FDFEEAD38C0();
	if (CAM::DOES_CAM_EXIST(Local_149.f_61))
	{
		CAM::_0x661B5C8654ADD825(Local_149.f_61, 1);
	}
	HUD::SET_RADAR_ZOOM(0);
	if (func_160())
	{
		vVar1 = { CAM::_GET_GAMEPLAY_CAM_ROT(0) };
		vVar1 = { func_106(vVar1) };
		if (!HUD::DOES_BLIP_EXIST(Local_149.f_109))
		{
			Local_149.f_108 = func_104(vVar0, 0);
			HUD::SET_BLIP_SPRITE(Local_149.f_108, 425);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_149.f_108, 0);
			HUD::SET_BLIP_DISPLAY(Local_149.f_108, 4);
			HUD::SET_BLIP_COLOUR(Local_149.f_108, func_103(2));
			HUD::SET_BLIP_SHOW_CONE(Local_149.f_108, 1);
			HUD::SET_BLIP_SCALE(Local_149.f_108, 0.54f);
			HUD::SET_BLIP_PRIORITY(Local_149.f_108, 13 + 1);
			Local_149.f_109 = func_104(vVar0, 0);
			HUD::SET_BLIP_SPRITE(Local_149.f_109, 425);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_149.f_109, 0);
			HUD::SET_BLIP_DISPLAY(Local_149.f_109, 4);
			HUD::SET_BLIP_COLOUR(Local_149.f_109, func_103(18));
			HUD::SET_BLIP_SHOW_CONE(Local_149.f_109, 1);
			HUD::SET_BLIP_SCALE(Local_149.f_109, 0.44f);
			HUD::SET_BLIP_PRIORITY(Local_149.f_109, 13 + 1);
			HUD::_0x54318C915D27E4CE(Local_149.f_109, 1);
			HUD::SET_BLIP_ROTATION(Local_149.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y)));
			HUD::_0x54318C915D27E4CE(Local_149.f_108, 1);
			HUD::SET_BLIP_ROTATION(Local_149.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y)));
		}
		else
		{
			HUD::SET_BLIP_COORDS(Local_149.f_109, vVar0);
			HUD::SET_BLIP_ROTATION(Local_149.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y)));
			HUD::SET_BLIP_DISPLAY(Local_149.f_109, 5);
			HUD::SET_BLIP_COORDS(Local_149.f_108, vVar0);
			HUD::SET_BLIP_ROTATION(Local_149.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y)));
			HUD::SET_BLIP_DISPLAY(Local_149.f_108, 5);
		}
	}
}

int func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_104(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_105(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, iParam1);
	return iVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_106(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = SYSTEM::COS(vParam0.x);
	vVar0.y = SYSTEM::COS(vParam0.z);
	vVar0.z = SYSTEM::SIN(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SYSTEM::SIN(vParam0.z));
	return vVar0;
}

bool func_107()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_108()
{
	Global_1312666 = 1;
}

void func_109(int iParam0)
{
	Global_2460889 = iParam0;
}

bool func_110()
{
	return Global_2460889;
}

void func_111(int iParam0)
{
	if (Local_149.f_110 != iParam0)
	{
		Local_149.f_110 = iParam0;
	}
}

int func_112()
{
	vector3 vVar0;
	float fVar1;
	
	if (func_128() && !func_98())
	{
		if ((func_126(0) || func_101(1)) || func_125())
		{
		}
		else
		{
			if (func_160())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 80) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_149.f_107, 0))
					{
						VEHICLE::_0xE5810AC70602F2F5(Local_149.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					return 1;
				}
				if (func_47(func_30()))
				{
					if (CAM::DOES_CAM_EXIST(Local_149.f_61))
					{
						vVar0 = { CAM::GET_CAM_COORD(Local_149.f_61) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar1, 0, 0))
						{
							if (SYSTEM::VDIST(vVar0, vVar0.x, vVar0.y, fVar1) < 2f)
							{
								return 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_WATER(func_30()))
					{
						return 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_149.f_107, 0))
					{
						VEHICLE::_0xE5810AC70602F2F5(Local_149.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_123())
			{
				return 1;
			}
		}
	}
	if (func_121(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_47(func_113()))
		{
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_113(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_113()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_113()
{
	if (Global_1589668 != func_29())
	{
		if (!func_114(Global_1589668))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1365159))
			{
				return Global_1365159;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1687946[Global_1589668]))
			{
				return Global_1687946[Global_1589668];
			}
		}
	}
	return -1;
}

int func_114(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_3, 4);
	}
	return 0;
}

int func_115()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1589668 != func_29())
		{
			if (func_114(Global_1589668) || func_120(Global_1589668))
			{
				return 1;
			}
			if (func_119(Global_1589668))
			{
				if (func_27(func_118(Global_1589668)) == 11)
				{
					if (func_27(func_117(Global_1589668)) == 11)
					{
						if (func_116(Global_1589668) == 5)
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

int func_116(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2424047[iParam0 /*416*/].f_309.f_3, 28, 31);
}

int func_117(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_15;
	}
	return -1;
}

int func_118(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_119(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_328, 14);
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_122(iParam0) && !func_119(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_123()
{
	int iVar0;
	int iVar1;
	
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_30()))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_30(), -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_124(iVar1))
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

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1626536[iVar0 /*603*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

var func_125()
{
	return Global_17272.f_135;
}

int func_126(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_127(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_128()
{
	return MISC::IS_BIT_SET(Global_1681627, 1);
}

void func_129()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (func_136())
	{
		if (!CAM::DOES_CAM_EXIST(Local_149.f_61))
		{
			Local_149.f_61 = CAM::CREATE_CAMERA(26379945, 1);
			CAM::SET_CAM_FOV(Local_149.f_61, Local_149.f_59);
			vVar0 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
			CAM::SET_CAM_ROT(Local_149.f_61, 0f, 0f, vVar0.z, 2);
			CAM::ATTACH_CAM_TO_ENTITY(Local_149.f_61, func_30(), func_135(), 1);
			func_132(1);
			func_131(1);
			func_89();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (MISC::IS_BIT_SET(Local_149.f_5, 2))
		{
			func_102();
			func_3();
			CAM::RENDER_SCRIPT_CAMS(true, 0, 0, 1, 1, 0);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			if (Local_149.f_49 == -1)
			{
				Local_149.f_49 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_149.f_107 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_149.f_107, 1) };
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), Local_149.f_107, 0, 0, vVar1, 4, 0f, -1f, -1f, -1, -1, -1f, 0);
				VEHICLE::_0xE5810AC70602F2F5(Local_149.f_107, 0f);
			}
			func_130("HUNTGUN_2b", -1);
			func_111(2);
		}
	}
	else
	{
		func_111(3);
	}
}

void func_130(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_131(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328, 25))
		{
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328), 25);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328, 25))
	{
		MISC::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328), 25);
	}
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!func_128())
		{
			MISC::SET_BIT(&Global_1681627, 1);
		}
	}
	else
	{
		if (func_128())
		{
			MISC::CLEAR_BIT(&Global_1681627, 1);
		}
		func_133(0);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_134())
		{
			MISC::SET_BIT(&Global_1681627, 2);
		}
	}
	else if (func_134())
	{
		MISC::CLEAR_BIT(&Global_1681627, 2);
	}
}

bool func_134()
{
	return MISC::IS_BIT_SET(Global_1681627, 2);
}

Vector3 func_135()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_30()))
		{
			case joaat("MAVERICK"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_136()
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()) && ENTITY::IS_ENTITY_DEAD(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_137()
{
	vector3 vVar0;
	
	if (func_136())
	{
		if (func_146())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_138(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			if (!func_57(&(Local_149.f_113)))
			{
				if (func_47(func_30()))
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(func_30(), 1), 100f, 1))
					{
						func_56(&(Local_149.f_113), 0, 0);
					}
				}
			}
			else if (func_55(&(Local_149.f_113), 2000, 0))
			{
				STREAMING::SET_FOCUS_ENTITY(func_30());
			}
		}
		if (func_57(&(Local_149.f_113)))
		{
			if (func_55(&(Local_149.f_113), 5000, 0))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (!CAM::DOES_CAM_EXIST(Local_149.f_61))
					{
						Local_149.f_61 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_FOV(Local_149.f_61, Local_149.f_59);
						vVar0 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
						CAM::SET_CAM_ROT(Local_149.f_61, 0f, 0f, vVar0.z, 2);
						CAM::ATTACH_CAM_TO_ENTITY(Local_149.f_61, func_30(), func_135(), 1);
						func_132(1);
						func_131(1);
						func_89();
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (MISC::IS_BIT_SET(Local_149.f_5, 2))
					{
						func_102();
						func_3();
						STREAMING::NEW_LOAD_SCENE_STOP();
						CAM::RENDER_SCRIPT_CAMS(true, 0, 0, 1, 1, 0);
						if (Local_149.f_49 == -1)
						{
							Local_149.f_49 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_111(2);
					}
				}
			}
		}
	}
	else
	{
		func_111(3);
	}
}

void func_138(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_145())
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
		if (!func_143())
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
				else if (bVar13 || (!func_10(PLAYER::PLAYER_ID(), 0) && !func_100()))
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
				if (!func_142(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_141();
					func_140();
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
				if (!func_142(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
						}
					}
					if (func_139(Global_4456448.f_161209))
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

bool func_139(int iParam0)
{
	return iParam0 == 17;
}

void func_140()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_141()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_142(int iParam0)
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

int func_143()
{
	if (func_144() == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	return Global_1312467.f_18;
}

int func_145()
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_147())
		{
			return 0;
		}
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	if (func_159(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_158(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_122(iVar0) && func_27(func_118(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_157(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_156(Global_4456448.f_138474))
			{
				if (func_159(iVar0))
				{
					if (func_155(iVar0))
					{
						return 1;
					}
					else if (func_122(PLAYER::PLAYER_ID()) || func_154())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1681655)
	{
		return 1;
	}
	if (func_153(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_152(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_122(iVar0) && func_27(func_118(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_151(iVar0))
			{
				return 1;
			}
			else if (func_122(PLAYER::PLAYER_ID()) || func_154())
			{
				return 1;
			}
		}
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_150(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1589668 != func_29() && func_122(Global_1589668)) && func_27(func_118(Global_1589668)) == 11) && func_66(Global_1589668, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1589668), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_114(iVar0))
			{
				return 1;
			}
			else if (func_122(PLAYER::PLAYER_ID()) || func_154())
			{
				return 1;
			}
		}
	}
	if (func_153(PLAYER::PLAYER_ID()) || func_149(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319095)
		{
			case 1:
				if (Global_262145.f_22457)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22458)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22459)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319093 == 1)
	{
		return 1;
	}
	if (func_148(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574432 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_148(int iParam0)
{
	return Global_262145.f_5003[iParam0] == Global_4456448.f_138474;
}

int func_149(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_151(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_2, 6);
	}
	return 0;
}

int func_152(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_153(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_154()
{
	return MISC::IS_BIT_SET(Global_1671295, 6);
}

int func_155(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 6);
	}
	return 0;
}

bool func_156(int iParam0)
{
	return Global_262145.f_4994[4] == iParam0;
}

int func_157(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HAULER2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("PHANTOM3"))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_159(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

bool func_160()
{
	return MISC::IS_BIT_SET(Local_149.f_5, 7);
}

void func_161()
{
	if (!func_98())
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_167())
			{
				if (func_160())
				{
					if ((func_163() && !func_146()) && func_162("MP_HTRUCK_T_2"))
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
						{
							func_133(1);
							func_111(1);
							HUD::CLEAR_HELP(1);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_162("HUNTGUN_1b"))
					{
						func_130("HUNTGUN_1b", -1);
					}
					else if (!func_162("HUNTGUN_1b"))
					{
						HUD::CLEAR_HELP(1);
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
					{
						func_133(1);
						func_111(1);
						HUD::CLEAR_HELP(1);
					}
				}
				else if (func_162("HUNTGUN_1b"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_162("HUNTGUN_1b"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}

int func_162(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_163()
{
	if ((func_26(PLAYER::PLAYER_ID(), 0) && Global_1319089 == 2) && func_164())
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_165(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_147())
		{
			return 0;
		}
	}
	return 1;
}

int func_165(int iParam0, int iParam1)
{
	if (func_166(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (func_47(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_262145.f_24023)
		{
			return 1;
		}
	}
	if (func_172())
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_114(Global_1589668))
		{
			return 1;
		}
	}
	if (func_124(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_43(0))
	{
		return 1;
	}
	if (func_169())
	{
		return 1;
	}
	if (func_168())
	{
		return 1;
	}
	if (!func_136())
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (Global_1319093)
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_47(func_113()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_113(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_113()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (!func_160())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_47(iVar0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar2, 0, 0))
				{
					if (SYSTEM::VDIST(vVar1, vVar1.x, vVar1.y, fVar2) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_168()
{
	return Global_91021;
}

int func_169()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_1671295.f_163;
}

int func_171()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_172()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

bool func_173(int iParam0)
{
	return Local_149.f_110 == iParam0;
}

void func_174()
{
	vector3 vVar0;
	
	if (func_173(1) || func_173(2))
	{
		if (func_47(func_30()))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(func_30(), 1) };
			PED::_0xD8C3BE3EE94CAF2D(vVar0, 100f, 200f);
			INTERIOR::_0x483ACA1176CA93F1();
			if ((MISC::GET_FRAME_COUNT() % 120) == 0)
			{
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(vVar0, 300f, 30);
			}
		}
	}
	if (func_173(2))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			func_138(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_175();
		PAD::ENABLE_CONTROL_ACTION(0, 19, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 166, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 167, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 168, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 169, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 218, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 219, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 220, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 221, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 209, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 210, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 80, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 51, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 200, 1);
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 189, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
		}
	}
}

void func_175()
{
	func_176();
}

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

int func_177()
{
	if (!func_143())
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (!func_160())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_178(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, 1))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("MAVERICK"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_179()
{
	return MISC::IS_BIT_SET(Global_1681627, 0);
}

int func_180()
{
	var uVar0;
	
	func_188(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_187())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_186())
	{
		return 1;
	}
	if (func_185(157))
	{
		if (!func_184())
		{
			return 1;
		}
	}
	if (func_185(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_181() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_181()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_181()
{
	switch (func_183())
	{
		case 0:
			return func_182();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_182()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_183()
{
	return Global_25765;
}

bool func_184()
{
	return Global_2448756.f_586;
}

int func_185(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_186()
{
	return Global_2458613;
}

bool func_187()
{
	return Global_2448756.f_581;
}

void func_188(var uParam0)
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
					func_189(iVar0);
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

void func_189(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_190(iVar2, &bVar3))
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

int func_190(int iParam0, var uParam1)
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

void func_191()
{
	SYSTEM::WAIT(0);
}

void func_192(bool bParam0)
{
	int iVar0;
	
	if (!func_160())
	{
		if (func_162("HUNTGUN_1b"))
		{
			HUD::CLEAR_HELP(1);
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	if (func_47(func_30()))
	{
		STREAMING::CLEAR_FOCUS();
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("droneHUD");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_149.f_62));
	func_200();
	func_199();
	if (func_110())
	{
		func_109(0);
	}
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	if (func_143() && !func_122(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_138(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	func_50(&(Local_149.f_113));
	func_50(&(Local_149.f_115));
	func_50(&(Local_149.f_117));
	func_50(&(Local_149.f_119));
	func_132(0);
	func_131(0);
	Local_149.f_32 = -1;
	Local_149.f_31 = 0;
	Local_149.f_5 = 0;
	Local_149.f_24 = 0;
	Local_149.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_17[iVar0] = 0;
		func_50(&(Local_149.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_87();
	if (MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_380, 0))
	{
		MISC::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_380), 0);
	}
	Local_149.f_48 = 0;
	func_198();
	func_196(1, -1);
	if (HUD::DOES_BLIP_EXIST(Local_149.f_108))
	{
		HUD::REMOVE_BLIP(&(Local_149.f_108));
	}
	if (HUD::DOES_BLIP_EXIST(Local_149.f_109))
	{
		HUD::REMOVE_BLIP(&(Local_149.f_109));
	}
	if (!bParam0)
	{
		func_195(0);
		func_194();
	}
	else
	{
		func_193(0);
	}
}

void func_193(bool bParam0)
{
	int iVar0;
	
	Local_149.f_33 = 100;
	Local_149.f_59 = 50f;
	Local_149.f_62 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2(func_38());
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("droneHUD", 0);
	Local_149.f_29 = AUDIO::GET_SOUND_ID();
	Local_149.f_30 = AUDIO::GET_SOUND_ID();
	func_111(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_34[iVar0] = -1;
		Local_149.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_194()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		if (!func_179())
		{
			MISC::SET_BIT(&Global_1681627, 0);
		}
	}
	else if (func_179())
	{
		MISC::CLEAR_BIT(&Global_1681627, 0);
	}
}

void func_196(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_18(&iVar0, 0, iParam1))
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
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
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
		func_197(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_197(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_198()
{
	if (Local_149.f_30 != -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_30);
		Local_149.f_30 = -1;
	}
	if (Local_149.f_29 != -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_29);
		Local_149.f_29 = -1;
	}
	if (Local_149.f_49 != -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_49);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_49);
		Local_149.f_49 = -1;
	}
	AUDIO::STOP_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

void func_199()
{
	if (Local_149.f_6 == -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_6);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_6);
		Local_149.f_6 = -1;
	}
}

void func_200()
{
	if (CAM::DOES_CAM_EXIST(Local_149.f_61))
	{
		CAM::DESTROY_CAM(Local_149.f_61, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_201(struct<19> Param0, var uParam1, var uParam2)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0.f_16);
	func_204(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_148, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_115, 33);
	if (!func_203())
	{
		func_192(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_192(0);
	}
	if (Param0.f_18 == 1)
	{
		func_202(1);
	}
	else
	{
		func_202(0);
	}
	func_193(1);
}

void func_202(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_149.f_5, 7))
		{
			MISC::SET_BIT(&(Local_149.f_5), 7);
		}
	}
	else if (MISC::IS_BIT_SET(Local_149.f_5, 7))
	{
		MISC::CLEAR_BIT(&(Local_149.f_5), 7);
	}
}

int func_203()
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
		if (func_187())
		{
			return 0;
		}
		if (func_185(155))
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

int func_204(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_194();
			}
			else
			{
				return 0;
			}
		}
		if (!func_205())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_194();
					}
					else
					{
						return 0;
					}
				}
				if (func_187())
				{
					if (!bParam2)
					{
						func_194();
					}
					else
					{
						return 0;
					}
				}
				if (func_185(155))
				{
					if (!bParam2)
					{
						func_194();
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
					func_194();
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
				func_194();
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
			func_194();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_205()
{
	return Global_1312844;
}

