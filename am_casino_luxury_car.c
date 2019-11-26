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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<7> Local_103 = { 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	struct<4> Local_105[8];
	int iLocal_106[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_107[1] = { 0 };
	var uLocal_108 = 0;
	struct<4> Local_109 = { 0, 0, 0, 0 } ;
	int iLocal_110 = 0;
	struct<21> Local_111 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_311(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_306(ScriptParam_111))
			{
				func_299();
			}
		}
		else
		{
			func_299();
		}
	}
	else
	{
		func_299();
	}
	while (true)
	{
		func_298();
		if (func_288())
		{
			func_299();
		}
		if (func_287(1))
		{
			func_299();
		}
		func_284();
		switch (func_283(NETWORK::PARTICIPANT_ID()))
		{
			case 0:
				if (func_282() == 1 && func_280())
				{
					func_279(1);
				}
				break;
			
			case 1:
				switch (func_282())
				{
					case 1:
						func_236();
						break;
					
					case 2:
						func_279(2);
						break;
				}
				break;
			
			case 2:
				func_299();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_282())
			{
				case 0:
					if (func_22())
					{
						func_21(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 2:
					func_299();
					break;
				}
		}
	}
}

void func_1()
{
	if (func_20() > 0)
	{
		func_13();
		func_4();
	}
	switch (func_20())
	{
		case 0:
			func_3(1);
			break;
		
		case 1:
			if (func_2() == 0)
			{
			}
			else
			{
				func_3(3);
			}
			break;
		
		case 3:
			func_21(2);
			break;
	}
}

int func_2()
{
	return Local_103.f_4;
}

void func_3(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_103.f_1 = iParam0;
}

void func_4()
{
	if (func_2() != 0)
	{
		return;
	}
	if (func_12(1))
	{
		func_11(2);
		return;
	}
	if (func_12(5))
	{
		func_11(3);
		return;
	}
	if (!func_7())
	{
		if (func_5(PLAYER::PLAYER_ID()))
		{
			func_11(3);
		}
		else
		{
			func_11(1);
		}
		return;
	}
}

bool func_5(int iParam0)
{
	return func_6(iParam0, 18);
}

bool func_6(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_6, iParam1);
}

bool func_7()
{
	return func_8(func_10());
}

int func_8(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_9(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_9(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	return Local_103.f_6;
}

void func_11(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_103.f_4 = iParam0;
}

bool func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Local_103.f_2[iVar0], iVar1);
}

void func_13()
{
	if (func_19() > 0)
	{
		if (func_19() != 5)
		{
			if (!func_7())
			{
				func_18(5);
			}
		}
	}
	switch (func_19())
	{
		case 0:
			func_18(1);
			break;
		
		case 1:
			if (func_5(func_17()))
			{
				func_14(func_15(func_16(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				func_18(2);
			}
			break;
		
		case 2:
			if (func_12(3))
			{
				func_18(3);
			}
			break;
		
		case 3:
			if (func_12(4))
			{
				func_18(4);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_14(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = 1796063150;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_15(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_311(iVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), iParam3))
			{
				if (!PLAYER::_0x690A61A6D13583F6(iVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), iParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(iVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (iVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_16()
{
	return NETWORK::NET_TO_VEH(func_10());
}

int func_17()
{
	return Local_103.f_5;
}

void func_18(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_103.f_6.f_1 = iParam0;
}

int func_19()
{
	return Local_103.f_6.f_1;
}

int func_20()
{
	return Local_103.f_1;
}

void func_21(int iParam0)
{
	Local_103 = iParam0;
}

int func_22()
{
	if (!func_12(0))
	{
		func_235(PLAYER::PLAYER_ID());
		func_234(0);
	}
	if (!func_23())
	{
		return 0;
	}
	return 1;
}

int func_23()
{
	int iVar0;
	struct<102> Var1;
	int iVar2;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 1;
	}
	if (!func_287(0))
	{
		if (func_98(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_109, &(Local_109.f_3)))
		{
			func_97(0);
		}
	}
	if (func_95(func_96()) && func_287(0))
	{
		MISC::CLEAR_AREA(Local_109, 5f, 1, 0, 0, false);
		if (func_92(&(Local_103.f_6), func_96(), Local_109, Local_109.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_16();
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			func_91(iVar0);
			ENTITY::_0xD7B80E7C3BEFC396(iVar0, 1);
			Var1 = { func_90() };
			func_24(iVar0, &Var1, 0, 1, 0);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				MISC::SET_BIT(&iVar2, 11);
				DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar2);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			VEHICLE::_0xDBC631F109350B8C(iVar0, 1);
			VEHICLE::_0x2311DD7159F00582(iVar0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_96());
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::PLAYER_ID() != func_89())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_76(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::_SET_VEHICLE_HORN_VARIATION(iParam0, uParam1->f_79);
			}
			if (func_75(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::_SET_VEHICLE_INTERIOR_COLOR(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, uParam1->f_99);
			}
			if (func_74(iParam0))
			{
				func_68(iParam0, func_71(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::_SET_VEHICLE_ROOF_LIVERY(iParam0, uParam1->f_98);
			}
			if (MISC::IS_BIT_SET(uParam1->f_95, 0))
			{
				func_42(iParam0, &(uParam1->f_81));
			}
			if ((!func_33(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_27(iParam0);
			}
			if (func_26(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (MISC::IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_25(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_27(int iParam0)
{
	vector3 vVar0;
	
	if (Global_262145.f_19558)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				vVar0.x = ENTITY::GET_ENTITY_MODEL(iParam0);
				vVar0.y = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						vVar0.z = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", vVar0.z);
					}
					else
					{
						vVar0.z = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				func_28(vVar0);
			}
		}
	}
}

void func_28(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = -441483543;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = vParam0.x;
	vVar0.f_2.f_1 = vParam0.y;
	vVar0.f_2.f_2 = vParam0.z;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 5, func_29(1, 1));
}

var func_29(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_311(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_30(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_30(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_31(-1, 0) == 8;
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

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
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

int func_32()
{
	return Global_1312745;
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 52)
		{
			if (func_40(iVar0) == iParam0)
			{
				if (func_34(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_34(int iParam0)
{
	return func_35(iParam0, 6, 1);
}

int func_35(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_39() == 0)
		{
			return MISC::IS_BIT_SET(func_36(func_38(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_37(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
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

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

int func_39()
{
	return Global_25765;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_41()
{
	return Global_93734.f_340 > 0;
}

int func_42(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_52(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_50(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_45(&iParam0, iVar1))
			{
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
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_43(iParam0))
	{
	}
	return 0;
}

int func_43(int iParam0)
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
				func_44(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_44(int iParam0)
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

int func_45(int iParam0, int iParam1)
{
	func_49();
	if (Global_1312467.f_18 != 0 || VEHICLE::_0x8533CAFDE1F0F336(*iParam0))
	{
		Global_1671187.f_11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(*iParam0);
		if (Global_1671187.f_11 < 0f)
		{
			Global_1671187.f_11 = 0f;
		}
	}
	func_47(*iParam0, &Global_1671187, &(Global_1671187.f_1), &(Global_1671187.f_4), &(Global_1671187.f_7), &(Global_1671187.f_10));
	Global_1671187.f_1.f_2 = (Global_1671187.f_1.f_2 - Global_1671187.f_11);
	if (Global_1671187.f_4.f_2 < 0f)
	{
		Global_1671187.f_12 = 1;
	}
	Global_1671187.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("WINDSOR") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1671187.f_13 = 255;
	}
	if (Global_1671187.f_12)
	{
		if (func_46(iParam0, iParam1, Global_1671187, Global_1671187.f_1, Global_1671187.f_4, Global_1671187.f_7, Global_1671187.f_10, 0, Global_1671187.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1315721 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1315721 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1671187.f_14 = { Global_1671187.f_1 };
		Global_1671187.f_14 = (Global_1671187.f_14 * -1f);
		Global_1671187.f_17 = { Global_1671187.f_4 };
		Global_1671187.f_17 = (Global_1671187.f_17 * -1f);
		Global_1671187.f_20 = { Global_1671187.f_7 };
		Global_1671187.f_20.f_1 = (Global_1671187.f_20.f_1 * -1f);
		Global_1671187.f_20.f_2 = (Global_1671187.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1671187.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1671187.f_23 = 3;
		}
		Global_1671187.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1671187.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1671187.f_24 = 3;
		}
		if (((Global_1671187.f_23 == 0 && func_46(iParam0, iParam1, Global_1671187, Global_1671187.f_1, Global_1671187.f_4, Global_1671187.f_7, Global_1671187.f_10, 0, Global_1671187.f_13)) || Global_1671187.f_23 != 0) && ((Global_1671187.f_24 == 0 && func_46(iParam0, iParam1, Global_1671187, Global_1671187.f_14, Global_1671187.f_17, Global_1671187.f_20, Global_1671187.f_10, 1, Global_1671187.f_13)) || Global_1671187.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1315721 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1315721 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_46(var uParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, var uParam6, int iParam7, var uParam8)
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), uParam2, vParam3, vParam4, vParam5, uParam6, iParam7, uParam8);
}

int func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_48(Global_1671213, 0f, 0f, 0f, 0) && !func_48(Global_1671216, 0f, 0f, 0f, 0)) && !func_48(Global_1671219, 0f, 0f, 0f, 0)) && !Global_1671222 == 0f)
	{
		*uParam2 = { Global_1671213 };
		*uParam3 = { Global_1671216 };
		*uParam4 = { Global_1671219 };
		*uParam5 = Global_1671222;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ADDER"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("AKUMA"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("ASEA"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BAGGER"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("BALLER"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BALLER2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BANSHEE"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("BATI"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("BATI2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BISON"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BJXL"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("BLISTA"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("BOBCATXL"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("BODHI2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("BUFFALO"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BUFFALO2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("BULLET"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("CHEETAH"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("COMET2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("COQUETTE"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("DAEMON"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("DLOADER"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("DOUBLE"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("DUBSTA"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("ELEGY2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("EMPEROR"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("EMPEROR2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ENTITYXF"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("EXEMPLAR"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("F620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("FELON"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("FELON2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("FQ2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("FUGITIVE"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("FUSILADE"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("FUTO"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("GAUNTLET"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("GRANGER"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("GRESLEY"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("HABANERO"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("HEXER"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("HOTKNIFE"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("INFERNUS"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("INGOT"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("INTRUDER"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ISSI2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("JACKAL"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("JB700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("LANDSTALKER"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("MANANA"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("MESA"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("MESA3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("MINIVAN"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("MONROE"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("NEMESIS"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("NINEF"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("NINEF2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ORACLE"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ORACLE2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PATRIOT"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PCJ"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("PENUMBRA"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PEYOTE"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PHOENIX"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("PICADOR"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case joaat("PRAIRIE"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("PREMIER"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PRIMO"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("RADI"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("RAPIDGT"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("REBEL"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("REBEL2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("REGINA"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ROCOTO"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ROMERO"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("RUFFIAN"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("RUINER"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SABREGT"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("SADLER"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SANDKING"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SCHAFTER2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("SEMINOLE"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SENTINEL"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SENTINEL2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SERRANO"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("STANIER"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("STINGER"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("STRATUM"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SULTAN"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("SUPERD"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SURANO"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SURFER"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("SURFER2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("SURGE"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("TAILGATER"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("TORNADO"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("TORNADO2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("TORNADO3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("VACCA"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("VADER"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("VIGERO"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("VOLTIC"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("VOODOO2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("YOUGA"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("ZION"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ZION2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ZTYPE"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("KALAHARI"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PARADISE"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ALPHA"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("HUNTLEY"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ZENTORNO"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("JESTER"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("MASSACRO"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("TURISMOR"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("THRUST"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("BTYPE"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("RHAPSODY"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("GLENDALE"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("WARRENER"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("BLADE"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("PANTO"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("DUBSTA3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PIGALLE"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("COQUETTE2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("INNOVATION"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("HAKUCHOU"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("SLAMVAN"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("DUKES2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("DUKES"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("STALION"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("BLISTA2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("CASCO"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("ENDURO"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("GBURRITO2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("GUARDIAN"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("LECTRO"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("FELTZER3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("OSIRIS"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("VIRGO"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("WINDSOR"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("BRAWLER"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("CHINO"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("COQUETTE3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("T20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("VINDICATOR"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("FACTION"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("FACTION2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("CHINO2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("MOONBEAM"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("MOONBEAM2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("PRIMO2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("VOODOO"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("FACTION3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SABREGT2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("TORNADO5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("VIRGO2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("VIRGO3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("MINIVAN2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("SLAMVAN3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BTYPE2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("LURCHER"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("BALLER3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BALLER4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BALLER5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BALLER6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("COG55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("COG552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("MAMBA"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("SCHAFTER3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("SCHAFTER4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("SCHAFTER5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("SCHAFTER6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("TAMPA"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("BANSHEE2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("SULTANRS"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("BESTIAGTS"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("SEVEN70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("FMJ"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("PFISTER811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("PROTOTIPO"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("REAPER"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("RUMPO3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("WINDSOR2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("XLS"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("XLS2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("BRIOSO"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("CONTENDER"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("LE7B"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("OMNIS"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("TROPOS"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("AVARUS"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("DAEMON2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("DEFILER"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ESSKEY"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("HAKUCHOU2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("NIGHTBLADE"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("RATBIKE"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("SHOTARO"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ZOMBIEA"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ZOMBIEB"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("VORTEX"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("TORNADO6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("YOUGA2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("WOLFSBANE"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("FAGGIO3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("FAGGIO"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("COMET3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("DIABLOUS"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("DIABLOUS2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ELEGY"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("FCR"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("FCR2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ITALIGTB"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ITALIGTB2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("NERO"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("NERO2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("RUINER2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("SPECTER"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("SPECTER2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("TECHNICAL2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("TEMPESTA"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("VOLTIC2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("INFERNUS2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("RUSTON"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("TURISMO2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ARDENT"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("CHEETAH2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("HALFTRACK"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("NIGHTSHARK"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("OPPRESSOR"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("TAMPA3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("TECHNICAL3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("TORERO"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("VAGNER"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("XA21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("PHANTOM3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("HAULER2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("CYCLONE"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("VISIONE"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("VIGILANTE"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("RETINUE"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("RAPIDGT3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("Dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("Novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	}
	return 1;
}

bool func_48(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_49()
{
	Global_1671187 = 0;
	Global_1671187.f_1 = { 0f, 0f, 0f };
	Global_1671187.f_4 = { 0f, 0f, 0f };
	Global_1671187.f_7 = { 0f, 0f, 0f };
	Global_1671187.f_10 = 0f;
	Global_1671187.f_11 = 0f;
	Global_1671187.f_12 = 0;
	Global_1671187.f_13 = 0;
	Global_1671187.f_14 = { 0f, 0f, 0f };
	Global_1671187.f_17 = { 0f, 0f, 0f };
	Global_1671187.f_20 = { 0f, 0f, 0f };
	Global_1671187.f_23 = 0;
	Global_1671187.f_24 = 0;
}

int func_50(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_51(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0)
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

int func_52(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = func_89();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (func_63(15, 0))
		{
			bVar1 = true;
		}
		else if (func_59(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::_0x595F028698072DD9(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_89()) || !func_311(iVar0, 0, 0)) || !bVar1) || func_53(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_55(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_54(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1671212)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
		case joaat("BLAZER"):
		case joaat("BLAZER3"):
		case joaat("SURFER"):
		case joaat("SURFER2"):
		case joaat("BIFTA"):
		case joaat("SOVEREIGN"):
		case joaat("HEXER"):
		case joaat("DUNE"):
		case joaat("DUNE2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("BLISTA3"):
		case joaat("STALION2"):
		case joaat("GAUNTLET2"):
		case joaat("DOMINATOR2"):
		case joaat("BUFFALO3"):
		case joaat("MASSACRO2"):
		case joaat("JESTER2"):
		case joaat("OMNIS"):
		case joaat("BF400"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("CLIFFHANGER"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("LE7B"):
		case joaat("TYRUS"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
		case joaat("CHIMERA"):
		case joaat("SANCTUS"):
		case joaat("BLAZER4"):
		case joaat("MANCHEZ"):
		case joaat("RAPTOR"):
		case joaat("BLAZER5"):
			return 1;
			break;
		
		case joaat("YOUGA"):
		case joaat("YOUGA2"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("SURANO"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("GP1"):
			return 1;
			break;
		
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("INSURGENT3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
			return 1;
			break;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_55(int iParam0)
{
	if (func_58(iParam0) == 233)
	{
		return func_56(iParam0);
	}
	return -1;
}

int func_56(int iParam0)
{
	if (func_57(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_57(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (func_57(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

bool func_59(bool bParam0)
{
	return func_60(PLAYER::PLAYER_ID(), bParam0);
}

int func_60(int iParam0, bool bParam1)
{
	return func_61(iParam0, bParam1, 1);
}

int func_61(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_89())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_62(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_89() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 != func_89())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_89())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_65(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_64(iVar1));
}

int func_64(int iParam0)
{
	return (iParam0 % 32);
}

var func_65(int iParam0)
{
	var uVar0;
	
	uVar0 = func_36(func_66(iParam0), -1, 0);
	return uVar0;
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_67(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

int func_67(int iParam0)
{
	return (iParam0 / 32);
}

void func_68(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_70(iParam1);
	func_69(iVar1, &iVar0);
	VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, iVar0);
}

bool func_69(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_70(int iParam0)
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

int func_71(int iParam0, int iParam1, int iParam2)
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
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_72()) && Global_1314023)
	{
		if ((iParam0 == Global_1314024 && iParam1 == Global_1314025) && iParam2 == Global_1314026)
		{
			return 13;
		}
	}
	return 0;
}

int func_72()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_73() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_73()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_74(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_75(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("DUNE5"):
			*uParam1 = 1f;
			break;
		
		case joaat("BOXVILLE5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("ALPHAZ1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("BOMBUSHKA"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("HOWARD"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("HUNTER"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("MICROLIGHT"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("MOGUL"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("MOLOTOK"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("NOKOTA"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("PYRO"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("ROGUE"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("SEABREEZE"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("STARLING"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("TULA"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_76(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!func_87(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_86(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_86(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_86(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_86(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, 1);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_85(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_84())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_83(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_77, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_82(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_82(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_77(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_86(iVar2 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SHEAVA") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("OMNIS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("LE7B"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !((((Global_4456448.f_55685 == 6 || Global_4456448.f_55685 == 7) || Global_4456448.f_55685 == 18) || Global_4456448.f_55685 == 19) && Global_4456448.f_2 == 20))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_77, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_77(int iParam0, var uParam1, var uParam2)
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
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_81(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_80(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_80(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_79(iParam0);
	if (func_78(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_79(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
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
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("FACTION3"):
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("buccaneer2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 1;
			break;
		
		case joaat("SABREGT2"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("TORNADO5"):
			if (!Global_262145.f_14097)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("VIRGO2"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14098)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14100)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("FACTION3"):
			if (!Global_262145.f_14099)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("COMET3"):
			if (Global_262145.f_18543)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18545)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("FCR2"):
			if (Global_262145.f_18549)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ELEGY"):
			if (Global_262145.f_18546)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("NERO2"):
			if (Global_262145.f_18553)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SPECTER2"):
			if (Global_262145.f_18556)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20499)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("INSURGENT3"):
			if (Global_262145.f_20500)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TORNADO6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_83(int iParam0)
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

bool func_84()
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_85(int iParam0)
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
				return MISC::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_86(int iParam0)
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

int func_87(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_88(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_55(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_54(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_311(iParam0, 1, 1))
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

int func_89()
{
	return -1;
}

struct<102> func_90()
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_96();
	switch (Var0.f_66)
	{
		case joaat("cogcabrio"):
			Var0.f_5 = 141;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 82;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 3;
			break;
		
		case joaat("WINDSOR"):
			Var0.f_5 = 9;
			Var0.f_6 = 5;
			Var0.f_7 = 7;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 2;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 32;
			break;
		
		case joaat("FUGITIVE"):
			Var0.f_5 = 147;
			Var0.f_7 = 4;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 26);
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 41;
			break;
		
		case joaat("SUPERD"):
			Var0.f_5 = 62;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 24;
			break;
		
		case joaat("dubsta2"):
			Var0.f_5 = 13;
			Var0.f_6 = 12;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[10] = 2;
			Var0.f_9[15] = 4;
			Var0.f_9[22] = 1;
			break;
		
		case joaat("feltzer2"):
			Var0.f_5 = 50;
			Var0.f_6 = 28;
			Var0.f_7 = 92;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[0] = 1;
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 20;
			break;
	}
	return Var0;
}

void func_91(int iParam0)
{
	if (!Global_262145.f_4681)
	{
		VEHICLE::_0x80E3357FDEF45C21(iParam0, 0);
	}
}

int func_92(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_93(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_93(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_94(PLAYER::PLAYER_ID(), vParam0, iParam2) > -1)
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

int func_94(int iParam0, vector3 vParam1, int iParam2)
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

bool func_95(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_96()
{
	return Global_1626536[func_17() /*603*/].f_11.f_300;
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_107[iVar0]), iVar1);
}

int func_98(vector3 vParam0, var uParam1, var uParam2)
{
	struct<28> Var0;
	
	Var0.f_3 = 1125515264;
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_7 = 1082130432;
	Var0.f_8 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 2;
	Var0.f_20 = 2;
	Var0.f_23 = 1;
	Var0.f_24 = 1;
	Var0.f_27 = 1123024896;
	Var0 = func_233();
	Var0.f_3 = 1000f;
	Var0.f_25 = 1;
	if (func_99(vParam0, 0f, 0f, 0f, func_96(), 1, uParam1, uParam2, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_99(vector3 vParam0, vector3 vParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<58> Var5;
	struct<58> Var6;
	
	bVar0 = false;
	if (uParam6->f_12)
	{
		if (uParam6->f_23)
		{
			uParam6->f_23 = 0;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (func_232() == 67)
	{
		return 0;
	}
	if (Global_2405071.f_512)
	{
		Global_2405071.f_512 = 0;
		return 0;
	}
	if (!func_231(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!Global_2405071.f_598 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_603) < func_230(0))
	{
		if (!Global_2405071.f_668 == 0)
		{
			Global_2405071.f_668 = 0;
			func_229();
			func_228();
		}
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_667)
	{
		if (!Global_2405071.f_668 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_671) < func_230(0))
			{
				return 0;
			}
			else
			{
				Global_2405071.f_668 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_669) > 30000)
		{
			Global_2405071.f_668 = 0;
		}
		if (!Global_2405071.f_668 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_671) > func_230(1))
			{
				Global_2405071.f_668 = 0;
			}
		}
	}
	if (uParam6->f_5)
	{
		if (func_222(vParam0))
		{
			if (func_221(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2405071.f_668 == 0)
	{
		if (SYSTEM::VDIST(Global_2405071.f_686, vParam0) > 50f)
		{
			return 0;
		}
	}
	PATHFIND::_0x07FB139B592FA687((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f));
	if (Global_2405071.f_668 == 0)
	{
		Global_2405071.f_673 = 0;
		Global_2405071.f_669 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405071.f_667 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_671 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405071.f_686 = { vParam0 };
		Global_2405071.f_672 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405071.f_668 = 2;
		func_220();
		func_229();
		if (!uParam6->f_25 || (((((func_219(vParam0, 1, 1133903872) && !uParam6->f_26) && !Global_2528542.f_874) && !Global_2528542.f_863) && !Global_2528542.f_871) && !Global_2528542.f_875))
		{
			func_201(vParam0, iParam2);
		}
		if (func_186(vParam0))
		{
			func_201(vParam0, iParam2);
		}
	}
	switch (Global_2405071.f_668)
	{
		case 2:
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f)))
			{
				Global_2405071.f_674 = { vParam0 };
				Global_2405071.f_677 = 0f;
				if (Global_2528542.f_874)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_2 && func_180(vParam0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_6) && !func_178(vParam0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2405071.f_674 = { vParam0 };
					Global_2405071.f_677 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("TAILGATER");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_4;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_5 = uParam6->f_3;
					Var5.f_15 = uParam6->f_5;
					Var5.f_11 = uParam6->f_6;
					Var5.f_6 = uParam6->f_7;
					Var5.f_16 = uParam6->f_8;
					Var5.f_17 = uParam6->f_9;
					Var5 = { vParam1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_11;
					Var5.f_30 = 1;
					Var5.f_48 = uParam6->f_12;
					Var5.f_56 = uParam6->f_23;
					Var5.f_57 = uParam6->f_24;
					Var5.f_49 = uParam6->f_27;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_13[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_20[iVar1];
						iVar1++;
					}
					func_126(&(Global_2405071.f_674), &(Global_2405071.f_677), &Var5);
				}
				func_124(Global_2405071.f_674, Global_2405071.f_677, iParam2, &(Global_2405071.f_665));
				Global_2405071.f_663 = 0;
				Global_2405071.f_664 = 0;
				Global_2405071.f_673++;
				Global_2405071.f_670 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2405071.f_669 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2405071.f_668 = 3;
			}
			break;
		
		case 3:
			if (Global_2405071.f_663)
			{
				if (Global_2405071.f_665 == Global_2405071.f_666)
				{
					if (Global_2405071.f_664)
					{
						if (uParam6->f_10 && !uParam6->f_9)
						{
							if (func_123(Global_2405071.f_674, Global_2405071.f_677, iParam2, 1, 1036831949))
							{
								Global_2405071.f_668 = 4;
								Global_2405071.f_690 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_121(Global_2405071.f_674, 0);
						func_120(-1);
					}
				}
				else
				{
					Global_2405071.f_663 = 0;
					Global_2405071.f_664 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_670) > 3000)
			{
				func_120(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_10 && !uParam6->f_9)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_690) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405071.f_689))
					{
						if (NETWORK::_0x4DF7CFFF471A7FB1(Global_2405071.f_689))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2405071.f_689))
							{
								if (func_119(Global_2405071.f_674, Global_2405071.f_677, iParam2, PLAYER::PLAYER_ID(), 0) || func_101(Global_2405071.f_674, Global_2405071.f_677, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_121(Global_2405071.f_674, 0);
									func_120(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_121(Global_2405071.f_674, 0);
								func_120(-1);
							}
						}
					}
					else
					{
						func_120(-1);
					}
				}
				else
				{
					func_120(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405071.f_674 = { vParam0 };
			Global_2405071.f_677 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("TAILGATER");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_4;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_5;
			Var6.f_11 = uParam6->f_6;
			Var6.f_6 = uParam6->f_7;
			Var6 = { vParam1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_11;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_12;
			Var6.f_56 = uParam6->f_23;
			Var6.f_57 = uParam6->f_24;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_13[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_20[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_27;
			func_126(&(Global_2405071.f_674), &(Global_2405071.f_677), &Var6);
			Global_2405071.f_668 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405071.f_686 = { vParam0 };
	Global_2405071.f_671 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2405071.f_511 = 0;
		*uParam4 = { Global_2405071.f_674 };
		*uParam5 = Global_2405071.f_677;
		func_100(1);
		return 1;
	}
	return 0;
}

void func_100(bool bParam0)
{
	Global_2405071.f_668 = 0;
	func_220();
	func_229();
	if (bParam0)
	{
		func_228();
	}
}

int func_101(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_311(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_118(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_113(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_112(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_102(func_111(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_102(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_110(iParam3, 1008981770))
	{
		func_103(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_109(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_104(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_104(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_107(iParam0);
		if (iVar0 != 0)
		{
			func_105(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_105(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_106(iParam0, &Global_1315802);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315802[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315802[iVar0], &(Global_1315806[iVar0 /*3*/]), &(Global_1315813[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315806[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315813[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315806[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315813[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315820[iVar0] = (Global_1315813[iVar0 /*3*/] - Global_1315806[iVar0 /*3*/]);
		Global_1315823[iVar0] = (Global_1315813[iVar0 /*3*/].f_1 - Global_1315806[iVar0 /*3*/].f_1);
		Global_1315826[iVar0] = (Global_1315813[iVar0 /*3*/].f_2 - Global_1315806[iVar0 /*3*/].f_2);
		if (Global_1315820[iVar0] > Global_1315829)
		{
			Global_1315829 = Global_1315820[iVar0];
		}
		if (Global_1315826[iVar0] > Global_1315830)
		{
			Global_1315830 = Global_1315826[iVar0];
		}
		iVar0++;
	}
	Global_1315831 = (Global_1315829 * -0.5f);
	Global_1315834 = (Global_1315829 * 0.5f);
	Global_1315831.f_1 = ((((0.5f * Global_1315823[0]) + Global_1315823[1]) + Global_1315802.f_3) * -1f);
	Global_1315834.f_1 = (0.5f * Global_1315823[0]);
	Global_1315831.f_2 = (Global_1315826[0] * -0.5f);
	Global_1315834.f_2 = (Global_1315826[0] * 0.5f);
	*uParam1 = { Global_1315831 };
	*uParam2 = { Global_1315834 };
}

void func_106(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_108(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_109(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_110(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_104(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

Vector3 func_111(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_112(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_102(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_104(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_109(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_109(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_109(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_102(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_112(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (func_117(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_116(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_115(iParam0);
	if (!iVar0 == func_89())
	{
		if (iVar0 == func_115(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 != func_89())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_89();
}

struct<13> func_116(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_117(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2505680 = { func_116(iParam0) };
		Global_2505693 = { func_116(iParam1) };
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

int func_118(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_311(iVar1, 0, 1) && func_311(iParam3, 0, 1))
			{
				if (Global_2417757.f_261[iVar0])
				{
					if (func_102(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_102(func_111(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417757.f_261[iVar0])
			{
				if (func_102(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_311(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_102(func_111(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_120(int iParam0)
{
	if (Global_2405071.f_673 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_672) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405071.f_673 < iParam0))
		{
			Global_2405071.f_668 = 2;
		}
		else
		{
			Global_2405071.f_668 = 5;
		}
	}
	else
	{
		Global_2405071.f_668 = 5;
	}
}

void func_121(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	if (iParam1 == 0 && func_122(vParam0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(vParam0) > 0f)
	{
		vVar0 = { Global_2405071.f_2724[iParam1 /*3*/] };
		Global_2405071.f_2724[iParam1 /*3*/] = { vParam0 };
		func_121(vVar0, iParam1 + 1);
	}
}

int func_122(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405071.f_2724[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123(vector3 vParam0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_229();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405071.f_678[iVar3] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_103(vParam0, fParam1, iParam2, &vVar0, &vVar1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = MISC::ABSF((vVar0.z - vVar1.z));
					vVar0.z = (vVar0.z + ((fVar4 * 0.5f) - 2f));
					vVar1.z = (vVar1.z + (fVar4 * 0.5f));
				}
				Global_2405071.f_678[iVar3] = NETWORK::_0x2B1C623823DB0D9D(vVar0, vVar1, fParam4);
				Global_2405071.f_682[iVar3] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2405071.f_689 = Global_2405071.f_678[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_124(vector3 vParam0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_125(&vParam0, &uParam1, &iParam2);
	Var0 = 200664577;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_29(1, 1));
}

int func_125(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	return iVar1;
}

void func_126(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		while (func_175(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_127(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_127(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_171(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_166(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412458.f_162 = 0;
	Global_2412458.f_163 = 0;
	Global_2412458.f_164 = -99;
	Global_2412458.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412458[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412458.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_107(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412458.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412458.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_159(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_156(vVar1))
									{
										vVar1 = { func_151(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_150(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_146(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_166(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_145(vVar1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_171(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_144(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_180(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_180(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_101(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_136(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412458.f_162)
																										{
																											Global_2412458[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412458.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412458.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412458.f_162 == 0)
																									{
																										Global_2412458[0 /*3*/] = { vVar1 };
																										Global_2412458.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412458.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412458[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_135(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412458.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412458.f_162++;
																									if (Global_2412458.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412458.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412458[Global_2412458.f_162 /*3*/] = { vVar1 };
																									Global_2412458.f_121[Global_2412458.f_162] = fVar2;
																									Global_2412458.f_162++;
																									if (func_146(vVar1, uParam2))
																									{
																										Global_2412458.f_163++;
																									}
																									if (Global_2412458.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412458.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412458.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412458[0 /*3*/] };
						*uParam1 = Global_2412458.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412458.f_163 > 0 && !Global_2412458.f_163 == Global_2412458.f_162)
						{
							func_133(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412458.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412458[0 /*3*/] };
						uVar26 = Global_2412458.f_121[0];
						Global_2412458[0 /*3*/] = { Global_2412458[iVar24 /*3*/] };
						Global_2412458.f_121[0] = Global_2412458.f_121[iVar24];
						Global_2412458[iVar24 /*3*/] = { vVar25 };
						Global_2412458.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412458[0 /*3*/] };
						*uParam1 = Global_2412458.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_132(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_171(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_166(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_128(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412458.f_164 = iVar6;
	}
	return 0;
}

void func_128(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_129(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_129(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_131(vParam0, fParam1, iParam2, iParam3, 0) || func_130(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_130(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_102(vParam0, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_311(iVar2, 0, 1) && func_311(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_311(iVar1, 0, 1) && func_311(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_311(iVar1, 0, 1) && func_311(iParam2, 0, 1))
				{
					if (Global_2417757.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_111(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417757.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_311(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_111(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_132(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_151(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_156(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_133(int iParam0, var uParam1)
{
	if (!func_146(Global_2412458[iParam0 /*3*/], uParam1))
	{
		Global_2412458.f_162 = (Global_2412458.f_162 - 1);
		func_134(iParam0);
		if (Global_2412458.f_162 > Global_2412458.f_163)
		{
			func_133(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_133(iParam0 + 1, uParam1);
	}
}

void func_134(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412458[iParam0 /*3*/] = { Global_2412458[iParam0 + 1 /*3*/] };
			Global_2412458.f_121[iParam0] = Global_2412458.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_135(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412458[iParam2 /*3*/] };
	uVar1 = Global_2412458.f_121[iParam2];
	Global_2412458[iParam2 /*3*/] = { vParam0 };
	Global_2412458.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412458.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_135(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_136(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_137(iVar3))
		{
			vVar1 = { func_111(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_137(int iParam0)
{
	if (func_311(iParam0, 0, 1))
	{
		if (!func_142(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_139(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_138(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_139(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_113(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_138(int iParam0, int iParam1, int iParam2)
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

int func_139(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_140(iParam0))
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

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_142(int iParam0)
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_143())
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

bool func_143()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_144(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_112(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_112(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_145(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_119(vParam0, fParam1, iParam2, iParam3, iParam4) || func_178(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_146(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_149(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_147(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_147(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_148(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_148(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_149(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

int func_150(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_139(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_4456448.f_61781 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_61781)
			{
				if (Global_4456448.f_61782[iVar0 /*80*/].f_7 != 0)
				{
					if (func_102(vParam0, Global_4456448.f_61782[iVar0 /*80*/], Global_4456448.f_61782[iVar0 /*80*/].f_6, Global_4456448.f_61782[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_58131 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_58131)
			{
				if (Global_4456448.f_58134[iVar0 /*151*/].f_16 != 0)
				{
					if (func_102(vParam0, Global_4456448.f_58134[iVar0 /*151*/], Global_4456448.f_58134[iVar0 /*151*/].f_3, Global_4456448.f_58134[iVar0 /*151*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_83453 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_83453)
			{
				if (Global_4456448.f_83457[iVar0 /*250*/].f_12 != 0)
				{
					if (func_102(vParam0, Global_4456448.f_83457[iVar0 /*250*/], Global_4456448.f_83457[iVar0 /*250*/].f_3, Global_4456448.f_83457[iVar0 /*250*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969025.f_255 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969025.f_255)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969025.f_220[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969025.f_220[iVar0], 0))
				{
					if (func_102(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969025.f_220[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969025.f_220[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969025.f_220[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969025.f_253 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969025.f_253)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969025.f_118[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969025.f_118[iVar0], 0))
				{
					if (func_102(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969025.f_118[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969025.f_118[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969025.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_151(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_154(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_153(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_152(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_152(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_154(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_152(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_152(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_152(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_104(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_153(vector3 vParam0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_109(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_155(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_155(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_156(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_158(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412165[iVar1])
	{
		if (func_157(vParam0, &(Global_2411462[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412165[8])
	{
		if (func_157(vParam0, &(Global_2411462[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_157(vector3 vParam0, var uParam1)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_158(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411453[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411453[1])
	{
		if (Param0 < Global_2411457[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411453[2])
	{
		if (Param0 < Global_2411457[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411457[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411457[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_159(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_165(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_164(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar2);
			if (func_160(vVar1, &uVar0) || func_165(vVar1))
			{
				vVar1 = { *uParam0 };
				func_164(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_160(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_163())
	{
		return 0;
	}
	iVar1 = func_162();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_161(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_161(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_149(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_147(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_162()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_163()
{
	return Global_1671295.f_163;
}

void func_164(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_109(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_109(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_165(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_149(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_147(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_167(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_167(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_164(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_170(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_168(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_149(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_147(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

void func_168(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_169(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_155(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_155(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_169(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_169(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_155(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_155(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

Vector3 func_169(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_170(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

int func_171(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_222(vParam0))
	{
		if (func_174(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_172(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_122(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_164(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_172(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_160(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_173(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_160(vVar2, &uVar1) || func_165(vVar2))
			{
				vVar2 = { *uParam0 };
				func_173(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

void func_173(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_167(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_167(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_167(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_164(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_170(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_168(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_174(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409968[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409968[iVar0 /*17*/].f_16))
			{
				if (func_161(*uParam0, &(Global_2409968[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409968[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409968[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_173(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_174(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_173(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_171(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_166(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412458.f_162 = 0;
		Global_2412458.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412458[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412458.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_176(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1742)
		{
			iVar1 = Global_2405071.f_2148[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1743[iVar1 /*4*/] };
				fVar3 = Global_2405071.f_1743[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_145(vVar2, fVar3, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_171(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_144(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_180(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_180(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_101(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_136(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412458.f_162)
															{
																Global_2412458[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412458.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412458.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412458.f_162 == 0)
														{
															Global_2412458[0 /*3*/] = { vVar2 };
															Global_2412458.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412458.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412458[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_135(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412458.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412458.f_162++;
														if (Global_2412458.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1742;
															}
															else if (Global_2412458.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1742;
															}
														}
													}
													else
													{
														Global_2412458[Global_2412458.f_162 /*3*/] = { vVar2 };
														Global_2412458.f_121[Global_2412458.f_162] = fVar3;
														Global_2412458.f_162++;
														if (Global_2412458.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1742;
															}
															else if (Global_2412458.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1742;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412458.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412458[0 /*3*/] };
				*uParam1 = Global_2412458.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412458.f_163 > 0 && !Global_2412458.f_163 == Global_2412458.f_162)
				{
					func_133(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412458.f_162);
				vVar13 = { Global_2412458[0 /*3*/] };
				uVar14 = Global_2412458.f_121[0];
				Global_2412458[0 /*3*/] = { Global_2412458[iVar12 /*3*/] };
				Global_2412458.f_121[0] = Global_2412458.f_121[iVar12];
				Global_2412458[iVar12 /*3*/] = { vVar13 };
				Global_2412458.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412458[0 /*3*/] };
				*uParam1 = Global_2412458.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_176(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1742)
	{
		uVar1 = func_177(vParam0, fVar0, &fVar0);
		Global_2405071.f_2148[iVar2] = uVar1;
		iVar2++;
	}
}

int func_177(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1742)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405071.f_1743[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_178(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_179(vParam0, iParam2, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_112(vParam0, fParam1, iParam2, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_311(iVar2, 0, 1) && func_311(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_179(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_110(iParam1, 1008981770);
	fVar1 = func_110(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405071.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam12 > 0f)
	{
		if (func_185(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_181(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_181(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_311(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_182(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_311(iVar1, 1, 1))
		{
			if (!func_30(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_118(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_182(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_182(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_184() && Global_1589819[iVar0 /*818*/].f_789) && !func_183(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_111(iParam0);
}

int func_183(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_184()
{
	return Global_2448756.f_16;
}

int func_185(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_311(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_118(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_113(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_111(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(vector3 vParam0)
{
	var uVar0;
	
	if (Global_2528542.f_874 && func_187(vParam0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_187(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_200(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_188(iVar1))
			{
				if (func_200(Global_1671295.f_177[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_199(iParam0);
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_258 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
	if (iVar1 != func_89())
	{
		if (Global_1589819[iVar1 /*818*/].f_273.f_258 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_5 == iParam0)
	{
		return 1;
	}
	if (func_198(PLAYER::PLAYER_ID(), 0) || (func_195(PLAYER::PLAYER_ID()) && func_193(func_194(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_192(PLAYER::PLAYER_ID()) || (func_195(PLAYER::PLAYER_ID()) && func_193(func_194(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_191(PLAYER::PLAYER_ID()) || (func_195(PLAYER::PLAYER_ID()) && func_193(func_194(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_190(PLAYER::PLAYER_ID()) || (func_195(PLAYER::PLAYER_ID()) && func_193(func_194(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_189(PLAYER::PLAYER_ID()) || (func_195(PLAYER::PLAYER_ID()) && func_193(func_194(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_311(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_193(Global_2424047[iParam0 /*416*/].f_309.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_311(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_193(Global_2424047[iParam0 /*416*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_311(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_89())
			{
				return func_193(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_311(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_89())
			{
				return func_193(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)
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

int func_194(int iParam0)
{
	if (iParam0 != func_89() && func_311(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_195(int iParam0)
{
	if (iParam0 != func_89() && func_311(iParam0, 1, 1))
	{
		if (func_197(iParam0) && !func_196(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if (iParam0 != func_89() && func_311(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_89() && func_311(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_198(int iParam0, bool bParam1)
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
	if (iParam0 != func_89())
	{
		if (func_311(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_89())
			{
				return func_193(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_200(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409968[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_161(vParam0, &(Global_2409968[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_201(vector3 vParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405071.f_45.f_316)
	{
		return;
	}
	if (!func_218())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_217(vParam0);
		if (iVar1 > -1)
		{
			func_228();
			switch (iVar1)
			{
				case 0:
					func_216(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_216(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_216(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_216(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_216(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_216(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_216(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_216(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_216(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_216(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_216(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_216(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_216(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_216(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_216(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_216(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_216(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_216(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_216(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_216(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_216(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_216(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_216(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_216(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_216(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_216(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_216(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_216(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_216(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_216(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_216(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_216(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_216(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_216(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_216(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_216(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_216(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_216(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_216(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_216(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_216(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_216(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_216(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_216(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_216(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_216(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_216(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_216(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_216(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_216(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_216(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_216(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_216(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_214(78);
					break;
				
				case 11:
					func_214(79);
					break;
				
				case 12:
					func_214(82);
					break;
				
				case 13:
					func_214(81);
					break;
				
				case 14:
					func_214(73);
					break;
				
				case 15:
					func_216(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_216(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_216(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_216(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_214(75);
					break;
				
				case 17:
					func_214(76);
					break;
				
				case 18:
					func_214(77);
					break;
				
				case 19:
					func_216(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_216(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_216(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_216(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_214(80);
					break;
				
				case 21:
				case 25:
					func_214(87);
					break;
				
				case 22:
				case 26:
					func_214(88);
					break;
				
				case 23:
				case 27:
					func_214(89);
					break;
				
				case 24:
				case 28:
					func_214(90);
					break;
				
				case 29:
				case 30:
					if (func_213(iParam1))
					{
						func_214(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_25);
					}
					break;
				
				case 31:
					func_216(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_216(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_216(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_216(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_216(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_216(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_216(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_216(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_216(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_216(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_216(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_216(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_216(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_216(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_216(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_216(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_216(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_216(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_216(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_216(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_216(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_216(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_216(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_216(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_216(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_216(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_216(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_216(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_216(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_216(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_216(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_216(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_216(-194.254f, -2018.756f, 26.62f, 75f);
					func_216(-186.956f, -2031.369f, 26.62f, 338f);
					func_216(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_216(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_216(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_216(-233.372f, -2089.601f, 26.62f, 304f);
					func_216(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_216(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_216(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_216(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_216(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_216(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_216(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_216(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_216(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_216(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_216(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_216(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_216(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_216(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_216(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_216(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_210(vParam0, &iVar2, &iVar3) || (func_187(vParam0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))))
		{
			func_228();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405071.f_511 = 1;
				}
				if (!iVar3[iVar0] && func_209(iVar2[iVar0], -1))
				{
					if (func_213(iParam1))
					{
						func_214(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_208(PLAYER::PLAYER_PED_ID()) || func_207(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
					{
						if (func_206(iParam1))
						{
							func_205(iVar2[iVar0]);
						}
						else if (func_204(iParam1))
						{
							func_203(iVar2[iVar0]);
							func_205(iVar2[iVar0]);
						}
						else
						{
							func_203(iVar2[iVar0]);
							func_205(iVar2[iVar0]);
						}
					}
					else
					{
						func_202(iVar2[iVar0]);
					}
				}
				else
				{
					func_214(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_202(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			func_216(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_216(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_216(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_216(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_216(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_216(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_216(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_216(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_216(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_216(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_216(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_216(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_216(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_216(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_216(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_216(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_216(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_216(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_216(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_216(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_216(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_216(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_216(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_216(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_216(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_216(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_216(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_216(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_216(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_216(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_216(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_216(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_216(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_216(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_216(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_216(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_216(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_216(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_216(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_216(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_216(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_216(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_216(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_216(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_216(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_216(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_216(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_216(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_216(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_216(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_216(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_216(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_216(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_216(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_216(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_216(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_216(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_216(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_216(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_216(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_216(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_216(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_216(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_216(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_216(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_216(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_216(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_216(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_216(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_216(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_216(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_216(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_216(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_216(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_216(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_216(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_216(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_216(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_216(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_216(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_216(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_216(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_216(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_216(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_216(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_216(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_216(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_216(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_216(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_216(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_216(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_216(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_216(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_216(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_216(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_216(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_216(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_216(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_216(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_216(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_216(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_216(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_216(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_216(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_216(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_216(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_216(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_216(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_216(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_216(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_216(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_216(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_216(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_216(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_216(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_216(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_216(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_216(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_216(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_216(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_216(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_216(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_216(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_216(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_216(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_216(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_216(142.7427f, -2536.147f, 5f, 205.0002f);
			func_216(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_216(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_216(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_216(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_216(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_216(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_216(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_216(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_216(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_216(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_216(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_216(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_216(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_216(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_216(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_216(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_216(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_216(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_216(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_216(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_216(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_216(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_216(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_216(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_216(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_216(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_216(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_216(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_216(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_216(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_216(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_216(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_216(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_216(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_216(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_216(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_216(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_216(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_216(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_216(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_216(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_216(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_216(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_216(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_216(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_216(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_216(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_216(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_216(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_216(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_216(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_216(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_216(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_216(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_216(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_216(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_216(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_216(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_216(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_216(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_216(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_216(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_216(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_216(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_216(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_216(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_216(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_216(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_216(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_216(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_216(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_216(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_216(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_216(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_216(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_216(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_216(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_216(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_216(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_216(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_216(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_216(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_216(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_216(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_216(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_216(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_216(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_216(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_216(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_216(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_216(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_216(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_216(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_216(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_216(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_216(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_216(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_216(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_216(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_216(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_216(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_216(-1823.414f, 3092.762f, 31.843f, 330f);
			func_216(-1819.045f, 3100.435f, 31.845f, 330f);
			func_216(-1833.313f, 3075.722f, 31.838f, 330f);
			func_216(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_216(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_216(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_216(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_216(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_216(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_216(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_216(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_216(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_216(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_216(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_216(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_216(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_216(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_216(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_216(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_216(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_216(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_216(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_216(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_216(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_216(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_216(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_216(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_216(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_216(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_216(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_216(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_216(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_216(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_216(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_216(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_216(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_216(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_216(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_216(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_216(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_216(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_216(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_216(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_216(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_216(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_216(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_216(1231.279f, 2910.881f, 43.3085f, 12f);
				func_216(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_216(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_216(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_216(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_216(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_216(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_216(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_216(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_216(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_216(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_216(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_216(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_216(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_216(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_216(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_216(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_216(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_216(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_216(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_216(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_216(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_216(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_216(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_216(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_216(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_216(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_216(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_216(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_216(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_216(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_216(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_216(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_216(3.855f, 2672.388f, 78.437f, 319.2f);
				func_216(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_216(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_216(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_216(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_216(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_216(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_216(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_216(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_216(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_216(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_216(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_216(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_216(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_216(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_216(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_216(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_216(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_216(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_216(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_216(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_216(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_216(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_216(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_216(102.851f, 2688.009f, 51.732f, 224f);
				func_216(109.815f, 2681.012f, 51.112f, 224f);
				func_216(116.355f, 2674.26f, 50.529f, 224f);
				func_216(125.138f, 2665.98f, 49.8f, 224f);
				func_216(132.228f, 2659.865f, 49.26f, 228.4f);
				func_216(139.354f, 2653.536f, 48.737f, 228.4f);
				func_216(88.512f, 2702.995f, 53.042f, 224.199f);
				func_216(81.565f, 2710.357f, 53.67f, 224.199f);
				func_216(75.156f, 2716.981f, 54.223f, 224.199f);
				func_216(68.442f, 2723.806f, 54.775f, 226.199f);
				func_216(61.449f, 2730.606f, 55.308f, 226.199f);
				func_216(53.702f, 2738.167f, 55.855f, 226.199f);
				func_216(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_216(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_216(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_216(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_216(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_216(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_216(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_216(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_216(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_216(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_216(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_216(2714.633f, 3918.283f, 42.938f, 16f);
				func_216(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_216(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_216(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_216(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_216(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_216(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_216(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_216(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_216(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_216(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_216(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_216(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_216(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_216(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_216(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_216(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_216(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_216(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_216(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_216(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_216(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_216(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_216(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_216(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_216(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_216(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_216(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_216(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_216(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_216(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_216(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_216(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_216(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_216(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_216(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_216(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_216(3374.923f, 5520.177f, 20.3207f, 86f);
				func_216(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_216(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_216(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_216(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_216(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_216(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_216(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_216(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_216(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_216(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_216(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_216(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_216(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_216(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_216(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_216(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_216(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_216(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_216(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_216(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_216(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_216(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_216(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_216(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_216(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_216(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(43.848f, 6845.657f, 13.379f, 247.2f);
				func_216(50.379f, 6861.146f, 15.105f, 247.2f);
				func_216(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_216(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_216(55.806f, 6875.081f, 14.824f, 247.2f);
				func_216(11.616f, 6877.079f, 11.466f, 247.2f);
				func_216(18.954f, 6891.633f, 11.37f, 247.2f);
				func_216(26.68f, 6907.587f, 11.869f, 247.2f);
				func_216(7.479f, 6907.895f, 12.024f, 247.2f);
				func_216(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_216(35.591f, 6836.608f, 13.288f, 274.4f);
				func_216(36.028f, 6830.135f, 13.801f, 270.8f);
				func_216(35.114f, 6823.884f, 14.527f, 260.8f);
				func_216(48.779f, 6838.693f, 14.337f, 273.6f);
				func_216(56.738f, 6821.8f, 15.244f, 244.8f);
				func_216(48.377f, 6825.895f, 14.656f, 249.8f);
				func_216(49.11f, 6831.439f, 13.991f, 274.8f);
				func_216(53.544f, 6818.275f, 16.342f, 243f);
				func_216(46.162f, 6821.945f, 15.483f, 249.8f);
				func_216(60.129f, 6836.8f, 15.605f, 269.6f);
				func_216(40.88f, 6802.952f, 20.113f, 242.6f);
				func_216(48.203f, 6799.134f, 20.897f, 244.4f);
				func_216(70.449f, 6809.271f, 16.846f, 243f);
				func_216(61.436f, 6814.266f, 16.71f, 244.2f);
				func_216(56.142f, 6793.458f, 19.806f, 242.6f);
				func_216(65.759f, 6791.12f, 18.433f, 276.4f);
				func_216(77.305f, 6805.391f, 18.558f, 245.6f);
				func_216(85.893f, 6800.243f, 18.535f, 249.8f);
				func_216(56.85f, 6780.582f, 18.822f, 297.999f);
				func_216(65.636f, 6784.669f, 18.789f, 293.799f);
				func_216(74.121f, 6788.498f, 18.739f, 293.799f);
				func_216(97.779f, 6796.32f, 19.02f, 276.799f);
				func_216(106.76f, 6796.983f, 18.914f, 272.599f);
				func_216(112.387f, 6802.858f, 18.994f, 210.599f);
				func_216(117.58f, 6802.644f, 18.663f, 209.399f);
				func_216(122.481f, 6802.693f, 18.468f, 209.399f);
				func_216(127.182f, 6802.686f, 18.218f, 209.399f);
				func_216(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_216(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_216(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_216(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_216(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_216(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_216(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_216(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_216(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_216(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_216(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_216(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_216(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_216(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_216(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_216(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_216(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_216(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_216(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_216(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_216(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_216(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_216(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_216(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_216(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_216(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_216(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_216(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_216(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_216(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_216(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_216(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_216(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_216(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_216(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_216(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_216(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_216(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_216(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_216(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_216(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_216(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_216(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_216(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_216(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_216(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_216(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_216(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_216(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_216(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_216(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_216(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_216(30.027f, 3292.351f, 38.604f, 140.199f);
				func_216(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_216(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_216(23.897f, 3283.152f, 39.381f, 145.399f);
				func_216(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_216(18.723f, 3274.025f, 40.054f, 155.799f);
				func_216(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_216(36.958f, 3298.847f, 38.001f, 127.799f);
				func_216(54.165f, 3311.582f, 36.517f, 303.799f);
				func_216(61.607f, 3317.105f, 35.916f, 306.999f);
				func_216(68.994f, 3323.129f, 35.364f, 308.199f);
				func_216(76.266f, 3329.467f, 34.805f, 311.399f);
				func_216(82.757f, 3335.915f, 34.344f, 316.598f);
				func_216(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_216(14.664f, 3263.688f, 40.931f, 160.398f);
				func_216(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_216(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_216(89.575f, 3343.311f, 33.932f, 318.398f);
				func_216(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_216(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_216(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_216(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_216(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_216(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_216(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_216(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_216(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_216(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_216(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_216(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_216(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_216(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_216(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_216(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_216(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_216(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_216(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_216(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_216(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_216(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_216(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_216(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_216(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_216(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_216(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_216(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_216(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_216(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_216(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_216(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_216(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_216(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_216(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_216(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_216(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_216(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_216(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_216(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_216(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_216(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_58 == 0)
			{
				func_216(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_216(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_216(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_216(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_216(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_216(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_216(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_216(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_216(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_216(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_216(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_216(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_216(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_216(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_216(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_216(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_216(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_216(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_216(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_216(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_216(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_216(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_216(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_216(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_216(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_216(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_216(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_216(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_216(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_216(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_216(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_216(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_216(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_216(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_216(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_216(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_216(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_216(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_216(894.7754f, -5.7101f, 77.7645f, 147.3987f);
			func_216(898.1774f, -8.022f, 77.7645f, 147.3987f);
			func_216(901.4395f, -10.0981f, 77.7645f, 147.3987f);
			func_216(904.8928f, -12.1763f, 77.7645f, 147.3987f);
			func_216(908.3025f, -14.3611f, 77.7645f, 147.3987f);
			func_216(911.6278f, -16.5696f, 77.7645f, 147.3987f);
			func_216(877.9953f, 4.7941f, 77.7646f, 147.3987f);
			func_216(875.0606f, 6.5824f, 77.7646f, 147.3987f);
			func_216(871.9518f, 8.3891f, 77.7646f, 147.3987f);
			func_216(872.1582f, -9.1406f, 77.7646f, 237.3985f);
			func_216(870.3383f, -12.0458f, 77.7646f, 237.3985f);
			func_216(868.5498f, -15.0397f, 77.7646f, 237.3985f);
			func_216(866.7946f, -18.0153f, 77.7646f, 237.3985f);
			func_216(865.0072f, -20.847f, 77.7644f, 237.3985f);
			func_216(889.9966f, -20.3069f, 77.7647f, 237.3985f);
			func_216(888.0664f, -23.2859f, 77.7647f, 237.3985f);
			func_216(886.1635f, -26.3503f, 77.7647f, 237.3985f);
			func_216(884.2999f, -29.2902f, 77.7644f, 237.3985f);
			func_216(882.4862f, -32.143f, 77.7644f, 237.3985f);
			func_216(882.4534f, -15.6437f, 77.7646f, 57.5983f);
			func_216(880.5648f, -18.5331f, 77.7646f, 57.5983f);
			func_216(878.6404f, -21.423f, 77.7644f, 57.5983f);
			func_216(876.8666f, -24.3657f, 77.7644f, 57.5983f);
			func_216(875.1526f, -27.2811f, 77.7644f, 57.5983f);
			func_216(900.7526f, -27.1233f, 77.7647f, 57.5983f);
			func_216(898.8896f, -30.0584f, 77.7647f, 57.5983f);
			func_216(897.0739f, -32.9112f, 77.7647f, 57.5983f);
			func_216(895.1914f, -35.8687f, 77.7647f, 57.5983f);
			func_216(893.3525f, -38.7578f, 77.7647f, 57.5983f);
			func_216(931.2778f, -28.1472f, 77.7647f, 147.798f);
			func_216(934.1285f, -30.0001f, 77.7647f, 147.798f);
			func_216(937.0286f, -32.065f, 77.7647f, 147.798f);
			break;
		
		default:
			break;
	}
}

void func_203(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_216(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_216(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_216(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_216(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_216(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_216(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_216(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_216(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_216(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_216(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_216(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_216(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_216(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_216(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_216(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_216(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_216(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_216(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_216(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_216(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_216(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_216(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_216(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_216(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_216(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_216(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_216(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_216(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_216(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_216(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_216(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_216(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_216(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_216(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_216(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_216(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_216(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_216(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_216(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_216(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_216(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_216(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_216(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_216(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_216(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_216(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_216(-1356.991f, -3242.228f, 12.945f, 330f);
			func_216(-1369.313f, -3234.758f, 12.945f, 330f);
			func_216(-1381.751f, -3227.408f, 12.945f, 330f);
			func_216(-1394.302f, -3220.021f, 12.945f, 330f);
			func_216(-1354.339f, -3223.129f, 12.945f, 330f);
			func_216(-1366.302f, -3215.809f, 12.945f, 330f);
			func_216(-1378.492f, -3208.645f, 12.945f, 330f);
			func_216(-1350.322f, -3203.405f, 12.945f, 330f);
			func_216(-1362.684f, -3196.451f, 12.945f, 330f);
			func_216(-1347.089f, -3182.69f, 12.945f, 330f);
			func_216(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_216(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_216(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_216(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_216(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_216(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_216(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_216(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_216(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_216(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_216(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_216(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_216(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_216(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_216(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_216(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_216(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_216(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_216(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_216(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_216(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_216(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_216(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_216(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_216(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_216(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_216(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_216(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_216(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_216(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_216(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_216(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_216(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_216(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_216(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_216(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_216(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_216(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_216(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_216(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_216(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_216(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_216(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_216(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_216(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_216(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_216(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_216(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_216(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_216(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_216(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_216(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_216(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_216(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_216(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_216(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_216(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_216(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_216(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_216(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_216(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_216(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_216(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_216(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_216(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_216(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_216(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_216(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_216(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_216(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_216(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_216(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_216(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_216(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_216(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_216(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_216(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_216(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_216(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_216(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_216(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_216(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_216(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_216(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_216(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_216(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_216(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_216(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_216(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_216(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_216(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_216(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_216(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_216(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_216(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_216(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_216(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_216(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_216(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_216(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_216(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_216(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_216(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_216(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_216(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_216(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_216(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_216(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_216(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_216(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_216(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_216(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_216(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_216(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_216(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_216(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_216(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_216(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_216(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_216(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_216(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_216(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_216(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_216(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_216(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_216(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_216(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_216(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_216(-2484.323f, 3249.294f, 31.828f, 151f);
			func_216(-2495.313f, 3255.746f, 31.828f, 151f);
			func_216(-2472.644f, 3242.684f, 31.828f, 151f);
			func_216(-2506.313f, 3262.27f, 31.823f, 151f);
			func_216(-2461.494f, 3235.93f, 31.828f, 151f);
			func_216(-2505.602f, 3238.049f, 31.828f, 151f);
			func_216(-2481.937f, 3224.8f, 31.828f, 151f);
			func_216(-2516.813f, 3244.266f, 31.823f, 151f);
			func_216(-2470.03f, 3217.899f, 31.828f, 151f);
			func_216(-2493.933f, 3231.308f, 31.828f, 151f);
			func_216(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_216(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_216(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_216(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_216(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_216(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_216(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_216(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_216(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_216(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_216(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_216(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_216(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_216(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_216(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_216(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_216(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_216(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_216(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_216(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_216(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_216(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_216(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_216(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_216(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_216(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_216(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_216(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_216(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_216(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_216(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_216(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_216(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_216(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_216(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_216(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICROLIGHT"):
		case joaat("HAVOK"):
		case joaat("SEABREEZE"):
		case joaat("ROGUE"):
		case joaat("PYRO"):
		case joaat("BUZZARD"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("VOLATUS"):
		case joaat("CUBAN800"):
		case joaat("BESRA"):
		case joaat("DUSTER"):
		case joaat("STUNT"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("VESTRA"):
		case joaat("LAZER"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("STARLING"):
			return 1;
		
		default:
	}
	return 0;
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_216(-947.712f, -3367.704f, 12.944f, 60f);
			func_216(-904.692f, -3293.072f, 12.944f, 60f);
			func_216(-863.71f, -3221.978f, 12.944f, 60f);
			func_216(-966.418f, -3162.773f, 12.944f, 60f);
			func_216(-1007.435f, -3233.93f, 12.944f, 60f);
			func_216(-1050.455f, -3308.559f, 12.944f, 60f);
			func_216(-1145.673f, -3253.456f, 12.944f, 60f);
			func_216(-1098.386f, -3181.428f, 12.944f, 60f);
			func_216(-1060.474f, -3108.903f, 12.944f, 60f);
			func_216(-1155.391f, -3053.632f, 12.944f, 60f);
			func_216(-1196.114f, -3125.146f, 12.948f, 60f);
			func_216(-1235.552f, -3201.86f, 12.944f, 60f);
			func_216(-1344.446f, -3139.177f, 12.944f, 60f);
			func_216(-1301.308f, -3064.341f, 12.944f, 60f);
			func_216(-1260.135f, -2992.912f, 12.944f, 60f);
			func_216(-1364.244f, -2932.9f, 12.98f, 60f);
			func_216(-1405.284f, -3004.108f, 12.96f, 60f);
			func_216(-1448.29f, -3078.72f, 12.95f, 60f);
			func_216(-1535.732f, -3028.318f, 12.945f, 60f);
			func_216(-1492.639f, -2953.558f, 12.945f, 60f);
			func_216(-1451.506f, -2882.2f, 12.944f, 60f);
			func_216(-1553.927f, -2823.12f, 13.002f, 60f);
			func_216(-1595.097f, -2894.571f, 12.944f, 60f);
			func_216(-1637.836f, -2968.714f, 12.945f, 60f);
			func_216(-1740.971f, -2911.484f, 12.944f, 330f);
			func_216(-1696.293f, -2833.978f, 12.944f, 330f);
			func_216(-1651.502f, -2756.273f, 12.945f, 330f);
			func_216(-1588.258f, -2647.575f, 12.944f, 330f);
			func_216(-1536.862f, -2681.378f, 12.945f, 330f);
			func_216(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_216(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_216(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_216(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_216(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_216(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_216(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_216(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_216(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_216(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_216(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_216(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_216(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_216(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_216(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_216(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_216(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_216(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_216(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_216(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_216(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_216(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_216(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_216(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_216(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_216(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_216(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_216(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_216(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_216(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_216(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HYDRA"):
		case joaat("DODO"):
		case joaat("MAMMATUS"):
		case joaat("annihilator"):
		case joaat("TULA"):
		case joaat("HUNTER"):
		case joaat("MOGUL"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("SHAMAL"):
		case joaat("SAVAGE"):
		case joaat("LUXOR"):
		case joaat("LUXOR2"):
		case joaat("NIMBUS"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("VALKYRIE"):
		case joaat("TITAN"):
		case joaat("SKYLIFT"):
		case joaat("MILJET"):
		case joaat("BOMBUSHKA"):
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

int func_207(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
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

int func_210(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 125)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049815[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049815[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_188(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_211(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1671295.f_177[iVar0 /*3*/], Global_1671295.f_177[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_212(iParam0);
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_265 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
	if (iVar1 != func_89())
	{
		if (Global_1589819[iVar1 /*818*/].f_273.f_265 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_5 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_213(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_216(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_216(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_216(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_216(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_216(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_216(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_216(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_216(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_216(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_216(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_216(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_216(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_216(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_216(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_216(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_216(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_216(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_216(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_216(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_216(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_216(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_216(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_216(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_216(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_216(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_216(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_216(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_216(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_216(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_216(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_216(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_216(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_216(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_216(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_216(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_216(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_215())
			{
				func_216(-1608.297f, -556.875f, 33.406f, 310f);
				func_216(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_216(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_216(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_216(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_216(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_216(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_216(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_216(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_216(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_216(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_216(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_215())
			{
				func_216(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_216(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_216(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_216(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_216(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_216(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_216(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_216(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_216(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_216(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_216(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_216(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_215())
			{
				func_216(-102.737f, -597.379f, 35.053f, 160.999f);
				func_216(-97.793f, -589.568f, 35.082f, 134.799f);
				func_216(-110.357f, -619.402f, 35.055f, 160.599f);
				func_216(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_216(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_216(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_216(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_216(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_216(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_216(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_216(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_216(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_215())
			{
				func_216(-59.349f, -779.238f, 43.134f, 228.398f);
				func_216(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_216(-65.212f, -772.66f, 43.151f, 219.398f);
				func_216(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_216(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_216(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_216(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_216(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_216(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_216(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_216(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_216(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_216(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_216(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_216(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_216(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_216(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_216(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_216(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_216(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_216(-1464.5f, -927.9f, 9f, 296.7991f);
			func_216(-1466f, -926.1f, 9f, 296.7991f);
			func_216(-1467.9f, -924.7f, 9f, 296.7991f);
			func_216(-1469.7f, -923.7f, 9f, 296.7991f);
			func_216(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_216(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_216(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_216(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_216(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_216(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_216(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_216(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_216(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_216(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_216(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_216(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_216(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_216(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_216(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_216(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_216(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_216(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_216(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_216(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_216(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_216(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_216(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_216(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_216(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_216(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_216(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_216(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_216(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_216(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_216(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_216(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_216(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_216(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_216(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_216(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_216(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_216(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_216(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_216(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_216(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_216(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_216(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_216(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_216(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_216(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_216(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_216(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_216(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_216(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_216(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_216(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_216(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_216(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_216(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_216(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_216(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_216(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_216(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_216(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_216(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_216(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_216(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_216(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_216(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_216(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_216(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_216(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_216(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_216(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_216(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_216(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_216(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_216(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_216(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_216(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_216(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_216(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_216(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_216(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_216(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_216(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_216(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_216(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_215()
{
	return Global_2448756.f_14;
}

void func_216(vector3 vParam0, float fParam1)
{
	if (Global_2405071.f_1742 < 101)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_1743[Global_2405071.f_1742 /*4*/] = { vParam0 };
		Global_2405071.f_1743[Global_2405071.f_1742 /*4*/].f_3 = fParam1;
		Global_2405071.f_1742++;
	}
}

int func_217(vector3 vParam0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2405071.f_2891, vParam0) < Global_2405071.f_2899)
	{
		return Global_2405071.f_2894;
	}
	Global_2405071.f_2891 = { vParam0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.z = ((Global_2412219[iVar0 /*7*/].f_2 + Global_2412219[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_157(vParam0, &(Global_2412219[iVar0 /*7*/])))
		{
			Global_2405071.f_2894 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405071.f_2894 = -1;
	return -1;
}

int func_218()
{
	if (MISC::IS_BIT_SET(Global_4456448.f_13, 0) && !Global_2449538.f_6227)
	{
		return 0;
	}
	return 0;
}

int func_219(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_188(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1671295.f_177[iVar0 /*3*/], Global_1671295.f_177[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405071.f_2724[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_221(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.z = ((Global_2412175[iVar0 /*7*/].f_2 + Global_2412175[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_157(vVar1, &(Global_2412175[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_168(&vVar1, Global_2412175[iVar0 /*7*/], Global_2412175[iVar0 /*7*/].f_3, Global_2412175[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_222(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_226(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_225(vParam0, 1008981770))
			{
				if (!func_174(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_174(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_224(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_223(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_174(&vVar1, 0, 0, 0, 1))
					{
						if (!func_174(&vParam0, 0, 0, 0, 1))
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

Vector3 func_223(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_224(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_161(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_225(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_161(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_226(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_227(iParam0) != 0;
	}
	return func_139(iParam0, bParam1);
}

int func_227(int iParam0)
{
	if (func_311(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

void func_228()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405071.f_1743[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405071.f_1742 = 0;
}

void func_229()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_682[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_682[iVar0])
			{
				if (!Global_2405071.f_678[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405071.f_678[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405071.f_678[iVar0]);
						Global_2405071.f_678[iVar0] = -1;
					}
					else
					{
						Global_2405071.f_678[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405071.f_678[iVar0] == -1)
		{
			Global_2405071.f_678[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_230(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_231(int iParam0)
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

int func_232()
{
	return Global_1312802;
}

float func_233()
{
	return 10f;
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_103.f_2[iVar0]), iVar1);
}

void func_235(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_103.f_5 = iParam0;
}

void func_236()
{
	if (func_20() > 0)
	{
		func_267();
		func_260();
		func_252();
		func_239();
	}
	if (func_238(NETWORK::PARTICIPANT_ID()) != 3 && func_20() == 3)
	{
		func_237(3);
	}
	switch (func_238(NETWORK::PARTICIPANT_ID()))
	{
		case 0:
			if (func_20() > 0)
			{
				func_237(2);
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_237(int iParam0)
{
	Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = iParam0;
}

int func_238(int iParam0)
{
	return Local_105[iParam0 /*4*/].f_1;
}

void func_239()
{
	if (!func_249())
	{
		return;
	}
	if (func_245())
	{
		if (!func_244(PLAYER::PLAYER_ID()))
		{
			func_242();
		}
	}
	else if (func_244(PLAYER::PLAYER_ID()))
	{
		func_240();
	}
}

void func_240()
{
	func_241(17);
}

void func_241(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_6), iParam0);
}

void func_242()
{
	func_243(17);
}

void func_243(int iParam0)
{
	MISC::SET_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_6), iParam0);
}

bool func_244(int iParam0)
{
	return func_6(iParam0, 17);
}

int func_245()
{
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	if (func_248() != 0)
	{
		func_247(0);
	}
	if (func_246(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_248() == 0)
		{
			func_247(1);
		}
		return 0;
	}
	if (func_12(2))
	{
		return 0;
	}
	return 1;
}

bool func_246(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET(Local_105[iParam0 /*4*/].f_2[iVar0], iVar1);
}

void func_247(int iParam0)
{
	Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_299 = iParam0;
}

int func_248()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_299;
}

int func_249()
{
	if (!func_250())
	{
		return 0;
	}
	return 1;
}

bool func_250()
{
	return func_251(PLAYER::PLAYER_ID());
}

bool func_251(int iParam0)
{
	return func_6(iParam0, 15);
}

void func_252()
{
	if (!func_259())
	{
		return;
	}
	if (func_258(PLAYER::PLAYER_PED_ID(), func_16(), 120f, 1))
	{
		if (!func_246(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_257(1);
		}
	}
	else if (func_246(NETWORK::PARTICIPANT_ID(), 1))
	{
		func_256(1);
	}
	if (!func_246(NETWORK::PARTICIPANT_ID(), 0) && func_253())
	{
		func_257(0);
	}
}

int func_253()
{
	if (func_250())
	{
		if (!func_258(PLAYER::PLAYER_PED_ID(), func_16(), 1000f, 1))
		{
			return 1;
		}
		if (func_255(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_254(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_197(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_17()))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_89())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

void func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

bool func_258(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_259()
{
	if (func_7())
	{
		return 1;
	}
	return 0;
}

void func_260()
{
	int iVar0;
	
	if (func_265(0))
	{
		if (func_263())
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 != func_262())
	{
		switch (func_262())
		{
			case 2:
				if (!func_287(1) && iVar0 == 0)
				{
					func_97(1);
				}
				break;
			
			case 0:
				if ((func_250() && !func_246(NETWORK::PARTICIPANT_ID(), 0)) && iVar0 == 2)
				{
					func_257(0);
				}
				break;
		}
		func_261(iVar0);
	}
}

void func_261(int iParam0)
{
	uLocal_108 = iParam0;
}

int func_262()
{
	return uLocal_108;
}

bool func_263()
{
	return func_264(PLAYER::PLAYER_ID());
}

int func_264(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_89())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_265(bool bParam0)
{
	return func_266(PLAYER::PLAYER_ID(), bParam0);
}

bool func_266(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_264(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_89();
}

void func_267()
{
	int iVar0;
	
	if (func_19() > 0)
	{
		func_272();
	}
	switch (func_19())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (((((!func_12(3) && !func_246(NETWORK::PARTICIPANT_ID(), 2)) && func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_16())) && func_270(func_10())) && func_269(func_16()) == 0)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(func_16(), 1);
				NETWORK::NETWORK_FADE_OUT_ENTITY(func_16(), 0, 1);
				func_257(2);
			}
			break;
		
		case 3:
			if (((!func_12(4) && !func_246(NETWORK::PARTICIPANT_ID(), 3)) && func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_16()))
			{
				func_257(3);
			}
			break;
		
		case 4:
			if (((!func_12(5) && !func_246(NETWORK::PARTICIPANT_ID(), 4)) && func_7()) && func_270(func_10()))
			{
				iVar0 = func_10();
				func_268(&iVar0);
				func_257(4);
			}
			break;
		
		case 5:
			break;
	}
}

void func_268(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0))
			{
				iVar2++;
			}
			iVar0++;
		}
	}
	return iVar2;
}

int func_270(int iParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_271(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_272()
{
	if (func_278())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_110))
		{
			iLocal_110 = HUD::ADD_BLIP_FOR_ENTITY(func_16());
			HUD::SET_BLIP_SPRITE(iLocal_110, func_277());
			func_274(&iLocal_110, func_276());
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_110, func_273());
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_110))
	{
		HUD::REMOVE_BLIP(&iLocal_110);
	}
}

char* func_273()
{
	return "CASINO_VD";
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_275(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_275(int iParam0)
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

int func_276()
{
	return 12;
}

int func_277()
{
	return 225;
}

int func_278()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 0;
	}
	if (func_19() != 1)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_16(), 0))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	return 1;
}

void func_279(int iParam0)
{
	Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

int func_280()
{
	func_281();
	return 1;
}

void func_281()
{
	func_243(16);
}

int func_282()
{
	return Local_103;
}

int func_283(int iParam0)
{
	return Local_105[iParam0 /*4*/];
}

void func_284()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_106[iVar0] = func_286();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iLocal_106[iVar0] = iVar0;
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iLocal_106[iVar0]);
			if (func_311(iVar1, 0, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!bVar2)
					{
						if (func_246(iLocal_106[iVar0], 1))
						{
							bVar2 = true;
						}
					}
					if (!func_12(1))
					{
						if (func_246(iLocal_106[iVar0], 0))
						{
							func_234(1);
						}
					}
					if (!func_12(3))
					{
						if (func_246(iLocal_106[iVar0], 2))
						{
							func_234(3);
						}
					}
					if (!func_12(4))
					{
						if (func_246(iLocal_106[iVar0], 3))
						{
							func_234(4);
						}
					}
					if (!func_12(5))
					{
						if (func_246(iLocal_106[iVar0], 4))
						{
							func_234(5);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar2)
		{
			if (!func_12(2))
			{
				func_234(2);
			}
		}
		else if (func_12(2))
		{
			func_285(2);
		}
	}
}

void func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_103.f_2[iVar0]), iVar1);
}

int func_286()
{
	return -1;
}

bool func_287(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(uLocal_107[iVar0], iVar1);
}

int func_288()
{
	var uVar0;
	
	func_295(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_294())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_293())
	{
		return 1;
	}
	if (func_292(157))
	{
		if (!func_291())
		{
			return 1;
		}
	}
	if (func_292(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_289() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_289()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_289()
{
	switch (func_39())
	{
		case 0:
			return func_290();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_290()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_291()
{
	return Global_2448756.f_586;
}

int func_292(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_293()
{
	return Global_2458613;
}

bool func_294()
{
	return Global_2448756.f_581;
}

void func_295(var uParam0)
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
					func_296(iVar0);
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

void func_296(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_311(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_297(iVar2, &bVar3))
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

int func_297(int iParam0, var uParam1)
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

void func_298()
{
	SYSTEM::WAIT(0);
}

void func_299()
{
	if (func_250() && func_2() != 3)
	{
		func_305();
	}
	if (func_304(PLAYER::PLAYER_ID()))
	{
		func_303();
	}
	if (func_244(PLAYER::PLAYER_ID()))
	{
		func_240();
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		func_302();
	}
	if (func_248() != 0)
	{
		func_247(0);
	}
	if (func_2() != 0)
	{
		func_300();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_300()
{
	int iVar0;
	
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		func_301(&iVar0);
	}
}

void func_301(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_302()
{
	func_241(18);
}

void func_303()
{
	func_241(16);
}

bool func_304(int iParam0)
{
	return func_6(iParam0, 16);
}

void func_305()
{
	func_241(15);
	Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_300 = 0;
}

int func_306(struct<21> Param0)
{
	func_310(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_307(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 8);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_105, 33);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	return 1;
}

int func_307(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_309();
			}
			else
			{
				return 0;
			}
		}
		if (!func_308())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_309();
					}
					else
					{
						return 0;
					}
				}
				if (func_294())
				{
					if (!bParam2)
					{
						func_309();
					}
					else
					{
						return 0;
					}
				}
				if (func_292(155))
				{
					if (!bParam2)
					{
						func_309();
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
					func_309();
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
				func_309();
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
			func_309();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_308()
{
	return Global_1312844;
}

void func_309()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_310(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_309();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_311(int iParam0, bool bParam1, bool bParam2)
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

