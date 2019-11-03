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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	float fLocal_96 = 0f;
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
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	struct<4> Local_115 = { 2, 0, 0, 3 } ;
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
	var uLocal_133 = 2;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 2;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<8> Local_139[32];
	struct<184> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<21> Local_154 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
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
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	iLocal_112 = -1;
	iLocal_113 = -1;
	vLocal_114 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_149 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_179(ScriptParam_154);
	}
	else
	{
		func_176();
	}
	while (true)
	{
		func_175();
		func_167();
		if (func_156() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_176();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_150() && !Global_262145.f_21341) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_145();
			}
			if (func_39())
			{
				func_176();
			}
			if (func_36(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Local_140.f_182, 3))
				{
					MISC::SET_BIT(&(Local_140.f_182), 3);
				}
			}
			if (((((((((!Global_1573970 && !func_35(2)) && !func_32(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_30(PLAYER::PLAYER_ID())) && !func_28(func_29(PLAYER::PLAYER_ID()))) && !func_26(PLAYER::PLAYER_ID(), 146)) && !func_22(PLAYER::PLAYER_ID())) && !func_21(PLAYER::PLAYER_ID()))
			{
				if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000))
				{
					if (!MISC::IS_BIT_SET(Global_2528542.f_4546, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!func_150())
							{
								func_18();
								if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
								{
									if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 0, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
									else if (!func_17(&(Local_140.f_3)))
									{
										func_14(&(Local_140.f_3));
									}
									else if (func_11(&(Local_140.f_3)) > 20f || Local_140.f_177)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
								}
								else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
								}
								else
								{
									PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
								}
							}
							else
							{
								if (Global_2528542.f_6256)
								{
									bLocal_142 = false;
									Global_2528542.f_6256 = 0;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !iLocal_146)
								{
									iLocal_146 = 1;
								}
								if (Global_262145.f_21330 && !func_9(PLAYER::PLAYER_ID()))
								{
									if ((!bLocal_142 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0) && iLocal_146)
									{
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										iLocal_145 = 1;
									}
									if (func_2() && !bLocal_142)
									{
										bLocal_142 = true;
										PLAYER::SET_MAX_WANTED_LEVEL(5);
									}
								}
								if (func_2() && !bLocal_142)
								{
									bLocal_142 = true;
								}
								if (bLocal_142)
								{
									if (bLocal_143)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(2) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
									else if (bLocal_144)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(3) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
									else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Global_262145.f_21267)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21267) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_140.f_3)))
							{
								func_1(&(Local_140.f_3));
							}
							if (Local_140.f_177)
							{
								Local_140.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_140.f_177)
						{
							Local_140.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_140.f_177)
					{
						Local_140.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_176();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) && !func_8()) && !func_21(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_21261)
		{
			return 0;
		}
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, true, 0)) || func_7(PLAYER::PLAYER_ID()))
		{
			bLocal_143 = false;
			bLocal_144 = false;
			return 1;
		}
		if (Global_262145.f_21268)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_143 = true;
							bLocal_144 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_STOLEN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if ((!func_5(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1) && !func_4(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !func_3(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					bLocal_143 = true;
					bLocal_144 = false;
					return 1;
				}
			}
		}
		if (Global_2528542.f_6254 || Global_2528542.f_6255)
		{
			if (Global_2528542.f_6255)
			{
				bLocal_143 = false;
				bLocal_144 = true;
			}
			else
			{
				bLocal_143 = true;
				bLocal_144 = false;
			}
			Global_2528542.f_6254 = 0;
			Global_2528542.f_6255 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
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

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("BARRACKS"):
		case joaat("BARRACKS2"):
		case joaat("barracks3"):
		case joaat("BESRA"):
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
		case joaat("CARGOBOB"):
		case joaat("CRUSADER"):
		case joaat("FIRETRUK"):
		case joaat("LAZER"):
		case joaat("RHINO"):
		case joaat("TITAN"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0));
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
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

bool func_13(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_18()
{
	if (iLocal_145)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	Global_2528542.f_6254 = 0;
	Global_2528542.f_6255 = 0;
	iLocal_145 = 0;
	bLocal_142 = false;
	bLocal_143 = false;
	iLocal_146 = 0;
}

int func_19(vector3 vParam0, int iParam1)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_20(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_21(int iParam0)
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

bool func_22(int iParam0)
{
	return func_23(func_24(iParam0));
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_24(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_25(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_27(iParam0);
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_27(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_30(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
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

bool func_31()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()
{
	return Global_1312745;
}

bool func_35(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1573969, iParam0);
}

int func_36(int iParam0)
{
	if (iParam0 != func_38() && func_37(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
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

int func_38()
{
	return -1;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_122())
		{
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_40()
{
	int iVar0;
	
	switch (Local_140.f_6)
	{
		case 0:
			func_121();
			if (((((((func_118(PLAYER::PLAYER_ID(), 1) && func_117()) || func_24(PLAYER::PLAYER_ID()) == 159) || func_24(PLAYER::PLAYER_ID()) == 225) || func_24(PLAYER::PLAYER_ID()) == 233) || func_29(PLAYER::PLAYER_ID()) == 236) || Global_1574400) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), true);
			}
			func_115(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_140.f_176 = 1;
			Local_140.f_6 = 1;
			break;
		
		case 1:
			if (func_114())
			{
				func_115(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_140.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_113(Local_115.f_20, 1))
			{
				Local_140.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_118(PLAYER::PLAYER_ID(), 1) && !func_117()) && !func_150())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_107(iVar0);
					iVar0++;
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_105() && !func_118(PLAYER::PLAYER_ID(), 1)) && !func_117()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_103(PLAYER::PLAYER_ID()) != 6)
				{
					func_48();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_41(iVar0);
				iVar0++;
			}
			if ((((func_24(PLAYER::PLAYER_ID()) == 225 || func_24(PLAYER::PLAYER_ID()) == 233) || func_29(PLAYER::PLAYER_ID()) == 236) || Global_1574400) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), true);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_140.f_6 = 4;
			}
			break;
		
		case 4:
			if (((((((func_118(PLAYER::PLAYER_ID(), 1) && func_117()) || func_24(PLAYER::PLAYER_ID()) == 159) || func_24(PLAYER::PLAYER_ID()) == 225) || func_24(PLAYER::PLAYER_ID()) == 233) || func_29(PLAYER::PLAYER_ID()) == 236) || Global_1574400) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_115.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]), 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_140.f_172[iParam0]))
			{
				HUD::REMOVE_BLIP(&(Local_140.f_172[iParam0]));
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_140.f_172[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_140.f_172[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_115.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_140.f_172[iParam0], 1);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_140.f_172[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_140.f_172[iParam0]));
	}
	switch (Local_115.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
						{
							if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 500, 0))
							{
								func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_45(iParam0))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
					iVar0 = NETWORK::NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, 0);
							if ((!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
							{
								TASK::TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true), 6, 70f, -1f, 30f, 500, 50, 1);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
								PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, false);
							}
						}
					}
				}
				if (func_44(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true));
						}
					}
				}
				if (func_43(iParam0, 6))
				{
					func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_45(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						TASK::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_43(iParam0, 9))
				{
					func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_115.f_3[iParam0 /*5*/]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_115.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_115.f_3[iParam0 /*5*/]), false), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_115.f_3[iParam0 /*5*/]), false), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = NETWORK::NET_TO_ENT(Local_115.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&iVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
					{
						iVar5 = NETWORK::NET_TO_ENT(Local_115.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&iVar5);
					}
				}
			}
			else if (func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_42(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_102();
	func_97();
	vVar2 = { vLocal_114 };
	if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_95(PLAYER::PLAYER_PED_ID())) && func_94(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = true;
	}
	else
	{
		Local_140.f_178 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_140.f_179 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_140.f_181 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_140.f_181 = 2;
	}
	if (func_92(bVar0, bVar1))
	{
		func_90();
		if (!func_89())
		{
			Global_1573347 = 1;
			func_88(&(Local_140.f_7), 2);
			func_87(&(Local_140.f_7), 2);
			func_86(&(Local_140.f_7), 2, 0, "AIRMECH", 0, 1);
			func_85(&(Local_140.f_7), 2, vVar2);
			Global_15155.f_162 = { vVar2 };
			Var3 = { func_84() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
			{
				if (func_67(&(Local_140.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_49(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_89())
	{
		if (!MISC::IS_BIT_SET(Local_140.f_182, 2))
		{
			Global_1573347 = 0;
			func_88(&(Local_140.f_7), 2);
			func_87(&(Local_140.f_7), 2);
			MISC::SET_BIT(&(Local_140.f_182), 2);
		}
	}
}

void func_49(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_64(16000, -1, -1))
		{
			func_63(16000, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_64(16001, -1, -1))
		{
			func_63(16001, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		Local_140.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_64(15999, -1, -1))
		{
			func_63(15999, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_140.f_181 == 1)
		{
			if (!func_64(16002, -1, -1))
			{
				func_63(16002, 1, -1, 1);
				if (Global_2528542.f_6261)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_140.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_140.f_181 == 2)
		{
			if (func_51(18097, -1, -1) == 0)
			{
				func_50(18097, 1, -1, 1);
				if (Global_2528542.f_6261)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_140.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_140.f_179 = 1;
		Local_140.f_181 = 0;
	}
	if (MISC::IS_BIT_SET(Local_140.f_182, 2))
	{
		MISC::CLEAR_BIT(&(Local_140.f_182), 2);
	}
}

var func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
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

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	iVar1 = func_53(iParam0, iParam1);
	iVar2 = func_52(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52(int iParam0)
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

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
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

void func_54(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_55(char* sParam0)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	if (!func_56(sParam0))
	{
		func_54(sParam0, -1);
	}
}

int func_56(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_57()
{
	if (func_60(PLAYER::PLAYER_ID()) && !func_58(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_38();
}

int func_59(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_38())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (func_62(iParam0))
	{
		iVar0 = func_61(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_34();
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

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar1 = func_66(iParam0, iParam1);
	uVar2 = func_65(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_65(int iParam0)
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

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
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

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_68(sParam2, iParam3, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_82();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_81(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_80();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			MISC::CLEAR_BIT(&Global_2423, 20);
			MISC::CLEAR_BIT(&Global_2424, 17);
			MISC::CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_73();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_72())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_71())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_70();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_69();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_82();
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15866 = 1;
}

void func_70()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	MISC::CLEAR_BIT(&Global_2424, 16);
}

int func_71()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_73()
{
	if (func_79(14))
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
		Global_14553 = func_74();
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

var func_74()
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
			if (func_76(iVar0) && (!func_79(14) || Global_105516))
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

bool func_79(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_81(int iParam0, int iParam1)
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

void func_82()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15866 = 6;
		return;
	}
}

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

struct<6> func_84()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
	{
		if (!func_64(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_64(16002, -1, -1) || func_51(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_95(PLAYER::PLAYER_PED_ID())) && func_94(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_64(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_64(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_85(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_86(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_88(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_89()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	Global_14732 = 0;
	func_91();
}

void func_91()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15866 = 6;
		return;
	}
}

int func_92(bool bParam0, bool bParam1)
{
	if (func_21(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_140.f_178)
		{
			if (MISC::IS_BIT_SET(Local_140.f_182, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!func_64(16000, -1, -1) || !func_64(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_140.f_179)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_93())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0))
					{
						if (!func_64(15999, -1, -1) || !func_64(16002, -1, -1))
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= -25f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
					{
						if (!func_64(15999, -1, -1) || func_51(18097, -1, -1) == 0)
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= 160f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_94(int iParam0)
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && func_96(iParam0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0)
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

void func_97()
{
	if (Local_140.f_180)
	{
		if (!func_101(&(Local_140.f_183)))
		{
			func_100(&(Local_140.f_183), 0, 0);
		}
		else if (!func_99(&(Local_140.f_183), 17000, 0))
		{
			if (!func_56("AB_ENTRY_HT"))
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (func_99(&(Local_140.f_183), 17000, 0))
		{
			if (func_56("AB_ENTRY_HT"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_98(&(Local_140.f_183));
			Local_140.f_180 = 0;
		}
	}
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_99(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_100(uParam0, bParam2, 0);
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

void func_100(var uParam0, bool bParam1, bool bParam2)
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

bool func_101(var uParam0)
{
	return uParam0->f_1;
}

void func_102()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if ((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_95(PLAYER::PLAYER_PED_ID()))
		{
			if (!MISC::IS_BIT_SET(Local_140.f_182, 0))
			{
				if ((((func_94(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && func_93()) && !Global_1681564)
				{
					if (!MISC::IS_BIT_SET(Local_140.f_182, 1) && !MISC::IS_BIT_SET(Local_140.f_182, 3))
					{
						MISC::SET_BIT(&(Local_140.f_182), 1);
					}
				}
				MISC::SET_BIT(&(Local_140.f_182), 0);
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_140.f_182, 0))
			{
				MISC::CLEAR_BIT(&(Local_140.f_182), 0);
			}
			if (MISC::IS_BIT_SET(Local_140.f_182, 1))
			{
				MISC::CLEAR_BIT(&(Local_140.f_182), 1);
			}
			if (MISC::IS_BIT_SET(Local_140.f_182, 3))
			{
				MISC::CLEAR_BIT(&(Local_140.f_182), 3);
			}
			if (Global_1681564)
			{
				Global_1681564 = 0;
			}
		}
	}
}

int func_103(int iParam0)
{
	if (func_24(iParam0) == 233)
	{
		return func_104(iParam0);
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_37(iVar1, 0, 1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_106(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar1)))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == PLAYER::GET_PLAYER_PED(iVar1))
					{
						if (func_60(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_106(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, 0) == PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_115[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	switch (Local_115.f_21[iParam0])
	{
		case 0:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
					{
						func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f) && !func_21(PLAYER::PLAYER_ID()))
			{
				func_86(&(Local_140.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_112(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_111(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_110(iParam0), -1, 0);
				}
				if (func_109(iParam0, 1630799643))
				{
					func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!func_17(&Local_140))
				{
					func_14(&Local_140);
				}
				if (func_11(&Local_140) >= 7f && !func_21(PLAYER::PLAYER_ID()))
				{
					func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_112(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_140))
			{
				func_1(&Local_140);
			}
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_108(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_150())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21267));
					}
				}
			}
			if (func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_42(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_108(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_46(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_150())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21267) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
				}
			}
			if (func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_42(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_109(iParam0, 1630799643))
			{
				if (func_111(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_110(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_47(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_111(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
				}
				if (!func_109(iParam0, 1435919172))
				{
					func_42(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_42(&(Local_139[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_115[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_115[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_115[iParam0]), true));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_115[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_112(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 1;
	return func_68(sParam2, iParam3, 0);
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("LAZER")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_115(var uParam0, int iParam1)
{
	func_116(uParam0, iParam1);
}

void func_116(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_117()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 0);
}

int func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0);
}

bool func_120(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_121()
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("LAZER"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_122()
{
	int iVar0;
	
	switch (Local_115.f_19)
	{
		case 0:
			if (func_144())
			{
				Local_115.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_143())
			{
				Local_115.f_19 = 2;
			}
			break;
		
		case 2:
			if ((((((func_118(PLAYER::PLAYER_ID(), 1) || func_117()) || func_24(PLAYER::PLAYER_ID()) == 225) || func_24(PLAYER::PLAYER_ID()) == 233) || func_29(PLAYER::PLAYER_ID()) == 236) || Global_1574400) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_115(&(Local_115.f_20), 1);
				Local_115.f_19 = 3;
			}
			else if (func_141())
			{
				func_115(&(Local_115.f_20), 1);
				Local_115.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_118(PLAYER::PLAYER_ID(), 1) && !func_117())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_138(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_125(iVar0);
					iVar0++;
				}
			}
			if ((((func_24(PLAYER::PLAYER_ID()) == 225 || func_24(PLAYER::PLAYER_ID()) == 233) || func_29(PLAYER::PLAYER_ID()) == 236) || Global_1574400) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_124();
			}
			if (func_123())
			{
				Local_115.f_19 = 4;
			}
			break;
		
		case 4:
			func_124();
			return 1;
			break;
	}
	return 0;
}

int func_123()
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_115[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_115.f_3[iVar0 /*5*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iVar0 /*5*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_115.f_3[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_115.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (vVar1.z <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_115.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_137(iParam0, 16))
			{
				Local_115.f_3[iParam0 /*5*/].f_4 = -1;
				Local_115.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_134(iParam0) };
			if (!func_133(vVar3))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vVar3, 20f) && !CAM::IS_SPHERE_VISIBLE(vVar3, 20f))
				{
					if (func_128(vVar3, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_115.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_137(iParam0, 2))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = PLAYER::GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(iVar4, 0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar4) || PED::IS_PED_IN_ANY_HELI(iVar4))
			{
				if (func_127(PED::GET_VEHICLE_PED_IS_IN(iVar4, 0)))
				{
					Local_115.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_137(iParam0, 8))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 6;
				Local_115.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_126(iParam0, 16))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_135(iParam0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_128(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam2 /*5*/]))
	{
		if (!func_130(&(Local_115.f_3[iParam2 /*5*/]), joaat("LAZER"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_115.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam2 /*5*/]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_129(&(Local_115.f_3[iParam2 /*5*/].f_1), Local_115.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_115.f_3[iParam2 /*5*/].f_1), joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_115.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_129(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_130(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam11)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_131(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_131(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_132(PLAYER::PLAYER_ID(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam3;
	}
}

int func_132(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_134(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_136(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
						if (func_20(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_115.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = PLAYER::GET_PLAYER_PED(Local_115.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_115.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_138(int iParam0)
{
	switch (Local_115.f_21[iParam0])
	{
		case 0:
			if (func_140(iParam0, 64))
			{
				Local_115.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_139(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_139(iParam0, 2))
			{
				Local_115.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_140(iParam0, 4))
			{
				Local_115.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_139(iParam0, 8))
			{
				Local_115.f_21[iParam0] = 5;
			}
			if (!func_139(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 7;
			}
			if (func_139(iParam0, 16))
			{
				Local_115.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_139(iParam0, 16))
			{
				Local_115.f_21[iParam0] = 6;
			}
			if (!func_139(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_139(iParam0, 4))
			{
				Local_115.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_141()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_142(&(Local_115[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_115[0]), joaat("WEAPON_ASSAULTRIFLE"), 200, true, true);
	}
	if (!func_142(&(Local_115[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_115[1]), joaat("WEAPON_ASSAULTRIFLE"), 200, true, true);
	}
	return iVar0;
}

int func_142(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_113(Local_139[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_113(Local_139[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_145()
{
	if (func_101(&uLocal_152) && func_99(&uLocal_152, Global_262145.f_21342, 0))
	{
		func_98(&uLocal_152);
	}
	if (func_101(&uLocal_150) && func_99(&uLocal_150, Global_262145.f_21343, 0))
	{
		func_98(&uLocal_150);
		iLocal_147 = 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
	{
		if (func_146())
		{
			if (!Global_2528542.f_6262)
			{
				Global_2528542.f_6262 = 1;
				func_54("BASE_EXP_WARN", -1);
			}
			if (!iLocal_147)
			{
				iLocal_147 = 1;
				func_100(&uLocal_152, 0, 0);
				func_100(&uLocal_150, 0, 0);
			}
			else if (!func_101(&uLocal_152))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				bLocal_142 = true;
				bLocal_143 = true;
				iLocal_147 = 0;
				func_98(&uLocal_152);
				func_98(&uLocal_150);
			}
		}
	}
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_149(&iLocal_148, iVar1);
		iLocal_149 = func_148();
		if (iLocal_149 >= 0)
		{
			iVar0 = func_147(iLocal_149);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return iVar0;
}

int func_148()
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_149(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_155(1))
	{
		iVar0 = func_154();
		if (iVar0 != func_38())
		{
			if (func_60(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_37(iVar2, 0, 1))
		{
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (func_155(1))
				{
					if (func_152(PLAYER::PLAYER_ID(), iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_151(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar2)))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, 0) == PLAYER::GET_PLAYER_PED(iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_153(iParam0);
	if (!iVar0 == func_38())
	{
		if (iVar0 == func_153(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_38();
}

var func_154()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

bool func_155(bool bParam0)
{
	return func_58(PLAYER::PLAYER_ID(), bParam0);
}

int func_156()
{
	var uVar0;
	
	func_164(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_163())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	if (func_161(157))
	{
		if (!func_160())
		{
			return 1;
		}
	}
	if (func_161(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_157() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_157()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	switch (func_159())
	{
		case 0:
			return func_158();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_158()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_159()
{
	return Global_25765;
}

bool func_160()
{
	return Global_2448756.f_586;
}

int func_161(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_2458613;
}

bool func_163()
{
	return Global_2448756.f_581;
}

void func_164(var uParam0)
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
					func_165(iVar0);
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

void func_165(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_166(iVar2, &bVar3))
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

int func_166(int iParam0, var uParam1)
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

void func_167()
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 5)
	{
		if (func_174(5, 0, 1))
		{
			if (NETWORK::_0xCB215C4B56A7FAE7(0) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != 3)
	{
		if (func_168(3, 0, 1))
		{
			if (NETWORK::_0x0CD9AB83489430EA(0) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_168(int iParam0, bool bParam1, bool bParam2)
{
	return func_169(1, iParam0, 1, bParam1, bParam2);
}

int func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_173(iParam0) - func_172(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_172(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_173(iParam0) - func_171(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_172(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_173(iParam0) - func_172(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_170(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_172(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

bool func_174(int iParam0, bool bParam1, bool bParam2)
{
	return func_169(0, iParam0, 1, bParam1, bParam2);
}

void func_175()
{
	SYSTEM::WAIT(0);
}

void func_176()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_123())
			{
				func_124();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_140.f_172[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_140.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_145)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		iLocal_145 = 0;
	}
	Global_1681564 = 0;
	func_178();
	func_177();
}

void func_177()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_178()
{
	if (!Local_140.f_176)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("LAZER")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("LAZER"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_179(struct<21> Param0)
{
	func_183(func_184(Param0), Param0);
	func_181(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_115, 27);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_139, 257);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_180())
	{
		func_176();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_176();
	}
	Global_2528542.f_6256 = 0;
}

int func_180()
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
		if (func_163())
		{
			return 0;
		}
		if (func_161(155))
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

int func_181(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
		if (!func_182())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_163())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_161(155))
				{
					if (!bParam2)
					{
						func_177();
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
					func_177();
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
				func_177();
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
			func_177();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_182()
{
	return Global_1312844;
}

void func_183(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_177();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}

