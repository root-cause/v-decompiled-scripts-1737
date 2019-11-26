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
	struct<55> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_96 = 0;
	struct<5> Local_97[32];
	int iLocal_98 = 0;
	int iLocal_99[3] = { 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_149 = 0;
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
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<21> Local_289 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_101 = -1;
	iLocal_104 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_545(ScriptParam_289);
	}
	while (true)
	{
		func_544();
		if (func_533())
		{
			func_530();
		}
		iLocal_106 = NETWORK::GET_NETWORK_TIME();
		func_521();
		func_518();
		func_513();
		func_512();
		switch (func_511(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_510() == 1)
				{
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_510() == 4)
				{
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_510() == 1)
				{
					func_504();
				}
				else if (func_510() == 0)
				{
					func_498();
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_510() == 4)
				{
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_473();
				func_471(&(Local_95.f_54));
				if (func_470(&(Local_95.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_469(iLocal_101))
					{
						func_473();
						iVar0++;
					}
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			
			case 4:
				func_258();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_256();
			func_255();
			func_254();
			switch (func_510())
			{
				case 0:
					func_253();
					if (func_249())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_103), 0))
						{
							func_247(PLAYER::GET_PLAYER_PED(iLocal_103));
						}
						else
						{
							Local_95.f_36 = { vLocal_105 };
						}
						MISC::CLEAR_BIT(&(Local_95.f_2), 6);
						Local_95 = 1;
					}
					break;
				
				case 1:
					if (func_64())
					{
						func_63();
						func_62();
					}
					func_44();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_510() < 4)
	{
		if (func_22())
		{
			iLocal_107 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_469(iLocal_101) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_95 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (MISC::IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 1) || MISC::IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iLocal_107 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_95.f_10[iLocal_107 /*7*/])))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_10[iLocal_107 /*7*/]), 0))
				{
					if (!MISC::IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
					{
						if (iLocal_101 == 0)
						{
							Local_95.f_48++;
							if (!MISC::IS_BIT_SET(Local_95.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_95.f_10[iLocal_107 /*7*/], &uVar0) == iLocal_103)
								{
									MISC::SET_BIT(&(Local_95.f_2), 12);
								}
							}
							if ((Local_95.f_42 == iLocal_107 && !MISC::IS_BIT_SET(Local_95.f_2, 5)) || Local_95.f_48 == func_469(iLocal_101))
							{
								Var1.f_2 = 1830224437;
								Var1.f_10 = iLocal_103;
								Var1.f_11 = iLocal_102;
								if (func_469(iLocal_101) > 1)
								{
									Var1.f_12 = PLAYER::INT_TO_PLAYERINDEX(1);
								}
								else
								{
									Var1.f_12 = PLAYER::INT_TO_PLAYERINDEX(0);
								}
								Var1.f_3 = Local_95.f_43;
								func_20(Var1, func_21(1));
								if (Local_95.f_42 == iLocal_107)
								{
									MISC::SET_BIT(&(Local_95.f_2), 5);
								}
							}
							else if (!MISC::IS_BIT_SET(Local_95.f_2, 5))
							{
								Var1.f_2 = 1854992895;
								Var1.f_11 = iLocal_102;
								func_20(Var1, func_21(1));
							}
						}
						MISC::SET_BIT(&(Local_95.f_10[iLocal_107 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 5))
					{
						MISC::SET_BIT(&iLocal_98, 2);
					}
					MISC::SET_BIT(&iLocal_98, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_98, 1);
		MISC::SET_BIT(&iLocal_98, 2);
	}
	func_3(iLocal_107);
	iLocal_107++;
	if (iLocal_107 >= func_469(iLocal_101))
	{
		iLocal_107 = 0;
		if (MISC::IS_BIT_SET(Local_95.f_1, 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_98, 1))
			{
				if (!MISC::IS_BIT_SET(Local_95.f_1, 1))
				{
					MISC::SET_BIT(&(Local_95.f_1), 1);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_98, 2))
			{
				if (!MISC::IS_BIT_SET(Local_95.f_1, 9))
				{
					MISC::SET_BIT(&(Local_95.f_1), 9);
				}
			}
		}
		MISC::CLEAR_BIT(&iLocal_98, 1);
		MISC::CLEAR_BIT(&iLocal_98, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_95.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_2424047[iLocal_103 /*416*/].f_236 != -1 && func_18(Global_2424047[iLocal_103 /*416*/].f_236) == 4)) || Global_1589819[iLocal_103 /*818*/].f_690) || func_16(iLocal_103, 0)) || func_9(iLocal_103))
								{
									Local_95.f_10[iParam0 /*7*/].f_3 = iLocal_106;
									MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_2424047[iLocal_103 /*416*/].f_236 == -1) && !Global_1589819[iLocal_103 /*818*/].f_690) && !func_16(iLocal_103, 0)) && !func_9(iLocal_103))
							{
								MISC::CLEAR_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_10[iParam0 /*7*/].f_3) > 10000 || TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2)
							{
								if (!MISC::IS_BIT_SET(Local_95.f_2, 10))
								{
									MISC::SET_BIT(&(Local_95.f_2), 10);
									Local_95.f_39 = { func_8(iLocal_103) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_469(iLocal_101))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1))
									{
										MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (MISC::IS_BIT_SET(Local_95.f_2, 1))
						{
							MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true), 25f) || !func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true), 625f))
								{
									MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (MISC::IS_BIT_SET(Local_95.f_2, 1))
						{
							MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1))
								{
									MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (MISC::ABSF((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (SYSTEM::VDIST2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
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

void func_7(int iParam0, int iParam1)
{
	Local_95.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			iVar1 = func_11(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2528542.f_4889.f_218[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_13())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, iParam1))
		{
			if (func_17(PED::GET_VEHICLE_PED_IS_IN(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
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

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
		{
			if (MISC::IS_BIT_SET(DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 111286607;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_6(iVar2, 0, 0))
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

int func_22()
{
	if (MISC::IS_BIT_SET(Local_95.f_1, 0))
	{
		if (iLocal_101 == 1)
		{
			if (MISC::IS_BIT_SET(Local_95.f_1, 4))
			{
				MISC::SET_BIT(&(Local_95.f_3), 11);
				return 1;
			}
		}
		else if (MISC::IS_BIT_SET(Local_95.f_1, 1))
		{
			MISC::SET_BIT(&(Local_95.f_3), 0);
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Local_95.f_1, 2))
	{
		MISC::SET_BIT(&(Local_95.f_3), 1);
		MISC::SET_BIT(&Global_1648604, iLocal_101);
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 12))
	{
		return 1;
	}
	if (iLocal_101 == 0)
	{
		if (MISC::IS_BIT_SET(Local_95.f_2, 2))
		{
			MISC::SET_BIT(&(Local_95.f_3), 2);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_95.f_2, 8))
		{
			MISC::SET_BIT(&(Local_95.f_3), 8);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_95.f_2, 5))
		{
			MISC::SET_BIT(&(Local_95.f_3), 3);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_95.f_2, 9))
		{
			MISC::SET_BIT(&(Local_95.f_3), 9);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_95.f_1, 15))
		{
			MISC::SET_BIT(&(Local_95.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_103, 0, 1))
	{
		if (iLocal_101 != 0 || !MISC::IS_BIT_SET(Local_95.f_2, 1))
		{
			MISC::SET_BIT(&(Local_95.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_42(iLocal_103, 129))
		{
			MISC::SET_BIT(&(Local_95.f_2), 13);
			MISC::SET_BIT(&(Local_95.f_3), 8);
			return 1;
		}
		if (func_42(iLocal_103, 131) || MISC::IS_BIT_SET(Global_1626536[iLocal_103 /*603*/].f_1, 11))
		{
			MISC::SET_BIT(&(Local_95.f_2), 13);
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_42(iLocal_103, 136) || (func_41(PLAYER::PLAYER_ID(), 24) && func_40(iLocal_103)))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_42(iLocal_103, 146))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_39(PLAYER::PLAYER_ID()) && ((func_38(PLAYER::PLAYER_ID()) == 148 || func_38(PLAYER::PLAYER_ID()) == 142) || func_38(PLAYER::PLAYER_ID()) == 164))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(PLAYER::PLAYER_ID()) == 153)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_36(PLAYER::PLAYER_ID()) && func_38(PLAYER::PLAYER_ID()) == 170)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(PLAYER::PLAYER_ID()) == 167)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(PLAYER::PLAYER_ID()) == 168)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_36(PLAYER::PLAYER_ID()) && func_38(PLAYER::PLAYER_ID()) == 238)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_36(PLAYER::PLAYER_ID()) && func_38(PLAYER::PLAYER_ID()) == 249)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		switch (func_33(PLAYER::PLAYER_ID()))
		{
			case 6:
			case 7:
				if (func_32())
				{
					MISC::SET_BIT(&(Local_95.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_31(iLocal_103))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_103), 0))
		{
			if (iLocal_101 == 1)
			{
				if (MISC::IS_BIT_SET(Local_95.f_1, 0))
				{
					MISC::SET_BIT(&(Local_95.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_101 == 1)
			{
				if (func_42(iLocal_103, 146))
				{
					MISC::SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
				if (!MISC::IS_BIT_SET(Local_95.f_1, 16))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_9) > func_30())
					{
						MISC::SET_BIT(&(Local_95.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					MISC::SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_103, func_12(iLocal_102), 1))
				{
					MISC::SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
			}
			if (iLocal_104 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_103)))
			{
				MISC::SET_BIT(&(Local_95.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_13())
		{
			if (iParam1 == Global_1626536[iParam0 /*603*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_13())
			{
				if (Global_1626536[iParam0 /*603*/].f_11 == iParam0)
				{
					if (Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(iLocal_103, 1, 1) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
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

int func_30()
{
	if (Local_95.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)
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

bool func_32()
{
	return Global_1573342;
}

int func_33(int iParam0)
{
	if (func_38(iParam0) == 243)
	{
		return func_34(iParam0);
	}
	return -1;
}

int func_34(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_35(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_37(iParam0, 9);
	}
	return 0;
}

bool func_37(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

int func_38(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_39(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_36(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_40(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_1, 4);
}

bool func_41(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

int func_42(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_43(iParam0);
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

void func_44()
{
	func_55();
	if (iLocal_101 != 1)
	{
		func_2();
	}
	func_45();
}

void func_45()
{
	int iVar0;
	
	if (func_6(PLAYER::INT_TO_PLAYERINDEX(iLocal_108), 0, 1))
	{
		if (iLocal_101 == 1)
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iLocal_108) == iLocal_103)
			{
				if (!MISC::IS_BIT_SET(Local_95.f_1, 16))
				{
					if (MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_95.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_95.f_1, 11))
			{
				if (func_51(PLAYER::INT_TO_PLAYERINDEX(iLocal_108)))
				{
					if (!MISC::IS_BIT_SET(Local_95.f_4, iLocal_108))
					{
						MISC::SET_BIT(&(Local_95.f_1), 11);
						MISC::SET_BIT(&(Local_95.f_4), iLocal_108);
					}
				}
				else if (MISC::IS_BIT_SET(Local_95.f_4, iLocal_108))
				{
					MISC::SET_BIT(&(Local_95.f_1), 11);
					MISC::CLEAR_BIT(&(Local_95.f_4), iLocal_108);
				}
			}
			else if (MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_95.f_1), 11);
			}
			if (iLocal_101 == 0)
			{
				if (MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 0))
				{
					if (Local_97[iLocal_108 /*5*/].f_2 != -1)
					{
						if (!MISC::IS_BIT_SET(Local_95.f_2, 1))
						{
							MISC::SET_BIT(&(Local_95.f_2), 1);
							Local_95.f_42 = Local_97[iLocal_108 /*5*/].f_2;
							Local_95.f_43 = Local_97[iLocal_108 /*5*/].f_3;
							if (!func_50())
							{
								func_49();
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_95.f_2, 9))
					{
						if (!func_50())
						{
							func_48();
						}
						iVar0 = 0;
						while (iVar0 < func_469(iLocal_101))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						MISC::SET_BIT(&(Local_95.f_2), 9);
						MISC::SET_BIT(&(Local_95.f_2), 1);
					}
				}
				if (func_50())
				{
					if (!MISC::IS_BIT_SET(iLocal_98, 17))
					{
						if (MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 5))
						{
							func_49();
							MISC::SET_BIT(&iLocal_98, 17);
						}
						else if (MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 6))
						{
							func_48();
							MISC::SET_BIT(&iLocal_98, 17);
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 1))
				{
					if (!MISC::IS_BIT_SET(iLocal_98, 3))
					{
						MISC::SET_BIT(&iLocal_98, 3);
					}
				}
				else if (PLAYER::INT_TO_PLAYERINDEX(iLocal_108) == iLocal_103)
				{
					if (iLocal_101 == 0)
					{
						if (!MISC::IS_BIT_SET(Local_95.f_2, 1))
						{
							if (!MISC::IS_BIT_SET(Local_95.f_2, 6))
							{
								MISC::SET_BIT(&(Local_95.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_108++;
	if (iLocal_108 >= 32)
	{
		iLocal_108 = 0;
		if (iLocal_101 == 0)
		{
			if (!MISC::IS_BIT_SET(iLocal_98, 3))
			{
				func_47();
			}
			else
			{
				func_46();
			}
			MISC::CLEAR_BIT(&iLocal_98, 3);
		}
	}
}

void func_46()
{
	if (MISC::IS_BIT_SET(Local_95.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Local_95.f_2), 3);
	}
}

void func_47()
{
	if (!MISC::IS_BIT_SET(Local_95.f_2, 3))
	{
		Local_95.f_6 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_2), 3);
	}
}

void func_48()
{
	struct<14> Var0;
	
	Var0.f_2 = 2144026744;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	func_20(Var0, func_21(1));
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = 771350006;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	if (func_469(iLocal_101) > 1)
	{
		Var0.f_12 = PLAYER::INT_TO_PLAYERINDEX(1);
	}
	else
	{
		Var0.f_12 = PLAYER::INT_TO_PLAYERINDEX(0);
	}
	Var0.f_3 = Local_95.f_43;
	func_20(Var0, func_21(1));
}

int func_50()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_51(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_54();
	}
	return MISC::IS_BIT_SET(Global_1371947.f_241.f_136[func_53(10) /*33*/][iParam0], func_52(10));
}

int func_52(int iParam0)
{
	return (iParam0 % 32);
}

int func_53(int iParam0)
{
	return (iParam0 / 32);
}

var func_54()
{
	return Global_1312417;
}

void func_55()
{
	int iVar0;
	
	if (iLocal_101 == 0)
	{
		if (MISC::IS_BIT_SET(Local_95.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_6) > 10000)
			{
				if (MISC::IS_BIT_SET(Local_95.f_2, 1))
				{
					MISC::SET_BIT(&(Local_95.f_2), 2);
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_95.f_1, 8))
		{
			if (!MISC::IS_BIT_SET(Local_95.f_2, 1))
			{
				if (func_59())
				{
					MISC::SET_BIT(&(Local_95.f_2), 6);
					func_58();
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_95.f_1, 0))
		{
			if (func_6(iLocal_103, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iLocal_103);
				if (func_57(iVar0))
				{
					func_247(iVar0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_95.f_2, 1))
		{
			if (!func_6(iLocal_103, 1, 1) || func_28(iLocal_103))
			{
				MISC::SET_BIT(&(Local_95.f_1), 15);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_95.f_1, 0))
	{
		if (MISC::IS_BIT_SET(Local_95.f_1, 5))
		{
			if (!MISC::IS_BIT_SET(Local_95.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 600000)
				{
					MISC::SET_BIT(&(Local_95.f_1), 4);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_95.f_3, 12))
		{
			if (func_56())
			{
				MISC::SET_BIT(&(Local_95.f_3), 12);
			}
		}
	}
}

int func_56()
{
	switch (Local_95.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_680 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_680 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_1, 17))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_95.f_36, ENTITY::GET_ENTITY_COORDS(iParam0, true), 625f))
	{
		return 1;
	}
	return 0;
}

void func_58()
{
	func_498();
	Local_95 = 0;
}

int func_59()
{
	if ((((((((MISC::IS_BIT_SET(Local_95.f_2, 6) || PLAYER::IS_PLAYER_DEAD(iLocal_103)) || func_29(iLocal_103, 1, 1)) || func_61(iLocal_103)) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2424047[iLocal_103 /*416*/].f_238) || func_60(PLAYER::GET_PLAYER_PED(iLocal_103), joaat("TITAN")))
	{
		return 1;
	}
	if (iLocal_103 != -1)
	{
		if (MISC::IS_BIT_SET(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_61(int iParam0)
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

void func_62()
{
	if (!MISC::IS_BIT_SET(Local_95.f_1, 5))
	{
		Local_95.f_5 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_1), 5);
	}
}

void func_63()
{
	if (MISC::IS_BIT_SET(Local_95.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_95.f_1), 5);
	}
}

int func_64()
{
	bool bVar0;
	
	if (MISC::IS_BIT_SET(Local_95.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_249())
		{
			if (iLocal_101 == 1)
			{
				bVar0 = true;
			}
			else if (func_244())
			{
				if (func_241())
				{
					if (func_240())
					{
						bVar0 = true;
					}
					else if (func_238(func_239(iLocal_101)))
					{
						if (func_70())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_62();
			if (func_65())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (MISC::IS_BIT_SET(Local_95.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_101)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_469(iLocal_101))
					{
						if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/]) && !MISC::IS_BIT_SET(Local_95.f_10[iVar0 /*7*/].f_2, 1)) && !MISC::IS_BIT_SET(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_66(iVar0, func_69(iLocal_101), Local_95.f_32, Local_95.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_101 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_469(iLocal_101))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/]))
					{
						if (!MISC::IS_BIT_SET(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			MISC::SET_BIT(&iLocal_98, 1);
			MISC::SET_BIT(&iLocal_98, 2);
			MISC::SET_BIT(&iLocal_98, 3);
			MISC::SET_BIT(&iLocal_98, 4);
			MISC::SET_BIT(&(Local_95.f_1), 0);
			MISC::SET_BIT(&Global_1648605, iLocal_101);
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1, vector3 vParam2, float fParam3)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) < NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_238(func_239(iLocal_101)))
					{
						if (func_68(&(Local_95.f_10[iParam0 /*7*/]), 7, func_239(iLocal_101), vParam2, fParam3, 1, 1, 1))
						{
							Local_95.f_10[iParam0 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_67(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_67(int iParam0)
{
	char cVar0[16];
	
	if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), Global_1574989);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 0);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), false, false, false, false, false, false, 1, false);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 41, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 20, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 132, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 118, false);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 311, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_95.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 2, false);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), false, -1, 0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 32, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 4, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 128, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 256, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 16, true);
					if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 0))
					{
						MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 17, false);
					WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), joaat("WEAPON_KNIFE"), 1, true, true);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 0);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_103), -1, 0, 2);
					NETWORK::_0x3FA36981311FA4FF(Local_95.f_10[iParam0 /*7*/], 1);
					break;
			}
			ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), SYSTEM::ROUND((Global_262145.f_153 * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]))))), 0);
			if (!MISC::IS_BIT_SET(Local_95.f_1, 8))
			{
				MISC::SET_BIT(&(Local_95.f_1), 8);
			}
			MISC::SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_68(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_70()
{
	struct<6> Var0;
	
	if (MISC::IS_BIT_SET(Local_95.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_101)
		{
			case 0:
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_103) && func_6(iLocal_103, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true) };
					Var0.f_5 = 20f;
					if (func_71(Local_95.f_36, 40f, &(Local_95.f_32), &(Local_95.f_35), &Var0))
					{
						MISC::SET_BIT(&(Local_95.f_1), 3);
						return 1;
					}
				}
				else
				{
					NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
					PED::_0xFEE4A5459472A9F8();
					if (Global_2405071.f_2460)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_2405071.f_2460 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_71(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_72(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_72(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2454 == *uParam0 || !Global_2405071.f_2454.f_1 == uParam0->f_1) || !Global_2405071.f_2454.f_2 == uParam0->f_2) || !Global_2405071.f_2457 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2468 == uParam0->f_8 || !Global_2405071.f_2468.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2468.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2471 == uParam0->f_11) || !Global_2405071.f_2471.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2471.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2468 == uParam0->f_8 || !Global_2405071.f_2468.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2468.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2471 == uParam0->f_11) || !Global_2405071.f_2471.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2471.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2474 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405071.f_2452 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_2461))
			{
				if (Global_2405071.f_2461 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2458) < func_237(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2458) < func_237(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_236();
		}
		Global_2405071.f_2452 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2458) > func_237(0))
	{
		Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
		func_230();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2452)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::_0xFEE4A5459472A9F8();
		func_236();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_229(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405071.f_2475 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2454 = { *uParam0 };
					Global_2405071.f_2457 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2468 = { uParam0->f_8 };
					Global_2405071.f_2471 = { uParam0->f_11 };
					Global_2405071.f_2474 = 0f;
					Global_2405071.f_2454 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2468 = { uParam0->f_8 };
					Global_2405071.f_2471 = { uParam0->f_11 };
					Global_2405071.f_2474 = uParam0->f_14;
					Global_2405071.f_2454 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_228(vVar6.x, vVar6.y);
			}
			Global_2405071.f_2453 = 1;
			Global_2405071.f_2452 = 1;
			Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2458 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2461 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2452)
	{
		if (Global_2405071.f_2453 == 1)
		{
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 5000)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("TAILGATER");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_227(Global_4456448.f_161209))
					{
						Var14.f_9 = 1;
					}
					func_202(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_201(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2453 = 9;
				}
				else
				{
					Global_2405071.f_2453 = 2;
				}
			}
		}
		if (Global_2405071.f_2453 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar7, vVar8) == 0)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_198(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405071.f_2453 = 3;
				}
				else
				{
					Global_2405071.f_2453 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2463) > 7000)
			{
				func_197(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405071.f_2453 == 3)
		{
			if (func_196() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 10000)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2453 = 4;
			}
		}
		if (Global_2405071.f_2453 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_230();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2453 = 5;
							}
							break;
						
						case 1:
							func_195(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2453 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2453 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2453 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_195(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2453 == 5)
		{
			if (func_124(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2479.f_5)
				{
					Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2453 = 6;
				}
				else
				{
					Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2453 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2453 = 8;
			}
		}
		if (Global_2405071.f_2453 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2479.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_123(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_122(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2453 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_195(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2453 == 7)
		{
			if (func_124(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405071.f_2613[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_201(Global_2405071.f_2613[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_120(Global_2405071.f_2613[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405071.f_2613[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_75(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405071.f_2453 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 20000)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2453 = 8;
			}
		}
		if (Global_2405071.f_2453 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_74(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2479.f_2)
			{
				func_73(uParam2, &(Global_2405071.f_2479.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2454 };
				func_75(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2453 = 9;
		}
		if (Global_2405071.f_2453 == 9)
		{
			Global_2405071.f_2452 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_236();
			return 1;
		}
		Global_2405071.f_2458 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_73(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_74(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_75(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("TAILGATER");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_123(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_122(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_122(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_89(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_87(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		func_202(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_86(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_89(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_86(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_76(uParam0, 1, 1, 1, 1))
			{
				func_75(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_76(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_85(*uParam0, &(Global_2409968[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_77(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_76(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_77(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 1, 0);
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

void func_77(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_84(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_84(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_84(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_82(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_81(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_78(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_78(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
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
	vVar2 = { func_80(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_79(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar1) >= 0f)
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
		vVar2 = { func_80(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_79(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar11) >= 0f)
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

float func_79(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_80(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_81(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

void func_82(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_83(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_83(&vVar0, 0f, 0f, fParam5);
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

void func_83(var uParam0, vector3 vParam1)
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

Vector3 func_84(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_82(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_81(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_78(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_201(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_120(vVar1, vParam1, vParam2, 0, 0))
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

int func_85(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_201(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_120(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_86(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_120(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_87(int iParam0, bool bParam1)
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
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_13())
			{
				return func_88(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
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

int func_89(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_119(vParam0, uParam1))
	{
		if (func_90(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_90(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_90(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_106(Global_2405071.f_507, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_94(*uParam1, 1056964608))
			{
				if (!func_91(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_91(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_93(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411443[iVar2])
	{
		if (func_92(vVar1, &(Global_2410173[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_2410173[iVar2 /*141*/][iVar0 /*7*/], Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411443[8])
	{
		if (func_92(vVar1, &(Global_2410173[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_2410173[8 /*141*/][iVar0 /*7*/], Global_2410173[8 /*141*/][iVar0 /*7*/].f_3, Global_2410173[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_92(vector3 vParam0, var uParam1)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_93(struct<2> Param0, var uParam1)
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

int func_94(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_103(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_4456448.f_61781 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_61781)
			{
				if (Global_4456448.f_61782[iVar0 /*80*/].f_7 != 0)
				{
					if (func_95(vParam0, Global_4456448.f_61782[iVar0 /*80*/], Global_4456448.f_61782[iVar0 /*80*/].f_6, Global_4456448.f_61782[iVar0 /*80*/].f_7, fParam1))
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
					if (func_95(vParam0, Global_4456448.f_58134[iVar0 /*151*/], Global_4456448.f_58134[iVar0 /*151*/].f_3, Global_4456448.f_58134[iVar0 /*151*/].f_16, 0.5f))
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
					if (func_95(vParam0, Global_4456448.f_83457[iVar0 /*250*/], Global_4456448.f_83457[iVar0 /*250*/].f_3, Global_4456448.f_83457[iVar0 /*250*/].f_12, 0.5f))
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
					if (func_95(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969025.f_220[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969025.f_220[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969025.f_220[iVar0]), 0.5f))
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
					if (func_95(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969025.f_118[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969025.f_118[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969025.f_118[iVar0]), 0.5f))
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

int func_95(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_102(iParam3, 1008981770))
	{
		func_96(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_96(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_83(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_97(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_97(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_100(iParam0);
		if (iVar0 != 0)
		{
			func_98(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_99(iParam0, &Global_1315802);
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

void func_99(int iParam0, var uParam1)
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

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_101(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_102(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_97(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_103(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_104(iParam0))
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

bool func_104(int iParam0)
{
	return func_105(iParam0);
}

bool func_105(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_106(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_113(vParam0))
	{
		if (func_76(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_108(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_107(*uParam1, 1056964608))
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
				func_82(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_107(vector3 vParam0, float fParam1)
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

int func_108(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_110(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_77(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_110(vVar2, &uVar1) || func_109(vVar2))
			{
				vVar2 = { *uParam0 };
				func_77(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_109(vector3 vParam0)
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

int func_110(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_112())
	{
		return 0;
	}
	iVar1 = func_111();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_85(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_111()
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

bool func_112()
{
	return Global_1671295.f_163;
}

int func_113(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_117(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_116(vParam0, 1008981770))
			{
				if (!func_76(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_76(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_115(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_114(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_76(&vVar1, 0, 0, 0, 1))
					{
						if (!func_76(&vParam0, 0, 0, 0, 1))
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

Vector3 func_114(var uParam0)
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

int func_115(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_85(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_116(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_85(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_117(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_118(iParam0) != 0;
	}
	return func_103(iParam0, bParam1);
}

int func_118(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_119(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2250 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2250)
		{
			fVar3 = SYSTEM::VDIST(Global_2405071.f_2251[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405071.f_2251[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_120(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_121(&vParam1, &vParam2);
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

void func_121(var uParam0, var uParam1)
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

int func_122(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_123(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_124(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405071.f_2479.f_1 == 0 && Global_2405071.f_2479 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2405071.f_2479.f_1)))
			{
				case 0:
					func_193(uParam1, uParam2);
					if (!Global_2405071.f_2479.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
							}
							if (uParam1->f_5 && func_74(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2479.f_5)
								{
									Global_2405071.f_2479.f_5 = 1;
								}
								else
								{
									func_75(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_75(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_193(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_193(uParam1, uParam2);
					Global_2405071.f_2479.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_193(uParam1, uParam2);
				if (!Global_2405071.f_2479.f_2)
				{
					Global_2405071.f_2479.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_190(Global_2405071.f_550, &(Global_2405071.f_2479.f_57), &(Global_2405071.f_2479.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2479.f_4)
	{
		Global_2405071.f_2479.f_4 = 1;
		func_132(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405071.f_2479.f_1 > 0 || Global_2405071.f_2479 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405071.f_2479.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405071.f_2479.f_3)
					{
						iVar2 = Global_2405071.f_2479.f_3 + 1;
					}
					if (iVar2 > (Global_2405071.f_2479.f_1 - 1))
					{
						iVar2 = (Global_2405071.f_2479.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_132(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405071.f_2479.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405071.f_2479.f_1;
		}
		if (Global_2405071.f_2479.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405071.f_2876)
			{
				func_126(&(Global_2405071.f_2479.f_6[0 /*10*/]), &(Global_2405071.f_2479.f_6[1 /*10*/]), &(Global_2405071.f_2479.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_74(Global_2405071.f_484))
			{
				if (Global_2405071.f_2479.f_2)
				{
					func_73(uParam0, &(Global_2405071.f_2479.f_6));
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
					func_75(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2479.f_2)
			{
				func_73(uParam0, &(Global_2405071.f_2479.f_6));
				func_125(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405071.f_2479.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_91(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
					func_75(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
				func_75(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_125(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
		if (uParam1->f_5 && func_74(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2479.f_5)
			{
				Global_2405071.f_2479.f_5 = 1;
			}
			else
			{
				func_75(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_75(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_125(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_125(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2613[(3 - iVar0) /*3*/] = { Global_2405071.f_2613[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2613[0 /*3*/] = { vParam0 };
}

void func_126(var uParam0, var uParam1, var uParam2)
{
	if (func_74(Global_2405071.f_484) && func_131() < 4096)
	{
		func_130(uParam0, 0f);
		func_130(uParam1, uParam0->f_2);
		func_130(uParam2, uParam1->f_2);
	}
	else
	{
		func_129(uParam0);
		func_128(uParam2, uParam0->f_4);
		func_127(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_127(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407993[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2407993[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407993[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_128(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407993[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407993[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_129(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407993[iVar0 /*10*/].f_1;
				Var2 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_130(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_2 < fVar1 && Global_2407993[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407993[iVar0 /*10*/].f_2;
				Var2 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_131()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407993[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_132(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (MISC::ABSF((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_187(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_186(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_185(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_179(vParam0, fParam1, uParam2->f_15, func_184(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_176(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_172(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_172(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_107(vParam0, 0.5f))
			{
				if (func_113(vVar12))
				{
					if (!func_76(&vParam0, 0, 0, 0, 1) && !func_171(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_171(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_170(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_169(PLAYER::PLAYER_ID()) && func_168(PLAYER::PLAYER_ID())))
		{
			if (!func_167(&vParam0, &(Global_2405071.f_2479.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_168(PLAYER::PLAYER_ID()))
		{
			if (!func_166(vParam0, &(Global_2405071.f_2479.f_57), &(Global_2405071.f_2479.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_165(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_74(Global_2405071.f_484))
			{
				if (func_116(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_164(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_108(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_91(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_115(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_163(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_158(&(Global_2405071.f_45[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_94(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_157(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405071.f_2876 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_149(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_149(vParam0, Global_2405071.f_2454, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_74(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var19.f_2 = func_147(vParam0);
			}
			uVar7 = func_138(vParam0, 1, 0, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_137(Var19);
			Global_2405071.f_2479.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405071.f_2479.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_149(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_149(vParam0, Global_2405071.f_2454, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_74(Global_2405071.f_484) && iVar8 == Global_2405071.f_2479.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_147(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405071.f_2479.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_136(Var19, iVar18);
							Global_2405071.f_2479.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2479.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2479.f_6[iVar18 /*10*/] && fVar0 > Global_2405071.f_2479.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_136(Var19, iVar18);
						Global_2405071.f_2479.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_134(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_138(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_133(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_133(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405071.f_2479.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2479.f_6[iVar18 /*10*/] && fVar3 > Global_2405071.f_2479.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_136(Var19, iVar18);
						Global_2405071.f_2479.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_133(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_134(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_198(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_135(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_135(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_136(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2479.f_6[iParam1 /*10*/] };
	Global_2405071.f_2479.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_136(Var0, iParam1 + 1);
	}
}

void func_137(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_131();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] < iVar2)
		{
			Global_2407993[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] == 0)
		{
			Global_2407993[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2407993[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407993[iVar4 /*10*/] = { Param0 };
	}
}

float func_138(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1) || (iParam5 == 1 && func_6(iVar7, 0, 0)))
		{
			if (!iVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_139(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == -1 || !func_117(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar7) || !bParam4)
					{
						if (func_135(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == PLAYER::PLAYER_ID())
							{
								vVar6 = { NETWORK::_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_139(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_145(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_103(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_144(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
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
					if (!func_103(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_140(iParam0))
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

int func_140(int iParam0)
{
	if (func_143(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_142(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_141(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_142(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_143(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2505680 = { func_142(iParam0) };
		Global_2505693 = { func_142(iParam1) };
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

int func_144(int iParam0, int iParam1, int iParam2)
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

int func_145(int iParam0)
{
	if (func_198(iParam0, 0))
	{
		return 1;
	}
	if (func_146())
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

bool func_146()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

float func_147(vector3 vParam0)
{
	var uVar0;
	
	return func_148(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_148(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2722) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_149(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_133(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_138(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_133(fVar4, 0f, func_156(), func_154(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_152(vParam0);
	fVar0 = func_133(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_117(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_151(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_133(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_150(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_133(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_133(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_133(SYSTEM::VDIST(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_150(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_151(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1))
					{
						if (Global_2417757.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417757.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_152(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_153(uVar4[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2921)
	{
		if (Global_969025.f_254 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969025.f_254)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969025.f_139[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_969025.f_139[iVar2], 0))
					{
						if (func_153(Global_969025.f_139[iVar2]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_969025.f_139[iVar2], true) };
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574954[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574954[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574664[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574664[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_154()
{
	if (func_155())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_155()
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_145(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_156()
{
	if (func_155())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_157(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_158(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_162(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_161(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_159(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_159(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_160(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_160(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_80(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_161(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_162(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_163(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_93(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411443[iVar2])
	{
		if (func_92(vVar1, &(Global_2410173[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410173[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411443[8])
	{
		if (func_92(vVar1, &(Global_2410173[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410173[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410173[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410173[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_164(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
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
	}
	return 1;
}

int func_165(vector3 vParam0)
{
	switch (Global_2405071.f_2475)
	{
		case 0:
			return func_201(vParam0, Global_2405071.f_2454, Global_2405071.f_2457, 0, 0);
			break;
		
		case 1:
			return func_120(vParam0, Global_2405071.f_2468, Global_2405071.f_2471, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405071.f_2468, Global_2405071.f_2471, Global_2405071.f_2474, 0, true);
			break;
	}
	return 0;
}

int func_166(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_167(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_82(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_168(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1589819[iParam0 /*818*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_103(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_2405071.f_2613[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_109(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_82(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar2);
			if (func_110(vVar1, &uVar0) || func_109(vVar1))
			{
				vVar1 = { *uParam0 };
				func_82(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_172(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_173(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_6(iVar1, 1, 1))
		{
			if (!func_198(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_135(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_173(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_173(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

Vector3 func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_175() && Global_1589819[iVar0 /*818*/].f_789) && !func_174(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_8(iParam0);
}

int func_174(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_175()
{
	return Global_2448756.f_16;
}

int func_176(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_178(vParam0, fParam1, iParam2, iParam3, 0) || func_177(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_177(vector3 vParam0, int iParam1, int iParam2)
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
					if (func_95(vParam0, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
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

int func_178(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_2417757.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
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
				else if (func_6(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
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

int func_179(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405071.f_3 = 0;
	if (!func_176(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam3)
		{
			if (func_229(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_183(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_94(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_229(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_183(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_180(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_94(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_229(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_183(vParam0, fParam10))
			{
				Global_2405071.f_3++;
				if (!func_180(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405071.f_3++;
					if (!func_94(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_135(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_182(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_181(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
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

bool func_181(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_182(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_183(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_135(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_117(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_182(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0)
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_185(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_135(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && func_140(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), vParam0, true) < fParam1)
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

int func_186(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_198(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (((func_117(iParam0, 1) || func_189(iParam0)) || func_35(iParam0, 0)) || func_188(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

void func_190(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_192(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5920[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5920[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_192(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 13)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5966[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_5966[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_192(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_191(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_191(var uParam0, var uParam1, int iParam2)
{
	Global_2412448 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_191(&Global_2412448, uParam1, iParam2 + 1);
	}
}

void func_192(var uParam0, var uParam1, int iParam2)
{
	Global_2412444 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_192(&Global_2412444, uParam1, iParam2 + 1);
	}
}

void func_193(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405071.f_2250 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2250)
		{
			if (func_194(Global_2405071.f_2251[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405071.f_2251[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2251[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_132(Global_2405071.f_2251[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405071.f_2479++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2876)
	{
		func_126(&(Global_2405071.f_2479.f_6[0 /*10*/]), &(Global_2405071.f_2479.f_6[1 /*10*/]), &(Global_2405071.f_2479.f_6[2 /*10*/]));
	}
}

int func_194(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_86(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_86(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_195(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_121(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_196()
{
	return Global_1310987.f_4;
}

void func_197(float fParam0, float fParam1)
{
	func_236();
	func_228(fParam0, fParam1);
}

bool func_198(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_199(-1, 0) == 8;
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

int func_199(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_200();
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

int func_200()
{
	return Global_1312745;
}

bool func_201(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
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

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		while (func_224(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_203(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_203(var uParam0, var uParam1, var uParam2)
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
		if (func_106(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_223(uParam0, 1))
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
	if (func_100(uParam2->f_34) != 0)
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
					if (!func_171(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_222(vVar1))
									{
										vVar1 = { func_218(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_94(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_217(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_223(&vVar1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_213(vVar1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_106(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_212(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_229(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_229(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_210(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_209(vVar1, uParam2->f_54, &fVar23);
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
																													func_208(vVar1, fVar2, iVar14);
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
																									if (func_217(vVar1, uParam2))
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
							func_206(0, uParam2);
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
						func_205(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_106(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_223(&vVar27, bVar29))
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
				func_204(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_204(var uParam0, var uParam1, var uParam2, vector3 vParam3)
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
			if (!func_176(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
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

void func_205(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_218(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_222(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_206(int iParam0, var uParam1)
{
	if (!func_217(Global_2412458[iParam0 /*3*/], uParam1))
	{
		Global_2412458.f_162 = (Global_2412458.f_162 - 1);
		func_207(iParam0);
		if (Global_2412458.f_162 > Global_2412458.f_163)
		{
			func_206(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_206(iParam0 + 1, uParam1);
	}
}

void func_207(int iParam0)
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

void func_208(vector3 vParam0, float fParam1, int iParam2)
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
			func_208(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_209(vector3 vParam0, float fParam1, float fParam2)
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
		if (func_139(iVar3))
		{
			vVar1 = { func_8(iVar3) };
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

int func_210(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_135(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_140(iVar1))
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
										if (func_211(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_95(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_211(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_95(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_97(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_83(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_83(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_83(&vVar6, 0f, 0f, fParam1);
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
		if (func_95(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_211(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(vector3 vParam0, float fParam1, int iParam2)
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
		if (func_211(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
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
		if (func_211(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_216(vParam0, fParam1, iParam2, iParam3, iParam4) || func_214(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_214(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
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
				if (func_215(vParam0, iParam2, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_211(vParam0, fParam1, iParam2, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
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

int func_215(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_102(iParam1, 1008981770);
	fVar1 = func_102(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_216(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_2417757.f_261[iVar0])
				{
					if (func_95(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_95(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417757.f_261[iVar0])
			{
				if (func_95(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_95(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
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

int func_217(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_201(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_120(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
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

Vector3 func_218(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
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
			if (!func_221(vParam0, *fParam1, vParam4))
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
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_220(vParam0))
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
					fVar10 = func_219(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_219(iParam7, 1.5f);
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
		if (!func_221(vParam0, *fParam1, vParam4))
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
					fVar10 = func_219(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_219(iParam7, 1.5f);
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

float func_219(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_97(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_220(vector3 vParam0)
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

int func_221(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_83(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_79(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_222(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_93(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412165[iVar1])
	{
		if (func_92(vParam0, &(Global_2411462[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412165[8])
	{
		if (func_92(vParam0, &(Global_2411462[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_223(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_201(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_120(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
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
				*uParam0 = { func_84(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_224(var uParam0, var uParam1, var uParam2)
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
			if (func_106(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_223(uParam0, 1))
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
		func_225(*uParam0);
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
							if ((uParam2->f_12 && !func_213(vVar2, fVar3, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_106(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_212(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_229(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_229(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_210(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar10 = func_209(vVar2, uParam2->f_54, &fVar11);
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
																		func_208(vVar2, fVar3, iVar4);
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
					func_206(0, uParam2);
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

void func_225(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1742)
	{
		uVar1 = func_226(vParam0, fVar0, &fVar0);
		Global_2405071.f_2148[iVar2] = uVar1;
		iVar2++;
	}
}

int func_226(vector3 vParam0, float fParam1, float fParam2)
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

bool func_227(int iParam0)
{
	return iParam0 == 50;
}

void func_228(float fParam0, float fParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405071.f_2462 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_2460 = 1;
	Global_2405071.f_2463 = NETWORK::GET_NETWORK_TIME();
}

int func_229(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
			if (func_172(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

void func_230()
{
	func_235();
	func_234();
	func_233();
	func_232();
	func_231();
}

void func_231()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407993[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_232()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405071.f_2479.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_233()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405071.f_2479.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_234()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405071.f_2479.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_235()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2479 = { Var0 };
}

void func_236()
{
	if (Global_2405071.f_2460)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_2462)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405071.f_2460 = 0;
	}
}

int func_237(bool bParam0)
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

bool func_238(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_95.f_49;
			break;
	}
	return 0;
}

int func_240()
{
	if (iLocal_101 == 0)
	{
		if (MISC::IS_BIT_SET(Local_95.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_241()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!MISC::IS_BIT_SET(Local_95.f_2, 0))
	{
		MISC::SET_BIT(&(Local_95.f_2), 0);
		if (iLocal_101 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_103, 1, 1))
		{
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(0)) >= func_469(iLocal_101)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_469(iLocal_101)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(iLocal_103);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_284, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_469(iLocal_101))
							{
								if (iVar5 == -1)
								{
									if (((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar1 /*7*/]) && !MISC::IS_BIT_SET(Local_95.f_10[iVar1 /*7*/].f_2, 1)) && !MISC::IS_BIT_SET(Local_95.f_10[iVar1 /*7*/].f_2, 6)) && !MISC::IS_BIT_SET(Local_95.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_284[iVar0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_284[iVar0], 0))
									{
										if (!PED::IS_PED_A_PLAYER(uLocal_284[iVar0]))
										{
											if (func_243(ENTITY::GET_ENTITY_MODEL(uLocal_284[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_284[iVar0]))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_284[iVar0], 0))
													{
														if (func_5(ENTITY::GET_ENTITY_COORDS(uLocal_284[iVar0], true), ENTITY::GET_ENTITY_COORDS(iVar2, true), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_284[iVar0], true, 0);
															Local_95.f_10[iVar5 /*7*/].f_6 = iVar0;
															MISC::SET_BIT(&(Local_95.f_10[iVar5 /*7*/].f_2), 8);
															if (!MISC::IS_BIT_SET(Local_95.f_1, 12))
															{
																Local_95.f_8 = iLocal_106;
																MISC::SET_BIT(&(Local_95.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_95.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_469(iLocal_101))
		{
			if (MISC::IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 1) || MISC::IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (MISC::IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 1);
							Local_95.f_10[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_95.f_10[iVar6 /*7*/], 1);
							MISC::SET_BIT(&(Local_95.f_10[iVar6 /*7*/].f_2), 0);
							Local_95.f_10[iVar6 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iVar6 /*7*/].f_4 = func_69(iLocal_101);
							func_67(iVar6);
							MISC::CLEAR_BIT(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_8) > 5000)
		{
			if (iVar7 >= func_469(iLocal_101))
			{
				MISC::SET_BIT(&(Local_95.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_284[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_469(iLocal_101))
			{
				if (MISC::IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_242(&(Local_95.f_10[iVar6 /*7*/]));
					MISC::CLEAR_BIT(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			MISC::CLEAR_BIT(&(Local_95.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_243(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_244()
{
	if (MISC::IS_BIT_SET(Local_95.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_101 == 0)
	{
		Local_95.f_49 = func_245(Local_95.f_36, 1);
		MISC::SET_BIT(&(Local_95.f_1), 6);
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Local_95.f_1), 6);
		return 1;
	}
	return 0;
}

int func_245(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	if (func_246(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_246(vParam0, 1100f, -196f, 300f, 350f, 0) || func_246(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_246(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_246(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_246(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_246(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_246(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_246(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam1, bParam3) <= fParam2;
}

void func_247(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_95.f_36 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (func_248(iParam0, 0))
	{
		MISC::SET_BIT(&(Local_95.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_95.f_1), 17);
	}
}

int func_248(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_249()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (MISC::IS_BIT_SET(Local_95.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_101)
			{
				case 0:
					if (MISC::IS_BIT_SET(Local_95.f_2, 11))
					{
						if (func_6(iLocal_103, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_103), Local_95.f_39) > 625f)
							{
								MISC::CLEAR_BIT(&(Local_95.f_2), 11);
								MISC::CLEAR_BIT(&iLocal_98, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_103, 1, 1))
						{
							bVar0 = true;
							if (func_252())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_62();
						}
						else
						{
							func_63();
						}
						if (MISC::IS_BIT_SET(Local_95.f_1, 5))
						{
							if (func_251())
							{
								func_63();
								MISC::SET_BIT(&(Local_95.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_103, 1, 1))
					{
						bVar0 = true;
						if (func_250())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_62();
					}
					else
					{
						func_63();
					}
					if (MISC::IS_BIT_SET(Local_95.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 30000)
						{
							func_63();
							MISC::SET_BIT(&(Local_95.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_250()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_103);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_29(iLocal_103, 1, 1)) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	if (func_117(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1589819[iLocal_103 /*818*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251()
{
	if (!MISC::IS_BIT_SET(Local_95.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 5000)
		{
			MISC::SET_BIT(&(Local_95.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_252()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_103);
	if (((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_29(iLocal_103, 1, 1)) || func_61(iLocal_103)) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2424047[iLocal_103 /*416*/].f_238) || func_60(PLAYER::GET_PLAYER_PED(iLocal_103), joaat("TITAN")))
	{
		return 1;
	}
	if (func_117(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1589819[iLocal_103 /*818*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_103 != -1)
	{
		if (MISC::IS_BIT_SET(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_253()
{
	if (!MISC::IS_BIT_SET(Local_95.f_1, 14))
	{
		Local_95.f_9 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_1), 14);
	}
}

void func_254()
{
	if (Local_95.f_44 != Local_97[iLocal_102 /*5*/].f_4)
	{
		Local_95.f_44 = Local_97[iLocal_102 /*5*/].f_4;
	}
}

void func_255()
{
	if (!MISC::IS_BIT_SET(Local_95.f_1, 10))
	{
		Local_95.f_45 = func_469(iLocal_101);
		Local_95.f_46 = 0;
		Local_95.f_47 = 0;
		MISC::SET_BIT(&(Local_95.f_1), 10);
	}
}

void func_256()
{
	func_257();
	if (!MISC::IS_BIT_SET(Local_95.f_1, 8))
	{
		if (MISC::IS_BIT_SET(Local_95.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_7) > 300000)
			{
				MISC::SET_BIT(&(Local_95.f_2), 8);
			}
		}
	}
}

void func_257()
{
	if (!MISC::IS_BIT_SET(Local_95.f_2, 7))
	{
		Local_95.f_7 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_2), 7);
	}
}

void func_258()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	MISC::SET_BIT(&iLocal_98, 7);
	if (MISC::IS_BIT_SET(Local_95.f_3, 1))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 2))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 3))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 9))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 4))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 5))
	{
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 11))
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			MISC::CLEAR_BIT(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
			else if (func_371("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 6))
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			MISC::CLEAR_BIT(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
			else if (func_371("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 7))
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			MISC::CLEAR_BIT(&iLocal_98, 7);
			if (func_337())
			{
				if (!Local_95.f_50)
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_336(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_332(12);
					}
					if (iLocal_285 > 0)
					{
						func_330(iLocal_285, 1, 0, 0f);
						func_315(iLocal_285, 4, 1, 1);
					}
					MISC::SET_BIT(&iLocal_98, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 0))
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			if (!MISC::IS_BIT_SET(Local_95.f_2, 1))
			{
				MISC::CLEAR_BIT(&iLocal_98, 7);
				if (func_371("MPCT_mugfail", "LAMAR", 19))
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
		else if (PLAYER::PLAYER_ID() == iLocal_103)
		{
			if (MISC::IS_BIT_SET(Local_95.f_2, 1))
			{
				if (MISC::IS_BIT_SET(Local_95.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_6533) * Global_262145.f_4293));
					func_274(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_260(47, 1);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 8))
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			MISC::CLEAR_BIT(&iLocal_98, 7);
			if (func_337())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_332(2) * func_469(iLocal_101));
					iVar1 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_336(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_332(12);
					}
					iVar1 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_330(iLocal_285, 1, 0, 0f);
						func_315(iLocal_285, iVar1, 1, 0);
					}
					MISC::SET_BIT(&iLocal_98, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_95.f_3, 10))
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			MISC::CLEAR_BIT(&iLocal_98, 7);
			if (func_337())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_332(2) * func_469(iLocal_101));
					iVar2 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_336(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_332(12);
					}
					iVar2 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_330(iLocal_285, 1, 0, 0f);
						func_315(iLocal_285, iVar2, 1, 0);
					}
					MISC::SET_BIT(&iLocal_98, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_98, 7))
	{
		func_259();
	}
}

void func_259()
{
	MISC::CLEAR_BIT(&(Global_1589819[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*818*/].f_143), iLocal_101);
	Global_1589819[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*818*/].f_144 = -1;
	if (iLocal_101 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(uLocal_283))
		{
			MISC::DELETE_INCIDENT(uLocal_283);
		}
	}
	func_498();
	func_530();
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_261(iParam0, iParam1);
}

int func_261(int iParam0, int iParam1)
{
	if (func_273(14) && !func_272(iParam0))
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
	if (func_271(&Global_4269608))
	{
		if (func_269(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_262(&Global_4269608, iParam0))
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

int func_262(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_273(14) && !func_272(iParam1))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1))
	{
		return 0;
	}
	if (func_268(uParam0) < 0f)
	{
		func_267(uParam0, 0);
	}
	func_265(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_263(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_273(14) && !func_272(iParam1))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1))
	{
		return 0;
	}
	if (func_268(uParam0) < 0f)
	{
		func_267(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_264(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_264(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_265(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_266(uParam0, iVar0);
		iVar0++;
	}
	func_267(uParam0, (Global_4269607 - 0.5f));
}

void func_266(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_267(var uParam0, float fParam1)
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

float func_268(var uParam0)
{
	return uParam0->f_80;
}

bool func_269(var uParam0, int iParam1)
{
	return func_270(uParam0, iParam1) != -1;
}

int func_270(var uParam0, int iParam1)
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

bool func_271(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_272(int iParam0)
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

bool func_273(int iParam0)
{
	return Global_36425 == iParam0;
}

var func_274(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_275(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_275(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_276(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_276(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_314(PLAYER::PLAYER_ID()) || func_313(PLAYER::PLAYER_ID()))
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
	else if (func_311() || func_309(PLAYER::PLAYER_ID()))
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
	if (func_308(sParam2))
	{
	}
	if (func_307())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_305(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_304(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_302(0, &iVar1);
					break;
				
				case 3:
					func_302(1, &iVar1);
					break;
				
				case 1:
					func_300(&iVar1);
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
			func_297(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_286((func_296(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_2 != -1)
				{
					func_297(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_281(iVar1);
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
				func_277((func_279(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_277((func_279(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_277(int iParam0)
{
	if (func_307())
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_5 = iParam0;
		func_278(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_279(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_280(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_280(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_280(int iParam0)
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

void func_281(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_142(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_284(func_285(&Var0));
			if (iVar1 == 0)
			{
				func_283(&Global_1382581, iParam0);
				func_282(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_283(&Global_1382582, iParam0);
				func_282(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_283(&Global_1382583, iParam0);
				func_282(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_283(&Global_1382584, iParam0);
				func_282(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_283(&Global_1382585, iParam0);
				func_282(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1382585);
			}
		}
	}
}

void func_282(int iParam0, int iParam1)
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

void func_283(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_284(int iParam0)
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

int func_285(var uParam0)
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

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (func_307())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_295(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_295(-1)])
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
		if (func_294(PLAYER::PLAYER_ID()))
		{
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_6 = func_292(iParam0, 1);
		}
		func_291(639, iParam0, -1, 1);
		func_290(640, func_292(iParam0, 1), -1, 1, 0);
		Global_1382702[func_295(-1)] = iParam0;
		func_287(7, 0);
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_289(iParam0, iParam1))
	{
		iVar0 = func_288();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_288()
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

int func_289(int iParam0, var uParam1)
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

void func_290(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_295(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_295(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_295(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_295(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_295(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_295(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_295(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_295(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_295(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_295(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_295(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_295(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_295(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_295(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_295(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_295(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_295(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_295(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_295(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_295(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_295(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_295(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_295(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_295(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_295(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_295(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_295(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_295(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_295(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_295(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_295(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_295(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_295(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_295(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_295(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_295(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_295(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_295(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_295(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_295(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_295(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_295(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_295(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_295(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_295(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_295(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_295(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_292(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_293(iParam0, 0);
}

int func_293(int iParam0, int iParam1)
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

int func_294(int iParam0)
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

int func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_200();
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

int func_296(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_295(-1)];
			}
			else if (func_294(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_295(-1)];
	}
	return 0;
}

void func_297(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_299(iParam0, func_295(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_298(iParam0))
	{
		func_290(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_291(iParam0, iVar0, iParam2, 1);
	}
}

int func_298(int iParam0)
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

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_295(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_300(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_144(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_143(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_301(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_301(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_301(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_302(bool bParam0, int iParam1)
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
						if (func_143(PLAYER::PLAYER_ID(), iVar4))
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
					if (func_303(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_143(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_301(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_301(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_303(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_301(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_305(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_296(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_296(PLAYER::PLAYER_ID());
		}
	}
	if (func_306(8000, 0, 0) > 0)
	{
		if (func_306(8000, 0, 0) < (iParam0 + func_296(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_306(8000, 0, 0) - func_296(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_306(int iParam0, bool bParam1, int iParam2)
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

int func_307()
{
	return 1;
}

int func_308(char* sParam0)
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

int func_309(int iParam0)
{
	return func_310(func_38(iParam0));
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_311()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_175();
	}
	return func_312(Global_4456448.f_138474);
}

int func_312(int iParam0)
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

bool func_313(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_314(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_315(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_329(iParam1), 16);
	StringCopy(&Var1, func_328(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_50())
	{
		func_316(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263509[iVar3 /*84*/].f_13.f_40 = { Var0 };
		Global_4263509[iVar3 /*84*/].f_13.f_44 = { Var1 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_316(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_50())
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
				func_317(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_317(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_317(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_317(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_317(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_317(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_200()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_324(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_323(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_318(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_318(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_319(iParam0);
	}
}

void func_319(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_322(iParam0))
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
		func_320(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_320(var uParam0)
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
	func_321(&(uParam0->f_13));
	func_321(&(uParam0->f_13.f_13));
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

void func_321(var uParam0)
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

int func_322(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_323(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_50())
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
				func_325(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_325(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_327(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_326();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_326()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_327(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

char* func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_330(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_331(iVar1, 0);
	}
}

void func_331(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_335(iParam0) >= 0)
	{
		iVar0 = func_335(iParam0);
	}
	else
	{
		iVar0 = func_333(iParam0);
	}
	return iVar0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_334())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_334()
{
	return MISC::IS_BIT_SET(func_299(6424, -1, 0), 19);
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6536;
			break;
		
		case 10:
			return Global_262145.f_4117;
			break;
		
		case 11:
			return Global_262145.f_4118;
			break;
		
		case 8:
			return Global_262145.f_4115;
			break;
		
		case 0:
			return Global_262145.f_4101;
			break;
		
		case 9:
			return Global_262145.f_4116;
			break;
		
		case 13:
			return Global_262145.f_4120;
			break;
		
		case 12:
			return Global_262145.f_4119;
			break;
		
		case 2:
			return Global_262145.f_4111;
			break;
		
		case 14:
			return Global_262145.f_4121;
			break;
		
		case 20:
			if (func_334())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_262145.f_6543;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_262145.f_6544;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_262145.f_6545;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_262145.f_6546;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_262145.f_6547;
			}
			break;
		
		case 6:
			return Global_262145.f_4114;
			break;
		
		case 22:
			return Global_262145.f_4127;
			break;
		
		case 23:
			return Global_262145.f_4128;
			break;
		
		case 24:
			return Global_262145.f_4129;
			break;
		
		case 25:
			return Global_262145.f_4130;
			break;
		
		case 26:
			return Global_262145.f_4131;
			break;
		
		case 35:
			return Global_262145.f_7112;
			break;
		
		case 15:
			return Global_262145.f_6537;
			break;
		
		case 17:
			return Global_262145.f_6537;
			break;
		
		case 18:
			return Global_262145.f_6537;
			break;
		
		case 19:
			return Global_262145.f_6537;
			break;
		
		case 21:
			return Global_262145.f_6537;
			break;
		
		case 36:
			return Global_262145.f_7579;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12763;
			break;
		
		case 41:
			return Global_262145.f_12764;
			break;
		
		case 42:
			return Global_262145.f_12765;
			break;
		
		case 43:
			return Global_262145.f_15306;
			break;
		
		case 44:
			return Global_262145.f_15308;
			break;
		
		case 57:
			return Global_262145.f_4129;
			break;
		
		case 58:
			return Global_262145.f_24760;
			break;
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23322;
		
		case 2:
			return Global_262145.f_23323;
		
		case 3:
			return Global_262145.f_23324;
		
		default:
	}
	return 9999999;
}

int func_337()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_95.f_50 || Local_95.f_52)
	{
		if (!Local_95.f_51)
		{
			if (!MISC::IS_BIT_SET(Local_95.f_3, 7))
			{
				func_338("HS_UNABLE", iLocal_103, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_101)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_371(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_338(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_133551[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_369(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_346(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_346(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_344(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2505680 = { func_142(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680))
			{
				iVar3 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2505610.f_22), "Leader") && Global_2505610.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2505610.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_343(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar3, 0, Global_2505610, &Var2, Global_1314024, Global_1314025, Global_1314026);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar3, 0, Global_2505610, Global_1314024, Global_1314025, Global_1314026);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_339(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_339(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_342() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_198(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_340(iParam2);
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

int func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_341(iVar0);
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

void func_341(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_342()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_343(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_344(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_345(&cVar0);
}

var func_345(char[4] cParam0)
{
	return cParam0;
}

int func_346(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_145(iParam0) && !bParam4)
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
	if (((func_145(PLAYER::PLAYER_ID()) || (func_368() && func_367())) && !MISC::IS_BIT_SET(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_366();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_6(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_369(iParam1, iParam0, 0);
							}
							else
							{
								return func_358(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_358(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_369(iParam1, iParam0, 0);
				}
				else
				{
					return func_347(0, -1, 0);
				}
			}
			else
			{
				return func_347(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_369(iParam1, iParam0, 0);
		}
		else
		{
			return func_358(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_358(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_347(bool bParam0, int iParam1, bool bParam2)
{
	return func_348(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_348(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_357() || (func_356() && func_354())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_353(iParam2, iVar0);
		}
		else
		{
			return func_353(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_144(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_352(1);
				}
				else
				{
					return func_352(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_349(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_349(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_352(1);
	}
	return func_352(0);
}

int func_349(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_351(iParam0, iParam1, iParam3);
	if (func_350(Global_4456448.f_138474, 1))
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

int func_350(int iParam0, bool bParam1)
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

int func_351(int iParam0, int iParam1, int iParam2)
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
			if (!func_144(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_352(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_353(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_351(iParam1, iParam0, 4);
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

bool func_354()
{
	if (func_355())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_165254, 4);
}

bool func_355()
{
	return MISC::IS_BIT_SET(Global_4456448.f_154961, 12);
}

bool func_356()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_165254, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_165254, 0) || Global_1648547) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_357()
{
	if (func_355() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_363(1))
			{
				iVar3 = func_362(iParam0);
				if (!iVar3 == -1)
				{
					return func_360(iVar3);
				}
			}
			if ((func_182(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_144(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_352(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_359(1);
			}
			else
			{
				return func_348(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_352(1);
			}
			else
			{
				return func_348(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_362(iParam0);
	if (!iVar4 == -1)
	{
		return func_360(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_359(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_360(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_361(iParam0);
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

var func_361(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_362(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_363(int iParam0)
{
	if ((func_365() || func_364()) || (func_175() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_364()
{
	return Global_2448756.f_15;
}

var func_365()
{
	return Global_2448756.f_14;
}

var func_366()
{
	return Global_2359302.f_2;
}

bool func_367()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_368()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

int func_369(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_363(1))
	{
		iVar2 = func_362(iParam1);
		if (!iVar2 == -1)
		{
			return func_360(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
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
			iVar0 = func_348(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_370(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_144(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_359(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_370(int iParam0)
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

int func_371(char* sParam0, char* sParam1, int iParam2)
{
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!MISC::IS_BIT_SET(iLocal_100, 0))
		{
			func_468(&uLocal_118, 3, 0, sParam1, 0, 1);
			if (func_373(&uLocal_118, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				MISC::SET_BIT(&iLocal_100, 0);
			}
		}
		else if (!MISC::IS_BIT_SET(iLocal_100, 1))
		{
			if (func_372(0))
			{
				MISC::SET_BIT(&iLocal_100, 1);
			}
		}
		else if (!func_372(0))
		{
			iLocal_100 = 0;
			return 1;
		}
	}
	return 0;
}

int func_372(int iParam0)
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

int func_373(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_466())
	{
		return 0;
	}
	if (func_465())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_374(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_374(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_464(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_463(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_458(iParam6))
	{
		return 0;
	}
	if (func_455(iVar0, iVar1, iVar2))
	{
		if (func_454())
		{
			return 0;
		}
		func_453();
		return func_381(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_380(iParam4))
	{
		return 0;
	}
	func_375(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_375(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1365424.f_40.f_1 = iParam0;
	Global_1365424.f_40.f_2 = iParam1;
	Global_1365424.f_40.f_3 = iParam2;
	StringCopy(&(Global_1365424.f_40.f_4), sParam3, 16);
	Global_1365424.f_40.f_8 = iParam4;
	Global_1365424.f_40.f_9 = iParam5;
	Global_1365424.f_40.f_14 = iParam6;
	func_376(iParam4);
	func_453();
	Global_1365424.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_376(int iParam0)
{
	if (func_379(iParam0))
	{
		func_378();
		return;
	}
	func_377();
}

void func_377()
{
	Global_1365424.f_40.f_10 = 0;
}

void func_378()
{
	Global_1365424.f_40.f_10 = 1;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_380(int iParam0)
{
	return iParam0 > Global_1365424.f_40.f_8;
}

int func_381(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_452();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_449(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_446(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_449(uParam0, sParam3, sParam4);
		}
		return func_429(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_428(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_418(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_417(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_382(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_382(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_416();
	bVar0 = true;
	if (func_384(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_383(120000);
		return 1;
	}
	return 0;
}

void func_383(int iParam0)
{
	Global_1365424.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1365424.f_40.f_12 = 1;
}

int func_384(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_410(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1365424.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_409(sParam5, bParam6, &iVar3);
	uVar5 = func_407(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_406(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_388(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_387();
	}
	func_416();
	func_386();
	func_385();
	return 1;
}

void func_385()
{
	Global_1365424.f_57 = 0;
	Global_1365424.f_57.f_1 = 0;
}

void func_386()
{
	Global_1365424.f_40 = 3;
}

void func_387()
{
	MISC::SET_BIT(&Global_2423, 8);
}

int func_388(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_389(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			MISC::SET_BIT(&Global_4269308, 0);
		}
		return 1;
	}
	return 0;
}

int func_389(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_400();
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
		if (Global_4269293 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_399() == 0)
	{
		func_397();
		return 0;
	}
	func_396(Global_4269292);
	StringCopy(&(Global_4268043[Global_4269292 /*104*/]), sParam1, 64);
	Global_4268043[Global_4269292 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268043[Global_4269292 /*104*/].f_24 = iParam2;
	}
	Global_4268043[Global_4269292 /*104*/].f_25 = iParam7;
	Global_4268043[Global_4269292 /*104*/].f_26 = uParam8;
	Global_4268043[Global_4269292 /*104*/].f_29 = uParam9;
	Global_4268043[Global_4269292 /*104*/].f_30 = uParam12;
	Global_4268043[Global_4269292 /*104*/].f_31 = uParam11;
	Global_4268043[Global_4269292 /*104*/].f_28 = 0;
	Global_4268043[Global_4269292 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_33), sParam4, 64);
	Global_4268043[Global_4269292 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_50), sParam5, 64);
	Global_4268043[Global_4269292 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_83), sParam15, 64);
	func_400();
	switch (iParam16)
	{
		case 3:
			Global_4268043[Global_4269292 /*104*/].f_99[Global_14553] = 1;
			break;
		
		case 0:
			Global_4268043[Global_4269292 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268043[Global_4269292 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268043[Global_4269292 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14553)
		{
			case 0:
				func_395(0);
				break;
			
			case 1:
				func_395(1);
				break;
			
			case 2:
				func_395(2);
				break;
			
			case 3:
				func_395(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269293 = 1;
				break;
			
			case 0:
				Global_4269293 = 1;
				break;
			
			case 2:
				Global_4269293 = 1;
				break;
			
			case 1:
				Global_4269293 = 1;
				break;
			}
	}
	Global_16935[Global_4269292] = 0;
	if (bParam10)
	{
		func_400();
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
			if (!func_394())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_393(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_390(1);
			func_393(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_390(int iParam0)
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
		if (func_273(14))
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
								func_392(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_392(&(Global_2430[iVar1 /*15*/]));
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
								func_392(&(Global_2430[iVar1 /*15*/]));
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
								func_392(&(Global_2430[iVar1 /*15*/]));
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
								func_392(&(Global_2430[iVar1 /*15*/]));
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
								func_392(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_391(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_391(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_392(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_392(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_392(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_392(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_392(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_392(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_393(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_394()
{
	return Global_1312867;
}

void func_395(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_396(int iParam0)
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
	Global_4268043[iParam0 /*104*/].f_18 = iVar0;
	Global_4268043[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268043[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268043[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268043[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268043[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_397()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269292 = 11;
	Global_4268043[Global_4269292 /*104*/].f_18 = -1;
	Global_4268043[Global_4269292 /*104*/].f_18.f_1 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_2 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_3 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_398(Global_4268043[iVar2 /*104*/].f_18, Global_4268043[Global_4269292 /*104*/].f_18))
		{
			Global_4269292 = iVar2;
		}
		iVar2++;
	}
	Global_4268043[Global_4269292 /*104*/].f_24 = 1;
}

int func_398(struct<6> Param0, struct<6> Param1)
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

int func_399()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268043[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269292 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269292 = 11;
	Global_4268043[Global_4269292 /*104*/].f_18 = -1;
	Global_4268043[Global_4269292 /*104*/].f_18.f_1 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_2 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_3 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268043[iVar2 /*104*/].f_24 == 0 || Global_4268043[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_398(Global_4268043[iVar2 /*104*/].f_18, Global_4268043[Global_4269292 /*104*/].f_18))
			{
				Global_4269292 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269292 == 11)
	{
		return 0;
	}
	Global_4268043[Global_4269292 /*104*/].f_99[0] = 0;
	Global_4268043[Global_4269292 /*104*/].f_99[1] = 0;
	Global_4268043[Global_4269292 /*104*/].f_99[2] = 0;
	return 1;
}

void func_400()
{
	if (func_273(14))
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
		Global_14553 = func_401();
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

var func_401()
{
	func_402();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_402()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_405(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_404(PLAYER::PLAYER_PED_ID());
			if (func_403(iVar0) && (!func_273(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_403(Global_106565.f_2357.f_539.f_4321))
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

bool func_403(int iParam0)
{
	return iParam0 < 3;
}

int func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_405(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_405(int iParam0)
{
	if (func_403(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_406(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_389(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3130 = iParam10;
			MISC::SET_BIT(&Global_4269308, 0);
		}
		return 1;
	}
	return 0;
}

int func_407(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_408(2, iParam1);
	return iParam0;
}

void func_408(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_409(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_408(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_410(int iParam0)
{
	int iVar0;
	
	iVar0 = func_413(iParam0);
	if (iVar0 == -1)
	{
		func_411(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_411(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_413(iParam0) != -1)
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
	if (func_412(iParam0))
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

int func_412(int iParam0)
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

int func_413(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
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
			func_414(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_414(int iParam0)
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
			HUD::_THEFEED_ADD_TXD_REF(&cVar1, &cVar1, &cVar0, &cVar0);
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
	func_415(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_415(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_416()
{
	Global_1365424.f_40.f_9 = 4;
}

int func_417(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_416();
	bVar0 = false;
	return func_384(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_418(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_419(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_419(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_410(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1365424.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16927 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_409(sParam5, bParam6, &iVar3);
	uVar5 = func_407(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_427(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_421(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_387();
	}
	func_420();
	func_386();
	func_385();
	return 1;
}

void func_420()
{
	Global_1365424.f_40.f_9 = 3;
}

int func_421(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_422(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_422(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_400();
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
	if (func_426() == 0)
	{
		func_424();
		return 0;
	}
	func_423(Global_16933);
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
		func_395(0);
		func_395(2);
		func_395(1);
	}
	else
	{
		func_400();
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
					func_395(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_395(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_395(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_395(3);
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
		func_400();
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
			if (!func_394())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_393(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_390(1);
			func_393(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_423(int iParam0)
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

void func_424()
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
		if (!func_425(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_425(struct<6> Param0, struct<6> Param1)
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

int func_426()
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
			if (!func_425(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
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

int func_427(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_2423, 10);
	iVar0 = 3;
	if (func_422(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3130 = iParam10;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			StringCopy(&Global_3111, sParam5, 64);
			MISC::SET_BIT(&Global_2423, 1);
			MISC::SET_BIT(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_428(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_420();
	bVar0 = true;
	if (func_419(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_383(120000);
		return 1;
	}
	return 0;
}

int func_429(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_445(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_435(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_434(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_433(1);
		}
		func_432();
		func_386();
		func_431();
		func_430();
		return 1;
	}
	return 0;
}

void func_430()
{
	Global_2537642 = 0;
}

void func_431()
{
	Global_1365424.f_57 = 1;
	Global_1365424.f_57.f_1 = 0;
}

void func_432()
{
	Global_1365424.f_40.f_9 = 1;
}

void func_433(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2425, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2425, 0);
	}
}

void func_434(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 20);
	}
}

int func_435(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_444(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_436(sParam3, iParam4, bParam7);
}

int func_436(char* sParam0, int iParam1, bool bParam2)
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
					func_443();
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
		if (func_442(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_441();
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
				func_400();
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
				if (func_440())
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
			if (func_439())
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
			func_438();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_437();
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
		func_443();
	}
	return 0;
}

void func_437()
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

void func_438()
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

int func_439()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_440()
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

void func_441()
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

bool func_442(int iParam0, int iParam1)
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

void func_443()
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

void func_444(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

int func_445(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_444(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 1;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_436(sParam3, iParam4, bParam7);
}

int func_446(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_448(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_447();
		func_432();
		func_386();
		func_431();
		func_430();
		return 1;
	}
	return 0;
}

void func_447()
{
	Global_16884 = 0;
}

bool func_448(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_444(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 1;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 1;
	Global_15920 = 0;
	StringCopy(&Global_16014, sParam5, 24);
	Global_2621441 = 0;
	return func_436(sParam3, iParam4, bParam8);
}

int func_449(var uParam0, char* sParam1, char* sParam2)
{
	if (func_451(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_450();
		func_386();
		func_431();
		return 1;
	}
	return 0;
}

void func_450()
{
	Global_1365424.f_40.f_9 = 2;
}

bool func_451(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_444(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_436(sParam2, iParam3, 0);
}

void func_452()
{
	Global_1365424.f_55 = Global_1365424.f_40.f_1;
	Global_1365424.f_55.f_1 = Global_1365424.f_40.f_10;
}

void func_453()
{
	Global_1365424.f_40 = 1;
}

bool func_454()
{
	return Global_1365424.f_40 == 1;
}

int func_455(int iParam0, int iParam1, int iParam2)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (Global_1365424.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1365424.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_456(int iParam0)
{
	if (!func_457())
	{
		return 0;
	}
	if (!Global_1365424.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_457()
{
	if (Global_1365424.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_458(int iParam0)
{
	if (func_462())
	{
		return 0;
	}
	if (func_461())
	{
		return 0;
	}
	if (func_372(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1657075 || func_460())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_459())
		{
			return 0;
		}
	}
	return 1;
}

bool func_459()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1382380);
}

int func_460()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_461()
{
	return Global_1365424.f_40 == 3;
}

bool func_462()
{
	return func_439();
}

int func_463(int iParam0, int iParam1, int iParam2)
{
	if (!func_461())
	{
		return 0;
	}
	return func_455(iParam0, iParam1, iParam2);
}

int func_464(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_465()
{
	return Global_2534821.f_1;
}

int func_466()
{
	if (Global_1365612.f_2)
	{
		return 1;
	}
	return func_467();
}

bool func_467()
{
	return func_462();
}

void func_468(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_470(var uParam0)
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

void func_471(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_472(uParam0, 0, 0);
		}
	}
}

void func_472(var uParam0, bool bParam1, bool bParam2)
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

void func_473()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_10[iLocal_109 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_10[iLocal_109 /*7*/]), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_5(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_95.f_10[iLocal_109 /*7*/]), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50625f))
			{
				if (!MISC::IS_BIT_SET(iLocal_98, 4))
				{
					MISC::SET_BIT(&iLocal_98, 4);
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_98, 5))
			{
				if (Local_95.f_42 != -1)
				{
					if (iLocal_109 == Local_95.f_42)
					{
						if (!MISC::IS_BIT_SET(iLocal_98, 5))
						{
							MISC::SET_BIT(&iLocal_98, 5);
						}
					}
				}
			}
		}
	}
	func_474(iLocal_109);
	iLocal_109++;
	if (iLocal_109 >= func_469(iLocal_101))
	{
		if ((!MISC::IS_BIT_SET(iLocal_98, 4) && MISC::IS_BIT_SET(Local_95.f_1, 8)) || MISC::IS_BIT_SET(iLocal_98, 5))
		{
			if (!MISC::IS_BIT_SET(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
			{
				MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
			}
		}
		else if (MISC::IS_BIT_SET(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
		}
		MISC::CLEAR_BIT(&iLocal_98, 4);
		MISC::CLEAR_BIT(&iLocal_98, 5);
		iLocal_109 = 0;
	}
}

void func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]);
		if (iLocal_101 == 0)
		{
			if (PLAYER::PLAYER_ID() == iLocal_103)
			{
				if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_95.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			if (MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!MISC::IS_BIT_SET(iLocal_99[iParam0], 0))
				{
					MISC::SET_BIT(&Global_1573339, 0);
					MISC::SET_BIT(&(iLocal_99[iParam0]), 0);
				}
				if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!MISC::IS_BIT_SET(iLocal_99[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_99[iParam0], 1))
				{
					MISC::CLEAR_BIT(&(iLocal_99[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_10[iParam0 /*7*/]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_95.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_10[iParam0 /*7*/]))
		{
			if (PLAYER::PLAYER_ID() == iLocal_102)
			{
				if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 9) && !MISC::IS_BIT_SET(iLocal_99[iParam0], 1))
				{
					if (NETWORK::_0x0EDE326D47CD0F3E(iVar0, PLAYER::PLAYER_ID()))
					{
						switch (Local_95.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_497(iVar0, 3);
								break;
						}
						MISC::SET_BIT(&(iLocal_99[iParam0]), 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, true);
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (PLAYER::PLAYER_ID() == iLocal_103 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true), 25f))
						{
							MISC::SET_BIT(&(Global_2528542.f_4580), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2528542.f_4580), 0);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(iLocal_103, 1, 1))
								{
									if (!MISC::IS_BIT_SET(Local_95.f_2, 13))
									{
										if (func_496(iLocal_103) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::GET_PLAYER_PED(iLocal_103)))
										{
											if (!func_495(iVar0, -1794415470))
											{
												if (func_494(iVar0))
												{
													iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_103), 0);
													if (ENTITY::DOES_ENTITY_EXIST(iVar1))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
														{
														}
														if (!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, func_493(PLAYER::GET_PLAYER_PED(iLocal_103), 0)))
														{
															TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_492(PLAYER::GET_PLAYER_PED(iLocal_103), iVar1), func_491(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1))
										{
											if (func_495(iVar0, -1794415470))
											{
												TASK::CLEAR_PED_TASKS(iVar0);
											}
											if (!func_495(iVar0, 1227113341))
											{
												if (func_494(iVar0))
												{
													TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_103), -1, 0f, func_491(iParam0), 1073741824, 0);
												}
											}
											else
											{
												PED::SET_PED_RESET_FLAG(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (PLAYER::PLAYER_ID() == iLocal_103 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_103), true), 25f))
						{
							MISC::SET_BIT(&(Global_2528542.f_4580), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2528542.f_4580), 0);
						}
						if (PLAYER::PLAYER_ID() == iLocal_103)
						{
							if (!MISC::IS_BIT_SET(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
								{
									if ((func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::PLAYER_PED_ID()))
									{
										iVar2 = func_489(PLAYER::PLAYER_ID());
										fVar5 = (SYSTEM::TO_FLOAT(Global_262145.f_6541) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar5));
										iVar6 = func_488(PLAYER::PLAYER_ID());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_6542))
										{
											iVar2 = (iVar6 * Global_262145.f_6542);
										}
										if (iVar2 > 0)
										{
											MISC::SET_BIT(&iLocal_98, 16);
										}
										TASK::SET_HIGH_FALL_TASK(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
										{
											vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iVar0, true) };
											vVar3 = { func_487(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && func_485(iVar0)) && func_493(iVar0, 0) == -1)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iVar0);
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 1, 0);
										}
										Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1574994);
										MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 0);
										MISC::SET_BIT(&(Global_2528542.f_4580), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (PED::GET_PED_RESET_FLAG(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, false);
						}
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_494(iVar0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && !MISC::IS_BIT_SET(Local_95.f_2, 10))
									{
										if (!func_495(iVar0, -258271821) && !func_495(iVar0, -1273030092))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 1);
												iVar8 = ENTITY::GET_ENTITY_MODEL(iVar7);
												if (MISC::IS_BIT_SET(Local_95.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar8))
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar8))
												{
													TASK::TASK_PLANE_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("TAXI"))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_103), 10000f, -1, 1, 0);
												}
												else
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_495(iVar0, 1805844857))
									{
										if (func_6(iLocal_103, 1, 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_103), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_483(Local_95.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (MISC::IS_BIT_SET(Local_95.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_10[iParam0 /*7*/]), 1, false);
				}
				func_475(iVar0);
			}
		}
	}
}

void func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(iLocal_98, 16))
	{
		iVar0 = Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_476(iVar0);
		if (iVar1 == 1)
		{
			MISC::CLEAR_BIT(&iLocal_98, 15);
			MISC::CLEAR_BIT(&iLocal_98, 16);
			if (!func_50())
			{
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_7955)
			{
				iVar0 = Global_262145.f_7955;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_98, 15);
			MISC::CLEAR_BIT(&iLocal_98, 16);
			MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_476(int iParam0)
{
	if (func_50())
	{
		if (func_479(iParam0))
		{
			if (func_478(iLocal_286) == 2)
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_477(iLocal_286));
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, 0, 0);
				func_319(iLocal_286);
				return 1;
			}
			else
			{
				func_319(iLocal_286);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_477(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_478(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_479(int iParam0)
{
	if (!MISC::IS_BIT_SET(iLocal_98, 15))
	{
		func_317(&iLocal_286, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_482(&uLocal_287, 0, 0);
		MISC::SET_BIT(&iLocal_98, 15);
	}
	else if (func_481(iLocal_286) || func_480(&uLocal_287, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_480(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_472(uParam0, bParam2, 0);
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

int func_481(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

void func_482(var uParam0, bool bParam1, bool bParam2)
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

void func_483(int iParam0, bool bParam1)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
		{
			if (!func_484(iParam0))
			{
				if (MISC::IS_BIT_SET(Local_95.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, true);
				}
			}
		}
		func_242(&iParam0);
	}
}

int func_484(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_485(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_496(iLocal_103))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_103), 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_486(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_486(int iParam0)
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

Vector3 func_487(vector3 vParam0)
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

var func_488(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

int func_489(int iParam0)
{
	var uVar0;
	
	uVar0 = func_490(iParam0);
	return uVar0;
}

int func_490(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_294(iParam0))
		{
			return Global_1589819[iParam0 /*818*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_491(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_492(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_494(int iParam0)
{
	if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_495(int iParam0, int iParam1)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_496(int iParam0)
{
	if (PLAYER::_0x690A61A6D13583F6(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_498()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = MISC::IS_BIT_SET(Local_95.f_2, 6);
	bVar1 = MISC::IS_BIT_SET(Local_95.f_2, 10);
	func_503();
	if (iLocal_101 != 1)
	{
		if (MISC::IS_BIT_SET(Local_95.f_3, 12))
		{
			func_500();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_110))
	{
		func_499(&iLocal_110);
	}
	iVar3 = 0;
	while (iVar3 < func_469(iLocal_101))
	{
		iLocal_99[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_95.f_42 = -1;
		Local_95.f_5 = iLocal_106;
		Local_95.f_6 = iLocal_106;
		Local_95.f_7 = iLocal_106;
		Local_95.f_1 = 0;
		Local_95.f_4 = 0;
		Local_95.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_469(iLocal_101))
		{
			bVar2 = MISC::IS_BIT_SET(Local_95.f_10[iVar3 /*7*/].f_2, 6);
			Local_95.f_10[iVar3 /*7*/].f_2 = 0;
			Local_95.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				MISC::SET_BIT(&(Local_95.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
	iLocal_98 = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(Local_95.f_2), 6);
	}
	if (bVar1)
	{
		MISC::SET_BIT(&(Local_95.f_2), 11);
		MISC::SET_BIT(&iLocal_98, 8);
	}
	MISC::SET_BIT(&iLocal_98, 4);
	MISC::SET_BIT(&iLocal_98, 11);
}

void func_499(int iParam0)
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

void func_500()
{
	switch (iLocal_101)
	{
		case 0:
			func_502(&(Global_1575002[3]));
			break;
		
		case 1:
			func_501();
			break;
	}
}

void func_501()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574954[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574954[iVar0]);
			iVar0++;
		}
	}
}

void func_502(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574954[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574954[iVar0]);
			iVar0++;
		}
	}
}

void func_503()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_469(iLocal_101))
	{
		bVar1 = false;
		if (iLocal_101 == 0)
		{
			if (!MISC::IS_BIT_SET(Local_95.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_483(Local_95.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_504()
{
	func_505();
	if (iLocal_101 != 1)
	{
		func_473();
	}
}

void func_505()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_469(iLocal_101))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_10[iVar0 /*7*/]))
			{
				iVar1 = NETWORK::NET_TO_PED(Local_95.f_10[iVar0 /*7*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2528542.f_1694)
	{
	}
	if (iLocal_101 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_103)
		{
			if (MISC::IS_BIT_SET(Local_95.f_1, 0))
			{
				if (!MISC::IS_INCIDENT_VALID(uLocal_283))
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(iLocal_103), 4, 0f, &uLocal_283, -1467815081, 0);
						}
						else if (Local_95.f_52)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(iLocal_103), 4, 0f, &uLocal_283, -1467815081, Local_95.f_53);
						}
						else
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_103), 4, 0f, &uLocal_283, 0, 0);
						}
					}
				}
				if (Global_2528542.f_1694)
				{
					if (!MISC::IS_BIT_SET(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_101 == 0)
	{
		if (Local_95.f_42 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_10[Local_95.f_42 /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_10[Local_95.f_42 /*7*/]), 0) && !func_509(NETWORK::NET_TO_PED(Local_95.f_10[Local_95.f_42 /*7*/])))
				{
					if (Local_95.f_10[Local_95.f_42 /*7*/].f_5 == 3)
					{
						func_506(Local_95.f_10[Local_95.f_42 /*7*/], &iLocal_110, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (HUD::DOES_BLIP_EXIST(iLocal_110))
						{
							if (!MISC::IS_BIT_SET(iLocal_98, 6))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_110, "FM_MGR_BLP");
								MISC::SET_BIT(&iLocal_98, 6);
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_110))
				{
					func_499(&iLocal_110);
				}
			}
			if (PLAYER::PLAYER_ID() == iLocal_102)
			{
				if (!MISC::IS_BIT_SET(iLocal_98, 14))
				{
					if (func_371("MPCT_mugsuc", "LAMAR", 19))
					{
						MISC::SET_BIT(&iLocal_98, 14);
					}
				}
			}
		}
	}
}

void func_506(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_508())
		{
			Global_2437364 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_507(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2437364, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_507(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2437364, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_499(iParam1);
	}
}

int func_507(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
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

bool func_508()
{
	return Global_1312844;
}

int func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				if (MISC::IS_BIT_SET(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_510()
{
	return Local_95;
}

int func_511(int iParam0)
{
	return Local_97[iParam0 /*5*/];
}

void func_512()
{
	if (PLAYER::PLAYER_ID() == iLocal_103)
	{
		if (Global_25915)
		{
			if (!MISC::IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 4))
			{
				MISC::SET_BIT(&(Local_97[iLocal_108 /*5*/].f_1), 4);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_97[iLocal_108 /*5*/].f_1), 4);
		}
	}
}

void func_513()
{
	bool bVar0;
	
	bVar0 = false;
	if (PLAYER::PLAYER_ID() == iLocal_102)
	{
		if (MISC::IS_BIT_SET(Global_1573339, 0))
		{
			MISC::CLEAR_BIT(&Global_1573339, 0);
			bVar0 = true;
		}
		if (!MISC::IS_BIT_SET(Local_97[iLocal_102 /*5*/].f_1, 2))
		{
			if (MISC::IS_BIT_SET(Local_95.f_1, 11))
			{
				MISC::SET_BIT(&(Local_97[iLocal_102 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!MISC::IS_BIT_SET(Local_95.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Local_97[iLocal_102 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_517();
			func_514(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_95.f_44)
	{
		Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_95.f_44;
		func_514(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_514(int iParam0)
{
	switch (iLocal_101)
	{
		case 0:
			func_516(&(Global_1575002[3]), iParam0);
			break;
		
		case 1:
			func_515(iParam0);
			break;
	}
}

void func_515(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574954[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_1574954[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574954[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574954[iVar0]);
		}
		iVar0++;
	}
}

void func_516(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574954[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1574954[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574954[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574954[iVar0]);
		}
		iVar0++;
	}
}

int func_517()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_101 == 1 || iLocal_101 == 0)
		{
			if (iLocal_102 == PLAYER::INT_TO_PLAYERINDEX(iVar1))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		else if (PLAYER::PLAYER_ID() == PLAYER::INT_TO_PLAYERINDEX(iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		else if (func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 0, 1))
		{
			if (func_51(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_518()
{
	switch (iLocal_101)
	{
		case 0:
			if (!MISC::IS_BIT_SET(iLocal_98, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						func_338("GC_TCK_60", iLocal_103, 0, 0, 0, 1, 1, 0);
						MISC::SET_BIT(&iLocal_98, 11);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_98, 12))
			{
				if (MISC::IS_BIT_SET(Local_95.f_1, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_338("GC_TCK_62", iLocal_103, 0, 0, 0, 1, 1, 0);
							MISC::SET_BIT(&iLocal_98, 12);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_95.f_2, 10))
			{
				if (!MISC::IS_BIT_SET(iLocal_98, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_338("GC_TCK_65", iLocal_103, 0, 0, 0, 1, 1, 0);
							MISC::SET_BIT(&iLocal_98, 8);
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_98, 13))
			{
				if (!MISC::IS_BIT_SET(Local_95.f_2, 11))
				{
					if (MISC::IS_BIT_SET(Local_95.f_1, 8))
					{
						if (MISC::IS_BIT_SET(Local_95.f_2, 6))
						{
							if (PLAYER::PLAYER_ID() == iLocal_102)
							{
								if (func_6(iLocal_103, 1, 1))
								{
									func_338("GC_TCK_63", iLocal_103, 0, 0, 0, 1, 1, 0);
									MISC::SET_BIT(&iLocal_98, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_98, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							func_338("HS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else if (Local_95.f_52)
						{
							func_338("GO_ASS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_338("GC_TCK_70", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						MISC::SET_BIT(&iLocal_98, 11);
					}
				}
				else if (PLAYER::PLAYER_ID() == iLocal_103)
				{
					if (func_6(iLocal_102, 1, 1))
					{
						if (Local_95.f_50)
						{
							if (Local_95.f_51)
							{
								func_520("HS_A_SUCC", 1);
							}
							else
							{
								func_338("HS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
							}
						}
						else if (Local_95.f_52)
						{
							func_338("GO_ASS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_338("GC_TCK_71", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						MISC::SET_BIT(&iLocal_98, 11);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_98, 10))
			{
				if (MISC::IS_BIT_SET(Local_95.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_95.f_3, 6))
					{
						if (PLAYER::PLAYER_ID() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								func_519(-1);
								if (Local_95.f_50)
								{
									if (!Local_95.f_51)
									{
										func_338("HS_KILLED", iLocal_103, 0, 0, 0, 1, 1, 0);
									}
								}
								else if (Local_95.f_52)
								{
									func_338("GO_ASS_KILL", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_338("GC_TCK_73", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								MISC::SET_BIT(&iLocal_98, 10);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_98, 9))
			{
				if (MISC::IS_BIT_SET(Local_95.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_95.f_3, 7))
					{
						if (PLAYER::PLAYER_ID() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								if (Local_95.f_50)
								{
									func_338("HS_ESCAPED", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else if (Local_95.f_52)
								{
									func_338("GO_ASS_ESC", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_338("GC_TCK_75", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								MISC::SET_BIT(&iLocal_98, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_519(int iParam0)
{
	if (Global_1574391)
	{
		if (Global_1574395 && Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 148)
		{
			if (Global_1573892.f_14 == PLAYER::INT_TO_PLAYERINDEX(iParam0))
			{
				Global_1624880++;
			}
		}
		else
		{
			Global_1624880++;
		}
	}
}

int func_520(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_339(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_521()
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_95.f_45)
	{
		if (func_529(Local_95.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= Local_95.f_45)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_95.f_45);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_95.f_46)
	{
		if (func_528(Local_95.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <= Local_95.f_46)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_95.f_46);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_95.f_47)
	{
		if (func_522(Local_95.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(0) <= Local_95.f_47)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_95.f_47);
			}
		}
	}
}

bool func_522(int iParam0, bool bParam1, bool bParam2)
{
	return func_523(2, iParam0, 1, bParam1, bParam2);
}

int func_523(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_527(iParam0) - func_526(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_526(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_527(iParam0) - func_525(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_526(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_527(iParam0) - func_526(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_524(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_524(int iParam0)
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

int func_525(int iParam0)
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

int func_526(int iParam0, bool bParam1)
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

int func_527(int iParam0)
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

bool func_528(int iParam0, bool bParam1, bool bParam2)
{
	return func_523(1, iParam0, 1, bParam1, bParam2);
}

bool func_529(int iParam0, bool bParam1, bool bParam2)
{
	return func_523(0, iParam0, 1, bParam1, bParam2);
}

void func_530()
{
	if (Local_95.f_50)
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			func_532(9);
		}
		else if (PLAYER::PLAYER_ID() == iLocal_103)
		{
			func_532(13);
		}
	}
	else if (Local_95.f_52)
	{
	}
	func_531();
}

void func_531()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_532(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_5), iParam0);
}

int func_533()
{
	var uVar0;
	
	func_541(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_540())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_539())
	{
		return 1;
	}
	if (func_538(157))
	{
		if (!func_537())
		{
			return 1;
		}
	}
	if (func_538(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_534() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_534()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_534()
{
	switch (func_536())
	{
		case 0:
			return func_535();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_535()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_536()
{
	return Global_25765;
}

bool func_537()
{
	return Global_2448756.f_586;
}

int func_538(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_539()
{
	return Global_2458613;
}

bool func_540()
{
	return Global_2448756.f_581;
}

void func_541(var uParam0)
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
					func_542(iVar0);
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

void func_542(int iParam0)
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
						if (func_543(iVar2, &bVar3))
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

int func_543(int iParam0, var uParam1)
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

void func_544()
{
	SYSTEM::WAIT(0);
}

void func_545(struct<21> Param0)
{
	func_551(32, Param0);
	func_550(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_95, 56);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 161);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_549())
	{
		func_259();
	}
	iLocal_101 = Param0.f_16;
	iLocal_102 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_17);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_102))
	{
	}
	iLocal_103 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_18);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_103))
	{
		iLocal_104 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_103));
	}
	if (func_548(iLocal_102, 9) && iLocal_101 == 1)
	{
		Local_95.f_50 = 1;
		if (func_548(iLocal_103, 13))
		{
			Local_95.f_51 = 1;
		}
	}
	if (iLocal_101 == 1)
	{
		if (func_547(iLocal_102))
		{
			Local_95.f_52 = 1;
			Local_95.f_53 = func_546(iLocal_102);
		}
	}
	vLocal_105 = { Param0.f_10 };
	if (iLocal_101 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_102)
		{
			MISC::SET_BIT(&Global_1573339, 0);
		}
	}
	Global_1648604 = 0;
	Global_1648605 = 0;
	if (iLocal_101 == 1)
	{
		Global_2528542.f_1694 = 0;
	}
	Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

var func_546(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_183.f_4;
}

bool func_547(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_183 != func_13();
}

bool func_548(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_5, iParam1);
}

int func_549()
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
		if (func_540())
		{
			return 0;
		}
		if (func_538(155))
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

int func_550(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0;
			}
		}
		if (!func_508())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_540())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_538(155))
				{
					if (!bParam2)
					{
						func_531();
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
					func_531();
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
				func_531();
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
			func_531();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_551(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_531();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

