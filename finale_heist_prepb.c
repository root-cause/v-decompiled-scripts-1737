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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_95[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
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
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	vLocal_92 = { 27.7189f, -608.7927f, 30.6293f };
	vLocal_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_204();
		func_203();
	}
	if (func_202(0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_264);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_265);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PACKER"), true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_265, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_265, iLocal_264);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, iLocal_265);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_265, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_265);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_264);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
		}
		func_200();
		if (iLocal_272 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_199(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_195();
		}
		func_192();
		func_185();
		func_177();
		func_172();
		func_169();
		switch (iLocal_28)
		{
			case 0:
				func_168();
				break;
			
			case 1:
				func_165();
				break;
			
			case 2:
				func_141();
				break;
			
			case 3:
				func_139();
				break;
			
			case 4:
				func_115();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_203();
			}
			break;
	}
}

int func_2()
{
	if (Global_93682 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_93682 == 7 || Global_93682 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_71822, sParam0, 16);
			StringCopy(&Global_71826, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_106565.f_9079 || func_202(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
		Global_93718 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_8(&(Global_106565.f_2357.f_539), iVar1);
	if (Global_87887 == Global_93719)
	{
		Global_106565.f_9079.f_330[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_84500[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_106565.f_9079.f_330[iVar1 /*6*/].f_2++;
	Global_87887 = Global_93719;
	if (iParam0 == -1)
	{
		if (Global_106565.f_9079)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_84464[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_84464[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106565.f_18527[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_106565.f_9079.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_91102[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_9 = 0f;
				Global_91102[iVar0 /*29*/].f_12 = 0f;
				Global_91102[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_10 = 0f;
				Global_91102[iVar0 /*29*/].f_13 = 0f;
				Global_91102[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_11 = 0f;
				Global_91102[iVar0 /*29*/].f_14 = 0f;
				Global_91102[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_26 = 0f;
				Global_91102[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_27 = 0f;
				Global_91102[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_93717 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
		MISC::SET_BIT(&(Global_93682.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_16(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_17(Global_106565.f_2357.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_169();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		if (func_33(iLocal_37, 0))
		{
			if (!func_32(iLocal_37))
			{
				while (!func_31(iLocal_37, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_39, 0))
		{
			if (!func_32(iLocal_39))
			{
				while (!func_31(iLocal_39, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_38, 0))
		{
			if (!func_32(iLocal_38))
			{
				while (!func_31(iLocal_38, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_30())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_39, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_39);
							PED::REMOVE_PED_FROM_GROUP(iLocal_39);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_38);
							PED::REMOVE_PED_FROM_GROUP(iLocal_38);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_37, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_37);
							PED::REMOVE_PED_FROM_GROUP(iLocal_37);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_38);
							PED::REMOVE_PED_FROM_GROUP(iLocal_38);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_37, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_37);
							PED::REMOVE_PED_FROM_GROUP(iLocal_37);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_39, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_39);
							PED::REMOVE_PED_FROM_GROUP(iLocal_39);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_39, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
							{
								if (func_32(iLocal_39))
								{
									if (func_24(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_37, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_37, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_39, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
							{
								if (func_32(iLocal_39))
								{
									if (func_24(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_33, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_33, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_33, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, true);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_21();
	}
}

void func_21()
{
	func_22(0, 0);
	func_203();
}

void func_22(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56496)
	{
		Global_56496 = iParam1;
	}
	if (bParam0)
	{
		if ((func_202(0) && Global_71836.f_1 == 1) && func_23(Global_71836))
		{
		}
		else
		{
			Global_56494 = 1;
		}
	}
	if (Global_106565.f_9079 || func_202(0))
	{
		iVar0 = func_13();
		iVar1 = Global_84464[iVar0 /*5*/];
		uVar2 = Global_71859.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106565.f_9079)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_71838, 1);
		Global_71854 = uVar2;
		Global_71855 = MISC::GET_GAME_TIMER();
	}
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_89566, iVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_89566, iVar0);
		return 1;
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_91190[func_26(iParam0)];
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	if (func_29() && func_30())
	{
		while (Global_93677 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_93682.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_93682.f_20), 13);
	}
}

int func_29()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return MISC::IS_BIT_SET(Global_93682.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_89566, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_89565, iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_89566, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_89566, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_89565, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_34()
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_113();
	HUD::CLEAR_PRINTS();
	func_112();
	func_111();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_107();
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_101();
				while (!func_100())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_107();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_33, 161.1163f);
				}
			}
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, false);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_107();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_33, 70.7778f);
				}
			}
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_40, 324, true);
			}
			break;
	}
}

int func_37(vector3 vParam0, float fParam1)
{
	return func_38(&(Global_97130.f_2890), vParam0, fParam1, 0);
}

int func_38(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_99(uParam0))
	{
		if (func_98(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("MONSTER") || uParam0->f_12.f_66 == joaat("MARSHALL"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_97(uParam0))
		{
			MISC::CLEAR_AREA(vParam1, 5f, 1, 0, 0, false);
			func_96(vParam1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, vParam1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, vParam1, 0, 0, 1);
				}
				func_79(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_78(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_78(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_77(iVar0, uParam0->f_11);
				}
				else if ((!func_74(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_73(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_66(iVar4);
					}
				}
				if (((Global_93682 != 13 && Global_93682 != 10) && Global_93682 != 11) && Global_93682 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_93682.f_3)) == Global_71397)
					{
						if (uParam0->f_12.f_66 == Global_106565.f_32743.f_69[21 /*78*/].f_66)
						{
							func_63(24, 0);
							func_66(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_45(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106565.f_2357.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106565.f_32743.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106565.f_32743.f_5590 = iParam1;
	Global_71314 = iParam0;
	Global_106565.f_32743.f_5588 = 1;
	func_40(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_44(uParam1);
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
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
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
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_41(iVar0 + 1));
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

int func_41(int iParam0)
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

int func_42(int iParam0, var uParam1, var uParam2)
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

int func_43(int iParam0)
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

void func_44(var uParam0)
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

int func_45(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_61(iParam0, 0, 0)) || func_61(iParam0, 1, 0)) || func_61(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || !func_46(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_58(iParam0))
		{
		}
		if (func_58(iParam0))
		{
		}
		if (func_61(iParam0, 0, 0))
		{
		}
		if (func_61(iParam0, 1, 0))
		{
		}
		if (func_61(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_47(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("towtruck2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("rentalbus"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("docktrailer"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("bulldozer"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("mule2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("police3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("MONSTER"):
			return 0;
			break;
	}
	return 1;
}

int func_47(int iParam0, bool bParam1)
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
		if (!func_55())
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
		if ((((!func_54() && !func_53()) && !func_52()) && !func_51()) && !func_55())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_52())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_50(iParam0))
		{
			return 0;
		}
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_49())
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

int func_49()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_50(int iParam0)
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

int func_51()
{
	return 0;
}

int func_52()
{
	return 1;
}

int func_53()
{
	return 1;
}

int func_54()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_55()
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

int func_56(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_47(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91073[iVar0]))
		{
			if (Global_91073[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91043[iVar0], 0))
			{
				if (Global_91043[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_91043[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[24]))
	{
		if (iParam0 == Global_70409.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70409.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				return Global_91053[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_62(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_106565.f_7223[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_63(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_65(iParam0, 0))
		{
			func_64(iParam0, 1, 0);
			func_64(iParam0, 2, 0);
			func_64(iParam0, 3, 0);
			func_64(iParam0, 4, 0);
			func_64(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_64(iParam0, 0, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_106565.f_32743[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_106565.f_32743[iParam0]), iParam1);
	}
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_106565.f_32743[iParam0], iParam1);
}

void func_66(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70409.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_70409.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_70409.f_139[iParam0], true, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_70409.f_139[iParam0]));
			}
		}
		Global_70409[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_65(iParam0, 0)) && Global_71318.f_66 == 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] != 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] > 3) && (!func_68(0, Global_70409.f_555[0 /*21*/].f_12) || !func_68(1, Global_70409.f_555[0 /*21*/].f_12)))
			{
				func_67(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), &Global_71318);
				Global_71396 = Global_106565.f_32743.f_5591;
			}
			func_63(iParam0, 0);
		}
	}
}

void func_67(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_69(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_47(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_69(var uParam0)
{
	return *uParam0;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_55())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_55())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106565.f_32743.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_98(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106565.f_32743.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106565.f_32743.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_98(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_98(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_72(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_72(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_106565.f_9079.f_99.f_58[128] && !Global_106565.f_9079.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106565.f_9079.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_106565.f_9079.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_70409.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70409.f_484[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_70409.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_70409.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_70409.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_76(iParam0, Global_70409.f_139[38], 0))
			{
				func_66(38);
				return 1;
			}
			break;
		
		case joaat("FIRETRUK"):
			if (func_76(iParam0, Global_70409.f_139[43], 1))
			{
				func_66(43);
				return 1;
			}
			break;
		
		case joaat("CUBAN800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_76(iParam0, uVar1[iVar3], 1) && func_75(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_98(vParam1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("LUXOR2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70409.f_484[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_70409.f_484[14]) == joaat("LUXOR2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_70409.f_484[14]))
				{
					func_66(14);
					return 1;
				}
			}
			break;
		
		case joaat("SWIFT2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70409.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_70409.f_484[20]) == joaat("SWIFT2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_70409.f_484[20]))
				{
					func_66(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_75(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			Global_91043[iVar0] = iParam0;
			Global_91053[iVar0] = iParam1;
			Global_91063[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_91063[iVar0]))
			{
				Global_91091[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_91091[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			if (iParam0 == 145 || Global_91053[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_91043[iVar0]) == func_71(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_91043[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_91043[iVar0], false, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_91043[iVar0]));
						Global_91053[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_79(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!func_88(iParam0))
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
			if (MISC::IS_BIT_SET(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			VEHICLE::_0x1087BC8EC540DAEB(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_0x1087BC8EC540DAEB(iParam0, 1);
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
		if (((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_87(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_86())
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
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
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
						func_85(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_85(iParam0, uParam1->f_69);
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
			func_80(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_41(iVar2 + 1)))
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

int func_80(int iParam0, var uParam1, var uParam2)
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
	if (func_84(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_83(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_83(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_82(iParam0);
	if (func_81(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_81(int iParam0)
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

void func_82(var uParam0)
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

int func_83(int iParam0, int iParam1)
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

int func_84(int iParam0, int iParam1)
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

void func_85(int iParam0, int iParam1)
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

bool func_86()
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_87(int iParam0)
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

int func_88(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_94(PLAYER::PLAYER_ID(), -1))
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
	if (func_90(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_89(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
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

int func_90(int iParam0)
{
	if (func_93(iParam0) == 233)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_95(iParam0, 1, 1))
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

int func_95(int iParam0, bool bParam1, bool bParam2)
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

void func_96(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_70(&(Global_70409.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_70409.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_66(iVar0);
			}
		}
		iVar0++;
	}
}

int func_97(var uParam0)
{
	if (func_99(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_98(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_99(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_47(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_75(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_100()
{
	return func_97(&(Global_97130.f_2890));
}

void func_101()
{
	func_102(&(Global_97130.f_2890));
}

void func_102(var uParam0)
{
	if (func_99(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

int func_103(vector3 vParam0, int iParam1)
{
	return func_104(Global_97130.f_2890.f_12.f_66, vParam0, iParam1);
}

int func_104(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_105() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_105()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_106()
{
	return func_99(&(Global_97130.f_2890));
}

void func_107()
{
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("PACKER"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("BISON2"));
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("PACKER"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("BISON2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209[1], true, 1);
			iLocal_32 = Global_90209[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_32);
		}
		else
		{
			iLocal_32 = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_32);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209[2], true, 1);
			iLocal_33 = Global_90209[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_33, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = VEHICLE::CREATE_VEHICLE(joaat("PACKER"), 919.303f, -1553.88f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_33, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_33, iLocal_32, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PACKER"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("BISON2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[0], true, 1);
			iLocal_35[0] = Global_90209.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[1], true, 1);
			iLocal_35[1] = Global_90209.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[2], true, 1);
			iLocal_35[2] = Global_90209.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_264);
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[3], true, 1);
			iLocal_35[3] = Global_90209.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_264);
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[4], true, 1);
			iLocal_35[4] = Global_90209.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_264);
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[5], true, 1);
			iLocal_35[5] = Global_90209.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_264);
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[8], true, 1);
			iLocal_35[6] = Global_90209.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_264);
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[6], true, 1);
			iLocal_36[0] = Global_90209.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[0], iLocal_265);
			func_108(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[0], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[0], iLocal_265);
			func_108(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[0], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_9[7], true, 1);
			iLocal_36[1] = Global_90209.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[1], iLocal_265);
			func_108(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[1], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[1], iLocal_265);
			func_108(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[1], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}

void func_108(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

void func_109(int iParam0, int iParam1)
{
	Global_56505 = iParam0;
	Global_56506 = iParam1;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_56507 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68589)
	{
		if (iParam1 == -1 || Global_68590[iVar0 /*9*/] == iParam1)
		{
			if (Global_68590[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68590[iVar0 /*9*/].f_6 = iParam0;
				Global_68590[iVar0 /*9*/].f_7 = 1;
				Global_68590[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_111()
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_54]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35[iLocal_54], 1))
		{
			PED::DELETE_PED(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36[0], 1))
	{
		PED::DELETE_PED(&(iLocal_36[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36[1], 1))
	{
		PED::DELETE_PED(&(iLocal_36[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1))
	{
		PED::DELETE_PED(&iLocal_37);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1))
	{
		PED::DELETE_PED(&iLocal_38);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_39) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, 1))
	{
		PED::DELETE_PED(&iLocal_39);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_40, 1))
	{
		PED::DELETE_PED(&iLocal_40);
	}
	if (!func_30())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_32, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_32);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_90209[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209[3], true, 0);
		VEHICLE::DELETE_VEHICLE(&(Global_90209[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_33, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_33);
	}
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, false);
}

void func_112()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_49))
	{
		HUD::REMOVE_BLIP(&iLocal_49);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_50))
	{
		HUD::REMOVE_BLIP(&iLocal_50);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_51))
	{
		HUD::REMOVE_BLIP(&iLocal_51);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_52))
	{
		HUD::REMOVE_BLIP(&iLocal_52);
	}
}

void func_113()
{
	Global_14732 = 0;
	func_114();
}

void func_114()
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

void func_115()
{
	func_133();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_132(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_132(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_132(&uLocal_99, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_132(&uLocal_99, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_50))
		{
			if (!func_121())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					iLocal_50 = func_119(vLocal_92, 1);
				}
			}
		}
		if (func_121())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_92, 4f, 4f, 2f, true, true, 2))
						{
							if (func_117(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
								if (HUD::DOES_BLIP_EXIST(iLocal_50))
								{
									HUD::REMOVE_BLIP(&iLocal_50);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								func_116(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_116(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_56502)
	{
	}
	Global_56502 = 0;
	if (bParam0)
	{
		Global_56503 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68589)
		{
			if (Global_56719[Global_68590[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68590[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68589)
		{
			if (Global_68590[iVar0 /*9*/] > 0)
			{
				if (Global_68590[iVar0 /*9*/] == iParam1)
				{
					Global_68590[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_117(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_118(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

int func_119(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_120(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_120(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_121()
{
	if (Global_15866 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_122(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_131(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	Global_2621441 = 0;
	return func_123(sParam3, iParam4, bParam8);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
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
					func_114();
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
		if (func_130(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_129();
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
				func_128();
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
				if (func_127())
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
			if (func_126())
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
			func_125();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_124();
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
		func_114();
	}
	return 0;
}

void func_124()
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

void func_125()
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

int func_126()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
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

void func_128()
{
	if (func_16(14))
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
		Global_14553 = func_14();
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

void func_129()
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

bool func_130(int iParam0, int iParam1)
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

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_132(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_133()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
			{
				if (func_138("HELP_1"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					HUD::REMOVE_BLIP(&iLocal_49);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_85 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					HUD::REMOVE_BLIP(&iLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_346 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_86 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_50))
							{
								iLocal_50 = func_119(vLocal_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									func_137("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_50))
						{
							HUD::REMOVE_BLIP(&iLocal_50);
						}
						if (iLocal_269 == 0)
						{
							HUD::CLEAR_PRINTS();
							func_137("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_86 = MISC::GET_GAME_TIMER();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					HUD::REMOVE_BLIP(&iLocal_49);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_50))
				{
					HUD::REMOVE_BLIP(&iLocal_50);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_52))
					{
						iLocal_52 = func_135(iLocal_32, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_52, true);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_PRINTS();
						}
						if (iLocal_294 == 0)
						{
							func_137("GOD_6", 7500, -1);
							iLocal_85 = MISC::GET_GAME_TIMER();
							iLocal_294 = 1;
						}
						if (!func_138("HELP_1"))
						{
							func_134("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_52))
			{
				HUD::REMOVE_BLIP(&iLocal_52);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_50))
			{
				HUD::REMOVE_BLIP(&iLocal_50);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					iLocal_49 = func_135(iLocal_33, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_49, true);
				}
			}
			if (iLocal_270 == 0)
			{
				HUD::CLEAR_PRINTS();
				func_137("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_134(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	return func_136(iParam0, !bParam1, bParam2);
}

int func_136(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_120(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_120(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_120(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_137(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_138(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_139()
{
	if (iLocal_53 > 1)
	{
		func_133();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_49))
			{
				iLocal_49 = func_135(iLocal_33, 0, 0);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_49, true);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_30())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, false);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
				func_137("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
				if (HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					HUD::REMOVE_BLIP(&iLocal_49);
				}
				func_140(656, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
				{
					if (func_138("HELP_1"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_49))
					{
						HUD::REMOVE_BLIP(&iLocal_49);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_52))
					{
						HUD::REMOVE_BLIP(&iLocal_52);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_93, vLocal_96, true) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_86 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
								func_137("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = MISC::GET_GAME_TIMER();
							func_137("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_49))
					{
						HUD::REMOVE_BLIP(&iLocal_49);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_52))
						{
							iLocal_52 = func_135(iLocal_32, 0, 0);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_52, true);
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_294 == 0)
							{
								func_137("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_138("HELP_1"))
							{
								func_134("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_52))
				{
					HUD::REMOVE_BLIP(&iLocal_52);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_49))
					{
						iLocal_49 = func_135(iLocal_33, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					HUD::CLEAR_PRINTS();
					func_137("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_56504 = iParam0;
	if (!Global_56502)
	{
		Global_56502 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68589)
		{
			if (Global_68590[iVar0 /*9*/] == iParam0)
			{
				Global_68590[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_141()
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		func_164();
		func_107();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_90209[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_90209[3], 0))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_90209[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209[3], true, 1);
					func_143(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_90209[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_90209[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_90209[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_90209[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209[3], true, 1);
					func_143(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_142(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_142(int iParam0)
{
	if (Global_90634 != -1)
	{
		if (iParam0 == Global_90634)
		{
			Global_90638 = 1;
			return;
		}
	}
}

void func_143(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_97130.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97130.f_4, 0))
		{
			if (func_163(24) != Global_97130.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_160(ENTITY::GET_ENTITY_COORDS(Global_97130.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_144(Global_97130.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_144(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70409.f_484[25], 0))
			{
				if (Global_70409.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_159(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_98(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_71397 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_157(iParam3, &Var0, vParam1, fParam2, func_60(iParam0));
		func_145(iParam3, iParam0, 0);
	}
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70409.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_71316 != -1 && Global_71316 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_106565.f_32743.f_4801 = func_146();
			}
			if (iParam1 != Global_70409.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_163(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_71315 = iParam1;
				Global_71316 = iParam0;
				Global_71317 = iParam2;
			}
		}
	}
}

var func_146()
{
	var uVar0;
	
	func_156(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_155(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_154(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_149(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_148(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_147(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_149(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_150(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_151(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_152(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(var uParam0)
{
	return uParam0 & 15;
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_157(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 10))
		{
			func_158(iParam0);
			func_67(uParam1, &(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]));
			if (MISC::IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 11))
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_63(iParam0, 1);
		}
	}
}

void func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_70409.f_139[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_70409.f_139[iParam0]));
			Global_70409.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			func_63(iParam0, 0);
		}
	}
}

void func_159(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_158(iParam0);
	func_63(iParam0, 0);
}

int func_160(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_161(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_161(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88750[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88750[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_162(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_88750[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_162(int iParam0)
{
	return MISC::IS_BIT_SET(Global_106565.f_7223[iParam0], 0);
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70409.f_139[iParam0];
}

void func_164()
{
	Global_87890 = 1;
}

void func_165()
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	iLocal_44 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	iLocal_45 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	iLocal_46 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	iLocal_47 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	iLocal_42 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	iLocal_43 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_87889 == 1)
		{
			func_167(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_166() == 0)
		{
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_167(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_167(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_202(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_166()
{
	if (!Global_93682 == 10 && !Global_93682 == 9)
	{
		return 0;
	}
	return Global_93682.f_2;
}

void func_167(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_29())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_93682.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_93678 = { vParam0 };
		Global_93681 = fParam1;
		Global_93677 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_93682.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_93682.f_20), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_93682.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_93682.f_20), 24);
		}
		func_28(1);
	}
}

void func_168()
{
	if (!func_29())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_169()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				iLocal_40 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_40, 324, true);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (!PED::IS_PED_INJURED(iLocal_40))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_337 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_40))
					{
						TASK::CLEAR_PED_TASKS(iLocal_40);
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_40);
					}
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_40, true);
					iLocal_89 = MISC::GET_GAME_TIMER();
					iLocal_337 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_89 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_40, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_40, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_91, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (vLocal_93.x > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, 0, 1);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				if (!PED::IS_PED_INJURED(iLocal_40))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_170(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0);
}

float func_171(int iParam0, int iParam1, bool bParam2)
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

void func_172()
{
	int iVar0;
	
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_176() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_28 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = MISC::GET_GAME_TIMER();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && MISC::GET_GAME_TIMER() > iLocal_88 + 7000)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = MISC::GET_GAME_TIMER();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = MISC::GET_GAME_TIMER();
								iLocal_336 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_84 + 8000)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_113();
						if (func_174())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
							if (iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0)
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = MISC::GET_GAME_TIMER();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = MISC::GET_GAME_TIMER();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = MISC::GET_GAME_TIMER();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_61 + 9000)
							{
								if (func_174())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_174())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = MISC::GET_GAME_TIMER();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_62 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_173()
{
	if (func_14() == 0)
	{
		func_132(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_132(&uLocal_99, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_132(&uLocal_99, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_174()
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_57]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_57]))
			{
				iVar0 = func_175(PLAYER::PLAYER_PED_ID(), iLocal_264, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_171(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					func_132(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_176()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_184();
	if (iLocal_303[0])
	{
		if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_328[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[0], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[0], 150319005) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_328[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[1], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[1], 150319005) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", true);
				}
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_36[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_83[0] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_83[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_36[0], true), 863.1551f, -1564.572f, 29.3231f, true) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_36[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_83[1] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_83[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_36[1], true), 940.2881f, -1573.877f, 29.3866f, true) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[0]))
				{
					if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
					{
						if ((func_183(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_182(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_36[0]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_82[0] = MISC::GET_GAME_TIMER();
											func_181(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = MISC::GET_GAME_TIMER();
											iLocal_302 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_66 + 15000)
										{
											func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_179(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = MISC::GET_GAME_TIMER();
												iLocal_306 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_73 + 15000)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[1]))
				{
					if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
					{
						if ((func_183(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_182(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_36[1]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_82[1] = MISC::GET_GAME_TIMER();
											func_181(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = MISC::GET_GAME_TIMER();
											iLocal_302 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_66 + 15000)
										{
											func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = MISC::GET_GAME_TIMER();
												iLocal_306 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_73 + 15000)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_178() || iLocal_297 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_36[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_81[0] = MISC::GET_GAME_TIMER();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_36[0], 50, true);
								TASK::TASK_COMBAT_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_181(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_81[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_36[0]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_36[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_81[1] = MISC::GET_GAME_TIMER();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_36[1], 50, true);
								TASK::TASK_COMBAT_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_181(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_81[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_36[1]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_178())
				{
					if (iLocal_307 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
								{
									func_179(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = MISC::GET_GAME_TIMER();
									iLocal_300 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_71 + 7000)
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
								{
									func_179(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
								{
									func_179(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = MISC::GET_GAME_TIMER();
									iLocal_300 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_71 + 7000)
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
								{
									func_179(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_175(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
							{
								if (!PED::IS_PED_INJURED(iLocal_41))
								{
									if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
										iLocal_301 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_70 + 7000)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
										iLocal_301 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_70 + 7000)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_178())
			{
				if (iLocal_309 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_36[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_65 = MISC::GET_GAME_TIMER();
									iLocal_309 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_36[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_65 = MISC::GET_GAME_TIMER();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[0]))
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_329[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_48, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_36[0], iLocal_48);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								func_181(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = MISC::GET_GAME_TIMER();
												iLocal_68 = MISC::GET_GAME_TIMER();
												iLocal_65 = MISC::GET_GAME_TIMER();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_67 + 7000)
									{
										if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_68 + 7000)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[1]))
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_329[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_48, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_36[1], iLocal_48);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								func_181(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = MISC::GET_GAME_TIMER();
												iLocal_69 = MISC::GET_GAME_TIMER();
												iLocal_65 = MISC::GET_GAME_TIMER();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_67 + 7000)
									{
										if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_69 + 7000)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_65 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
								iLocal_297 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 1))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[0]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[1]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_178()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_64]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[iLocal_64]))
				{
					if (func_183(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_182(0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_64], PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_36[0]))
			{
				if (func_183(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_182(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_36[1]))
			{
				if (func_183(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_182(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_179(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_180(iParam3), 0);
}

int func_180(int iParam0)
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

void func_181(int iParam0)
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_182(int iParam0)
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

int func_183(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_184()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vLocal_93 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[0]))
		{
			vLocal_95[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_36[0], true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[1]))
		{
			vLocal_95[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_36[1], true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1))
					{
						if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
						{
							if (((vLocal_93.x < vLocal_95[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = MISC::GET_GAME_TIMER();
								iLocal_83[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (vLocal_93.x < vLocal_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
					{
						if ((vLocal_93.x > vLocal_95[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (vLocal_93.x > vLocal_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = MISC::GET_GAME_TIMER();
						iLocal_83[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1))
				{
					if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 15f)
					{
						if ((vLocal_93.x < vLocal_95[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (vLocal_93.x < vLocal_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = MISC::GET_GAME_TIMER();
						iLocal_83[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
				{
					if ((vLocal_93.x > vLocal_95[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = MISC::GET_GAME_TIMER();
						iLocal_83[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (vLocal_93.x > vLocal_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = MISC::GET_GAME_TIMER();
					iLocal_83[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0) || vLocal_93.x > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_36[1]))
					{
						if (vLocal_93.x > vLocal_95[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = MISC::GET_GAME_TIMER();
								iLocal_83[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (vLocal_93.x > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0) || vLocal_93.x < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_36[0]))
					{
						if (vLocal_93.x < vLocal_95[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = MISC::GET_GAME_TIMER();
								iLocal_83[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (vLocal_93.x < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
				{
					if ((func_183(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_182(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0))
						{
							if (vLocal_93.x > vLocal_95[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
				{
					if ((func_183(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_182(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
						{
							if (vLocal_93.x < vLocal_95[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_176())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_78]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[iLocal_78]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_183(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_182(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_183(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_182(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_93, vLocal_96, true) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_31 = 2;
				}
				if (func_171(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (vLocal_93.z < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
					if (func_171(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
			{
				if (vLocal_93.x > vLocal_95[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
			{
				if (vLocal_93.x < vLocal_95[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_185()
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_55]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_54]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_54]))
			{
				func_190(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_189(1);
						if (iLocal_311 == 1)
						{
							func_113();
						}
					}
					if (PED::HAS_PED_RECEIVED_EVENT(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
						}
					}
					if ((((((((func_186(iLocal_35[iLocal_54], iLocal_35[0]) || func_186(iLocal_35[iLocal_54], iLocal_35[1])) || func_186(iLocal_35[iLocal_54], iLocal_35[2])) || func_186(iLocal_35[iLocal_54], iLocal_35[3])) || func_186(iLocal_35[iLocal_54], iLocal_35[4])) || func_186(iLocal_35[iLocal_54], iLocal_35[5])) || func_186(iLocal_35[iLocal_54], iLocal_35[6])) || func_186(iLocal_35[iLocal_54], iLocal_36[0])) || func_186(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_183(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || func_182(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_189(0);
								}
							}
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_189(1);
										if (iLocal_311 == 1)
										{
											func_113();
										}
									}
									else
									{
										func_189(3);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = MISC::GET_GAME_TIMER();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_189(2);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_189(3);
									if (iLocal_311 == 1)
									{
										func_187();
									}
								}
							}
						}
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = MISC::GET_GAME_TIMER();
								iLocal_308 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_74 + 3000)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_189(3);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 1))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_189(3);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_189(3);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, true, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_35[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_189(3);
														if (iLocal_311 == 1)
														{
															func_187();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[6]))
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[6], 1) < 20f)
								{
									if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, true, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[6], PLAYER::PLAYER_PED_ID()))
										{
											if (vLocal_93.z > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_189(3);
													if (iLocal_311 == 1)
													{
														func_187();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_189(1);
												if (iLocal_311 == 1)
												{
													func_113();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0)
						{
							iLocal_59 = MISC::GET_GAME_TIMER();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 4)
										{
											func_189(4);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_189(4);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_186(int iParam0, int iParam1)
{
	if (((func_171(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	Global_14732 = 0;
	func_188();
}

void func_188()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_189(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_190(int iParam0)
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_171(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_35[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[5]))
							{
								if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[4], 1) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, true, 0) || vLocal_93.y > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_132(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_132(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_176())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_170(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = MISC::GET_GAME_TIMER();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_132(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_132(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_176())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_170(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_176())
								{
									if (iLocal_310 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_35[4]);
											TASK::TASK_CLEAR_LOOK_AT(iLocal_35[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = MISC::GET_GAME_TIMER();
							iLocal_320 = 1;
						}
						if (MISC::GET_GAME_TIMER() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[6], 1) < 15f && vLocal_93.z < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, 0))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
										TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_171(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_171(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (func_171(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_63 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_171(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) && ENTITY::IS_ENTITY_AT_COORD(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_35[0]);
											}
											TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_35[0], iLocal_48);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_132(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_179(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_63 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[5]))
								{
									TASK::TASK_PLAY_ANIM(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_87 = MISC::GET_GAME_TIMER();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_87 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[5]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[5]);
									TASK::TASK_COMBAT_PED(iLocal_35[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
									{
										if (func_171(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS(iParam0);
											}
											TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_171(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iParam0, true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_63 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, 1862763509);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_56]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[iLocal_56]))
						{
							if (func_171(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_191(iLocal_35[iLocal_56], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_56], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
											}
											TASK::TASK_HANDS_UP(iLocal_35[iLocal_56], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
									}
									TASK::TASK_SMART_FLEE_PED(iLocal_35[iLocal_56], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
								}
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_35[iLocal_56], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_191(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()
{
	iLocal_37 = func_25(0);
	iLocal_38 = func_25(1);
	iLocal_39 = func_25(2);
	if (func_33(iLocal_37, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_37))
		{
			if (!func_32(iLocal_37))
			{
				if (!func_194())
				{
					if (func_193(iLocal_37))
					{
						if (func_31(iLocal_37, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_37, true, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
							TASK::CLEAR_PED_TASKS(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_350 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_37, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_194())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_193(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1)) && iLocal_350 == 0)
					{
						vLocal_94 = { ENTITY::GET_ENTITY_COORDS(iLocal_37, true) };
						PATHFIND::_0x07FB139B592FA687(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), VEHICLE::GET_CLOSEST_VEHICLE(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_24(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_39, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_39))
		{
			if (!func_32(iLocal_39))
			{
				if (!func_194())
				{
					if (func_193(iLocal_39))
					{
						if (func_31(iLocal_39, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_39, true, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, true);
							TASK::CLEAR_PED_TASKS(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_352 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_39, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_194())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_193(iLocal_39) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, 1)) && iLocal_352 == 0)
					{
						vLocal_94 = { ENTITY::GET_ENTITY_COORDS(iLocal_39, true) };
						PATHFIND::_0x07FB139B592FA687(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(iLocal_39, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(iLocal_39, 0), VEHICLE::GET_CLOSEST_VEHICLE(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(iLocal_39, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_24(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_38, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_38))
		{
			if (!func_32(iLocal_38))
			{
				if (!func_194())
				{
					if (func_193(iLocal_38))
					{
						if (func_31(iLocal_38, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, true, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, true);
							TASK::CLEAR_PED_TASKS(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_351 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_38, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_194())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_193(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1)) && iLocal_351 == 0)
					{
						vLocal_94 = { ENTITY::GET_ENTITY_COORDS(iLocal_38, true) };
						PATHFIND::_0x07FB139B592FA687(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, 0), VEHICLE::GET_CLOSEST_VEHICLE(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_24(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_193(int iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
					{
						if ((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_33, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_33, -1, 0) == iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_33, vLocal_92, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_194()
{
	return Global_17270;
}

void func_195()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			func_198(3);
			return;
		}
		else
		{
			if (func_197(&iLocal_33))
			{
				func_198(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					func_198(1);
					return;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
					{
						if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_32) || func_196(iLocal_32)) || func_197(&iLocal_32))
						{
							func_198(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (func_171(iLocal_32, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_198(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (PED::IS_PED_INJURED(iLocal_40))
		{
			func_198(6);
			return;
		}
	}
}

int func_196(int iParam0)
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

int func_197(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_198(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_199(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106565.f_9079.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106565.f_9079.f_99.f_58[iParam0] = iParam1;
}

void func_200()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_201(657);
		}
	}
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_56495 = 0;
	if (!Global_56719[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68589)
	{
		if (Global_68590[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68590[iVar1 /*9*/].f_1 = 1;
			Global_68590[iVar1 /*9*/].f_2 = 0f;
			if (Global_68590[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_202(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_203()
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PACKER"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PHANTOM"), false);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_42, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_43, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_44, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_45, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_46, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_47, 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", false);
		}
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_90))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_90);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_91))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_91);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_204()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_202(0))
	{
		if (!func_205())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_205()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

