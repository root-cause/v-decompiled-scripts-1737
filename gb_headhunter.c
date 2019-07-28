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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<872> Local_112 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_113[32];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129[4] = { 0, 0, 0, 0 };
	struct<8> Local_130[30];
	var uLocal_131[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<21> Local_139 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_121 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_982(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_939(ScriptParam_139);
	}
	else
	{
		func_891();
	}
	while (true)
	{
		func_890();
		if (func_882())
		{
			func_891();
		}
		Global_1669366.f_2 = Local_112.f_863;
		Global_1669366.f_3 = Local_112.f_864;
		switch (func_881(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_880() == 1)
				{
					if (func_879())
					{
						func_878();
						if (func_877())
						{
							func_862(166, 1, -1, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(3);
							func_861(0f);
							iLocal_120 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_119);
						}
						else
						{
							func_862(166, 0, -1, 0);
						}
						func_860();
						func_859();
						func_858();
						Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 1;
					}
				}
				else if (func_880() == 4)
				{
					Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_853(1))
				{
					Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 2;
				}
				if (func_880() == 1)
				{
					func_852();
					func_832();
					func_809();
					func_309();
					func_300();
					if (func_877() || func_298())
					{
						func_150(&(Global_1361808.f_534), &Global_1361808, 27, &(Global_1361808.f_1), &(Global_1361808.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (func_880() == 4)
				{
					Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
					func_75();
				}
				func_74();
				break;
			
			case 3:
				func_73(&(Local_112.f_845));
				if (func_72(&(Local_112.f_845)))
				{
					Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
			
			case 4:
				func_891();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_880())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_112.f_863), &(Local_112.f_864));
						Local_112 = 1;
						Local_112.f_118 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_112.f_119 = PLAYER::PLAYER_ID();
						func_862(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_112 = 4;
					}
					else if (func_1())
					{
						Local_112 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2528542.f_4889.f_36)
	{
		Global_2528542.f_4889.f_36 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_112.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (MISC::IS_BIT_SET(Local_112.f_1, 1))
			{
				Local_112.f_117 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				Local_112.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!MISC::IS_BIT_SET(Local_112.f_1, 6))
	{
		if (!func_8(&(Local_112.f_849)))
		{
			func_7(&(Local_112.f_849), 0, 0);
		}
		else if (func_6(&(Local_112.f_849), 500, 0))
		{
			MISC::SET_BIT(&(Local_112.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_112.f_847)))
	{
		func_7(&(Local_112.f_847), 0, 0);
	}
	else if (func_6(&(Local_112.f_847), func_10(), 0))
	{
		MISC::SET_BIT(&(Local_112.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_14891;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_112.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_112.f_2[iVar0 /*26*/] == 1)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2)))
									{
										if (MISC::IS_BIT_SET(Local_112.f_109, iVar0))
										{
											MISC::SET_BIT(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_112.f_110, iVar0))
										{
											MISC::SET_BIT(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_112.f_111, iVar0))
										{
											MISC::SET_BIT(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_112.f_112, iVar0))
										{
											Local_112.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_112.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1)))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_112.f_2[iVar0 /*26*/].f_2))
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (MISC::IS_BIT_SET(Local_112.f_112, iVar0))
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (MISC::IS_BIT_SET(Local_112.f_110, iVar0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (MISC::IS_BIT_SET(Local_112.f_111, iVar0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/].f_24)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/].f_25)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_112.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/] == 0)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_112.f_2[iVar0 /*26*/] == 2)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_112.f_2[iVar0 /*26*/].f_17 == 3 || Local_112.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_24)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_17 == 3 || Local_112.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)
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

int func_14(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						MISC::SET_BIT(&(Local_112.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_17(iVar1, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_112 != 4)
	{
		iLocal_116 = 0;
		while (iLocal_116 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_116)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_116));
				if (!func_17(iVar3, 0))
				{
					if (func_982(iVar3, 1, 1))
					{
					}
					func_24(iLocal_116);
					func_23(iLocal_116);
					if (!MISC::IS_BIT_SET(Local_112.f_1, 2))
					{
						if (!bVar2)
						{
							if ((MISC::IS_BIT_SET(Local_112.f_1, 1) || MISC::IS_BIT_SET(Local_112.f_1, 3)) || MISC::IS_BIT_SET(Local_112.f_1, 5))
							{
								if (!MISC::IS_BIT_SET(Local_113[iLocal_116 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (Local_112.f_118 > -1)
				{
					if (iLocal_116 == Local_112.f_118)
					{
						MISC::SET_BIT(&(Local_112.f_1), 5);
					}
				}
			}
			iLocal_116++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(Local_112.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_112.f_115 != iVar0)
		{
			Local_112.f_115 = iVar0;
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(Local_112.f_1), 1);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 2))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_112.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_113, iVar0))
			{
				if (!func_8(&(Local_112.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_112.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_112.f_853[iVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_112.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_112.f_109, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_5, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_109), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_110, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_2, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_110), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_112, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_3, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_112), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_111, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_4, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_111), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_113, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_6, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_113), iVar0);
			}
			else if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_7, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_113), iVar0);
			}
		}
		if (Local_112.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_112.f_2[iVar0 /*26*/].f_24)
			{
				if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_12, iVar0))
				{
					Local_112.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_112.f_2[iVar0 /*26*/].f_25)
			{
				if (MISC::IS_BIT_SET(Local_113[iParam0 /*14*/].f_13, iVar0))
				{
					Local_112.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_112.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1);
							MISC::SET_BIT(&(Local_112.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_112.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = { Local_112.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = { Local_112.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			fVar4 = Local_112.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_112.f_123[iVar0 /*36*/].f_32[iVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_33(iVar2))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							MISC::CLEAR_AREA(vVar3, 10f, 1, 0, 0, true);
							MISC::SET_BIT(&(Local_112.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_119);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_31(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32(PLAYER::PLAYER_ID(), vParam0, iParam2) > -1)
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

int func_32(int iParam0, vector3 vParam1, int iParam2)
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

bool func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_34(int iParam0)
{
	int iVar0;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_112.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = Local_112.f_2[iParam0 /*26*/];
	iVar2 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				vVar3 = { Local_112.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(vVar3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_112.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_44(Local_112.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (func_33(iVar0))
									{
										if (func_42(&(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Local_112.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574999);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_119);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("WEAPON_MICROSMG"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (func_33(iVar0))
							{
								iVar2 = Local_112.f_2[iParam0 /*26*/].f_22;
								vVar5 = { Local_112.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_112.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, fVar6, 1, 1, 1))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574999);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_119);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("WEAPON_CARBINERIFLE"), 99999999, false, true);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_40();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_39();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_38()
{
	return SYSTEM::ROUND(Global_262145.f_14899);
}

int func_39()
{
	return 200;
}

var func_40()
{
	return Global_262145.f_14898;
}

int func_41(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_43()
{
	return joaat("s_m_m_chemsec_01");
}

int func_44(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return (Local_112.f_2[iParam0 /*26*/] == 0 || Local_112.f_2[iParam0 /*26*/] == 2);
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)
{
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_112.f_2[iParam0 /*26*/].f_11;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_33(iVar0))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_112.f_2[iParam0 /*26*/].f_2), iVar0, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), true, true, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_2), 1, iLocal_119);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), false);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), false, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), true, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
						if (func_33(iVar1))
						{
							if (func_42(&(Local_112.f_2[iParam0 /*26*/].f_1), Local_112.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Global_1574999);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_119);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Global_1574999);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_119);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar3;
								Local_112.f_2[iParam0 /*26*/].f_22 = uVar4;
								func_53(vVar2);
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Global_1574999);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_119);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 42, true);
								PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 44, true);
								PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), joaat("WEAPON_PISTOL"), 99999999, false, true);
								fVar7 = func_52(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Local_112.f_2[iParam0 /*26*/].f_13, fVar7, 0, 0);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_51();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), iVar5);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = func_50();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), iVar6);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), func_49());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true, 1);
								MISC::SET_BIT(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()
{
	return SYSTEM::ROUND(Global_262145.f_14897);
}

int func_50()
{
	return 100;
}

var func_51()
{
	return Global_262145.f_14896;
}

float func_52(int iParam0)
{
	if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(vParam0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_112.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_112.f_871), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_112.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_112.f_871), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_112.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_112.f_871), iVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_112.f_122);
			if (!func_28(Local_112.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_123[iVar0 /*36*/] };
					*uParam2 = Local_112.f_123[iVar0 /*36*/].f_3;
					Local_112.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_112.f_122);
			if (!func_28(Local_112.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_123[iVar0 /*36*/] };
					*uParam2 = Local_112.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_112.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!func_28(Local_112.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_484[iVar0 /*36*/] };
					*uParam2 = Local_112.f_484[iVar0 /*36*/].f_3;
					Local_112.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_55(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_62(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_56(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_982(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_982(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_57(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1589819[iVar0 /*818*/].f_789) && !func_60(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2448756.f_16;
}

int func_62(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_982(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), vParam0, true) < fParam1)
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

int func_63(int iParam0)
{
	if (func_68(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_67(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_65();
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2505680 = { func_67(iParam0) };
		Global_2505693 = { func_67(iParam1) };
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

void func_69()
{
	Local_112.f_2[0 /*26*/] = 2;
	Local_112.f_2[0 /*26*/].f_11 = joaat("BALLER3");
	Local_112.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[1 /*26*/] = 2;
	Local_112.f_2[1 /*26*/].f_11 = joaat("DUBSTA");
	Local_112.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[2 /*26*/] = 0;
	Local_112.f_2[2 /*26*/].f_11 = joaat("COG552");
	Local_112.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[3 /*26*/] = 0;
	Local_112.f_2[3 /*26*/].f_11 = joaat("BALLER5");
	Local_112.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_70()
{
	func_71();
	if (Local_112.f_122 == 0)
	{
		if (Local_112.f_121 == 0)
		{
			Local_112.f_122 = 10;
		}
		else
		{
			Local_112.f_122 = 9;
		}
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 4))
	{
		return;
	}
	switch (Local_112.f_121)
	{
		case 0:
			Local_112.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_112.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_112.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_112.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_112.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_112.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_112.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_112.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_112.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_112.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_112.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_112.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_112.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_112.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_112.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_112.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_112.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_112.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_112.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_112.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_112.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_112.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_112.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_112.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_112.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_112.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_112.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_112.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_112.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_112.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_112.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_112.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_112.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_112.f_123[6 /*36*/].f_14[2] = 180f;
			Local_112.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_112.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_112.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_112.f_123[7 /*36*/].f_32[0] = joaat("BALLER5");
			Local_112.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_112.f_123[7 /*36*/].f_32[1] = joaat("COG552");
			Local_112.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_112.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_112.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_112.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_112.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_112.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_112.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_112.f_123[8 /*36*/].f_32[0] = joaat("BALLER5");
			Local_112.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_112.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_112.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_112.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_112.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_112.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_112.f_123[9 /*36*/].f_32[0] = joaat("BALLER5");
			Local_112.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_112.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_112.f_123[9 /*36*/].f_32[1] = joaat("COG552");
			Local_112.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_112.f_484[0 /*36*/].f_3 = 179.583f;
			Local_112.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_112.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_112.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_112.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_112.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_112.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_112.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_112.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_112.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_112.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_112.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_112.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_112.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_112.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_112.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_112.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_112.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_112.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_112.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_112.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_112.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_112.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_112.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_112.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_112.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_112.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_112.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_112.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_112.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_112.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_112.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_112.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_112.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_112.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_112.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_112.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_112.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_112.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_112.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_112.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_112.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_112.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_112.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_112.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_112.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_112.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_112.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_112.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_112.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_112.f_123[6 /*36*/].f_32[0] = joaat("BALLER5");
			Local_112.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_112.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_112.f_123[6 /*36*/].f_32[1] = joaat("COG552");
			Local_112.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_112.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_112.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_112.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_112.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_112.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_112.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_112.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_112.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_112.f_123[8 /*36*/].f_32[0] = joaat("BALLER5");
			Local_112.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_112.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_112.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_112.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_112.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_112.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_112.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_112.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_112.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_112.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_112.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_112.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_112.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_112.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_112.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_112.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_112.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_112.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_112.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_112.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	MISC::SET_BIT(&(Local_112.f_1), 4);
}

var func_71()
{
	if (Local_112.f_121 != -1)
	{
		return Local_112.f_121;
	}
	if (Local_112.f_121 == -1)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) == -289320599)
		{
			Local_112.f_121 = 0;
		}
		else
		{
			Local_112.f_121 = 1;
		}
	}
	return Local_112.f_121;
}

int func_72(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_74()
{
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_112.f_119 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119);
	}
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_65())
				{
					if (iVar2 == iVar0 || func_76(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574954[iVar1], Global_1574999);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574999, Global_1574954[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_65())
	{
		if (!bParam2)
		{
			if (func_77(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_65())
		{
			return iParam1 == Global_1626536[iParam0 /*603*/].f_11;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 != func_65())
	{
		if (iParam0 != func_65())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_65())
			{
				if (Global_1626536[iParam0 /*603*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_78()
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	
	if (func_877())
	{
		return;
	}
	if (!func_298())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_149(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_148(PLAYER::PLAYER_ID()))
		{
			if (!func_142())
			{
				func_132(0);
				NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
				MISC::SET_BIT(&iLocal_114, 18);
			}
		}
	}
	if (Local_112.f_119 > -1)
	{
		if (iVar1 > -1)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_79(166, vVar0, &uLocal_133, 1140457472, 1144750080, 0);
	}
}

void func_79(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_131(PLAYER::PLAYER_ID()) && !func_130(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_1, 8)) && (func_129(PLAYER::PLAYER_ID()) || func_128(PLAYER::PLAYER_ID()))) || func_60(vParam1))
	{
		return;
	}
	Global_1669357 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_124(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_123(PLAYER::PLAYER_ID()) || func_121(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_120(PLAYER::PLAYER_ID(), 21) || func_120(PLAYER::PLAYER_ID(), 25)))
		{
			func_119(vParam1, 1, 0);
		}
		if (!*uParam2 && func_982(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			if (func_118(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_117(iParam0));
				if (func_116(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					MISC::SET_BIT(&(Global_1669357.f_3), 0);
				}
			}
			if (func_115(iParam0))
			{
				fVar1 = func_114(iParam0);
				if (fVar1 != 1f)
				{
					func_861(fVar1);
					MISC::SET_BIT(&(Global_1669357.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_113(iParam0) && func_123(PLAYER::PLAYER_ID()))
				{
					func_111(1);
					func_110(2);
				}
			}
			func_109(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_108(PLAYER::PLAYER_ID(), 19))
			{
				func_107(19);
			}
		}
		if (*uParam2 && func_982(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 0;
			if (func_118(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1669357.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1669357.f_3), 0);
				}
			}
			if (func_115(iParam0))
			{
				func_106();
				MISC::CLEAR_BIT(&(Global_1669357.f_3), 1);
			}
			if (iParam5 && !func_131(PLAYER::PLAYER_ID()))
			{
				if (func_104(PLAYER::PLAYER_ID()) != 152)
				{
					func_82();
				}
			}
			if (func_81(2))
			{
				func_111(0);
				func_80(2);
			}
		}
	}
}

void func_80(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_41), iParam0);
}

bool func_81(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_41, iParam0);
}

void func_82()
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409313, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409315, 19);
	func_102();
	func_85(1, 1, 0);
	func_83();
}

void func_83()
{
	func_84(0, 0);
}

void func_84(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405071.f_45), &Global_2409334, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409334 };
		Global_2405071.f_45.f_49 = { Global_2409334.f_49 };
		Global_2405071.f_45.f_52 = Global_2409334.f_52;
		Global_2405071.f_45.f_53 = Global_2409334.f_53;
	}
	if (bParam0)
	{
		func_101();
	}
	if (!bParam2)
	{
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_87(0);
	func_86();
}

void func_86()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (bParam0)
	{
		if (func_100())
		{
			func_99();
		}
		Global_2405071.f_704.f_517 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_97();
		func_92(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1741 = 1;
	}
	else
	{
		func_89();
	}
}

void func_89()
{
	if (func_100() && !func_91())
	{
		func_99();
	}
	if (func_91())
	{
		func_90();
	}
	else
	{
		func_97();
		func_92(0, 0, 0, 0, 0);
		Global_2405071.f_1741 = 0;
		Global_2405071.f_1740 = 0;
	}
}

void func_90()
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1222), 518);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_517)
	{
		Global_2405071.f_1740 = 0;
	}
}

int func_91()
{
	if ((Global_2405071.f_1740 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1222.f_517) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1222.f_517))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437364.f_1893.f_690.f_16 != func_65())
	{
		if (MISC::IS_BIT_SET(Global_2424047[Global_2437364.f_1893.f_690.f_16 /*416*/].f_402, 0) && func_93())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412626 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_93()
{
	if (((((func_104(PLAYER::PLAYER_ID()) == 229 || func_104(PLAYER::PLAYER_ID()) == 191) || func_96()) || func_95()) || func_94(PLAYER::PLAYER_ID())) || Global_2506344.f_173 == 1)
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
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

var func_95()
{
	return Global_1574395;
}

int func_96()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	if (func_100() && !func_91())
	{
		func_99();
	}
	func_98();
	Global_2405071.f_704 = 0;
}

void func_98()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_99()
{
	if (func_91())
	{
		if (Global_2405071.f_704.f_517 == Global_2405071.f_1222.f_517)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_517)
	{
		MISC::_COPY_MEMORY(&(Global_2405071.f_1222), &(Global_2405071.f_704), 518);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1740 = 1;
	}
}

int func_100()
{
	if ((Global_2405071.f_1741 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_517) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_517))
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409652, 121);
}

void func_102()
{
	func_103();
	Global_2405071.f_2250 = 0;
}

void func_103()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2251[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_104(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2528542.f_4884 < 1f)
		{
			return;
		}
	}
	Global_2528542.f_4885 = -1;
	Global_2528542.f_4884 = 1f;
}

void func_107(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_4), iParam0);
}

bool func_108(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

void func_109(int iParam0)
{
	MISC::SET_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_4), iParam0);
}

void func_110(int iParam0)
{
	MISC::SET_BIT(&(Global_2528542.f_4889.f_41), iParam0);
}

void func_111(int iParam0)
{
	if (func_112() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_112()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_114(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_117(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_119(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

bool func_120(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

int func_121(int iParam0)
{
	if (func_122(iParam0))
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_65())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_108(iParam0, 9);
	}
	return 0;
}

void func_124(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_127(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_125();
	}
}

void func_125()
{
	if (!func_126(PLAYER::PLAYER_ID()))
	{
		func_109(25);
	}
}

bool func_126(int iParam0)
{
	return func_108(iParam0, 25);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12413;
		
		case 142:
			return Global_262145.f_12401;
		
		case 157:
			return Global_262145.f_12368;
		
		case 159:
			return Global_262145.f_12351;
		
		case 162:
			return Global_262145.f_12462;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

bool func_130(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 2);
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

void func_132(int iParam0)
{
	if (!func_148(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_139(PLAYER::PLAYER_ID()) != 0)
		{
			func_109(20);
			func_133(func_134());
			if (func_131(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_1), 8);
				}
			}
		}
	}
}

void func_133(var uParam0)
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
			Global_1312570.f_1[iVar0] = uParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

int func_134()
{
	int iVar0;
	
	iVar0 = func_104(PLAYER::PLAYER_ID());
	if (func_138(iVar0) == 0)
	{
		return -1;
	}
	if (func_137(iVar0))
	{
		return 65;
	}
	if (func_136(iVar0))
	{
		return 66;
	}
	if (func_135(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_139(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_131(iParam0) && !func_130(iParam0)) && !MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 8));
	bVar2 = func_148(iParam0);
	uVar3 = func_141();
	uVar4 = func_142();
	if ((bVar1 && (func_129(iParam0) || func_128(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_123(iParam0)) && !func_140(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2528542.f_4889.f_212 != iVar0)
	{
		Global_2528542.f_4889.f_212 = iVar0;
	}
	return iVar0;
}

bool func_140(int iParam0)
{
	return func_108(iParam0, 19);
}

bool func_141()
{
	return Global_1312417;
}

int func_142()
{
	if ((func_108(PLAYER::PLAYER_ID(), 21) || func_108(PLAYER::PLAYER_ID(), 22)) || func_145())
	{
		return 1;
	}
	if (func_143())
	{
		func_109(22);
		return 1;
	}
	return 0;
}

int func_143()
{
	if (func_105(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_141() && !func_144()) || func_120(PLAYER::PLAYER_ID(), 21)) || func_120(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_107(27);
		}
	}
	return 0;
}

bool func_144()
{
	return Global_1312417.f_1;
}

bool func_145()
{
	return func_146(338, -1);
}

int func_146(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_147(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_148(int iParam0)
{
	return func_108(iParam0, 20);
}

float func_149(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_112.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_112.f_2[iVar2 /*26*/].f_1))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = SYSTEM::VDIST2(vVar3, vVar4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_150(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_297(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_295() || iParam2 == 27)
	{
		if (func_236(iParam1, iParam2, uParam3, Global_1574175, 0, func_293(), sParam7))
		{
			func_235(1);
			if ((!func_233() && !func_231()) || MISC::IS_BIT_SET(Global_2528542.f_4579, 1))
			{
				if (func_230())
				{
					func_225();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_224(1);
						Global_1574175 = 0;
						iVar19 = -1;
						if (Global_1574396 != 1)
						{
							func_223(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_982(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_222(iVar3) || Global_2424047[iVar3 /*416*/].f_236 != -1) || func_221(iVar3))
										{
											iVar9 = iVar3;
											if (func_122(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_220(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_217(PLAYER::PLAYER_ID(), 0) && func_104(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_216())
							{
								if (func_982(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_65();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_215(iVar3) && func_211(iVar3, iParam2)) && func_982(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
								Var6 = { func_206(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
								iVar5 = func_200(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574175++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_216())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_195(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_194(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_189(iVar3, 0);
								if (bVar2)
								{
									if (func_188(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_187(iParam5))
								{
									func_186(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_186(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_982(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_65();
							}
							if (func_215(iVar3))
							{
								if (func_982(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
									Var6 = { func_206(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
									iVar5 = func_200(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574175++;
									iVar16 = func_189(iVar3, 1);
									if (bVar2)
									{
										if (func_188(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_164(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_161(uParam3, iParam1);
						}
						func_160(&(uParam3->f_21));
						func_159();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_158(uParam3, iParam1);
							func_157(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_158(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_153(uParam3))
						{
							Global_1574396 = 1;
						}
						func_151(uParam3);
						if (Global_1574396 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574396 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_159();
			func_224(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_151(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_160(&(uParam0->f_21));
		func_152(0);
	}
}

void func_152(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574396 != 2)
		{
			Global_1574396 = 2;
		}
	}
	else
	{
		switch (Global_1574396)
		{
			case 0:
				Global_1574396 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_153(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_65() && func_982(iVar3, 0, 1))
	{
		Var2 = { func_67(iVar3) };
		iVar1 = func_156(uParam0, uParam0->f_37);
		if (func_155(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_154(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_154(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_154(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_154(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_154(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_154(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_154(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_156(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_157(int iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_158(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_159()
{
	if (Global_1574396 != 0)
	{
		Global_1574396 = 0;
	}
}

void func_160(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_161(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_65())
		{
			if (func_982(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_163(uParam0->f_38[iVar0 /*2*/], 0);
					func_162(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589819[iVar0 /*818*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_163(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_164(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_185() && iParam4 < func_184())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_183("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_183(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_183("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_183("");
			if (uParam3->f_108 == 6)
			{
				func_183("");
			}
			else
			{
				func_183(&sParam5);
			}
			func_169(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_168(uParam3))
			{
				func_167("DPAD_FRIEND");
			}
			else if (func_166(uParam3))
			{
				func_167("DPAD_FRIEND");
			}
			else if (func_165(uParam3))
			{
				func_167("DPAD_CREW");
			}
			else
			{
				func_167("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_165(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_166(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_167(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_168(var uParam0)
{
	if (func_166(uParam0) && func_165(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_169(var uParam0, int iParam1)
{
	if (func_182(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_174(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424047[iParam1 /*416*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_170())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_170()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_172() || func_171())
		{
			return 1;
		}
	}
	return 0;
}

var func_171()
{
	return Global_2448756.f_14;
}

int func_172()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_171();
	}
	return func_173(Global_4456448.f_138474);
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4985[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(int iParam0)
{
	if ((func_982(iParam0, 0, 1) && func_178()) && func_175(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_175(int iParam0, bool bParam1)
{
	return func_176(iParam0, bParam1, 1);
}

int func_176(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_177(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_65() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	if (iParam0 != func_65())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_65())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_178()
{
	if (func_131(PLAYER::PLAYER_ID()) || func_181())
	{
		if (!func_179(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_179(int iParam0, int iParam1)
{
	if (func_180(iParam0) == iParam1)
	{
		return func_129(iParam0);
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_181()
{
	switch (func_104(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_182(int iParam0)
{
	if (func_170())
	{
		if (func_982(iParam0, 0, 1))
		{
			return func_122(iParam0);
		}
	}
	if ((func_982(iParam0, 0, 1) && func_178()) && func_177(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_183(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_184()
{
	int iVar0;
	
	if (Global_1574177)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_185()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574177)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_186(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_185() && iParam3 < func_184())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_183("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_167(sParam16);
				}
				else
				{
					func_183(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_183("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_216())
				{
					func_183("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_167(&(uParam2->f_104));
					}
					else
					{
						func_183("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_183("");
				}
				if (uParam2->f_108 == 6)
				{
					func_183("");
				}
				else
				{
					func_183(&sParam4);
				}
				func_169(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_183("");
					func_183("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_168(uParam2))
				{
					func_167("DPAD_FRIEND");
				}
				else if (func_166(uParam2))
				{
					func_167("DPAD_FRIEND");
				}
				else if (func_165(uParam2))
				{
					func_167("DPAD_CREW");
				}
				else
				{
					func_167("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_187(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_188(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_122(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_65();
}

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_131(iParam0)) && !func_148(iParam0))
	{
		iVar0 = func_193();
	}
	iVar1 = func_192(iParam0);
	if (!iVar1 == -1)
	{
		return func_190(iVar1);
	}
	return iVar0;
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_191(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_191(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_192(int iParam0)
{
	if (!iParam0 == func_65())
	{
		if (func_188(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_193()
{
	return 21;
}

char* func_194(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_195(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_199(iParam3))
	{
		*fParam1 = (func_196(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_187(iParam3))
	{
		*fParam1 = (func_196(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_196(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_198(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_197(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_197(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_198(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = func_203(iParam0);
	if (iVar0 == -1)
	{
		func_201(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_201(int iParam0, bool bParam1)
{
	if (!func_982(iParam0, 0, 1))
	{
		return;
	}
	if (func_203(iParam0) != -1)
	{
		return;
	}
	if (Global_1383873)
	{
		if (iParam0 == Global_1383873.f_1)
		{
			return;
		}
	}
	if (func_202(iParam0))
	{
		return;
	}
	if (Global_1383911 >= 32)
	{
		return;
	}
	Global_1383878[Global_1383911] = iParam0;
	Global_1383911++;
	if (bParam1)
	{
	}
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383911)
	{
		if (Global_1383878[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (!func_982(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1383871 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383871)
	{
		if (Global_1383710[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1383710[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1383710[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_204(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_204(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1383871)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1383710[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1383710[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1383710[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1383710[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1383871)
	{
		Global_1383710[iVar2 /*5*/] = { Global_1383710[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_205(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_205(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_206(int iParam0)
{
	char cVar0[32];
	
	if (func_982(iParam0, 0, 1))
	{
		Global_2505680 = { func_67(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_155(Global_2505680))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2505680))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_210(&Global_2505680))
		{
			Global_2505610 = { func_208(iParam0) };
			func_207(&Global_2505610, &cVar0);
		}
	}
	return cVar0;
}

void func_207(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_208(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_209(iParam0))
	{
		return Global_1312899[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_209(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_130(iParam0) || func_214(iParam0)) || func_213(iParam0))
		{
			return 0;
		}
	}
	if (!func_212(iParam0))
	{
		return 0;
	}
	if ((!func_222(iParam0) && Global_2424047[iParam0 /*416*/].f_236 == -1) && !func_221(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_212(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_142, 22);
}

bool func_213(int iParam0)
{
	if (func_130(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 8);
}

int func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 10) || MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 9));
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1589819[iVar0 /*818*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_216()
{
	switch (func_104(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_180(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_148(PLAYER::PLAYER_ID()))
	{
		switch (func_104(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_179(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 && func_218(Global_1626536[iParam0 /*603*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1)
	{
		if (func_218(Global_1626536[iParam0 /*603*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_219(iParam0, 0);
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_982(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_222(iVar1) || Global_2424047[iVar1 /*416*/].f_236 != -1) || func_221(iVar1))
				{
					if (func_76(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_221(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_222(int iParam0)
{
	if (func_982(iParam0, 0, 1))
	{
		if (func_982(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_104(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_224(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1371944.f_2 == 0)
		{
			Global_1371944.f_2 = 1;
		}
	}
	else if (Global_1371944.f_2 == 1)
	{
		Global_1371944.f_2 = 0;
	}
}

void func_225()
{
	if (MISC::IS_BIT_SET(Global_2528542.f_4579, 1))
	{
		if (func_229())
		{
			func_226();
		}
	}
}

void func_226()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			func_227(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_227(var uParam0, int iParam1)
{
	func_228(uParam0, iParam1);
}

void func_228(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_229()
{
	return Global_2437364.f_2708[0 /*80*/].f_1 != 0;
}

int func_230()
{
	if (MISC::IS_BIT_SET(Global_2528542.f_4579, 0) && func_229())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2528542.f_4579, 1) && func_229())
	{
		return 1;
	}
	return 0;
}

int func_231()
{
	if (func_229())
	{
		if (func_232(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_233()
{
	if (func_229())
	{
		if (func_234(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

void func_235(int iParam0)
{
	if (Global_1371944.f_1 != Global_1371944)
	{
		Global_1371944.f_1 = Global_1371944;
	}
	if (Global_1371944 != iParam0)
	{
		Global_1371944 = iParam0;
	}
}

int func_236(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_292(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_291();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_290())
		{
			if (func_289() > 0 && Global_1574177)
			{
				HUD::_HIDE_HUD_NOTIFICATIONS_THIS_FRAME();
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_270())
		{
			func_269(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2528542.f_4582, 26))
	{
		func_269(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_289() == 1)
		{
			func_268(bVar3, iParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_269(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2528542.f_4583), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_289() == 0 && !bParam5))
		{
			func_269(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_267();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_HIDE_HUD_NOTIFICATIONS_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_267();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_HIDE_HUD_NOTIFICATIONS_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_268(bVar3, iParam0, 0))
				{
					func_223(iParam0, 0, 0);
					sVar1 = func_265(iParam1, &(Global_4456448.f_138481), bParam4);
					Var0 = { func_263(iParam1) };
					if (bParam4)
					{
						func_260(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_253(iParam0, func_257(uParam2), func_254(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_246(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_244(iParam0, sVar6, func_245(), -1);
					}
					else if (func_170())
					{
						uParam2->f_34 = Global_1574176;
						func_260(iParam0, sVar1, &Var0, 1, -1, Global_1574176, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_237(iParam1);
						uParam2->f_34 = Global_1574176;
						func_260(iParam0, sVar1, "", 0, iVar5, Global_1574176, 1);
					}
					else
					{
						iVar5 = func_237(iParam1);
						func_260(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574175 = uParam3;
				Global_1574174 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574176)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_243())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_242(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_241(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_240(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_238())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_238()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_239(Global_4456448.f_138474);
}

int func_239(int iParam0)
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

bool func_240(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 4;
}

bool func_241(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_242(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_243()
{
	return Global_4456448.f_1 == 0;
}

void func_244(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_167(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_167("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_245()
{
	switch (func_104(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_246(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_104(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_249())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_248(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_248(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_247(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_248(bool bParam0)
{
	return func_175(PLAYER::PLAYER_ID(), bParam0);
}

bool func_249()
{
	return (func_252() && func_250(func_251()));
}

bool func_250(int iParam0)
{
	return func_177(iParam0, 1);
}

int func_251()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_35;
}

bool func_252()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 148;
}

void func_253(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_167(sParam1);
		}
		else if (func_180(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_167("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_254(var uParam0)
{
	int iVar0;
	
	iVar0 = func_180(PLAYER::PLAYER_ID());
	if (func_256())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_255())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_255()
{
	if (func_180(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2528542.f_4810;
	}
	return -1;
}

bool func_256()
{
	return Global_1589692;
}

char* func_257(var uParam0)
{
	int iVar0;
	
	iVar0 = func_180(PLAYER::PLAYER_ID());
	if (func_256())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_259() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_259() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_255())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_258() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_258()
{
	return Global_2528542.f_4813;
}

int func_259()
{
	if (func_180(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2528542.f_4808;
	}
	return -1;
}

void func_260(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_183(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_167(sParam1);
		}
		if (func_290() && iParam6)
		{
			if (func_262())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_167(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_261(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_261(int iParam0)
{
	if (func_242(iParam0) || func_241(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_262()
{
	return Global_1574177;
}

struct<4> func_263(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_264(PLAYER::PLAYER_ID()) || func_240(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_39, 16);
			break;
	}
	if (func_170() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_39, 16);
	}
	return Var0;
}

bool func_264(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 5;
}

char* func_265(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_170() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_266();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574415 == 1)
		{
			Global_1574415 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_266()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_267()
{
	Global_37339 = 1;
}

bool func_268(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_269(int iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574175 = 0;
	func_159();
	Global_1574174 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_160(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2528542.f_4583), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_270()
{
	if (func_288())
	{
		return 0;
	}
	if (func_287())
	{
		return 0;
	}
	if (!func_285())
	{
		return 0;
	}
	if (!func_283())
	{
		return 0;
	}
	if (func_282(8, -1))
	{
		return 0;
	}
	if (func_289() == 2)
	{
		return 0;
	}
	if (Global_2528542.f_4534)
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	else if (!func_278(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_277(1) || func_275(1)) || Global_17272.f_124) || Global_17272)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_274() && Global_1689319 == 2)
	{
		return 0;
	}
	if (func_272(PLAYER::PLAYER_ID()) && !func_274())
	{
		return 0;
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (Global_1657080)
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (Global_1365133)
	{
		return 0;
	}
	if ((Global_1682620.f_705.f_5 || Global_1685431.f_705.f_5) || Global_1681663.f_705.f_5)
	{
		return 0;
	}
	if (func_271(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_271(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_4, 6);
}

int func_272(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_273())
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

bool func_273()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_274()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1689320, 0));
}

int func_275(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_276(PLAYER::PLAYER_PED_ID()))
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

int func_276(int iParam0)
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

bool func_277(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_278(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_279(iParam0))
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

bool func_279(int iParam0)
{
	return func_280(iParam0);
}

bool func_280(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

bool func_281()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196 != 0;
}

bool func_282(int iParam0, int iParam1)
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

int func_283()
{
	if (func_284() == 0)
	{
		return 1;
	}
	return 0;
}

int func_284()
{
	return Global_1312467.f_18;
}

int func_285()
{
	if (func_286())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_286()
{
	return Global_1312439;
}

bool func_287()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 5;
}

bool func_288()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_289()
{
	return Global_1371947.f_68;
}

int func_290()
{
	if (Global_1574176 > 16)
	{
		return 1;
	}
	return 0;
}

float func_291()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_293()
{
	if (func_294(PLAYER::PLAYER_ID()))
	{
		return Global_1319080;
	}
	return 0;
}

int func_294(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_295()
{
	if (func_293())
	{
		return 1;
	}
	if (func_213(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_256())
	{
		return 1;
	}
	if (func_131(PLAYER::PLAYER_ID()))
	{
		switch (func_180(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_296(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_296(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_296(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_296(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 4);
}

int func_297(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_131(PLAYER::PLAYER_ID()) && !func_148(PLAYER::PLAYER_ID())) && !func_179(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_105(PLAYER::PLAYER_ID(), 0) && func_148(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_139(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_298()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = func_299();
	}
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Local_113[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_300()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_301(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_301(int iParam0)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_113, iVar7))
			{
				if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!MISC::IS_BIT_SET(Local_112.f_109, iVar7))
							{
								if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, iVar7))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar7 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_112.f_2[iVar7 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_112.f_2[iVar7 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_878() == Local_112.f_118)
															{
																MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), iVar7);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_A_PED(Var0))
						{
							iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
							if (iVar2 == NETWORK::NET_TO_PED(Local_112.f_2[iVar7 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
									{
										iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
										if (PED::IS_PED_A_PLAYER(iVar1))
										{
											iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
											{
												if (Var0.f_3)
												{
													if (iVar4 == PLAYER::PLAYER_ID())
													{
														Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
														MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), iVar7);
														Var6.f_2 = 127764603;
														Var6.f_10 = PLAYER::PLAYER_ID();
														func_307(Var6, func_308(0));
														func_302("HUNT_TCKP", 1);
													}
												}
											}
											else if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
											{
												if (Var0.f_3)
												{
													iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
													MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
										{
											if (Var0.f_3)
											{
												MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
									{
										if (Var0.f_3)
										{
											MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
								{
									if (Var0.f_3)
									{
										MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	if (func_298())
	{
		if (!func_108(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (func_188(iVar3, 1))
											{
												if (Local_112.f_118 > -1)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118));
													if (func_76(iVar3, iVar5, 1))
													{
														if (!func_142())
														{
															func_132(0);
															func_125();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_302(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_303(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_303(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_306() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_304(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_304(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_305(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_305(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_306()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_307(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 111286607;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_308(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_982(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_309()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_114, 14))
		{
			MISC::CLEAR_BIT(&iLocal_114, 14);
		}
		return;
	}
	iVar0 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	if (!MISC::IS_BIT_SET(iLocal_114, 14))
	{
		if (Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 != 0)
		{
			Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_114, 14);
	}
	if (!MISC::IS_BIT_SET(iLocal_114, 15))
	{
		MISC::SET_BIT(&iLocal_114, 15);
		func_808();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_113[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_766();
					func_748();
					func_733();
					break;
				
				case 2:
					func_310();
					break;
				
				case 3:
					func_891();
					break;
				}
			}
	}
}

void func_310()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar2 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = func_299();
		iVar2 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	}
	if (!MISC::IS_BIT_SET(Local_113[iVar1 /*14*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_114, 9))
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 1))
			{
				if (iVar1 == Local_112.f_118 || func_878() == Local_112.f_118)
				{
					if (func_139(iVar2) >= 2)
					{
						sVar3 = func_732(iVar2);
						iVar4 = func_731(iVar2);
						func_729(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_114, 6))
						{
							func_621(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_114, 6);
						}
						Var0 = func_620();
						Var0.f_1 = func_619();
						func_432(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar2);
						iLocal_134 = PLAYER::GET_MAX_WANTED_LEVEL();
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&iLocal_114, 17);
						func_7(&uLocal_135, 0, 0);
					}
				}
				else if (func_298())
				{
					if (func_188(iVar2, 1))
					{
						if (func_139(iVar2) >= 2)
						{
							sVar3 = func_732(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							iVar4 = func_731(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							func_729(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_114, 6))
							{
								func_621(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_114, 6);
							}
							if (func_126(iVar2))
							{
								Var0 = func_431();
								Var0.f_1 = func_430();
							}
							func_432(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_139(iVar2) >= 2)
						{
							sVar3 = func_732(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							iVar4 = func_731(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							func_729(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_114, 6))
							{
								func_621(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_114, 6);
							}
							if (func_126(iVar2))
							{
								Var0 = func_431();
								Var0.f_1 = func_430();
							}
							func_432(166, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_114, 9);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				iVar5 = (4 - Local_112.f_115);
				if (iVar1 == Local_112.f_118 || func_878() == Local_112.f_118)
				{
					if (func_139(iVar2) >= 2)
					{
						sVar3 = func_424();
						iVar4 = func_731(iVar2);
						func_729(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_114, 6))
						{
							func_621(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_114, 6);
						}
						Var0 = func_620();
						Var0.f_1 = func_619();
						func_432(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_139(iVar2) >= 2)
					{
						sVar3 = func_732(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
						iVar4 = func_731(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
						if (iVar5 == 1)
						{
							func_729(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							func_729(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_114, 6))
						{
							func_621(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_114, 6);
						}
						if (func_126(iVar2))
						{
							Var0 = func_431();
							Var0.f_1 = func_430();
						}
						func_432(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				MISC::SET_BIT(&iLocal_114, 9);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (func_382())
				{
					if (func_877())
					{
						if (func_139(iVar2) >= 2)
						{
						}
					}
					else if (func_139(iVar2) >= 2)
					{
						func_345(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1);
					}
				}
				if (iVar2 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_114, 6))
					{
						func_621(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_114, 6);
					}
					func_432(166, 0, &Var0, 0);
				}
				MISC::SET_BIT(&iLocal_114, 9);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_114, 9))
		{
			func_808();
			if (!MISC::IS_BIT_SET(iLocal_115, 8))
			{
				func_330();
				func_75();
				MISC::SET_BIT(&iLocal_115, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_114, 10))
			{
			}
			if (func_311(&uLocal_122, 0, 0))
			{
				if (iVar1 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_114, 17))
			{
				if (func_6(&uLocal_135, 10000, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(iLocal_134);
					MISC::CLEAR_BIT(&iLocal_114, 17);
				}
			}
		}
	}
}

int func_311(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_109(29);
	if ((*uParam0 > 0 && !func_229()) && func_139(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_327())
		{
			func_326();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1669357.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2528542.f_4579), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_325(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_318(iParam2);
				func_325(uParam0, 2);
			}
			break;
		
		case 2:
			func_318(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_312(func_313(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_325(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2528542.f_4579), 1);
				MISC::CLEAR_BIT(&(Global_1669357.f_3), 2);
				func_325(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2528542.f_4579), 1);
			MISC::CLEAR_BIT(&(Global_1669357.f_3), 2);
			return 1;
	}
	return 0;
}

int func_312(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_313(int iParam0)
{
	if (((func_316(PLAYER::PLAYER_ID()) || func_315(PLAYER::PLAYER_ID())) || func_249()) || iParam0)
	{
		if (func_315(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_218(func_314()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_314()
{
	return Global_1645834;
}

bool func_315(int iParam0)
{
	return func_219(func_104(iParam0), 0);
}

bool func_316(int iParam0)
{
	return func_317(func_104(iParam0));
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 148 && func_177(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_318(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2528542.f_4579, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2528542.f_786, 2)) && func_982(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68807) && !Global_53675) && !CAM::IS_SCREEN_FADED_OUT()) && !func_108(PLAYER::PLAYER_ID(), 22)) && func_139(PLAYER::PLAYER_ID()) != 0) && !func_323(func_324())) && !func_316(PLAYER::PLAYER_ID())) && !func_322(func_104(PLAYER::PLAYER_ID()))) && !func_321(func_104(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2528542.f_4579), 1);
			func_320(func_313(iParam0), -1);
			func_319(1);
			MISC::CLEAR_BIT(&(Global_2528542.f_4579), 0);
		}
	}
}

void func_319(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_248(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_229())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_320(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_323(int iParam0)
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

int func_324()
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	return 0;
}

void func_325(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_326()
{
	Global_2460155 = 1;
}

int func_327()
{
	if (((((((func_104(PLAYER::PLAYER_ID()) == 170 || func_104(PLAYER::PLAYER_ID()) == 219) || func_104(PLAYER::PLAYER_ID()) == 221) || func_104(PLAYER::PLAYER_ID()) == 220) || func_104(PLAYER::PLAYER_ID()) == 216) || func_104(PLAYER::PLAYER_ID()) == 215) || func_104(PLAYER::PLAYER_ID()) == 214) || func_104(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_328(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_328(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_329(int iParam0)
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

void func_330()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_129[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_129[iVar0]));
		}
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_114, 18))
	{
		func_344(1);
		MISC::CLEAR_BIT(&iLocal_114, 18);
	}
	func_341();
	func_331();
}

void func_331()
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(iLocal_114, 7))
	{
		MISC::SET_BIT(&iLocal_114, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iVar0))
					{
						func_339(iVar1, 432, 0, 0);
						func_332(iVar1, func_338(iLocal_132), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_332(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_334(iParam0))
	{
		return;
	}
	if (func_333(&(Global_2416063.f_614[iParam0]), &(Global_2416063.f_977[iParam0]), &(Global_2416063.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_449[iParam0] = uParam1;
		}
	}
}

int func_333(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_334(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_335())
	{
		return 1;
	}
	return 0;
}

int func_335()
{
	switch (func_337())
	{
		case 0:
			return func_336();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_336()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_337()
{
	return Global_25765;
}

int func_338(int iParam0)
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

void func_339(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_334(iParam0))
	{
		return;
	}
	if (func_333(&(Global_2416063.f_581[iParam0]), &(Global_2416063.f_944[iParam0]), &(Global_2416063.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_340();
		}
	}
}

void func_340()
{
	Global_2416063.f_1509 = 1;
}

void func_341()
{
	if (MISC::IS_BIT_SET(iLocal_114, 16))
	{
		func_86();
		func_342();
		MISC::CLEAR_BIT(&iLocal_114, 16);
	}
}

void func_342()
{
	if (Global_2413883.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_343();
	}
}

void func_343()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413883 = { Var0 };
	Global_2413883.f_6 = -1;
}

void func_344(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_141())
		{
			if (func_982(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_982(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_345(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_381(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_346(&Var0);
}

int func_346(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437364.f_3030)
		{
			return 0;
		}
	}
	func_357(uParam0, uParam0->f_17);
	func_356(uParam0);
	if (func_61())
	{
		func_356(uParam0);
	}
	if (func_355(uParam0->f_1))
	{
		func_348();
		if (Global_2437364.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437364.f_2708[0 /*80*/].f_1 == 13 || Global_2437364.f_2708[0 /*80*/].f_1 == 53) || Global_2437364.f_2708[0 /*80*/].f_1 == 54) || Global_2437364.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437364.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437364.f_2708[iVar0 + 1 /*80*/] = { Global_2437364.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437364.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_348();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_227(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_347(uParam0->f_69, 128))
			{
				if (func_232(Global_2437364.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
					func_227(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_347(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_348()
{
	bool bVar0;
	
	if (Global_2437364.f_3031)
	{
		return;
	}
	if (!Global_71858)
	{
		Global_71858 = 1;
		bVar0 = true;
	}
	func_349();
	if (bVar0)
	{
		Global_71858 = 0;
	}
}

void func_349()
{
	Global_2437364.f_3032 = 0;
	Global_2437364.f_3032.f_578 = 0;
	func_353(&(Global_2437364.f_3032.f_1));
	Global_2437364.f_3032.f_1.f_1 = 0;
	func_350(&(Global_2437364.f_3032.f_1));
}

void func_350(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71859)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_352(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_351(0);
}

void func_351(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

bool func_352(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_353(var uParam0)
{
	func_354(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_354(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_355(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_356(var uParam0)
{
	if (func_234(uParam0->f_1))
	{
		uParam0->f_72 = func_193();
	}
}

void func_357(var uParam0, int iParam1)
{
	if (func_234(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_982(iParam1, 0, 1))
	{
		return;
	}
	if (func_232(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_358(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_358(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_272(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_133551[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_272(PLAYER::PLAYER_ID()) || (func_380() && func_379())) && !MISC::IS_BIT_SET(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_378();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_982(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_376(iParam1, iParam0, 0);
							}
							else
							{
								return func_371(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_371(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_376(iParam1, iParam0, 0);
				}
				else
				{
					return func_359(0, -1, 0);
				}
			}
			else
			{
				return func_359(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_376(iParam1, iParam0, 0);
		}
		else
		{
			return func_371(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_371(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_359(bool bParam0, int iParam1, bool bParam2)
{
	return func_360(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_360(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_370() || (func_369() && func_367())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_366(iParam2, iVar0);
		}
		else
		{
			return func_366(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_365(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_364(1);
				}
				else
				{
					return func_364(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_361(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_361(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_364(1);
	}
	return func_364(0);
}

int func_361(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_363(iParam0, iParam1, iParam3);
	if (func_362(Global_4456448.f_138474, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_362(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_161209 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_363(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_365(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_364(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_365(int iParam0, int iParam1, int iParam2)
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

int func_366(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_363(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_367()
{
	if (func_368())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_165254, 4);
}

bool func_368()
{
	return MISC::IS_BIT_SET(Global_4456448.f_154961, 12);
}

bool func_369()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_165254, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_165254, 0) || Global_1648547) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_370()
{
	if (func_368() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589819[iVar2 /*818*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_374(1))
			{
				iVar3 = func_192(iParam0);
				if (!iVar3 == -1)
				{
					return func_190(iVar3);
				}
			}
			if ((func_373(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_365(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_364(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_372(1);
			}
			else
			{
				return func_360(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_364(1);
			}
			else
			{
				return func_360(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_192(iParam0);
	if (!iVar4 == -1)
	{
		return func_190(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_372(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_373(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_374(int iParam0)
{
	if ((func_171() || func_375()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_375()
{
	return Global_2448756.f_15;
}

int func_376(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_374(1))
	{
		iVar2 = func_192(iParam1);
		if (!iVar2 == -1)
		{
			return func_190(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4456448.f_133551[iParam0] != -1 && Global_4456448.f_133551[iParam0] <= 4)
		{
			if (Global_4456448.f_133551[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_133551[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_133551[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_133551[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_133551[iParam0];
			}
		}
		else
		{
			iVar0 = func_360(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_377(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_365(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_372(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_377(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_161253;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_161254;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_161255;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_161256;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_378()
{
	return Global_2359302.f_2;
}

bool func_379()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_380()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

void func_381(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_382()
{
	int iVar0;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_383(1, 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_142())
		{
			if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
		{
			MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_299();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_113[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_383(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_423(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_212(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_422(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (func_287())
	{
		return 0;
	}
	if (func_420())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_279(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_283())
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 0) || func_120(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_120(PLAYER::PLAYER_ID(), 12) || func_120(PLAYER::PLAYER_ID(), 14)) || func_120(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_413(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_390())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_389())
		{
			return 0;
		}
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (func_388(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (func_386(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (func_384(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_94(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_384(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_261.f_4 != 0 || Global_2424047[iParam0 /*416*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_385()
{
	return Global_1671295.f_3663 != -1;
}

int func_386(int iParam0)
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

int func_387()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)
{
	if (!func_982(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

bool func_389()
{
	return Global_93734.f_340 > 0;
}

int func_390()
{
	int iVar0;
	
	iVar0 = func_104(PLAYER::PLAYER_ID());
	if (((func_412(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_25) || func_411(PLAYER::PLAYER_ID())) || func_410(PLAYER::PLAYER_ID())) || func_405(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_403(PLAYER::PLAYER_ID()))
	{
		if (func_136(iVar0) || func_402(iVar0))
		{
			return 1;
		}
	}
	if (func_328(PLAYER::PLAYER_ID()))
	{
		if (func_402(iVar0))
		{
			return 1;
		}
	}
	if (func_401(PLAYER::PLAYER_ID()))
	{
		if (func_400(iVar0))
		{
			return 1;
		}
	}
	if (func_399(PLAYER::PLAYER_ID()))
	{
		if (func_398(iVar0))
		{
			return 1;
		}
	}
	if (func_397(PLAYER::PLAYER_ID()))
	{
		if (func_396(iVar0))
		{
			return 1;
		}
	}
	if (func_395(PLAYER::PLAYER_ID()))
	{
		if (func_394(iVar0))
		{
			return 1;
		}
	}
	if (func_393(PLAYER::PLAYER_ID(), 0))
	{
		if (func_135(iVar0))
		{
			if (func_391(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0)
{
	if (func_392(iParam0) != func_65())
	{
		return func_392(iParam0) == func_66(iParam0);
	}
	return 0;
}

int func_392(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_393(int iParam0, bool bParam1)
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
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_65())
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_399(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_401(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(int iParam0)
{
	if (func_404(Global_1589819[iParam0 /*818*/].f_273.f_25, -1))
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0, int iParam1)
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

int func_405(int iParam0)
{
	if (func_406(Global_1589819[iParam0 /*818*/].f_273.f_25, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_407(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_407(PLAYER::PLAYER_ID(), 0))
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

bool func_407(int iParam0, bool bParam1)
{
	if (Global_1589660 != func_65())
	{
		if (!func_409(Global_1589660))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589660)
			{
				if (MISC::IS_BIT_SET(Global_2424047[Global_1589660 /*416*/].f_195, 24) || func_408(Global_1589660))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 24);
}

int func_408(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 9);
	}
	return 0;
}

int func_409(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 2);
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_411(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
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

int func_413(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (Global_1589819[iParam0 /*818*/].f_273.f_25 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_411(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_328(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_410(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_399(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_397(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_419(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_395(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_418(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_393(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_415(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_414(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_982(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_65())
			{
				return func_329(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_420()
{
	return Global_1312867;
}

bool func_421()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 0);
}

int func_422(int iParam0)
{
	if (func_278(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_423(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_5, iParam1);
}

char* func_424()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_66(PLAYER::PLAYER_ID());
	if (iVar0 != func_65())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_108(iVar0, 28) || func_108(PLAYER::PLAYER_ID(), 28)) || func_429(iVar0)) && !func_428(iVar0))
			{
				return func_426(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_426(iVar0, 0);
			}
		}
		sVar1 = func_425(&(Global_1626536[iVar0 /*603*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_426(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_425(var uParam0)
{
	return uParam0;
}

char* func_426(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_175(iParam0, 1))
		{
			return func_427();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_427()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_428(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_65())
	{
		Var0 = { func_67(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_430()
{
	return ((4 - Local_112.f_115) * Global_262145.f_15395);
}

int func_431()
{
	return ((4 - Local_112.f_115) * Global_262145.f_15394);
}

void func_432(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_617(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_616(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_615(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_613(iParam0))
	{
		if (bParam1)
		{
			if (func_612(PLAYER::PLAYER_ID()) > 0)
			{
				func_611();
			}
			else
			{
				func_610();
			}
		}
		else
		{
			func_609();
		}
	}
	func_593(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_591(iParam0, uParam2, &iVar0, &iVar5);
	func_569(iParam0, uParam2, &iVar0, &iVar5);
	func_555(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_538(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2528542.f_4889.f_378 = iVar4;
	}
	else
	{
		Global_2528542.f_4889.f_378 = iVar5;
	}
	iVar8 = func_251();
	if (iVar8 != func_65() && iParam0 != 148)
	{
		if (func_188(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_76(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_527(&iVar0, 1);
			}
		}
	}
	func_523(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1669366.f_10 = iVar1;
		func_522();
		func_479(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1669366.f_9 = iVar0;
		func_453(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_452(iParam0, iVar0);
		if (func_451(iParam0))
		{
			if (func_450(iParam0) > -1)
			{
				func_449(func_450(iParam0), iVar0);
			}
		}
		Global_2460813 = iVar0;
		func_448(&Global_2459077, 0, 0);
	}
	if (func_123(PLAYER::PLAYER_ID()) || func_148(PLAYER::PLAYER_ID()))
	{
		func_439(iParam0);
	}
	if (func_317(iParam0))
	{
		Global_1669384.f_13 = iVar0;
		Global_1669384.f_14 = iVar1;
	}
	if (func_322(iParam0))
	{
		Global_1669438.f_13 = iVar0;
		Global_1669438.f_14 = iVar1;
	}
	if (func_400(iParam0))
	{
		Global_1669501.f_12 = iVar0;
		Global_1669501.f_13 = iVar1;
	}
	if (func_398(iParam0))
	{
		Global_1669545.f_12 = iVar0;
		Global_1669545.f_13 = iVar1;
	}
	if (func_396(iParam0))
	{
		Global_1669599.f_12 = iVar0;
		Global_1669599.f_13 = iVar1;
	}
	if (func_321(iParam0))
	{
		if (func_438(iParam0))
		{
			Global_1669680.f_12 = iVar0;
			Global_1669680.f_13 = iVar1;
		}
		else if (func_434(iParam0))
		{
			Global_1669733.f_12 = iVar0;
			Global_1669733.f_13 = iVar1;
		}
	}
	if (func_433(iParam0))
	{
		Global_1669817.f_12 = iVar0;
		Global_1669817.f_13 = iVar1;
	}
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_434(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_435(func_436(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_436(int iParam0)
{
	if (func_104(iParam0) == 237 || func_104(iParam0) == 250)
	{
		return func_437(iParam0);
	}
	return -1;
}

int func_437(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_438(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_439(int iParam0)
{
	if (func_447(PLAYER::PLAYER_ID()) && func_446())
	{
		if (func_136(iParam0))
		{
			func_441(9086, -1);
		}
		else if (func_137(iParam0))
		{
			func_441(9088, -1);
		}
		else if (func_219(iParam0, 1))
		{
			func_441(9089, -1);
		}
		else if (func_440(iParam0))
		{
			func_441(9090, -1);
		}
	}
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_441(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_445(iParam0, func_147(iParam1), 0);
	iVar0++;
	if (!func_444(iParam0))
	{
		func_443(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_442(iParam0, iVar0, iParam1, 1);
	}
}

void func_442(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_147(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_147(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_147(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_147(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_147(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_147(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_147(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_147(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_147(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_147(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_147(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_147(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_147(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_147(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_147(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_147(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_147(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_147(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_147(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_147(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_147(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_147(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_147(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_147(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_147(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_147(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_147(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_147(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_147(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_147(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_147(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_147(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_147(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_147(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_147(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_147(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_147(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_147(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_147(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_147(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_147(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_147(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_147(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_147(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_147(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_147(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_147(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_443(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_147(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_444(int iParam0)
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

int func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_147(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_446()
{
	return func_250(PLAYER::PLAYER_ID());
}

bool func_447(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_117, 14);
}

void func_448(var uParam0, bool bParam1, bool bParam2)
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

void func_449(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23355 == 0 || Global_262145.f_23355 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23355 == 1)
			{
				Global_2528542.f_274 = iParam0;
				if (iParam1 > Global_262145.f_6475)
				{
					iParam1 = Global_262145.f_6475;
				}
				Global_2528542.f_275 = iParam1;
				Global_2528542.f_276 = 0;
			}
		}
	}
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_452(int iParam0, int iParam1)
{
	if (func_447(PLAYER::PLAYER_ID()) && func_446())
	{
		if (func_136(iParam0) && iParam1 > 0)
		{
			func_443(9087, (func_445(9087, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
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
	
	iVar4 = func_478();
	if (iVar4 != func_65())
	{
		func_477(iVar4, &uVar0, &uVar1);
	}
	bVar5 = !func_476(1);
	Var6.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_475())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_446())
			{
				if (!func_475())
				{
					Var6 = { func_474() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_473(Var6)), func_472(Var6), iParam4);
				}
			}
			else if (func_475())
			{
				func_460(-856006867, iParam1, &iVar7, 0, 1, 0);
				Global_4263509[iVar7 /*84*/].f_6 = uVar0;
				Global_4263509[iVar7 /*84*/].f_7 = uVar1;
				Global_4263509[iVar7 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_459())
			{
				if (!func_475())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_473(func_458(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_475())
			{
				func_460(-856006867, iParam1, &iVar8, 0, 1, 0);
				Global_4263509[iVar8 /*84*/].f_6 = uVar0;
				Global_4263509[iVar8 /*84*/].f_7 = uVar1;
				Global_4263509[iVar8 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_459())
			{
				if (!func_475())
				{
					iVar2 = func_454(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_475())
			{
				func_460(463142405, iParam1, &iVar9, 0, 1, 0);
				Global_4263509[iVar9 /*84*/].f_6 = uVar0;
				Global_4263509[iVar9 /*84*/].f_7 = uVar1;
				Global_4263509[iVar9 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(uVar0, uVar1, iParam1, bVar5);
			}
			break;
		
		case 233:
			if (func_475())
			{
				func_460(1407278493, iParam1, &iVar10, 0, 1, 0);
				Global_4263509[iVar10 /*84*/].f_6 = uVar0;
				Global_4263509[iVar10 /*84*/].f_7 = uVar1;
				Global_4263509[iVar10 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_459())
			{
				if (!func_475())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_475())
			{
				func_460(-856006867, iParam1, &iVar11, 0, 1, 0);
				Global_4263509[iVar11 /*84*/].f_6 = uVar0;
				Global_4263509[iVar11 /*84*/].f_7 = uVar1;
				Global_4263509[iVar11 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_475())
			{
				func_460(-961034881, iParam1, &iVar12, 0, 1, 0);
				Global_4263509[iVar12 /*84*/].f_6 = uVar0;
				Global_4263509[iVar12 /*84*/].f_7 = uVar1;
				Global_4263509[iVar12 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_475())
			{
				func_460(1135468152, iParam1, &iVar13, 0, 1, 0);
				Global_4263509[iVar13 /*84*/].f_6 = uVar0;
				Global_4263509[iVar13 /*84*/].f_7 = uVar1;
				Global_4263509[iVar13 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_475())
			{
				func_460(-634726636, iParam1, &iVar14, 0, 1, 0);
				Global_4263509[iVar14 /*84*/].f_6 = uVar0;
				Global_4263509[iVar14 /*84*/].f_7 = uVar1;
				Global_4263509[iVar14 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_475())
			{
				func_460(1698417709, iParam1, &iVar15, 0, 1, 0);
				Global_4263509[iVar15 /*84*/].f_6 = uVar0;
				Global_4263509[iVar15 /*84*/].f_7 = uVar1;
				Global_4263509[iVar15 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		default:
			if (func_475())
			{
				func_460(-856006867, iParam1, &iVar16, 0, 1, 0);
				Global_4263509[iVar16 /*84*/].f_6 = uVar0;
				Global_4263509[iVar16 /*84*/].f_7 = uVar1;
				Global_4263509[iVar16 /*84*/].f_8 = bVar5;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar5);
			}
			break;
	}
}

int func_454(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_457(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_455(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_455(int iParam0, int iParam1)
{
	return (func_456(iParam0) * iParam1);
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22180;
		
		case 0:
			return Global_262145.f_22181;
		
		case 1:
			return Global_262145.f_22182;
		
		case 2:
			return Global_262145.f_22183;
		
		case 3:
			return Global_262145.f_22184;
		
		case 4:
			return Global_262145.f_22185;
		
		case 5:
			return Global_262145.f_22186;
		
		case 6:
			return Global_262145.f_22187;
		
		case 7:
			return Global_262145.f_22188;
		
		default:
	}
	return 0;
}

float func_457(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22190);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22192;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22189);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22192;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22189);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22194;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22191);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22194;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22191);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22194;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22191);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_458(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_177[5 /*12*/];
}

bool func_459()
{
	return func_122(PLAYER::PLAYER_ID());
}

void func_460(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_475())
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
				func_461(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_461(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_461(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_461(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_461(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_461(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_475())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_468(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_467(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_462(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_463(iParam0);
	}
}

void func_463(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_475())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_466(iParam0))
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
		func_464(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_464(var uParam0)
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
	func_465(&(uParam0->f_13));
	func_465(&(uParam0->f_13.f_13));
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

void func_465(var uParam0)
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

int func_466(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_467(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_468(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_475())
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_469(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_469(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_471(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_470();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_470()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_471(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_472(int iParam0)
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

char* func_473(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_474()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_193;
}

int func_475()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_476(bool bParam0)
{
	return func_188(PLAYER::PLAYER_ID(), bParam0);
}

void func_477(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1626536[iParam0 /*603*/].f_11.f_8[0];
	*uParam2 = Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_478()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

int func_479(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_480(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_480(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_490(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_486(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_481(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_481(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_484(iParam0, 1) };
	if (iParam0 == func_483(PLAYER::PLAYER_PED_ID()))
	{
		func_482(1);
	}
	func_486(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_482(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_483(int iParam0)
{
	return iParam0;
}

Vector3 func_484(int iParam0, bool bParam1)
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
	if (iParam0 == func_485(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_485(int iParam0)
{
	return iParam0;
}

void func_486(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_489(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_488();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_487();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_487()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_488()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_489(vector3 vParam0, var uParam1, var uParam2)
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

var func_490(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_491(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_491(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_521(PLAYER::PLAYER_ID()) || func_520(PLAYER::PLAYER_ID()))
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
	else if (func_238() || func_519(PLAYER::PLAYER_ID()))
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
	if (func_518(sParam2))
	{
	}
	if (func_517())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_515(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_514(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_512(0, &iVar1);
					break;
				
				case 3:
					func_512(1, &iVar1);
					break;
				
				case 1:
					func_510(&iVar1);
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
			func_509(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_501((func_508(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_2 != -1)
				{
					func_509(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_496(iVar1);
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
				func_492((func_494(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_492((func_494(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_492(int iParam0)
{
	if (func_517())
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_5 = iParam0;
		func_493(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_493(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_494(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_982(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_495(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_495(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_495(int iParam0)
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

void func_496(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_67(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_499(func_500(&Var0));
			if (iVar1 == 0)
			{
				func_498(&Global_1382581, iParam0);
				func_497(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_498(&Global_1382582, iParam0);
				func_497(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_498(&Global_1382583, iParam0);
				func_497(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_498(&Global_1382584, iParam0);
				func_497(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_498(&Global_1382585, iParam0);
				func_497(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1382585);
			}
		}
	}
}

void func_497(int iParam0, int iParam1)
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

void func_498(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_499(int iParam0)
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

int func_500(var uParam0)
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

void func_501(int iParam0, int iParam1, int iParam2)
{
	if (func_517())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_147(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_147(-1)])
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
		if (func_507(PLAYER::PLAYER_ID()))
		{
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_6 = func_505(iParam0, 1);
		}
		func_442(639, iParam0, -1, 1);
		func_443(640, func_505(iParam0, 1), -1, 1, 0);
		Global_1382702[func_147(-1)] = iParam0;
		func_502(7, 0);
	}
}

void func_502(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_504(iParam0, iParam1))
	{
		iVar0 = func_503();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_503()
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

int func_504(int iParam0, var uParam1)
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

int func_505(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_506(iParam0, 0);
}

int func_506(int iParam0, int iParam1)
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

int func_507(int iParam0)
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

int func_508(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_147(-1)];
			}
			else if (func_507(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_147(-1)];
	}
	return 0;
}

void func_509(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_445(iParam0, func_147(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_444(iParam0))
	{
		func_443(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_442(iParam0, iVar0, iParam2, 1);
	}
}

void func_510(int iParam0)
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
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_365(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_68(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_511(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_511(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_511(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_512(bool bParam0, int iParam1)
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
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_982(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_982(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_513(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_511(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_511(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_513(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_514(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_511(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_515(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_508(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_508(PLAYER::PLAYER_ID());
		}
	}
	if (func_516(8000, 0, 0) > 0)
	{
		if (func_516(8000, 0, 0) < (iParam0 + func_508(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_516(8000, 0, 0) - func_508(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_516(int iParam0, bool bParam1, int iParam2)
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

int func_517()
{
	return 1;
}

int func_518(char* sParam0)
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

int func_519(int iParam0)
{
	return func_396(func_104(iParam0));
}

bool func_520(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_521(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_522()
{
	Global_2460154 = 1;
}

void func_523(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_81(7))
	{
		return;
	}
	iVar0 = func_526(iParam0);
	iVar1 = func_525(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2528542.f_4889.f_261, NETWORK::GET_NETWORK_TIME()));
	if (func_524(iParam0) != -1)
	{
		if (iVar2 > func_524(iParam0))
		{
			iVar2 = func_524(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12286)
	{
		iVar2 = Global_262145.f_12286;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_524(int iParam0)
{
	if (func_219(iParam0, 0) || func_137(iParam0))
	{
		return Global_262145.f_18361;
	}
	if (func_136(iParam0))
	{
		return Global_262145.f_18360;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18357;
		
		case 191:
			return Global_262145.f_18359;
		
		case 190:
			return Global_262145.f_18358;
		
		case 227:
			return Global_262145.f_20917;
		
		case 226:
			return Global_262145.f_20905;
		
		case 225:
			return Global_262145.f_20925;
		
		case 230:
			return Global_262145.f_22177;
		
		case 229:
			return Global_262145.f_22081;
		
		case 233:
			return Global_262145.f_22652;
		
		case 237:
			return Global_262145.f_23808;
		
		case 238:
			return Global_262145.f_23919;
		
		case 249:
			return Global_262145.f_23935;
		
		case 243:
			return Global_262145.f_26063;
		
		default:
	}
	return -1;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12377;
		
		case 152:
			return Global_262145.f_12412;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12400;
		
		case 157:
			return Global_262145.f_12367;
		
		case 159:
			return Global_262145.f_12350;
		
		case 164:
			return Global_262145.f_12390;
		
		case 160:
			return Global_262145.f_12440;
		
		case 162:
			return Global_262145.f_12460;
		
		case 163:
			return Global_262145.f_12425;
		
		case 154:
			return Global_262145.f_12495;
		
		case 155:
			return Global_262145.f_12485;
		
		case 153:
			return Global_262145.f_12449;
		
		case 170:
			return Global_262145.f_14872;
		
		case 171:
			return Global_262145.f_14931;
		
		case 172:
			return Global_262145.f_14949;
		
		case 173:
			return Global_262145.f_14890;
		
		case 166:
			return Global_262145.f_14905;
		
		case 167:
			return Global_262145.f_14996;
		
		case 169:
			return Global_262145.f_14968;
		
		case 168:
			return Global_262145.f_14961;
		
		case 179:
			return Global_262145.f_18240;
		
		case 180:
			return Global_262145.f_18019;
		
		case 182:
			return Global_262145.f_18019;
		
		case 183:
			return Global_262145.f_18019;
		
		case 185:
			return Global_262145.f_18019;
		
		case 186:
			return Global_262145.f_18019;
		
		case 189:
			return Global_262145.f_18240;
		
		case 190:
			return Global_262145.f_17895;
		
		case 191:
			return Global_262145.f_17986;
		
		case 192:
			return Global_262145.f_17780;
		
		case 193:
			return Global_262145.f_18240;
		
		case 194:
			return Global_262145.f_18240;
		
		case 195:
			return Global_262145.f_18019;
		
		case 197:
			return Global_262145.f_18019;
		
		case 198:
			return Global_262145.f_18019;
		
		case 199:
			return Global_262145.f_18240;
		
		case 200:
			return Global_262145.f_18240;
		
		case 201:
			return Global_262145.f_18240;
		
		case 205:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18019;
		
		case 208:
			return Global_262145.f_18019;
		
		case 209:
			return Global_262145.f_18019;
		
		case 210:
			return Global_262145.f_18240;
		
		case 211:
			return Global_262145.f_18240;
		
		case 214:
			return Global_262145.f_19090;
		
		case 215:
			return Global_262145.f_19092;
		
		case 216:
			return Global_262145.f_19094;
		
		case 217:
			return Global_262145.f_19096;
		
		case 218:
			return Global_262145.f_19098;
		
		case 219:
			return Global_262145.f_19100;
		
		case 220:
			return Global_262145.f_19102;
		
		case 221:
			return Global_262145.f_19104;
		
		case 225:
			if (!func_459())
			{
				return Global_262145.f_20927;
			}
			break;
		
		case 226:
			if (!func_459())
			{
				return Global_262145.f_20907;
			}
			break;
		
		case 227:
			if (!func_459())
			{
				return Global_262145.f_20919;
			}
			break;
		
		case 229:
			if (!func_459())
			{
				return Global_262145.f_22083;
			}
			break;
		
		case 230:
			if (!func_459())
			{
				return Global_262145.f_22179;
			}
			break;
		
		case 233:
			if (!func_459())
			{
				return Global_262145.f_22651;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_459())
			{
				return Global_262145.f_23810;
			}
			break;
		
		case 238:
			if (!func_459())
			{
				return Global_262145.f_23921;
			}
			break;
		
		case 249:
			if (!func_459())
			{
				return Global_262145.f_23937;
			}
			break;
		
		case 243:
			if (!func_459())
			{
				return Global_262145.f_26066;
			}
			break;
	}
	return 0;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12376;
		
		case 152:
			return Global_262145.f_12411;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12399;
		
		case 157:
			return Global_262145.f_12366;
		
		case 159:
			return Global_262145.f_12349;
		
		case 164:
			return Global_262145.f_12389;
		
		case 160:
			return Global_262145.f_12439;
		
		case 162:
			return Global_262145.f_12459;
		
		case 163:
			return Global_262145.f_12424;
		
		case 154:
			return Global_262145.f_12494;
		
		case 155:
			return Global_262145.f_12484;
		
		case 153:
			return Global_262145.f_12448;
		
		case 170:
			return Global_262145.f_14871;
		
		case 171:
			return Global_262145.f_14930;
		
		case 172:
			return Global_262145.f_14948;
		
		case 173:
			return Global_262145.f_14889;
		
		case 166:
			return Global_262145.f_14904;
		
		case 179:
			return Global_262145.f_18239;
		
		case 180:
			return Global_262145.f_18018;
		
		case 182:
			return Global_262145.f_18018;
		
		case 183:
			return Global_262145.f_18018;
		
		case 185:
			return Global_262145.f_18018;
		
		case 186:
			return Global_262145.f_18018;
		
		case 189:
			return Global_262145.f_18239;
		
		case 193:
			return Global_262145.f_18239;
		
		case 194:
			return Global_262145.f_18239;
		
		case 195:
			return Global_262145.f_18018;
		
		case 197:
			return Global_262145.f_18018;
		
		case 198:
			return Global_262145.f_18018;
		
		case 199:
			return Global_262145.f_18239;
		
		case 200:
			return Global_262145.f_18239;
		
		case 201:
			return Global_262145.f_18239;
		
		case 205:
			return Global_262145.f_18239;
		
		case 207:
			return Global_262145.f_18018;
		
		case 208:
			return Global_262145.f_18018;
		
		case 209:
			return Global_262145.f_18018;
		
		case 210:
			return Global_262145.f_18239;
		
		case 211:
			return Global_262145.f_18239;
		
		case 190:
			if (!func_459())
			{
				return Global_262145.f_17894;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_459())
			{
				return Global_262145.f_17985;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_459())
			{
				return Global_262145.f_17779;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19089;
		
		case 215:
			return Global_262145.f_19091;
		
		case 216:
			return Global_262145.f_19093;
		
		case 217:
			return Global_262145.f_19095;
		
		case 218:
			return Global_262145.f_19097;
		
		case 219:
			return Global_262145.f_19099;
		
		case 220:
			return Global_262145.f_19101;
		
		case 221:
			return Global_262145.f_19103;
		
		case 225:
			if (!func_459())
			{
				return Global_262145.f_20926;
			}
			break;
		
		case 226:
			if (!func_459())
			{
				return Global_262145.f_20906;
			}
			break;
		
		case 227:
			if (!func_459())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 229:
			if (!func_459())
			{
				return Global_262145.f_22082;
			}
			break;
		
		case 230:
			if (!func_459())
			{
				return Global_262145.f_22178;
			}
			break;
		
		case 233:
			if (!func_459())
			{
				return Global_262145.f_22653;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (!func_459())
			{
				return Global_262145.f_23809;
			}
			break;
		
		case 238:
			if (!func_459())
			{
				return Global_262145.f_23920;
			}
			break;
		
		case 249:
			if (!func_459())
			{
				return Global_262145.f_23936;
			}
			break;
		
		case 243:
			return Global_262145.f_26062;
	}
	return 0;
}

void func_527(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_459())
		{
			if (func_476(0))
			{
				if (!func_248(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_478()))
					{
						if (func_537() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_537());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_535(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_532("GB_BCUT_TICK1", func_478(), iVar0, 0, 0, 1, 1);
						}
						func_531(20);
						func_528(func_478(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_528(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_982(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_530(iParam0);
		func_529(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_471(iParam0));
	}
}

void func_529(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_530(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_531(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_532(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_358(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_533(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_303(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_533(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_534(&cVar0);
}

var func_534(char[4] cParam0)
{
	return cParam0;
}

void func_535(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_536(1);
	}
	else
	{
		iVar1 = func_536(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_536(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_537()
{
	return Global_262145.f_12280;
}

void func_538(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_248(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_459())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_478();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589819[iVar11 /*818*/].f_796.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1589819[iVar11 /*818*/].f_796.f_2;
			}
			else
			{
				iVar2 = func_554(Global_1589819[iVar11 /*818*/].f_796, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_553(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_552("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1669680.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_551(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_549(*uParam3);
				}
				iVar6 = func_548(&uVar5);
				iVar7 = Global_262145.f_23839;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23838));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_531(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_547(iVar23))
								{
									func_539(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23811;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23812;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_531(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_539(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_541(iParam0);
	func_540(iParam0, uVar0, iParam1, iParam2);
}

void func_540(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2087882476;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_530(iParam0);
	func_529(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_65())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_471(iParam0));
		}
	}
}

int func_541(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_546();
	iVar0 = func_544(iParam0, iVar0);
	iVar1 = Global_1626536[func_478() /*603*/].f_11.f_446;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14832));
	if (iVar0 < func_543())
	{
		iVar0 = func_543();
	}
	if (iVar0 > func_542())
	{
		iVar0 = func_542();
	}
	return iVar0;
}

int func_542()
{
	return Global_262145.f_14833;
}

int func_543()
{
	return Global_262145.f_16008;
}

int func_544(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_612(iParam0) * func_545());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_545()
{
	return Global_262145.f_16007;
}

var func_546()
{
	return Global_262145.f_12272;
}

int func_547(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_76(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_108(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_548(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar2, 0) && !func_76(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_549(int iParam0)
{
	func_550(iParam0, 7236);
}

void func_550(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_445(iParam1, -1, 0);
	func_443(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_551(int iParam0)
{
	func_550(iParam0, 7231);
}

int func_552(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_303(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_553(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23840);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_554(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_555(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_248(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_459())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_478();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_567(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_558(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_455(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_454(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_557(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_552("SMTICK_RONCUT", func_557(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_557(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_556(iVar2, iVar9);
				iVar6 = func_548(&uVar5);
				iVar7 = Global_262145.f_22196;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22195));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_531(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_547(iVar20))
								{
									func_539(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22129;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22130;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_531(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_556(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_550(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_550(iParam1, 6117);
	}
}

int func_557(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22163);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22164))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22164);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_558(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_565())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_567(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_560(func_561(func_564(iVar0), -1, -1));
		if (func_559(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_561(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_563(iParam0, iParam1);
	iVar2 = func_562(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_562(int iParam0)
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

int func_563(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_565()
{
	return func_566() != 0;
}

int func_566()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_258;
}

int func_567(int iParam0)
{
	if (iParam0 != func_65() && func_568(iParam0))
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258.f_3;
	}
	return 0;
}

int func_568(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

void func_569(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_248(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_459())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_478();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_458(iVar15);
			iVar0 = (func_590(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_586(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20909));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20908));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_583(iVar16, iVar2);
				if (func_579(iVar16) >= Global_262145.f_20457 || iVar2 >= Global_262145.f_20457)
				{
					func_570(5);
				}
				iVar6 = func_548(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_20911);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_20910));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_531(108);
					}
					else
					{
						func_531(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_547(iVar20))
								{
									func_539(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20912;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20913;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_531(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20445)
			{
				if (func_572(Global_262145.f_20446))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20447)
			{
				if (func_572(Global_262145.f_20448))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20449)
			{
				if (func_572(Global_262145.f_20450))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20451)
			{
				if (func_572(Global_262145.f_20452))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20453)
			{
				if (func_572(Global_262145.f_20454))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20455)
			{
				if (func_572(Global_262145.f_20456))
				{
					func_552("CLOTHAWDSTRAP3", Global_262145.f_20457, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20458)
			{
				if (func_572(Global_262145.f_20459))
				{
					func_552("CLOTHAWDSTRAP5", Global_262145.f_20591, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20461)
			{
				if (func_572(Global_262145.f_20462))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20463)
			{
				if (func_572(Global_262145.f_20464))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20465)
			{
				if (func_572(Global_262145.f_20466))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20467)
			{
				if (func_572(Global_262145.f_20468))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20469)
			{
				if (func_572(Global_262145.f_20470))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20471)
			{
				if (func_572(Global_262145.f_20472))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20473)
			{
				if (func_572(Global_262145.f_20474))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20475)
			{
				if (func_572(Global_262145.f_20476))
				{
					func_571("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_571(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	}
	else
	{
		Global_2505680 = { func_67(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2505610.f_22), "Leader") && Global_2505610.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2505610.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar1, 0, Global_2505610, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314024, Global_1314025, Global_1314026);
		}
		else
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_303(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_576(15417, -1, -1))
			{
				func_575(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_576(15418, -1, -1))
			{
				func_575(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_576(15425, -1, -1))
			{
				func_575(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_576(15405, -1, -1))
			{
				func_575(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_576(15393, -1, -1))
			{
				func_575(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_576(15409, -1, -1))
			{
				func_575(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_576(15396, -1, -1))
			{
				func_575(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_576(15412, -1, -1))
			{
				func_575(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_576(15403, -1, -1))
			{
				func_575(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_576(15389, -1, -1))
			{
				func_575(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_576(15398, -1, -1))
			{
				func_575(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_576(15400, -1, -1))
			{
				func_575(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_576(15408, -1, -1))
			{
				func_575(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_576(15411, -1, -1))
			{
				func_575(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_576(15397, -1, -1))
			{
				func_575(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_576(15413, -1, -1))
			{
				func_575(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_576(15391, -1, -1))
			{
				func_575(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_576(15388, -1, -1))
			{
				func_575(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_576(15401, -1, -1))
			{
				func_575(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_576(15394, -1, -1))
			{
				func_575(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_576(15406, -1, -1))
			{
				func_575(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_576(15395, -1, -1))
			{
				func_575(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_576(15410, -1, -1))
			{
				func_575(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_576(15407, -1, -1))
			{
				func_575(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_576(15414, -1, -1))
			{
				func_575(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_576(15415, -1, -1))
			{
				func_575(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_576(15399, -1, -1))
			{
				func_575(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_576(15404, -1, -1))
			{
				func_575(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_576(15392, -1, -1))
			{
				func_575(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_576(15390, -1, -1))
			{
				func_575(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_576(15402, -1, -1))
			{
				func_575(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_576(15416, -1, -1))
			{
				func_575(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_146(209, -1))
			{
				func_573(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_576(15426, -1, -1))
			{
				func_575(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_576(15422, -1, -1))
			{
				func_575(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_576(15423, -1, -1))
			{
				func_575(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_576(15421, -1, -1))
			{
				func_575(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_576(15427, -1, -1))
			{
				func_575(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_576(15419, -1, -1))
			{
				func_575(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_576(15420, -1, -1))
			{
				func_575(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_574())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_147(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_574()
{
	return 1;
	return 0;
}

int func_575(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

int func_576(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_578(iParam0, iParam1);
	uVar2 = func_577(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_577(int iParam0)
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

int func_578(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_579(int iParam0)
{
	int iVar0;
	
	iVar0 = func_581(iParam0);
	return func_445(func_580(iVar0), -1, 0);
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_581(int iParam0)
{
	int iVar0;
	
	if (func_582(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_177[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_582(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_583(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_581(iParam0);
	iVar1 = func_580(iVar0);
	iVar2 = (func_445(iVar1, -1, 0) + iParam1);
	func_443(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_561(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
			{
				iVar1 = func_580(iVar0);
				iVar3 = (iVar3 + func_445(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_585(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_584(9357, iVar5, -1, 1);
	}
}

var func_584(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_586(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_472(iParam1);
	if (func_582(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16837;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16836;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16835;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16833;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16834;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20934;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20936);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20935);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_587(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_589(iParam0, iParam1))
	{
		iVar0 = func_588(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_588(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_582(iParam1) && iParam0 != func_65())
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

int func_589(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_582(iParam1) && iParam0 != func_65())
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

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_582(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_591(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_446())
			{
				Var0 = { func_474() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_586(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_18469);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_18468);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_548(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_262145.f_18459);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_262145.f_18458));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_531(86);
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (func_248(0))
			{
				Var14 = { func_592(func_478()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_586(func_478(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_18469));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_18468));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18508;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18509;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_592(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_193;
}

void func_593(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_122(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_608();
			}
			func_607();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_122(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_599(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_598(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_548(&uVar2);
					iVar4 = Global_262145.f_16018;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15227));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_531(44);
					}
				}
				func_596(*iParam3);
				func_595();
				Global_2528542.f_4889.f_377 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_547(iVar9))
						{
							func_539(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_122(PLAYER::PLAYER_ID()))
		{
			func_594();
		}
	}
}

void func_594()
{
	int iVar0;
	
	iVar0 = Global_2573685[func_19()];
	iVar0++;
	func_442(3667, iVar0, -1, 1);
}

void func_595()
{
	int iVar0;
	
	iVar0 = Global_2573691[func_19()];
	iVar0++;
	func_442(3666, iVar0, -1, 1);
}

void func_596(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2573694[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_442(3668, iVar0, -1, 1);
	if (func_561(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_597(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_584(7666, iVar2, -1, 1);
	}
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16151;
			break;
		
		case 2:
			return Global_262145.f_16152;
			break;
		
		case 3:
			return Global_262145.f_16153;
			break;
		
		case 4:
			return Global_262145.f_16154;
			break;
		
		case 5:
			return Global_262145.f_16155;
			break;
		
		case 6:
			return Global_262145.f_16156;
			break;
		
		case 7:
			return Global_262145.f_16157;
			break;
		
		case 8:
			return Global_262145.f_16158;
			break;
		
		case 9:
			return Global_262145.f_16159;
			break;
		
		case 10:
			return Global_262145.f_16160;
			break;
		
		case 11:
			return Global_262145.f_16161;
			break;
		
		case 12:
			return Global_262145.f_16162;
			break;
		
		case 13:
			return Global_262145.f_16163;
			break;
		
		case 14:
			return Global_262145.f_16164;
			break;
		
		case 15:
			return Global_262145.f_16165;
			break;
		
		case 16:
			return Global_262145.f_16166;
			break;
		
		case 17:
			return Global_262145.f_16167;
			break;
		
		case 18:
			return Global_262145.f_16168;
			break;
		
		case 19:
			return Global_262145.f_16169;
			break;
		
		case 20:
			return Global_262145.f_16170;
			break;
		
		case 21:
			return Global_262145.f_16171;
			break;
		
		case 22:
			return Global_262145.f_16172;
			break;
		
		case 23:
			return Global_262145.f_16173;
			break;
		
		case 24:
			return Global_262145.f_16174;
			break;
	}
	return 0;
}

var func_598(int iParam0)
{
	if (iParam0 >= Global_262145.f_15205)
	{
		return Global_262145.f_15226;
	}
	else if (iParam0 >= Global_262145.f_15204)
	{
		return Global_262145.f_15225;
	}
	else if (iParam0 >= Global_262145.f_15203)
	{
		return Global_262145.f_15224;
	}
	else if (iParam0 >= Global_262145.f_15202)
	{
		return Global_262145.f_15223;
	}
	else if (iParam0 >= Global_262145.f_15201)
	{
		return Global_262145.f_15222;
	}
	else if (iParam0 >= Global_262145.f_15200)
	{
		return Global_262145.f_15221;
	}
	else if (iParam0 >= Global_262145.f_15199)
	{
		return Global_262145.f_15220;
	}
	else if (iParam0 >= Global_262145.f_15198)
	{
		return Global_262145.f_15219;
	}
	else if (iParam0 >= Global_262145.f_15197)
	{
		return Global_262145.f_15218;
	}
	else if (iParam0 >= Global_262145.f_15196)
	{
		return Global_262145.f_15217;
	}
	else if (iParam0 >= Global_262145.f_15195)
	{
		return Global_262145.f_15216;
	}
	else if (iParam0 >= Global_262145.f_15194)
	{
		return Global_262145.f_15215;
	}
	else if (iParam0 >= Global_262145.f_15193)
	{
		return Global_262145.f_15214;
	}
	else if (iParam0 >= Global_262145.f_15192)
	{
		return Global_262145.f_15213;
	}
	else if (iParam0 >= Global_262145.f_15191)
	{
		return Global_262145.f_15212;
	}
	else if (iParam0 >= Global_262145.f_15190)
	{
		return Global_262145.f_15211;
	}
	else if (iParam0 >= Global_262145.f_15189)
	{
		return Global_262145.f_15210;
	}
	else if (iParam0 >= Global_262145.f_15188)
	{
		return Global_262145.f_15209;
	}
	else if (iParam0 >= Global_262145.f_15187)
	{
		return Global_262145.f_15208;
	}
	else if (iParam0 >= Global_262145.f_15186)
	{
		return Global_262145.f_15207;
	}
	return Global_262145.f_15206;
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_606(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_605(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_604(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_600(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_600(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_604(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	if (func_603(iParam0))
	{
		iVar0 = func_601(func_602(iParam0));
		return func_445(iVar0, -1, 0);
	}
	return 0;
}

int func_601(int iParam0)
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

int func_602(int iParam0)
{
	int iVar0;
	
	if (func_603(iParam0))
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

int func_603(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_604(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15405;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15403;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15407;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15401;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15399;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15409;
	}
	return 0;
}

int func_605(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_603(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1671007[iVar0] == iParam1 && Global_1671014[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_606(int iParam0)
{
	int iVar0;
	
	if (func_603(iParam0))
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

void func_607()
{
	int iVar0;
	
	iVar0 = Global_2573682[func_19()];
	iVar0++;
	Global_2573682[func_19()] = iVar0;
	func_442(3665, iVar0, -1, 1);
}

void func_608()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2573679[func_19()];
	iVar1 = Global_2573688[func_19()];
	iVar0++;
	iVar1++;
	Global_2573679[func_19()] = iVar0;
	Global_2573688[func_19()] = iVar1;
	Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_122 = iVar1;
	func_442(3663, iVar0, -1, 1);
	func_442(3664, iVar1, -1, 1);
}

void func_609()
{
	if (func_459())
	{
		Global_2449538.f_3072.f_134 = 0;
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
	}
}

void func_610()
{
	if (func_459())
	{
		if (Global_2449538.f_3072.f_134 < 10)
		{
			Global_2449538.f_3072.f_134++;
			Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

void func_611()
{
	if (func_459())
	{
		if (Global_2449538.f_3072.f_134 > 0)
		{
			Global_2449538.f_3072.f_134 = (Global_2449538.f_3072.f_134 - 1);
			Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

int func_612(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_28;
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_476(1) && !func_248(1))
			{
				if (func_614(func_478()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_614(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

int func_615(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18155;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12397) * Global_262145.f_12402));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12347) * Global_262145.f_12352));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12374) * Global_262145.f_12378));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12387) * Global_262145.f_12391));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12409) * Global_262145.f_12414));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12571) * Global_262145.f_12572));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12577) * Global_262145.f_12578));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12575) * Global_262145.f_12576));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12569) * Global_262145.f_12570));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12573) * Global_262145.f_12574));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12568));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14928;
		
		case 172:
			return Global_262145.f_14944;
		
		case 173:
			return Global_262145.f_14887;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18163;
		
		case 180:
			return Global_262145.f_18039;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18047;
		
		case 185:
			return Global_262145.f_18056;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18251;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18268;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18116;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18299;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18177;
		
		case 205:
			return Global_262145.f_18286;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18281;
		
		case 211:
			return Global_262145.f_18245;
		
		case 214:
			return Global_262145.f_18839;
		
		case 215:
			return Global_262145.f_18849;
		
		case 216:
			return Global_262145.f_18859;
		
		case 217:
			return Global_262145.f_18868;
		
		case 218:
			return Global_262145.f_18877;
		
		case 219:
			return Global_262145.f_18893;
		
		case 241:
			return Global_262145.f_23956;
		
		case 242:
			return Global_262145.f_23952;
		
		case 248:
			return Global_262145.f_23955;
		
		case 244:
			return Global_262145.f_23953;
		
		case 239:
			return Global_262145.f_23957;
		
		case 240:
			return Global_262145.f_23958;
		
		case 243:
			return Global_262145.f_26061;
		
		default:
	}
	return 0;
}

int func_616(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18156;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12398) * Global_262145.f_12403));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12348) * Global_262145.f_12353));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12375) * Global_262145.f_12379));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12388) * Global_262145.f_12392));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12410) * Global_262145.f_12415));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12447) * Global_262145.f_12450));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12493) * Global_262145.f_12496));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12486));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12438) * Global_262145.f_12441));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12458) * Global_262145.f_12463));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12423) * Global_262145.f_12426));
		
		case 170:
			return Global_262145.f_14870;
		
		case 171:
			return Global_262145.f_14929;
		
		case 172:
			return Global_262145.f_14945;
		
		case 173:
			return Global_262145.f_14888;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16965;
		
		case 168:
			return Global_262145.f_16964;
		
		case 179:
			return Global_262145.f_18164;
		
		case 180:
			return Global_262145.f_18040;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18048;
		
		case 185:
			return Global_262145.f_18057;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18252;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18269;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18117;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18300;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18178;
		
		case 205:
			return Global_262145.f_18287;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18145;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18282;
		
		case 211:
			return Global_262145.f_18246;
		
		case 214:
			return Global_262145.f_18840;
		
		case 215:
			return Global_262145.f_18850;
		
		case 216:
			return Global_262145.f_18860;
		
		case 217:
			return Global_262145.f_18869;
		
		case 218:
			return Global_262145.f_18878;
		
		case 219:
			return Global_262145.f_18894;
		
		case 178:
			if (func_459())
			{
				return Global_262145.f_18717;
			}
			else if (bParam1)
			{
				return Global_262145.f_18718;
			}
			break;
		
		case 188:
			if (func_459())
			{
				return Global_262145.f_18801;
			}
			else if (bParam1)
			{
				return Global_262145.f_18802;
			}
			break;
		
		case 225:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20922;
				}
				else
				{
					return Global_262145.f_20923;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_20924;
			}
			break;
		
		case 226:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20902;
				}
				else
				{
					return Global_262145.f_20903;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_20904;
			}
			break;
		
		case 227:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20914;
				}
				else
				{
					return Global_262145.f_20915;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_20916;
			}
			break;
		
		case 229:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22078;
				}
				else
				{
					return Global_262145.f_22079;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_22080;
			}
			break;
		
		case 230:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22174;
				}
				else
				{
					return Global_262145.f_22175;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_22176;
			}
			break;
		
		case 233:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22649;
				}
				else
				{
					return Global_262145.f_22650;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_22648;
			}
			break;
		
		case 241:
			return Global_262145.f_23963;
		
		case 242:
			return Global_262145.f_23959;
		
		case 244:
			return Global_262145.f_23960;
		
		case 248:
			return Global_262145.f_23962;
		
		case 239:
			return Global_262145.f_23964;
		
		case 240:
			return Global_262145.f_23965;
		
		case 237:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23805;
				}
				else
				{
					return Global_262145.f_23806;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_23807;
			}
			break;
		
		case 238:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23916;
				}
				else
				{
					return Global_262145.f_23917;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_23918;
			}
			break;
		
		case 249:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23932;
				}
				else
				{
					return Global_262145.f_23933;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_23934;
			}
			break;
		
		case 243:
			if (func_459() && !func_446())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26064;
				}
				else
				{
					return Global_262145.f_26065;
				}
			}
			else if (func_446())
			{
				return Global_262145.f_26064;
			}
			break;
	}
	return 0;
}

void func_617(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_618(iParam0))
	{
		if (!func_459())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12291;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_188(PLAYER::PLAYER_ID(), 1))
	{
		if (func_317(iParam0))
		{
			*uParam1 = (Global_262145.f_18016 / 100f);
			*uParam2 = (Global_262145.f_18016 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23966;
			*uParam2 = Global_262145.f_23966;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23967;
			*uParam2 = Global_262145.f_23967;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23969;
			*uParam2 = Global_262145.f_23969;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23970;
			*uParam2 = Global_262145.f_23970;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23971;
			*uParam2 = Global_262145.f_23971;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23972;
			*uParam2 = Global_262145.f_23972;
		}
		else
		{
			*uParam1 = Global_262145.f_12288;
			*uParam2 = Global_262145.f_12287;
		}
	}
	else if (func_317(iParam0))
	{
		*uParam1 = (Global_262145.f_18017 / 100f);
		*uParam2 = (Global_262145.f_18017 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23973;
		*uParam2 = Global_262145.f_23973;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23974;
		*uParam2 = Global_262145.f_23974;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23976;
		*uParam2 = Global_262145.f_23976;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23977;
		*uParam2 = Global_262145.f_23977;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23978;
		*uParam2 = Global_262145.f_23978;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23979;
		*uParam2 = Global_262145.f_23979;
	}
	else
	{
		*uParam1 = Global_262145.f_12290;
		*uParam2 = Global_262145.f_12289;
	}
	iVar0 = func_251();
	if (iVar0 != func_65())
	{
		if (func_76(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_619()
{
	return (Local_112.f_115 * Global_262145.f_14903);
}

int func_620()
{
	return (Local_112.f_115 * Global_262145.f_14902);
}

void func_621(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_180(PLAYER::PLAYER_ID());
		Global_1669645.f_4 = func_728();
		Global_1669645.f_5 = func_727();
		if (func_128(PLAYER::PLAYER_ID()) || func_129(PLAYER::PLAYER_ID()))
		{
			Global_1669645.f_6 = 1;
		}
		else
		{
			Global_1669645.f_6 = 0;
		}
		Global_1669645.f_1 = func_723(bParam9);
		Global_1669645.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669645.f_9 = func_722(bParam0);
		Global_1669645.f_10 = iParam1;
		Global_1669645.f_17 = Global_1669645.f_2;
		Global_1669645.f_18 = Global_1669645.f_2;
		Global_1669645.f_19 = func_721();
		Global_1669645.f_21 = (Global_1669645.f_8 - Global_1669645.f_7);
		if (func_188(PLAYER::PLAYER_ID(), 1))
		{
			Global_1669645.f_23 = func_722(func_248(1));
		}
		Global_1669645.f_24 = func_720(PLAYER::PLAYER_ID());
		Global_1669645.f_28 = func_719(PLAYER::PLAYER_ID());
		if (Global_1669645.f_24 > 2)
		{
			Global_1669645.f_24 = 2;
		}
		func_717(iVar0);
	}
	else
	{
		iVar0 = func_104(PLAYER::PLAYER_ID());
	}
	if (func_317(iVar0))
	{
		Global_1669384.f_2 = func_728();
		Global_1669384.f_3 = func_727();
		Global_1669384.f_50 = iParam4;
		Global_1669384.f_51 = iParam5;
		Global_1669384.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669384.f_20 = (Global_1669384.f_10 - Global_1669384.f_9);
		Global_1669384.f_12 = iParam1;
		Global_1669384.f_19 = func_713(iVar0, bParam0, func_716(bParam3));
		if (bParam0)
		{
			Global_1669384.f_11 = 1;
		}
		else
		{
			Global_1669384.f_11 = 0;
		}
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669384.f_8 = 1;
		}
		else
		{
			Global_1669384.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1669384.f_43 = 0;
			Global_1669384.f_45 = func_712(func_478(), iParam2);
			Global_1669384.f_47 = iParam7;
			Global_1669384.f_46 = iParam6;
			Global_1669384.f_52 = func_711(func_478(), iParam2);
		}
		func_709(iVar0);
	}
	else if (func_322(iVar0))
	{
		Global_1669438.f_2 = func_728();
		Global_1669438.f_3 = func_727();
		Global_1669438.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669438.f_19 = (Global_1669438.f_10 - Global_1669438.f_9);
		Global_1669438.f_12 = iParam1;
		if (bParam0)
		{
			Global_1669438.f_11 = 1;
		}
		else
		{
			Global_1669438.f_11 = 0;
		}
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669438.f_8 = 1;
		}
		else
		{
			Global_1669438.f_8 = 0;
		}
		func_707(iVar0);
	}
	else if (func_400(iVar0))
	{
		Global_1669501.f_2 = func_728();
		Global_1669501.f_3 = func_727();
		Global_1669501.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669501.f_18 = (Global_1669501.f_9 - Global_1669501.f_8);
		Global_1669501.f_11 = iParam1;
		Global_1669501.f_7 = func_721();
		Global_1669501.f_42 = func_705(func_19(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_458(iVar1);
		Global_1669501.f_28 = iVar2;
		Global_1669501.f_29 = func_722((func_704(iVar1) || func_703(iVar1)));
		Global_1669501.f_30 = func_722(func_702(iVar1));
		Global_1669501.f_32 = func_722(func_701(iVar1));
		Global_1669501.f_33 = func_722(func_700(iVar1));
		Global_1669501.f_34 = func_722(func_699(iVar1));
		Global_1669501.f_35 = func_722(func_698(0, iVar1) == 1);
		Global_1669501.f_36 = func_722(func_697(iVar1));
		Global_1669501.f_37 = func_722(func_696(iVar1));
		Global_1669501.f_38 = func_722(func_695(iVar1));
		Global_1669501.f_39 = func_722(func_587(iVar1, iVar2, 0));
		Global_1669501.f_40 = func_722(func_587(iVar1, iVar2, 2));
		Global_1669501.f_41 = func_722(func_587(iVar1, iVar2, 1));
		if (func_694(iVar1))
		{
			Global_1669501.f_31 = 2;
		}
		else if (func_693(iVar1))
		{
			Global_1669501.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1669501.f_10 = 1;
		}
		else
		{
			Global_1669501.f_10 = 0;
		}
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669501.f_6 = 1;
		}
		else
		{
			Global_1669501.f_6 = 0;
		}
		Global_1669501.f_21 = -2;
		Global_1669501.f_22 = -2;
		func_691(iVar0);
	}
	else if (func_398(iVar0))
	{
		Global_1669545.f_2 = func_728();
		Global_1669545.f_3 = func_727();
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669545.f_6 = 1;
		}
		else
		{
			Global_1669545.f_6 = 0;
		}
		Global_1669545.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669545.f_10 = func_722(bParam0);
		Global_1669545.f_11 = iParam1;
		Global_1669545.f_17 = func_690(func_251());
		Global_1669545.f_18 = (Global_1669545.f_9 - Global_1669545.f_8);
		Global_1669545.f_20 = iParam8;
		Global_1669545.f_21 = -2;
		Global_1669545.f_22 = -2;
		Global_1669545.f_27 = func_689();
		Global_1669545.f_29 = func_445(6107, -1, 0);
		Global_1669545.f_30 = func_445(6103, -1, 0);
		Global_1669545.f_31 = func_445(6104, -1, 0);
		Global_1669545.f_32 = func_445(6106, -1, 0);
		Global_1669545.f_33 = func_445(6105, -1, 0);
		Global_1669545.f_34 = func_445(6108, -1, 0);
		Global_1669545.f_36 = func_722(func_248(1));
		Global_1669545.f_37 = func_687();
		func_673();
		func_671(iVar0);
	}
	else if (func_396(iVar0))
	{
		Global_1669599.f_2 = func_728();
		Global_1669599.f_3 = func_727();
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669599.f_6 = 1;
		}
		else
		{
			Global_1669599.f_6 = 0;
		}
		Global_1669599.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669599.f_10 = func_722(bParam0);
		Global_1669599.f_11 = iParam1;
		Global_1669599.f_18 = (Global_1669599.f_9 - Global_1669599.f_8);
		Global_1669599.f_20 = iParam8;
		Global_1669599.f_23 = Global_786547;
		Global_1669599.f_36 = Global_786547.f_1;
		Global_1669599.f_24 = func_445(6157, -1, 0);
		Global_1669599.f_25 = func_445(6162, -1, 0);
		Global_1669599.f_26 = func_445(6163, -1, 0);
		Global_1669599.f_27 = func_722((((func_670() || func_669()) || func_668()) || func_667(PLAYER::PLAYER_ID())));
		Global_1669599.f_28 = func_445(6164, -1, 0);
		Global_1669599.f_29 = func_722(func_666());
		Global_1669599.f_35 = -1;
		Global_1669599.f_38 = -1;
		Global_1669599.f_39 = Global_1669599.f_4;
		Global_1669599.f_40 = Global_1669599.f_5;
		Global_1669599.f_41 = func_728();
		Global_1669599.f_42 = func_722(func_248(1));
		Global_1669599.f_44 = Global_1669599.f_18;
		func_664(iVar0);
	}
	else if (func_434(iVar0))
	{
		if (Global_1669733.f_2 == -1)
		{
			Global_1669733.f_2 = func_728();
		}
		if (Global_1669733.f_3 == -1)
		{
			Global_1669733.f_3 = func_727();
		}
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669733.f_6 = 1;
		}
		else
		{
			Global_1669733.f_6 = 0;
		}
		Global_1669733.f_1 = func_723(0);
		Global_1669733.f_7 = func_721();
		Global_1669733.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669733.f_10 = func_722(bParam0);
		Global_1669733.f_11 = iParam1;
		if (func_478() != -1)
		{
			Global_1669733.f_17 = func_663(func_478());
		}
		Global_1669733.f_18 = (Global_1669733.f_9 - Global_1669733.f_8);
		Global_1669733.f_19 = Global_2528542.f_6270;
		Global_1669733.f_28 = func_719(PLAYER::PLAYER_ID());
		Global_1669733.f_29 = func_722(func_662(PLAYER::PLAYER_ID()));
		Global_1669733.f_30 = func_722(func_661(PLAYER::PLAYER_ID()));
		Global_1669733.f_31 = func_660(PLAYER::PLAYER_ID());
		if (func_188(PLAYER::PLAYER_ID(), 1))
		{
			Global_1669733.f_33 = func_722(func_248(1));
		}
		if (Global_1669733.f_34 > 2)
		{
			Global_1669733.f_34 = 2;
		}
		func_658(iVar0);
	}
	else if (func_438(iVar0))
	{
		Global_1669680.f_2 = func_728();
		Global_1669680.f_3 = func_727();
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669680.f_6 = 1;
		}
		else
		{
			Global_1669680.f_6 = 0;
		}
		Global_1669680.f_1 = func_723(0);
		Global_1669680.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669680.f_10 = func_722(bParam0);
		Global_1669680.f_11 = iParam1;
		Global_1669680.f_18 = (Global_1669680.f_9 - Global_1669680.f_8);
		Global_1669680.f_28 = func_719(PLAYER::PLAYER_ID());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_657(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_641(PLAYER::PLAYER_ID(), 4, -1);
		Global_1669680.f_31 = func_660(PLAYER::PLAYER_ID());
		Global_1669680.f_32 = func_722(func_640(PLAYER::PLAYER_ID()));
		Global_1669680.f_33 = func_722(func_639(PLAYER::PLAYER_ID()));
		Global_1669680.f_34 = func_722(func_638(PLAYER::PLAYER_ID()));
		Global_1669680.f_35 = func_722(func_637(PLAYER::PLAYER_ID()));
		Global_1669680.f_36 = func_636(PLAYER::PLAYER_ID());
		Global_1669680.f_37 = func_635(PLAYER::PLAYER_ID());
		Global_1669680.f_39 = func_634(PLAYER::PLAYER_ID());
		if (func_188(PLAYER::PLAYER_ID(), 1))
		{
			Global_1669680.f_41 = func_722(func_248(1));
		}
		if (Global_1669680.f_42 > 2)
		{
			Global_1669680.f_42 = 2;
		}
		func_632(iVar0);
	}
	else if (func_433(iVar0))
	{
		Global_1669817.f_2 = func_728();
		Global_1669817.f_3 = func_727();
		Global_1669817.f_4 = func_631(func_478());
		Global_1669817.f_5 = func_630(func_478());
		if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
		{
			Global_1669817.f_6 = 1;
		}
		else
		{
			Global_1669817.f_6 = 0;
		}
		Global_1669817.f_7 = func_721();
		Global_1669817.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669817.f_10 = func_722(bParam0);
		Global_1669817.f_11 = iParam1;
		Global_1669817.f_17 = func_663(func_251());
		Global_1669817.f_18 = (Global_1669817.f_9 - Global_1669817.f_8);
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = func_629(PLAYER::PLAYER_ID());
		Global_1669817.f_27 = func_722(func_628(PLAYER::PLAYER_ID()));
		Global_1669817.f_28 = func_625(21, -1);
		Global_1669817.f_29 = func_722(func_624(PLAYER::PLAYER_ID()));
		func_622(iVar0);
	}
	else
	{
		Global_1669366.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1669366.f_7 = 1;
		}
		else
		{
			Global_1669366.f_7 = 0;
		}
		Global_1669366.f_8 = iParam1;
		if (Global_1669366.f_4 == 0)
		{
			if ((func_123(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_148(PLAYER::PLAYER_ID()))
			{
				Global_1669366.f_4 = 1;
			}
		}
	}
}

void func_622(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1669817);
	func_623();
}

void func_623()
{
	struct<31> Var0;
	
	Global_1669817 = { Var0 };
}

int func_624(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 6);
	}
	return 0;
}

int func_625(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16859)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_627(iParam0);
		if (iVar1 == 0 && func_445(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_626(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_719(PLAYER::PLAYER_ID()) && iVar1 == 1)
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

bool func_626(int iParam0)
{
	if (!Global_262145.f_23529)
	{
		return 0;
	}
	return func_445(7207, iParam0, 0) != 0;
}

int func_627(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_628(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_629(int iParam0)
{
	if (func_104(iParam0) == 243)
	{
		return func_437(iParam0);
	}
	return -1;
}

int func_630(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_631(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

void func_632(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1669680);
	func_633();
}

void func_633()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1669680 = { Var0 };
}

int func_634(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_328, 12);
	}
	return 0;
}

int func_635(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_328, 10);
	}
	return 0;
}

int func_636(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_328, 11);
	}
	return 0;
}

bool func_637(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 4);
}

bool func_638(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 3);
}

bool func_639(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 2);
}

bool func_640(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 1);
}

int func_641(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_65() || !func_656(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_651(iParam0, iParam2);
		
		case 1:
			return func_649(iParam0, iParam2);
		
		case 3:
			return func_648(iParam0);
		
		case 2:
			return func_643(iParam0, iParam2);
		
		case 4:
			return func_642(iParam0);
		
		default:
	}
	return 0;
}

bool func_642(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 6);
}

int func_643(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_647(iParam0);
		
		case 11:
			return func_646(iParam0);
		
		case 12:
			return func_645(iParam0);
		
		case 13:
			return func_644(iParam0);
		
		default:
	}
	return 0;
}

bool func_644(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 15);
}

bool func_645(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 14);
}

bool func_646(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 13);
}

bool func_647(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 12);
}

bool func_648(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 5);
}

int func_649(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_650(iParam0);
		
		case 6:
			return func_640(iParam0);
		
		case 7:
			return func_639(iParam0);
		
		case 8:
			return func_638(iParam0);
		
		case 9:
			return func_637(iParam0);
		
		default:
	}
	return 0;
}

bool func_650(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 0);
}

int func_651(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_655(iParam0);
		
		case 1:
			return func_654(iParam0);
		
		case 2:
			return func_653(iParam0);
		
		case 3:
			return func_652(iParam0);
		
		case 4:
			return func_660(iParam0);
		
		default:
	}
	return 0;
}

bool func_652(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 10);
}

bool func_653(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 9);
}

bool func_654(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 8);
}

bool func_655(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 7);
}

bool func_656(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_657(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_641(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_641(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_641(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_641(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_658(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1669733);
	func_659();
}

void func_659()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1669733 = { Var0 };
}

bool func_660(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 31);
}

bool func_661(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 0);
}

bool func_662(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 19);
}

var func_663(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

void func_664(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1669599);
	func_665();
}

void func_665()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1669599 = { Var0 };
	Global_1669599.f_16 = 0;
}

bool func_666()
{
	return func_445(6156, -1, 0) != 0;
}

int func_667(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_265 != 0;
	}
	return 0;
}

bool func_668()
{
	return func_445(6164, -1, 0) == 3;
}

bool func_669()
{
	return func_445(6164, -1, 0) == 2;
}

bool func_670()
{
	return func_445(6164, -1, 0) == 1;
}

void func_671(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1669545);
	func_672();
}

void func_672()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1669545 = { Var0 };
	Global_1669545.f_23 = 0;
	Global_1669545.f_24 = 0;
	Global_1669545.f_16 = 0;
}

void func_673()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_684(12));
		func_683(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323594[iVar1 /*141*/].f_66 != 0 && func_675(Global_1323594[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2528542.f_887 != iVar1)
				{
					if (func_674(Global_1323594[iVar1 /*141*/].f_66))
					{
						if (Global_1323594[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323594[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1669545.f_38 = iVar3;
								break;
							
							case 1:
								Global_1669545.f_39 = iVar3;
								break;
							
							case 2:
								Global_1669545.f_40 = iVar3;
								break;
							
							case 3:
								Global_1669545.f_41 = iVar3;
								break;
							
							case 4:
								Global_1669545.f_42 = iVar3;
								break;
							
							case 5:
								Global_1669545.f_43 = iVar3;
								break;
							
							case 6:
								Global_1669545.f_44 = iVar3;
								break;
							
							case 7:
								Global_1669545.f_45 = iVar3;
								break;
							
							case 8:
								Global_1669545.f_46 = iVar3;
								break;
							
							case 9:
								Global_1669545.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_674(int iParam0)
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

int func_675(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_682())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_681() && !func_680()) && !func_679()) && !func_678()) && !func_682())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_679())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_677(iParam0))
		{
			return 0;
		}
	}
	if (!func_676(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_676(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_475())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_677(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2505720)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6490 && !Global_262145.f_12801) && iVar1 < Global_262145.f_12802)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14100 && iVar1 < Global_262145.f_14112)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14101 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14102 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14103 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16735 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16736 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16737 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_16901 && iVar1 < Global_262145.f_16923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_16902 && iVar1 < Global_262145.f_16924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_16903 && iVar1 < Global_262145.f_16925)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18553 && iVar1 < Global_262145.f_18650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18554 && iVar1 < Global_262145.f_18651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18555 && iVar1 < Global_262145.f_18652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18556 && iVar1 < Global_262145.f_18653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18557 && iVar1 < Global_262145.f_18654)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19614 && iVar1 < Global_262145.f_19610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19615 && iVar1 < Global_262145.f_19611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19616 && iVar1 < Global_262145.f_19612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19617 && iVar1 < Global_262145.f_19613)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20493 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20494 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20495 && iVar1 < Global_262145.f_20503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20496 && iVar1 < Global_262145.f_20504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20497 && iVar1 < Global_262145.f_20505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20498 && iVar1 < Global_262145.f_20506)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21283 && iVar1 < Global_262145.f_21303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21287 && iVar1 < Global_262145.f_21307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21285 && iVar1 < Global_262145.f_21305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21286 && iVar1 < Global_262145.f_21306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21288 && iVar1 < Global_262145.f_21308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21284 && iVar1 < Global_262145.f_21304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22253 && iVar1 < Global_262145.f_22281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22254 && iVar1 < Global_262145.f_22282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22255 && iVar1 < Global_262145.f_22283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22256 && iVar1 < Global_262145.f_22284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22257 && iVar1 < Global_262145.f_22285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22258 && iVar1 < Global_262145.f_22286)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23447 && iVar1 < Global_262145.f_23463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23452 && iVar1 < Global_262145.f_23468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23451 && iVar1 < Global_262145.f_23467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23450 && iVar1 < Global_262145.f_23466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23453 && iVar1 < Global_262145.f_23469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23449 && iVar1 < Global_262145.f_23465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23448 && iVar1 < Global_262145.f_23464)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23535 && iVar1 < Global_262145.f_23522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23538 && iVar1 < Global_262145.f_23525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23540 && iVar1 < Global_262145.f_23527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23541 && iVar1 < Global_262145.f_23528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23539 && iVar1 < Global_262145.f_23526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23537 && iVar1 < Global_262145.f_23524)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23536 && iVar1 < Global_262145.f_23523)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25739 && iVar1 < Global_262145.f_25741)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24753 && iVar1 < Global_262145.f_24746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24754 && iVar1 < Global_262145.f_24747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24755 && iVar1 < Global_262145.f_24748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24756 && iVar1 < Global_262145.f_24749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25740 && iVar1 < Global_262145.f_25742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24757 && iVar1 < Global_262145.f_24750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24758 && iVar1 < Global_262145.f_24751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24759 && iVar1 < Global_262145.f_24752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_24763 && iVar1 < Global_262145.f_24784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_24764 && iVar1 < Global_262145.f_24785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_24765 && iVar1 < Global_262145.f_24786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Novak"))
	{
		if (!Global_262145.f_24766 && iVar1 < Global_262145.f_24787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_24767 && iVar1 < Global_262145.f_24788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_24768 && iVar1 < Global_262145.f_24789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_24769 && iVar1 < Global_262145.f_24790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_24770 && iVar1 < Global_262145.f_24791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_24771 && iVar1 < Global_262145.f_24792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_24772 && iVar1 < Global_262145.f_24793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Dynasty"))
	{
		if (!Global_262145.f_24773 && iVar1 < Global_262145.f_24794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_24774 && iVar1 < Global_262145.f_24795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_24775 && iVar1 < Global_262145.f_24796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_24776 && iVar1 < Global_262145.f_24797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_24777 && iVar1 < Global_262145.f_24798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_24778 && iVar1 < Global_262145.f_24799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_24779 && iVar1 < Global_262145.f_24800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_24780 && iVar1 < Global_262145.f_24801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_24781 && iVar1 < Global_262145.f_24802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_24782 && iVar1 < Global_262145.f_24803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_24783 && iVar1 < Global_262145.f_24804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_678()
{
	return 0;
}

int func_679()
{
	return 1;
}

int func_680()
{
	return 1;
}

int func_681()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_682()
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

void func_683(int iParam0, int iParam1, bool bParam2)
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

int func_684(int iParam0)
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
		iVar0 = func_627(iParam0);
		return func_686(iVar0);
	}
	return (func_685(iParam0, -1) * iParam0);
}

int func_685(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_406(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_412(iParam1))
			{
				return 0;
			}
			else if (func_404(iParam1, -1))
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

int func_686(int iParam0)
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

var func_687()
{
	var uVar0;
	
	uVar0 = func_688();
	if (!func_459())
	{
		if (func_478() != func_65())
		{
			uVar0 = func_720(func_478()) + 1;
		}
	}
	return uVar0;
}

int func_688()
{
	return func_720(PLAYER::PLAYER_ID()) + 1;
}

int func_689()
{
	return func_445(6113, -1, 0);
}

int func_690(int iParam0)
{
	if (func_188(iParam0, 1))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_448;
	}
	return -1;
}

void func_691(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1669501);
	func_692();
}

void func_692()
{
	struct<44> Var0;
	
	Global_1669501 = { Var0 };
	Global_1669501.f_23 = 0;
	Global_1669501.f_24 = 0;
	Global_1669501.f_16 = 0;
}

bool func_693(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 12);
}

bool func_694(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 13);
}

int func_695(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 12) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 13)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_696(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_697(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (((((MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 5)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 0)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_698(int iParam0, int iParam1)
{
	if (iParam1 == func_65())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1589819[iParam1 /*818*/].f_273.f_253, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_699(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 6) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 7)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_700(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 8);
}

bool func_701(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 7);
}

bool func_702(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 9);
}

bool func_703(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 11);
}

bool func_704(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_344, 10);
}

int func_705(int iParam0, int iParam1)
{
	return func_445(func_706(iParam1), iParam0, 0);
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_707(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1669438);
	func_708();
}

void func_708()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1669438 = { Var0 };
	Global_1669438.f_24 = 0;
	Global_1669438.f_25 = 0;
	Global_1669438.f_17 = 0;
}

void func_709(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1669384);
	func_710();
}

void func_710()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1669384 = { Var0 };
	Global_1669384.f_29 = 0;
	Global_1669384.f_30 = 0;
	Global_1669384.f_17 = 0;
}

int func_711(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_587(iParam0, iParam1, 2);
	bVar1 = func_587(iParam0, iParam1, 1);
	bVar2 = func_587(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_712(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_582(iParam1))
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

int func_713(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_136(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17574;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17573;
		}
		else
		{
			iVar0 = Global_262145.f_17555;
		}
		iVar1 = 19;
	}
	else if (func_402(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_219(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17554;
			iVar1 = 20;
		}
	}
	else if (func_317(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17574;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17573;
		}
		else
		{
			iVar0 = Global_262145.f_17555;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_631(func_478()), func_630(func_478()), func_728(), func_727(), iVar1, iVar0);
	}
	func_715(iVar0);
	func_714(iVar0);
	return iVar0;
}

void func_714(int iParam0)
{
	int iVar0;
	
	iVar0 = func_445(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_487 = iVar0;
	func_443(3968, iVar0, -1, 1, 0);
}

void func_715(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1626536[iVar0 /*603*/].f_11.f_486 = (Global_1626536[iVar0 /*603*/].f_11.f_486 + iParam0);
	if (Global_1626536[iVar0 /*603*/].f_11.f_486 < -9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
	else if (Global_1626536[iVar0 /*603*/].f_11.f_486 > 9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
}

int func_716(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_123(PLAYER::PLAYER_ID()) || func_148(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_717(var uParam0)
{
	STATS::_0x316DB59CD14C1774(&Global_1669645);
	func_718();
}

void func_718()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1669645 = { Var0 };
}

int func_719(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316 != 0;
	}
	return 0;
}

int func_720(int iParam0)
{
	if (func_66(iParam0) == func_65())
	{
		return 0;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_19;
}

int func_721()
{
	int iVar0;
	
	if (func_446())
	{
		return 4;
	}
	else if (func_459())
	{
		if (func_614(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_248(1))
	{
		iVar0 = func_690(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_476(1))
	{
		if (func_614(func_478()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_722(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_723(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_180(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_104(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_726(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_725(PLAYER::PLAYER_ID());
			if (func_435(func_436(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_725(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_724(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_724(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_724(int iParam0)
{
	if (func_104(PLAYER::PLAYER_ID()) == 238 || func_104(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_495;
	}
	return -1;
}

int func_725(int iParam0)
{
	if (func_104(PLAYER::PLAYER_ID()) == 237 || func_104(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_494;
	}
	return -1;
}

int func_726(int iParam0)
{
	if (func_180(iParam0) == 236)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_493;
	}
	return -1;
}

int func_727()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_728()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

int func_729(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_65();
	iVar1 = func_65();
	iVar2 = func_65();
	return func_730(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_730(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_381(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_227(&(Var0.f_69), 4);
	return func_346(&Var0);
}

int func_731(int iParam0)
{
	int iVar0;
	
	iVar0 = func_192(iParam0);
	if (iVar0 != -1)
	{
		return func_190(iVar0);
	}
	return 1;
}

char* func_732(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_425(&(Global_1626536[iParam0 /*603*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1626536[iParam0 /*603*/].f_11.f_120 != Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_120)
	{
		sVar0 = func_426(iParam0, 0);
		return sVar0;
	}
	if (((func_108(iParam0, 28) || func_108(PLAYER::PLAYER_ID(), 28)) || func_429(iParam0)) && !func_428(iParam0))
	{
		return func_426(iParam0, 0);
	}
	iVar1 = func_66(iParam0);
	if (iVar1 != func_65())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_426(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_65())
	{
		sVar0 = func_425(&(Global_1626536[iVar1 /*603*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_426(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_733()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_877() && !func_298())
	{
		return;
	}
	if (!func_382())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	}
	iVar1 = func_139(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_112.f_847)))
	{
		iVar2 = (func_10() - func_747(&(Local_112.f_847), 0, 0));
		iVar3 = (func_746() - Local_112.f_115);
		func_744(iVar2);
		if (iVar2 > 30000)
		{
			func_734(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_734(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_734(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_734(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_742(0) == 0)
	{
		return;
	}
	func_741();
	func_738(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_518(sParam4))
	{
		sVar0 = sParam4;
	}
	func_735(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_735(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_737(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_736(7, iVar0);
		Global_1373453.f_4453[iVar0] = uParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = uParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = uParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_736(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_737(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

void func_738(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_737(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_736(6, iVar0);
		Global_1373453.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_3835.f_183[iVar0] = iParam3;
		Global_1373453.f_3835.f_172[iVar0] = iParam2;
		Global_1373453.f_3835.f_260[iVar0] = iParam4;
		Global_1373453.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_3835.f_443[iVar0] = iParam7;
		Global_1373453.f_3835.f_454[iVar0] = iParam8;
		Global_1373453.f_3835.f_497[iVar0] = iParam9;
		Global_1373453.f_3835.f_508[iVar0] = iParam10;
		Global_1373453.f_3835.f_205[iVar0] = iParam11;
		Global_1373453.f_3835.f_216[iVar0] = iParam12;
		Global_1373453.f_3835.f_227[iVar0] = iParam13;
		Global_1373453.f_3835.f_238[iVar0] = iParam14;
		Global_1373453.f_3835.f_249[iVar0] = iParam15;
		Global_1373453.f_3835.f_519[iVar0] = iParam16;
		Global_1373453.f_3835.f_530[iVar0] = iParam17;
		Global_1373453.f_3835.f_541[iVar0] = iParam18;
		Global_1373453.f_3835.f_552[iVar0] = iParam19;
		Global_1373453.f_3835.f_563[iVar0] = iParam20;
		Global_1373453.f_3835.f_574[iVar0] = iParam21;
		Global_1373453.f_3835.f_585[iVar0] = iParam22;
		Global_1373453.f_3835.f_596[iVar0] = iParam23;
		Global_1373453.f_3835.f_607[iVar0] = iParam24;
		Global_1373453.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_740())
		{
			Global_1373453.f_1109 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1373453.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1373453.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1373453.f_1109 = 1;
			}
			if (func_739())
			{
				Global_1373453.f_1113 = 1;
			}
		}
	}
}

int func_739()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_740()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_741()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460158 = 1;
}

int func_742(bool bParam0)
{
	if (func_743())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_982(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_743()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_744(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_115, 8))
	{
		func_745();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_115, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_115, 15);
				MISC::SET_BIT(&iLocal_115, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_115, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_115, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					MISC::SET_BIT(&iLocal_115, 11);
				}
			}
			else
			{
				MISC::IS_BIT_SET(iLocal_115, 11);
				if (!MISC::IS_BIT_SET(iLocal_115, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						MISC::SET_BIT(&iLocal_115, 14);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_115, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_115, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_115, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_115, 9);
						}
					}
				}
			}
		}
	}
}

void func_745()
{
	if (MISC::IS_BIT_SET(iLocal_115, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_115, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_115, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_115, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_115, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_115, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_115, 16);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_115, 16))
				{
					if (!MISC::IS_BIT_SET(iLocal_115, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_115, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_115, 13))
					{
						MISC::SET_BIT(&iLocal_115, 10);
					}
				}
			}
		}
	}
}

int func_746()
{
	return 4;
}

int func_747(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_748()
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar3 = func_299();
		iVar2 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	}
	iVar4 = func_139(iVar2);
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_382())
		{
			if (func_765("HUNT_OBJ"))
			{
				func_808();
			}
			if (func_765("HUNT_OBJ1L"))
			{
				func_808();
			}
			if (func_765("HUNT_TOBJ"))
			{
				func_808();
			}
			if (func_765("HUNT_DOBJ"))
			{
				func_808();
			}
			if (func_765("HUNT_DOBJ1L"))
			{
				func_808();
			}
			return;
		}
	}
	else if (!MISC::IS_BIT_SET(Local_113[iVar3 /*14*/].f_1, 6))
	{
		func_808();
		return;
	}
	if (iVar4 < 3)
	{
		if (func_765("HUNT_OBJ"))
		{
			func_808();
		}
		if (func_765("HUNT_OBJ1L"))
		{
			func_808();
		}
		if (func_765("HUNT_TOBJ"))
		{
			func_808();
		}
		if (func_765("HUNT_DOBJ"))
		{
			func_808();
		}
		if (func_765("HUNT_DOBJ1L"))
		{
			func_808();
		}
		return;
	}
	bVar5 = func_764() == true;
	if (iVar3 == Local_112.f_118)
	{
		if (!bVar5)
		{
			if (!func_765("HUNT_OBJ"))
			{
				func_761("HUNT_OBJ", 0);
			}
		}
		else if (!func_765("HUNT_OBJ1L"))
		{
			func_761("HUNT_OBJ1L", 0);
		}
	}
	else if (func_878() == Local_112.f_118)
	{
		if (!bVar5)
		{
			if (!func_765("HUNT_OBJ"))
			{
				func_761("HUNT_OBJ", 0);
			}
		}
		else if (!func_765("HUNT_OBJ1L"))
		{
			func_761("HUNT_OBJ1L", 0);
		}
	}
	else if (func_298())
	{
		if (Local_112.f_119 > -1)
		{
			if (!bVar5)
			{
				if (!func_765("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_732(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119)), 64);
					iVar0 = func_731(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
					func_749("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_765("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_732(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119)), 64);
				iVar0 = func_731(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
				func_749("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_749(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_750(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_750(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_760(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_754();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_753();
	func_752(bParam2);
	func_751();
	return 1;
}

void func_751()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_752(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_753()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_754()
{
	func_756();
	func_755(0);
}

void func_755(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_756()
{
	if (!func_759())
	{
	}
	if (func_758())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_757();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_757()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_758()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_759()
{
	if (!func_758())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_757();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_760(char* sParam0, char* sParam1)
{
	if (!func_758())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_761(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_762(sParam0))
	{
		return;
	}
	func_754();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_753();
	func_752(bParam1);
	func_751();
}

bool func_762(char* sParam0)
{
	if (!func_758())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_763(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_763(char* sParam0)
{
	if (!func_758())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_764()
{
	return (4 - Local_112.f_115);
}

int func_765(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_758())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_762(sParam0);
}

void func_766()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_877() && !func_298())
	{
		return;
	}
	if (!func_382())
	{
		return;
	}
	iVar1 = func_65();
	iVar2 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar2 = func_299();
		iVar1 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_114, 1))
	{
		iVar0 = func_139(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_112.f_118 || func_878() == Local_112.f_118)
			{
				if (func_791(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_345(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1);
					if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						func_790(1);
						func_767(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_767(-1, 0, 0, -1, 0, 0);
				}
				func_345(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1);
			}
		}
		MISC::SET_BIT(&iLocal_114, 1);
	}
}

void func_767(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_180(PLAYER::PLAYER_ID());
		Global_1669645 = iVar0;
		Global_1669645.f_1 = iParam0;
		if (func_478() != func_65())
		{
			Global_1669645.f_2 = func_631(func_478());
			Global_1669645.f_3 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669645.f_2), &(Global_1669645.f_3));
		}
		Global_1669645.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669645.f_28 = func_719(PLAYER::PLAYER_ID());
		Global_1669645.f_13 = 0;
		Global_1669645.f_14 = 0;
		if (func_188(PLAYER::PLAYER_ID(), 1))
		{
			Global_1669645.f_23 = func_722(func_248(1));
		}
	}
	else
	{
		iVar0 = func_104(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_317(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1669384 = iVar0;
		if (func_136(iVar0))
		{
			Global_1669384.f_1 = 4;
		}
		else if (func_402(iVar0))
		{
			Global_1669384.f_1 = 5;
		}
		else if (func_219(iVar0, 0))
		{
			Global_1669384.f_1 = 2;
			if (func_440(iVar0))
			{
				Global_1669384.f_1 = 3;
			}
		}
		else
		{
			Global_1669384.f_1 = 1;
		}
		if (func_478() != func_65())
		{
			Global_1669384.f_4 = func_631(func_478());
			Global_1669384.f_5 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669384.f_6), &(Global_1669384.f_7));
		}
		Global_1669384.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1669384.f_27 = 1;
			Global_1669384.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1669384.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1669384.f_40 = func_472(iParam1);
			Global_1669384.f_41 = func_789();
			Global_1669384.f_42 = func_590(PLAYER::PLAYER_ID(), iParam1);
			Global_1669384.f_44 = func_712(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_459() || iVar0 != 192)
		{
			Global_1669384.f_53 = 0;
		}
	}
	else if (func_400(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1669501 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1669501 = iParam0 + 1;
		}
		else
		{
			Global_1669501 = func_788(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_437(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1669501.f_1 = 0;
				}
				else
				{
					Global_1669501.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1669501.f_1 = 2;
				break;
			
			case 227:
				Global_1669501.f_1 = 3;
				break;
		}
		Global_1669501.f_21 = 1;
		Global_1669501.f_22 = 1;
		if (func_478() != func_65())
		{
			Global_1669501.f_4 = func_631(func_478());
			Global_1669501.f_5 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669501.f_4), &(Global_1669501.f_5));
		}
		Global_1669501.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1669501.f_20 = iParam0;
		}
	}
	else if (func_322(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1669438 = iVar0;
		Global_1669384.f_1 = 1;
		if (func_478() != func_65())
		{
			Global_1669438.f_4 = func_631(func_478());
			Global_1669438.f_5 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669438.f_6), &(Global_1669438.f_7));
		}
		Global_1669438.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1669438.f_21 = iParam0;
		}
	}
	else if (func_398(iVar0))
	{
		Global_1669545 = iVar0;
		Global_1669545.f_1 = iParam0;
		Global_1669545.f_21 = 1;
		Global_1669545.f_22 = 1;
		if (func_478() != func_65())
		{
			Global_1669545.f_4 = func_631(func_478());
			Global_1669545.f_5 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669545.f_4), &(Global_1669545.f_5));
		}
		Global_1669545.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1669545.f_20 = iParam0;
		}
		Global_1669545.f_27 = func_705(func_19(), 5);
		Global_1669545.f_28 = func_722(func_568(PLAYER::PLAYER_ID()));
		Global_1669545.f_29 = func_445(6107, -1, 0);
		Global_1669545.f_30 = func_445(6103, -1, 0);
		Global_1669545.f_31 = func_445(6104, -1, 0);
		Global_1669545.f_32 = func_445(6106, -1, 0);
		Global_1669545.f_33 = func_445(6105, -1, 0);
		Global_1669545.f_34 = func_445(6108, -1, 0);
		Global_1669545.f_7 = func_721();
		Global_1669545.f_51 = func_722(bParam4);
	}
	else if (func_396(iVar0))
	{
		Global_1669599 = iVar0;
		Global_1669599.f_1 = iParam0;
		Global_1669599.f_21 = 1;
		Global_1669599.f_22 = 1;
		if (func_478() != func_65())
		{
			Global_1669599.f_4 = func_631(func_478());
			Global_1669599.f_5 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669599.f_4), &(Global_1669599.f_5));
		}
		Global_1669599.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1669599.f_20 = iParam0;
		}
		Global_1669599.f_24 = func_445(6157, -1, 0);
		Global_1669599.f_25 = func_445(6162, -1, 0);
		Global_1669599.f_26 = func_445(6163, -1, 0);
		Global_1669599.f_27 = func_722((((func_670() || func_669()) || func_668()) || func_667(PLAYER::PLAYER_ID())));
		Global_1669599.f_28 = func_445(6164, -1, 0);
		Global_1669599.f_29 = func_722(func_666());
		Global_1669599.f_31 = 0;
		Global_1669599.f_30 = 0;
		Global_1669599.f_32 = 0;
		Global_1669599.f_33 = 0;
		Global_1669599.f_34 = 0;
		Global_1669599.f_16 = 0;
		Global_1669599.f_7 = func_721();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_435(func_436(PLAYER::PLAYER_ID()))))
	{
		Global_1669733 = iVar0;
		Global_1669733.f_1 = iParam0;
		Global_1669733.f_21 = 1;
		Global_1669733.f_22 = 1;
		Global_1669733.f_7 = func_721();
		if (func_478() != func_65())
		{
			Global_1669733.f_4 = func_631(func_478());
			Global_1669733.f_5 = func_630(func_478());
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669733.f_4), &(Global_1669733.f_5));
		}
		if (func_478() != -1)
		{
			Global_1669733.f_17 = func_663(func_478());
		}
		Global_1669733.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669733.f_28 = func_719(PLAYER::PLAYER_ID());
		Global_1669733.f_16 = 0;
		Global_1669733.f_24 = 0;
		Global_1669733.f_23 = 0;
		if (func_188(PLAYER::PLAYER_ID(), 1))
		{
			Global_1669733.f_33 = func_722(func_248(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1669680 = iVar0;
		Global_1669680.f_1 = iParam0;
		Global_1669680.f_21 = 1;
		Global_1669680.f_22 = 1;
		Global_1669680.f_7 = func_721();
		Global_1669680.f_24 = 0;
		Global_1669680.f_23 = 0;
		Global_1669680.f_16 = 0;
		if (func_478() != func_65())
		{
			Global_1669680.f_4 = func_631(func_478());
			Global_1669680.f_5 = func_630(func_478());
		}
		Global_1669680.f_28 = func_719(PLAYER::PLAYER_ID());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_657(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_641(PLAYER::PLAYER_ID(), 4, -1);
		Global_1669680.f_31 = func_660(PLAYER::PLAYER_ID());
		Global_1669680.f_32 = func_722(func_640(PLAYER::PLAYER_ID()));
		Global_1669680.f_33 = func_722(func_639(PLAYER::PLAYER_ID()));
		Global_1669680.f_34 = func_722(func_638(PLAYER::PLAYER_ID()));
		Global_1669680.f_35 = func_722(func_637(PLAYER::PLAYER_ID()));
		Global_1669680.f_36 = func_636(PLAYER::PLAYER_ID());
		Global_1669680.f_37 = func_635(PLAYER::PLAYER_ID());
		Global_1669680.f_39 = func_634(PLAYER::PLAYER_ID());
		if (func_188(PLAYER::PLAYER_ID(), 1))
		{
			Global_1669680.f_41 = func_722(func_248(1));
		}
		if (func_251() != func_65())
		{
			func_477(func_251(), &(Global_1669680.f_4), &(Global_1669680.f_5));
		}
		Global_1669680.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669680.f_28 = func_719(PLAYER::PLAYER_ID());
	}
	else if (func_433(iVar0))
	{
		Global_1669817 = iVar0;
		Global_1669817.f_1 = func_437(PLAYER::PLAYER_ID());
		Global_1669817.f_2 = func_728();
		Global_1669817.f_3 = func_727();
		Global_1669817.f_4 = func_631(func_478());
		Global_1669817.f_5 = func_630(func_478());
		Global_1669817.f_7 = func_721();
		Global_1669817.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669817.f_17 = func_663(func_478());
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = iParam0;
		Global_1669817.f_27 = func_722(func_628(PLAYER::PLAYER_ID()));
		Global_1669817.f_28 = func_625(21, -1);
	}
	else
	{
		if (func_478() != func_65())
		{
			Global_1669366 = func_631(func_478());
			Global_1669366.f_1 = func_630(func_478());
		}
		Global_1669366.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1669366.f_13 = func_787();
		Global_1669366.f_15 = 0;
		if (func_476(1))
		{
			if (func_251() == func_478())
			{
				Global_1669366.f_15 = 1;
			}
		}
		if (func_786())
		{
			Global_1669501.f_28 = 1;
		}
		if (((((func_785() || func_784()) || func_783()) || func_782()) || func_780()) || func_779(PLAYER::PLAYER_ID()))
		{
			Global_1669501.f_30 = 1;
		}
		if (func_777(func_778(joaat("trailersmall2"))))
		{
			Global_1669501.f_32 = 1;
		}
		if (func_771(func_776(joaat("CADDY"))))
		{
			Global_1669501.f_31 = 1;
		}
		if (func_704(PLAYER::PLAYER_ID()) || func_703(PLAYER::PLAYER_ID()))
		{
			Global_1669501.f_29 = 1;
		}
		if (func_700(PLAYER::PLAYER_ID()))
		{
			Global_1669501.f_33 = 1;
			Global_1669501.f_34 = 1;
		}
		if (func_701(PLAYER::PLAYER_ID()))
		{
			Global_1669501.f_36 = 1;
		}
		if (func_698(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1669501.f_35 = 1;
		}
		if (func_770(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1669501.f_37 = 1;
		}
		if (func_770(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1669501.f_38 = 1;
		}
		if (func_769(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_768(PLAYER::PLAYER_ID(), iVar2);
				if (func_587(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1669501.f_39 = 1;
				}
				if (func_587(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1669501.f_40 = 1;
				}
				if (func_587(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1669501.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_768(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_582(Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/]))
	{
		uVar0 = Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/];
	}
	return uVar0;
}

int func_769(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_770(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_698(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_771(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_625(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_684(11));
		func_683(iVar1, &iVar0, 1);
		iVar2 = func_625(func_773(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_445(func_772(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_772(int iParam0, int iParam1)
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

int func_773(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 271)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (iParam0 >= func_684(iVar0) && iParam0 < func_774(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_774(int iParam0)
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
		iVar0 = func_627(iParam0);
		return func_775(iVar0);
	}
	return (func_685(iParam0, -1) * iParam0 + 1);
}

int func_775(int iParam0)
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

int func_776(int iParam0)
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

int func_777(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_683(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_445(func_772(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_779(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_333 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_780()
{
	return func_445(func_781(3), -1, 0) != 0;
}

int func_781(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 10383;
}

bool func_782()
{
	return func_445(6163, -1, 0) != 0;
}

bool func_783()
{
	return func_445(5380, -1, 0) != 0;
}

bool func_784()
{
	return func_445(3828, -1, 0) != 0;
}

bool func_785()
{
	return func_445(3223, -1, 0) != 0;
}

bool func_786()
{
	return func_445(5379, -1, 0) != 0;
}

int func_787()
{
	int iVar0;
	
	iVar0 = func_478();
	if (iVar0 != func_65())
	{
		return Global_1626536[iVar0 /*603*/].f_11.f_98;
	}
	return 0;
}

int func_788(int iParam0)
{
	if (func_104(iParam0) == 225 || func_104(iParam0) == 226)
	{
		return func_437(iParam0);
	}
	return -1;
}

var func_789()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_589(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_790(bool bParam0)
{
	if (bParam0)
	{
		if (!func_108(PLAYER::PLAYER_ID(), 9))
		{
			if (func_139(PLAYER::PLAYER_ID()) != 0)
			{
				func_109(9);
			}
		}
	}
	else if (func_108(PLAYER::PLAYER_ID(), 9))
	{
		func_107(9);
	}
}

int func_791(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_792(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_792(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_802();
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
	if (func_801() == 0)
	{
		func_799();
		return 0;
	}
	func_798(Global_16933);
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
		func_797(0);
		func_797(2);
		func_797(1);
	}
	else
	{
		func_802();
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
					func_797(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_797(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_797(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_797(3);
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
		func_802();
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
			if (!func_420())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_796(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_793(1);
			func_796(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_793(int iParam0)
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
		if (func_795(14))
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
								func_167(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_167(&(Global_2430[iVar1 /*15*/]));
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
								func_167(&(Global_2430[iVar1 /*15*/]));
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
								func_167(&(Global_2430[iVar1 /*15*/]));
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
								func_167(&(Global_2430[iVar1 /*15*/]));
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
								func_167(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_794(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_794(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_167(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_167(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_167(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_167(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_167(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_795(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_796(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_797(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_798(int iParam0)
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

void func_799()
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
		if (!func_800(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_800(struct<6> Param0, struct<6> Param1)
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

int func_801()
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
			if (!func_800(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
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

void func_802()
{
	if (func_795(14))
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
		Global_14553 = func_803();
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

var func_803()
{
	func_804();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_804()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_807(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_806(PLAYER::PLAYER_PED_ID());
			if (func_805(iVar0) && (!func_795(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_805(Global_106565.f_2357.f_539.f_4321))
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

bool func_805(int iParam0)
{
	return iParam0 < 3;
}

int func_806(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_807(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_807(int iParam0)
{
	if (func_805(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_808()
{
	if (!func_758())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_754();
}

void func_809()
{
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9)
	{
		case 0:
			func_811();
			func_310();
			if (Local_112.f_117 == 2)
			{
				Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 2;
			}
			else if (Local_112.f_117 == 3)
			{
				Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_310();
			if (func_810())
			{
				func_745();
			}
			if (Local_112.f_117 == 3)
			{
				Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_891();
			break;
	}
}

bool func_810()
{
	return ((MISC::IS_BIT_SET(Local_112.f_1, 1) || MISC::IS_BIT_SET(Local_112.f_1, 3)) || MISC::IS_BIT_SET(Local_112.f_1, 5));
}

void func_811()
{
	func_831();
	func_830();
	func_766();
	func_748();
	func_820();
	func_819();
	func_814();
	func_813();
	func_733();
	func_812();
}

void func_812()
{
}

void func_813()
{
	if (func_810())
	{
		return;
	}
	if (!func_877())
	{
		return;
	}
	if (!Global_262145.f_14895)
	{
		return;
	}
	if (Local_112.f_115 == 0)
	{
		return;
	}
}

void func_814()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_877())
	{
		return;
	}
	if (func_810())
	{
		return;
	}
	fVar2 = func_149(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_121 != iVar0)
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), false) };
				func_92(10, 0, 0, 0, 0);
				func_815(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_121 = iVar0;
				MISC::SET_BIT(&iLocal_114, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_341();
	}
}

void func_815(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413883.f_6))
	{
		Global_2413883.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413883.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_816(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413883 = { Var0 };
}

int func_816(int iParam0)
{
	if (((func_817(iParam0, 1) || func_131(iParam0)) || func_105(iParam0, 0)) || func_388(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_817(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_818(iParam0) != 0;
	}
	return func_278(iParam0, bParam1);
}

int func_818(int iParam0)
{
	if (func_982(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

void func_819()
{
	int iVar0;
	
	if (iLocal_118 != Local_112.f_115)
	{
		if (func_877())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						switch (Local_112.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_14892)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14892, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_14893)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14893, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_14894)
								{
									PLAYER::SET_MAX_WANTED_LEVEL(Global_262145.f_14894);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14894, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
						}
						iLocal_118 = Local_112.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_118 = Local_112.f_115;
		}
	}
}

void func_820()
{
	int iVar0;
	
	if (!func_382())
	{
		if (func_829("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	iVar0 = func_139(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (func_829("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_114, 2))
	{
		if (!func_828(86))
		{
			if (func_822(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_118)
				{
					func_821("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_319(1);
					MISC::SET_BIT(&iLocal_114, 2);
				}
				else if (func_878() == Local_112.f_118)
				{
					func_821("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_319(1);
					MISC::SET_BIT(&iLocal_114, 2);
				}
				else if (func_298())
				{
					func_821("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_319(1);
					MISC::SET_BIT(&iLocal_114, 2);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_114, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_114, 3))
		{
			if (func_822(0, 1, 1, 1))
			{
				if (!func_829("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_118 || func_878() == Local_112.f_118)
					{
						func_320("HUNT_HELPB", -1);
						func_319(1);
						MISC::SET_BIT(&iLocal_114, 3);
					}
				}
			}
		}
	}
}

void func_821(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_822(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_827())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_278(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_826(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_825())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574174)
	{
		return 0;
	}
	if (func_824())
	{
		return 0;
	}
	if (func_823())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (Global_2538126)
	{
		return 0;
	}
	if (func_94(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_823()
{
	return Global_2448756.f_579;
}

bool func_824()
{
	return Global_2448756.f_732;
}

bool func_825()
{
	return Global_2437364.f_3032.f_578;
}

int func_826(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_827()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_828(int iParam0)
{
	return Global_2437364.f_2708[0 /*80*/].f_1 == iParam0;
}

int func_829(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_830()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_149(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_126(PLAYER::PLAYER_ID()))
		{
			func_125();
		}
	}
}

void func_831()
{
	if (func_142())
	{
		if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
		{
			func_111(0);
			MISC::CLEAR_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_139(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
	{
		if (!func_877())
		{
			if (!func_141())
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 6))
				{
					func_111(1);
					MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_832()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_65();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_110, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_878() == Local_112.f_118)
							{
								if (func_850(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1)))
								{
									MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_112, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
				{
					if (func_849(iVar0))
					{
						MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_111, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), true), 10f, 1))
						{
							MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_848(iVar0);
		if (func_382())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_129[iVar0]))
			{
				if (!func_810())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_129[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1));
							if (func_878() == Local_112.f_118)
							{
								HUD::SET_BLIP_PRIORITY(iLocal_129[iVar0], 12);
								HUD::SET_BLIP_SPRITE(iLocal_129[iVar0], 432);
								func_847(&(iLocal_129[iVar0]), 6);
							}
							else
							{
								HUD::SET_BLIP_SPRITE(iLocal_129[iVar0], 480);
								func_847(&(iLocal_129[iVar0]), 9);
							}
							HUD::SET_BLIP_FLASHES(iLocal_129[iVar0], 1);
							HUD::SET_BLIP_FLASH_TIMER(iLocal_129[iVar0], 7000);
							HUD::SET_BLIP_SCALE(iLocal_129[iVar0], 1.1f);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_129[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					HUD::REMOVE_BLIP(&(iLocal_129[iVar0]));
				}
				else if (func_810())
				{
					HUD::REMOVE_BLIP(&(iLocal_129[iVar0]));
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_129[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_129[iVar0]));
		}
		func_846(iVar0);
		func_845(iVar0);
		func_843(iVar0);
		switch (Local_112.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2)))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2)))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || MISC::IS_BIT_SET(Local_112.f_108, iVar0))
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (MISC::IS_BIT_SET(Local_112.f_108, iVar0))
											{
												MISC::CLEAR_BIT(&(Local_112.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_841(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_841(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
									{
										TASK::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_841(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_839(iVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_841(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_841(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_838(iVar0, &fVar5);
									if (iVar4 != func_65())
									{
										TASK::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_841(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_112.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_841(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_841(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_841(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_841(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_877())
	{
		func_833();
	}
}

void func_833()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_834(uLocal_131[iVar0], &(Local_130[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_834(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_837())
		{
			Global_2437364 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_836(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_836(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_835(iParam1);
	}
}

void func_835(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_836(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_837()
{
	return Global_1312844;
}

int func_838(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_65();
	fVar1 = 1E+08f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
			if (!func_17(iVar5, 0))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (iVar4 == Local_112.f_118 || Local_113[iVar4 /*14*/].f_10 == Local_112.f_118)
				{
					if (!PED::IS_PED_INJURED(iVar6))
					{
						fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), vVar3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar5;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != func_65())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_839(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_840(iParam0);
	if (iVar1 != func_65())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return iVar0;
}

int func_840(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_65();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (func_188(iVar5, 1))
			{
				if (!MISC::IS_BIT_SET(Local_113[iVar3 /*14*/].f_1, 1))
				{
					if (func_66(iVar5) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118)))
					{
						if (!PED::IS_PED_INJURED(iVar6))
						{
							fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), vVar4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar5;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_841(int iParam0)
{
	if (NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(iParam0))
	{
		return 1;
	}
	if (func_842(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_842(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_44(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_843(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	if (!func_382())
	{
		return;
	}
	if (func_139(PLAYER::PLAYER_ID()) < 1)
	{
		return;
	}
	if (!func_877() && !func_298())
	{
		return;
	}
	if (func_810())
	{
		return;
	}
	if (func_877())
	{
		HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true) };
				GRAPHICS::DRAW_MARKER(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 0);
				func_844(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_844(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar1);
	fVar3 = ((vVar1.z - vVar0.z) / 2f);
	fVar4 = (vVar1.z - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_845(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	bool bVar4;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_112.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_878() != Local_112.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 5625f)
	{
		MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar3]))
		{
			if (!func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
	}
}

void func_846(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_112.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_878() != Local_112.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 62500f)
	{
		MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar4]))
		{
			if (func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar4]))
			{
				MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
			}
			else
			{
				iVar3 = NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar4]);
				if (func_878() == Local_112.f_118)
				{
					if (SYSTEM::VDIST2(vVar1, vVar2) < 40000f)
					{
						MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
					if (func_850(iVar3))
					{
						MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_847(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_338(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_848(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (Local_112.f_2[iParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							vVar2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true) };
							vVar3 = { vVar2 };
							vVar3.z = (vVar3.z + 500f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fVar1, 0, 0))
							{
								if (MISC::ABSF((vVar2.z - fVar1)) > 30f)
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_849(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_112.f_2[iParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_850(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_851())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
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

bool func_851()
{
	return Global_1574394;
}

void func_852()
{
	int iVar0;
	int iVar1;
	
	if (Local_112 != 4)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_117);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				if (!func_810())
				{
					if (!func_877())
					{
						if (func_298())
						{
							if (func_188(iVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118));
								if (func_76(iVar1, iVar0, 1))
								{
									if (!MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_117))
									{
										func_339(iVar1, 432, 1, 0);
										func_332(iVar1, func_338(iLocal_132), 1, 0);
										MISC::SET_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_117);
									}
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_117))
			{
				func_339(iVar1, 432, 0, 0);
				func_332(iVar1, func_338(iLocal_132), 0, 0);
				MISC::CLEAR_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_117);
			}
		}
	}
	iLocal_117++;
	if (iLocal_117 >= 32)
	{
		iLocal_117 = 0;
	}
}

int func_853(bool bParam0)
{
	if (func_857(1))
	{
		return 1;
	}
	if (Global_2528542.f_4889.f_37)
	{
		Global_2528542.f_4889.f_37 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_251() == func_65() || !func_982(func_251(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_391(PLAYER::PLAYER_ID()))
	{
		if (func_856(PLAYER::PLAYER_ID()) && func_854())
		{
			return 1;
		}
	}
	return 0;
}

int func_854()
{
	switch (func_329(func_855(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_855(int iParam0)
{
	if (iParam0 != func_65() && func_982(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_856(int iParam0)
{
	if (iParam0 != func_65() && func_982(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_857(bool bParam0)
{
	bool bVar0;
	
	if (!func_476(1))
	{
		bVar0 = false;
		if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57 != func_65())
		{
			if (func_982(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57, 0, 1))
			{
				if ((Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_24 == 4 || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_24 == 8) || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_138(func_104(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_531(31);
				if (func_317(func_104(PLAYER::PLAYER_ID())))
				{
					func_531(81);
				}
				if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57 != func_65() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57))
				{
					Global_1625024 = func_358(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_250(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57))
					{
						func_531(88);
					}
				}
				else
				{
					Global_1625024 = 1;
				}
				Global_1625008 = { Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_858()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_112.f_2[iVar1 /*26*/] == 2)
			{
				if (func_45(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_131[iVar0] = Local_112.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_859()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_118 || func_878() == Local_112.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), PLAYER::PLAYER_ID(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), PLAYER::PLAYER_ID(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_860()
{
	if (Local_112.f_118 > -1)
	{
		iLocal_132 = func_731(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118)));
	}
}

void func_861(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_335())
	{
		return;
	}
	fVar0 = (Global_2528542.f_4884 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2528542.f_4884 = fParam0;
	Global_2528542.f_4885 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_862(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 != iParam0)
	{
		func_876(-1);
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 = iParam0;
		if (func_875() != -1)
		{
			func_874(-1);
		}
		if (func_873() != -1)
		{
			func_872(-1);
		}
		func_871(iParam2);
		func_869(iParam0);
		if (!func_115(iParam0))
		{
			fVar0 = func_114(iParam0);
			if (fVar0 != 1f)
			{
				func_861(fVar0);
				MISC::SET_BIT(&(Global_1669357.f_3), 1);
			}
		}
		if (!func_118(iParam0) || iParam3)
		{
			if (func_116(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				MISC::SET_BIT(&(Global_1669357.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_141())
		{
			func_109(27);
		}
		if (bParam1)
		{
			if (!func_142())
			{
				func_111(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2528542.f_4546, 1) || MISC::IS_BIT_SET(Global_2528542.f_4546, 4)) || MISC::IS_BIT_SET(Global_2528542.f_4546, 0))
			{
				func_531(6);
			}
			func_868();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_131(PLAYER::PLAYER_ID()) && func_123(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_1), 8);
		}
		func_864();
		if (func_863(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1669357.f_3), 6);
		}
		Global_2528542.f_6270 = 0;
	}
}

int func_863(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_864()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_867();
	iVar2 = func_66(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_76(iVar1, iVar2, 1) || func_865(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_865(int iParam0, int iParam1)
{
	if (func_188(iParam0, 1) && func_188(iParam1, 1))
	{
		return (func_866(iParam0) == func_66(iParam1) || func_866(iParam1) == func_66(iParam0));
	}
	return 0;
}

int func_866(int iParam0)
{
	if (func_188(iParam0, 1))
	{
		return Global_1626536[func_66(iParam0) /*603*/].f_11.f_481;
	}
	return func_65();
}

int func_867()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_478();
	if (iVar0 != func_65())
	{
		if (func_982(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1626536[iVar1 /*603*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_868()
{
	if (MISC::IS_BIT_SET(Global_2528542.f_4546, 1))
	{
		MISC::CLEAR_BIT(&(Global_2528542.f_4546), 1);
	}
	if (MISC::IS_BIT_SET(Global_2528542.f_4546, 4))
	{
		MISC::CLEAR_BIT(&(Global_2528542.f_4546), 4);
	}
	if (MISC::IS_BIT_SET(Global_2528542.f_4546, 6))
	{
		MISC::CLEAR_BIT(&(Global_2528542.f_4546), 6);
	}
	MISC::CLEAR_BIT(&(Global_2528542.f_4546), 0);
	MISC::CLEAR_BIT(&(Global_2528542.f_4546), 2);
	Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_693 = 0;
	if (Global_2528542.f_4548 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2528542.f_4548);
	}
	Global_2528542.f_4547 = 0;
}

void func_869(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_445(3791, -1, 0);
	iVar1 = func_870(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_443(3791, iVar0, -1, 1, 0);
	}
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_871(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1626536[iVar0 /*603*/].f_11.f_181 != iParam0)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_181 = iParam0;
	}
}

void func_872(int iParam0)
{
	if (Global_2528542.f_4889.f_336 != iParam0)
	{
		Global_2528542.f_4889.f_336 = iParam0;
	}
}

int func_873()
{
	return Global_2528542.f_4889.f_336;
}

void func_874(int iParam0)
{
	if (Global_2528542.f_4889.f_335 != iParam0)
	{
		Global_2528542.f_4889.f_335 = iParam0;
	}
}

int func_875()
{
	return Global_2528542.f_4889.f_335;
}

void func_876(int iParam0)
{
	Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_32 = iParam0;
}

int func_877()
{
	int iVar0;
	
	iVar0 = func_878();
	if (iVar0 > -1)
	{
		if (Local_112.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_878()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_65();
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar1 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = func_299();
		iVar1 = Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_682;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_113[iVar0 /*14*/].f_10 != -1)
	{
		return Local_113[iVar0 /*14*/].f_10;
	}
	if (func_122(iVar1))
	{
		Local_113[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_112.f_118)
		{
			func_790(1);
		}
	}
	else if (func_188(iVar1, 1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 != func_65())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_113[iVar0 /*14*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_113[iVar0 /*14*/].f_10;
}

int func_879()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_880()
{
	return Local_112;
}

int func_881(int iParam0)
{
	return Local_113[iParam0 /*14*/];
}

int func_882()
{
	var uVar0;
	
	func_887(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_886())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_885())
	{
		return 1;
	}
	if (func_884(157))
	{
		if (!func_883())
		{
			return 1;
		}
	}
	if (func_884(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_335() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_335()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_883()
{
	return Global_2448756.f_586;
}

int func_884(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_885()
{
	return Global_2458613;
}

bool func_886()
{
	return Global_2448756.f_581;
}

void func_887(var uParam0)
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
					func_888(iVar0);
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

void func_888(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_982(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_889(iVar2, &bVar3))
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

int func_889(int iParam0, var uParam1)
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

void func_890()
{
	SYSTEM::WAIT(0);
}

void func_891()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_114, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_877() || func_298())
				{
					func_621(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_114, 6);
				}
			}
		}
		uVar0 = Local_112.f_115;
		uVar1 = Local_112.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11;
		}
		func_937(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_119)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_120);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_114, 18))
	{
		func_344(1);
		MISC::CLEAR_BIT(&iLocal_114, 18);
	}
	func_936();
	if (Local_112.f_119 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_114, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119)))
			{
			}
		}
	}
	if (func_81(0))
	{
		func_80(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (MISC::IS_BIT_SET(Local_112.f_871, iVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_112.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_114, 17))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_134);
		MISC::CLEAR_BIT(&iLocal_114, 17);
	}
	func_341();
	MISC::SET_BIT(&iLocal_115, 8);
	func_745();
	OBJECT::_0x78857FC65CADB909(1);
	func_790(0);
	func_893(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_331();
	func_892();
}

void func_892()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_893(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1361808.f_1.f_108 != 0)
	{
		Global_1361808.f_1.f_108 = 0;
	}
	Global_1361808.f_1.f_109 = -1;
	Global_1361808.f_1.f_110 = -1;
	if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 167 || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 168)
	{
		func_934();
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 4);
	}
	if ((func_446() && iParam1 != 0) && Global_262145.f_16856)
	{
		if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 190 || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 192)
		{
			func_916(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 164 || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 208) || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 250) || Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 != -1)
	{
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574637.f_1, 14) && !func_131(PLAYER::PLAYER_ID()))
		{
			func_111(0);
		}
	}
	else if (func_914(PLAYER::PLAYER_ID()) != -1)
	{
		func_876(-1);
	}
	func_913(func_65());
	if (func_81(16))
	{
		func_80(16);
	}
	func_910(0);
	func_871(-1);
	func_909();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_908(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_906(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1669357.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1669357.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 5);
	}
	iVar2 = func_324();
	if ((func_218(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_905(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_136(iVar2))
	{
		func_902(-1, 1);
	}
	else if (((((func_323(iVar2) || func_901(iVar2)) || func_900(iVar2)) || func_400(iVar2)) || func_398(iVar2)) || func_396(iVar2))
	{
	}
	else
	{
		func_902(-1, 1);
	}
	func_107(19);
	func_107(20);
	func_107(21);
	func_107(22);
	func_107(27);
	func_80(3);
	func_80(4);
	func_80(7);
	func_899();
	if (func_123(PLAYER::PLAYER_ID()))
	{
		func_790(0);
	}
	func_107(29);
	Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57 = func_65();
	if (Global_2528542.f_4889.f_37 != 0)
	{
		Global_2528542.f_4889.f_37 = 0;
	}
	if (bParam0)
	{
		func_82();
	}
	if (!func_131(PLAYER::PLAYER_ID()))
	{
		func_106();
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1669357.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1669357.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1669357.f_3, 8))
	{
		func_898("IMPEXP_SELFDES", 0);
		func_896("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 8);
	}
	func_894(iVar2, 0);
}

void func_894(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1669357.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_895(iParam0));
			MISC::SET_BIT(&(Global_1669357.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1669357.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_895(iParam0));
		MISC::CLEAR_BIT(&(Global_1669357.f_3), 9);
	}
}

char* func_895(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_896(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_106565.f_14135[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar0 /*104*/]), sParam0))
			{
				if (Global_106565.f_14135[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_802();
					Global_106565.f_14135[iVar0 /*104*/].f_99[Global_14553] = 0;
					if (func_897(iVar0))
					{
					}
					else
					{
						Global_106565.f_14135[iVar0 /*104*/].f_24 = 0;
						Global_106565.f_14135[iVar0 /*104*/].f_28 = 0;
						Global_106565.f_14135[iVar0 /*104*/].f_29 = 0;
					}
					HUD::_REMOVE_NOTIFICATION(Global_106565.f_14135[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_897(int iParam0)
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_898(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_106565.f_14135[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar0 /*104*/]), sParam0))
			{
				if (Global_106565.f_14135[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_106565.f_14135[iVar0 /*104*/].f_24 = 1;
				if (Global_106565.f_14135[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_106565.f_14045[0 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_106565.f_14045[1 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_106565.f_14045[2 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_106565.f_14045[3 /*20*/].f_17 = 0;
					}
					Global_106565.f_14135[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_106565.f_14135[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_899()
{
	if (func_126(PLAYER::PLAYER_ID()))
	{
		func_107(25);
	}
}

int func_900(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_901(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_902(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_324();
	}
	if (iParam0 > 0)
	{
		if (func_478() != func_65())
		{
			if (func_392(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2506960.f_93[func_904(iParam0)] = 1;
			}
		}
		iVar0 = func_904(159);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(157);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(148);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(164);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(142);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(152);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(166);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(170);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(173);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(179);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(200);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(201);
		if (func_903(iVar0, Global_262145.f_12497, bParam1))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(182);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(183);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(185);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(186);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(180);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(195);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(197);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(198);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(207);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(208);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(209);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(214);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(215);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(216);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(217);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(218);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(219);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(220);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(221);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_903(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_108(PLAYER::PLAYER_ID(), 19) && !func_108(PLAYER::PLAYER_ID(), 20)) && !func_108(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2506960.f_93[iParam0] == 1 && func_8(&(Global_2506960[iParam0 /*2*/])))
	{
		if (func_747(&(Global_2506960[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2506960.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_904(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_905(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_324();
	}
	if (iParam0 > 0)
	{
		if (func_478() != func_65())
		{
			Global_2506960.f_93[func_904(iParam0)] = 1;
		}
		iVar0 = func_904(155);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(163);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(160);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(153);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(162);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(154);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(171);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(172);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(199);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(194);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(193);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(210);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(205);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(189);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_904(211);
		if (func_903(iVar0, Global_262145.f_12498, 0))
		{
			func_160(&(Global_2506960[iVar0 /*2*/]));
			func_7(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_906(int iParam0)
{
	if (!func_28(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_334[iParam0 /*3*/], func_907(), 0))
	{
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_334[iParam0 /*3*/] = { func_907() };
	}
	if (!func_28(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_321[iParam0 /*3*/], func_907(), 0))
	{
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_321[iParam0 /*3*/] = { func_907() };
	}
}

Vector3 func_907()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_908(int iParam0)
{
	if (!func_28(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_150[iParam0 /*3*/], func_907(), 0))
	{
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_150[iParam0 /*3*/] = { func_907() };
	}
	if (!func_28(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_125[iParam0 /*3*/], func_907(), 0))
	{
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_125[iParam0 /*3*/] = { func_907() };
	}
}

void func_909()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573892 = { Var0 };
	Global_1573892.f_13 = func_65();
	if (MISC::IS_BIT_SET(Global_1573343, 3))
	{
		MISC::CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_910(bool bParam0)
{
	if (bParam0)
	{
		if (!func_423(PLAYER::PLAYER_ID(), 14))
		{
			func_912(14);
		}
	}
	else if (func_423(PLAYER::PLAYER_ID(), 14))
	{
		func_911(14);
	}
}

void func_911(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_5), iParam0);
}

void func_912(int iParam0)
{
	MISC::SET_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_5), iParam0);
}

void func_913(int iParam0)
{
	if (func_122(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_481 != iParam0)
			{
				Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_481 = iParam0;
				if (iParam0 != func_65())
				{
				}
			}
		}
	}
}

int func_914(int iParam0)
{
	if (func_915(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_32;
	}
	return -1;
}

int func_915(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_32 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_916(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_589(iParam0, iParam1) && func_933(iParam0, iParam1))
	{
		iVar0 = func_588(iParam0, iParam1);
		func_920(iVar0, bParam2, bParam3);
		func_917(iVar0, 1);
	}
}

void func_917(int iParam0, bool bParam1)
{
	if (!func_919(iParam0))
	{
		return;
	}
	func_575(func_918(iParam0), bParam1, -1, 1);
	Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_177[iParam0 /*12*/].f_6 = bParam1;
}

int func_918(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_919(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_920(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_768(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_932(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2505932[iParam0];
		iVar0 = func_931(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1671153 = -1;
		}
		func_930(iParam0, 0, bParam2);
	}
	else if (func_928(iParam0, bParam2))
	{
		iVar0 = func_927(iVar2, 0);
		iVar3 = func_712(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_926(iVar2, bParam2);
		iVar5 = func_927(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_925(iVar2) && func_924(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_932(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_923(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_922(iParam0, (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 - (func_926(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_927(iVar2, bParam2) / func_923(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_925(iVar2) && func_924(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_921(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_921(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return;
	}
	if (func_582(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589819[iParam0 /*818*/].f_273.f_251 = iParam2;
				}
				else
				{
					Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_922(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_177[iParam0 /*12*/].f_2)
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_923(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_582(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_924(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_582(iParam1) && func_925(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_925(int iParam0)
{
	return func_472(iParam0) == 5;
}

int func_926(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_472(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16827;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16832;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16826;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16831;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16825;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16830;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16823;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16824;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20948;
				if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20949;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20932;
				if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20933;
				}
			}
			break;
	}
	return uVar0;
}

int func_927(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_472(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16808;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16822);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16809;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16821);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16810;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16820);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16811;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16812;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20945;
			}
			else
			{
				iVar0 = Global_262145.f_20929;
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20946);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20930);
				}
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20947);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20931);
				}
			}
			if (func_924(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_928(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_576(15384, -1, -1);
	}
	return func_576(func_929(iParam0), -1, -1);
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_930(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_575(15384, bParam1, -1, 1);
		return;
	}
	func_575(func_929(iParam0), bParam1, -1, 1);
}

int func_931(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2505932[iParam0];
	iVar1 = func_768(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2505939;
	}
	if (func_925(iVar1))
	{
		if (func_924(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_932(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2505939 = iParam1;
		return;
	}
	Global_2505932[iParam0] = iParam1;
}

int func_933(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_589(iParam0, iParam1))
	{
		iVar0 = func_588(iParam0, iParam1);
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_4 > 0 && Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_934()
{
	MISC::CLEAR_BIT(&(Global_2528542.f_1728), 28);
	MISC::CLEAR_BIT(&(Global_2528542.f_1728), 29);
	func_935(24);
}

void func_935(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

void func_936()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_119);
}

void func_937(var uParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1669366;
	Var1.f_1 = Global_1669366.f_1;
	Var1.f_2 = Global_1669366.f_2;
	Var1.f_3 = Global_1669366.f_3;
	Var1.f_4 = Global_1669366.f_4;
	Var1.f_5 = Global_1669366.f_5;
	Var1.f_6 = Global_1669366.f_6;
	Var1.f_7 = Global_1669366.f_7;
	Var1.f_8 = Global_1669366.f_8;
	Var1.f_9 = Global_1669366.f_9;
	Var1.f_10 = Global_1669366.f_10;
	Var1.f_11 = Global_1669366.f_11;
	Var1.f_12 = Global_1669366.f_12;
	Var1.f_13 = Global_1669366.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1669366.f_15;
			Var2.f_15 = Global_1669366.f_16;
			Var2.f_16 = Global_1669366.f_17;
			STATS::_0x8D8ADB562F09A245(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1669366.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = uParam1;
			STATS::_0xD1A1EE3B4FA8E760(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1669366.f_15;
			Var4.f_15 = uParam0;
			STATS::_0x88087EE1F28024AE(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1669366.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = uParam1;
			STATS::_0xFCC228E07217FCAC(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1669366.f_15;
			Var6.f_15 = uParam0;
			STATS::_0x678F86D8FC040BDB(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1669366.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1669366.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1669366.f_15;
			STATS::_0x282B6739644F4347(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1669366.f_15;
			STATS::_0xF06A6F41CB445443(&Var10);
		}
	}
	func_938();
}

void func_938()
{
	struct<18> Var0;
	
	Global_1669366 = { Var0 };
}

void func_939(struct<21> Param0)
{
	func_980(func_981(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	func_979(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 872);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_113, 449);
	if (!func_978())
	{
		func_891();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_975();
		func_940(0, 0);
		Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 0;
	}
	else
	{
		func_891();
	}
}

void func_940(int iParam0, int iParam1)
{
	func_974();
	if (func_391(PLAYER::PLAYER_ID()))
	{
		func_943(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_942(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1669352, 0);
				break;
			}
	}
	if (!func_459() && !func_188(PLAYER::PLAYER_ID(), 1))
	{
		if (func_145())
		{
			func_110(3);
		}
	}
	func_110(4);
	if (func_476(0))
	{
		Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_57 = func_478();
	}
	if (func_317(iParam0))
	{
		func_710();
		Global_1669384.f_18 = func_690(func_251());
	}
	else if (func_322(func_914(PLAYER::PLAYER_ID())))
	{
		func_708();
		Global_1669438.f_18 = func_690(func_251());
	}
	func_941();
}

void func_941()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1361808.f_534[iVar0 /*42*/].f_1 = func_65();
		Global_1361808.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_942(int iParam0, bool bParam1)
{
	return func_76(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_943(bool bParam0)
{
	int iVar0;
	
	func_935(33);
	func_935(34);
	func_935(35);
	func_935(36);
	func_935(37);
	func_935(38);
	func_935(39);
	func_935(40);
	func_935(43);
	func_935(41);
	func_935(54);
	func_935(42);
	func_935(47);
	func_973(23);
	func_973(24);
	func_935(92);
	MISC::CLEAR_BIT(&(Global_2528542.f_1728), 2);
	func_972();
	func_967();
	func_962();
	func_957();
	func_949();
	func_945();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2528542.f_4889.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_944(3))
	{
		func_973(3);
	}
	else if (func_944(4))
	{
		func_973(4);
	}
	else if (func_944(5))
	{
		func_973(5);
	}
	else if (func_944(6))
	{
		func_973(6);
	}
	else if (func_944(7))
	{
		func_973(7);
	}
	else if (((((((((((((((((func_944(0) || func_944(1)) || func_944(2)) || func_944(8)) || func_944(9)) || func_944(10)) || func_944(11)) || func_944(12)) || func_944(13)) || func_944(14)) || func_944(15)) || func_944(16)) || func_944(17)) || func_944(18)) || func_944(19)) || func_944(20)) || func_944(21)) || func_944(22))
	{
		func_973(8);
		func_973(0);
		func_973(1);
		func_973(2);
		func_973(9);
		func_973(10);
		func_973(11);
		func_973(12);
		func_973(13);
		func_973(14);
		func_973(15);
		func_973(16);
		func_973(17);
		func_973(18);
		func_973(19);
		func_973(20);
		func_973(21);
		func_973(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2528542.f_4889.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_944(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_14[iVar0], iVar1);
}

void func_945()
{
	if (func_947())
	{
		func_946(4);
		func_946(5);
		func_946(6);
		func_946(7);
	}
}

void func_946(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_31[iVar0]), iVar1);
}

int func_947()
{
	if (((func_948(4) || func_948(5)) || func_948(6)) || func_948(7))
	{
		return 1;
	}
	return 0;
}

bool func_948(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_31[iVar0], iVar1);
}

void func_949()
{
	int iVar0;
	
	if (func_956())
	{
		func_955(8);
		func_955(9);
		func_955(10);
		func_955(12);
		func_955(13);
		func_955(14);
		func_955(19);
		func_955(20);
		func_955(21);
		func_955(22);
		func_955(23);
		func_955(24);
		func_955(25);
		func_955(26);
		func_955(15);
		func_955(16);
		func_955(17);
		func_955(18);
		func_955(35);
		func_955(45);
		func_955(46);
		if (func_954(11))
		{
			func_955(11);
			iVar0 = func_445(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_443(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_954(48))
	{
		if (func_953(151, 3))
		{
			func_952(151, 3);
		}
		func_955(48);
	}
	if (func_954(49))
	{
		if (func_953(152, 3))
		{
			func_952(152, 3);
		}
		func_955(49);
	}
	if (func_954(50))
	{
		if (func_953(153, 3))
		{
			func_952(153, 3);
		}
		func_955(50);
	}
	if (func_954(51))
	{
		if (func_953(func_950(), 3))
		{
			func_952(func_950(), 3);
		}
		func_955(51);
	}
}

int func_950()
{
	if (func_951())
	{
		Global_106565.f_28044[154 /*29*/].f_24[Global_14553] = 1;
	}
	return 154;
}

int func_951()
{
	int iVar0;
	
	iVar0 = func_66(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_65()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_952(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_953(int iParam0, int iParam1)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_26[iVar0], iVar1);
}

void func_955(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_26[iVar0]), iVar1);
}

int func_956()
{
	if (((((((((((((((((((((func_954(8) || func_954(9)) || func_954(10)) || func_954(12)) || func_954(11)) || func_954(13)) || func_954(14)) || func_954(19)) || func_954(20)) || func_954(21)) || func_954(22)) || func_954(23)) || func_954(24)) || func_954(25)) || func_954(26)) || func_954(15)) || func_954(16)) || func_954(17)) || func_954(18)) || func_954(35)) || func_954(45)) || func_954(46))
	{
		return 1;
	}
	return 0;
}

void func_957()
{
	if (func_961())
	{
		func_960(0);
		func_960(1);
		func_960(2);
		func_960(3);
		func_960(4);
		func_960(5);
		if (func_959(32))
		{
			if (func_953(func_958(), 3))
			{
				func_952(func_958(), 3);
			}
			func_960(32);
		}
	}
}

int func_958()
{
	if (func_951())
	{
		Global_106565.f_28044[12 /*29*/].f_24[Global_14553] = 1;
	}
	return 12;
}

bool func_959(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_23[iVar0], iVar1);
}

void func_960(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_23[iVar0]), iVar1);
}

int func_961()
{
	if ((((func_959(1) || func_959(0)) || func_959(2)) || func_959(4)) || func_959(5))
	{
		return 1;
	}
	return 0;
}

void func_962()
{
	if (func_966())
	{
		func_965(0);
		func_965(1);
		func_965(2);
		func_965(3);
		func_965(4);
		func_965(5);
		func_965(6);
		func_965(7);
		if (func_964(8))
		{
			func_965(8);
		}
		if (func_964(15))
		{
			if (func_953(func_963(), 3))
			{
				func_952(func_963(), 3);
			}
			func_965(15);
		}
	}
}

int func_963()
{
	if (func_951())
	{
		Global_106565.f_28044[20 /*29*/].f_24[Global_14553] = 1;
	}
	return 20;
}

bool func_964(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_21[iVar0], iVar1);
}

void func_965(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_21[iVar0]), iVar1);
}

int func_966()
{
	if ((((((((func_964(0) || func_964(1)) || func_964(2)) || func_964(3)) || func_964(4)) || func_964(5)) || func_964(6)) || func_964(7)) || func_964(8))
	{
		return 1;
	}
	return 0;
}

void func_967()
{
	if (func_971())
	{
		func_970(0);
		func_970(1);
		func_970(2);
		func_970(3);
		func_970(4);
		func_970(5);
		func_970(6);
		func_970(7);
		func_970(8);
		func_970(9);
		func_970(10);
		func_970(11);
		func_970(12);
		if (func_969(13))
		{
			if (func_953(func_968(), 3))
			{
				func_952(func_968(), 3);
			}
			func_970(13);
		}
	}
}

int func_968()
{
	if (func_951())
	{
		Global_106565.f_28044[76 /*29*/].f_24[Global_14553] = 1;
	}
	return 76;
}

bool func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2528542.f_4889.f_19[iVar0], iVar1);
}

void func_970(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_19[iVar0]), iVar1);
}

int func_971()
{
	if ((((((((((((func_969(0) || func_969(1)) || func_969(2)) || func_969(3)) || func_969(4)) || func_969(5)) || func_969(6)) || func_969(7)) || func_969(8)) || func_969(9)) || func_969(10)) || func_969(11)) || func_969(12))
	{
		return 1;
	}
	return 0;
}

void func_972()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2528542.f_4889.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2528542.f_4889.f_14[iVar0]), iVar1);
}

void func_974()
{
	struct<14> Var0;
	
	Global_1669366 = { Var0 };
	Global_1669366.f_14 = 0;
	Global_1669366.f_15 = 0;
}

void func_975()
{
	int iVar0;
	int iVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_119);
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574954[iVar1], iLocal_119);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_119, Global_1574954[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574954[iVar1], Global_1574999);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574999, Global_1574954[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_119, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("COP"), iLocal_119);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_119, Global_1575002[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575002[5], iLocal_119);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_119, Global_1574987);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574987, iLocal_119);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_119, Global_1574999);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574999, iLocal_119);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_1574999);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_119);
	func_977(1, &Global_1574999);
	func_976(&Global_1574999);
	func_976(&iLocal_119);
}

void func_976(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_977(int iParam0, var uParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

int func_978()
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
		if (func_886())
		{
			return 0;
		}
		if (func_884(155))
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

int func_979(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_892();
			}
			else
			{
				return 0;
			}
		}
		if (!func_837())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_892();
					}
					else
					{
						return 0;
					}
				}
				if (func_886())
				{
					if (!bParam2)
					{
						func_892();
					}
					else
					{
						return 0;
					}
				}
				if (func_884(155))
				{
					if (!bParam2)
					{
						func_892();
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
					func_892();
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
				func_892();
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
			func_892();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_980(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_892();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_981(int iParam0)
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

int func_982(int iParam0, bool bParam1, bool bParam2)
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

