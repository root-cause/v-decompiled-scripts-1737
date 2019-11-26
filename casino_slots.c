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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	struct<21> Local_47[54];
	struct<279> Local_48 = { 64, 3, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 16, 3, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70[2] = { 0, 0 };
	struct<2> Local_71[20];
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<5> Local_78[54];
	struct<2> Local_79[54];
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<6> Local_83 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 3;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	struct<2> Local_97 = { 0, -1 } ;
	struct<18> Local_98 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<4> Local_106[54];
	int iLocal_107[54] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108[3] = { 0, 0, 0 };
	int iLocal_109 = 0;
	struct<116> Local_110 = { 2, 0, 0, 2, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54 } ;
	var uLocal_111 = 3;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 3;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 3;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 3;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 3;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 3;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 3;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 3;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 3;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 3;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 3;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 3;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 3;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 3;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 3;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 3;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 3;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 3;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 3;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 3;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 3;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 3;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 3;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 3;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 3;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 3;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 3;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 3;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 3;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 3;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 3;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 3;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 3;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 3;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 3;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 3;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 3;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 3;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 3;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 3;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 3;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 3;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 3;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 3;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 3;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 3;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 3;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 3;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 3;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 3;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 3;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	struct<657> Local_328 = { 54, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 54, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2 } ;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	struct<11> Local_332[32];
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	iLocal_67 = -1;
	iLocal_68 = -1;
	iLocal_72 = -1;
	iLocal_99 = -1;
	iLocal_100 = -1;
	iLocal_101 = -1;
	iLocal_102 = -1;
	iLocal_103 = 1;
	iLocal_105 = -1;
	func_348();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_344();
	}
	else
	{
		func_342();
	}
	func_341(&Local_48, &Local_47);
	while (true)
	{
		func_340();
		func_325();
		func_15();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!MISC::IS_BIT_SET(Local_328.f_659, 0))
	{
		func_13();
		MISC::SET_BIT(&(Local_328.f_659), 0);
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1[2];
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
			if (func_12(iVar2, 1, 1))
			{
				if (Local_332[iVar0 /*11*/] >= 0)
				{
					MISC::SET_BIT(&(uVar1[func_11(Local_332[iVar0 /*11*/])]), func_10(Local_332[iVar0 /*11*/]));
					func_3(iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		if (!MISC::IS_BIT_SET(uVar1[func_11(iVar0)], func_10(iVar0)))
		{
			if (Local_328.f_598[iVar0] >= 0)
			{
				Local_328.f_598[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_332[iParam0 /*11*/];
	if (Local_328.f_598[iVar0] == -1)
	{
		Local_328.f_598[iVar0] = iParam0;
	}
	else if (Local_328.f_598[iVar0] == iParam0)
	{
		if (!MISC::IS_BIT_SET(Local_328.f_653[func_11(iVar0)], func_10(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_332[iParam0 /*11*/].f_10, 0) && !MISC::IS_BIT_SET(Local_332[iParam0 /*11*/].f_10, 2))
			{
				MISC::SET_BIT(&(Local_328.f_653[func_11(iVar0)]), func_10(iVar0));
				func_9(&(Local_328.f_489[iVar0 /*2*/]), 0, 0);
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_332[iParam0 /*11*/].f_10, 1))
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					Local_328.f_217[iVar0 /*4*/][iVar1] = Local_332[iParam0 /*11*/].f_5[iVar1];
					Local_328[iVar0 /*4*/][iVar1] = Local_332[iParam0 /*11*/].f_1[iVar1];
					Local_328.f_434[iVar0] = Local_332[iParam0 /*11*/].f_9;
					MISC::SET_BIT(&(Local_328.f_656[func_11(iVar0)]), func_10(iVar0));
					iVar1++;
				}
			}
			if (MISC::IS_BIT_SET(Local_332[iParam0 /*11*/].f_10, 1) && (MISC::IS_BIT_SET(Local_332[iParam0 /*11*/].f_10, 2) || func_5(&(Local_328.f_489[iVar0 /*2*/]), func_7(iVar0) + 10000, 0)))
			{
				MISC::CLEAR_BIT(&(Local_328.f_653[func_11(iVar0)]), func_10(iVar0));
				MISC::CLEAR_BIT(&(Local_328.f_656[func_11(iVar0)]), func_10(iVar0));
				func_4(&(Local_328.f_489[iVar0 /*2*/]));
			}
		}
	}
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
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

void func_6(var uParam0, bool bParam1, bool bParam2)
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

int func_7(int iParam0)
{
	if (func_8(iParam0, &Local_47))
	{
		if ((Local_48.f_1[0 /*65*/][Local_328[iParam0 /*4*/][0]] == 7 && Local_48.f_1[1 /*65*/][Local_328[iParam0 /*4*/][1]] == 7) && Local_48.f_1[2 /*65*/][Local_328[iParam0 /*4*/][2]] == 7)
		{
			return 11000;
		}
	}
	return 5500;
}

int func_8(int iParam0, var uParam1)
{
	switch ((uParam1[iParam0 /*21*/])->f_17)
	{
		case 4:
			if (Global_262145.f_26008)
			{
				return 0;
			}
			return 1;
			break;
		
		case 8:
			if (Global_262145.f_26009)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10(int iParam0)
{
	return (iParam0 - func_11(iParam0) * 32);
}

int func_11(int iParam0)
{
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
}

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	Var2 = 3;
	Var2.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_14(iVar0, &Var2, &Local_48, &Local_47);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Local_328.f_217[iVar0 /*4*/][iVar1] = Var2.f_4[iVar1];
			Local_328[iVar0 /*4*/][iVar1] = Var2[iVar1];
			Local_328.f_434[iVar0] = Var2.f_8;
			iVar1++;
		}
		iVar0++;
	}
}

void func_14(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, *uParam2);
		(*uParam1)[iVar0] = iVar2;
		if (uParam2->f_1[iVar0 /*65*/][iVar2] == 0)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam2->f_225);
			uParam1->f_4[iVar0] = (IntToFloat(iVar3) + 0.5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0 /*17*/][iVar1] == uParam2->f_1[iVar0 /*65*/][iVar2])
				{
					iVar4++;
				}
				iVar1++;
			}
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0 /*17*/][iVar1] == uParam2->f_1[iVar0 /*65*/][iVar2])
				{
					if (iVar4 == iVar3)
					{
						uParam1->f_4[iVar0] = SYSTEM::TO_FLOAT(iVar1);
						iVar1 = uParam2->f_225;
					}
					iVar4++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (func_8(iParam0, uParam3))
	{
		if ((uParam2->f_1[0 /*65*/][(*uParam1)[0]] == 7 && uParam2->f_1[1 /*65*/][(*uParam1)[1]] == 7) && uParam2->f_1[2 /*65*/][(*uParam1)[2]] == 7)
		{
			iVar2 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, 12);
			uParam1->f_8 = iVar2;
		}
	}
}

void func_15()
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_312();
	if (iLocal_59 > 0)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
		PAD::SET_INPUT_EXCLUSIVE(0, 200);
		PAD::SET_INPUT_EXCLUSIVE(2, 200);
		PAD::SET_INPUT_EXCLUSIVE(0, 199);
		PAD::SET_INPUT_EXCLUSIVE(2, 199);
		PAD::DISABLE_CONTROL_ACTION(2, 210, 1);
		PAD::SET_INPUT_EXCLUSIVE(0, 210);
		PAD::SET_INPUT_EXCLUSIVE(2, 210);
	}
	if (func_311(&uLocal_76))
	{
		if (!func_5(&uLocal_76, 5000, 1))
		{
			PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.2f);
		}
	}
	switch (iLocal_59)
	{
		case 0:
			if (MISC::IS_BIT_SET(iLocal_60, 18))
			{
				STREAMING::REMOVE_ANIM_DICT(func_310());
				MISC::CLEAR_BIT(&iLocal_60, 18);
			}
			if (func_293())
			{
				iLocal_62 = 0;
				MISC::CLEAR_BIT(&iLocal_60, 21);
				MISC::CLEAR_BIT(&iLocal_60, 22);
				MISC::CLEAR_BIT(&iLocal_60, 30);
				MISC::CLEAR_BIT(&iLocal_60, 31);
				MISC::CLEAR_BIT(&iLocal_60, 21);
				MISC::CLEAR_BIT(&iLocal_60, 22);
				func_292(1);
			}
			break;
		
		case 1:
			func_291(iLocal_102);
			Local_97 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("SLOT_MACHINE");
			break;
		
		case 3:
			func_289();
			break;
		
		case 2:
			if (!func_288())
			{
				func_292(0);
			}
			break;
		
		case 4:
			func_4(&Local_83);
			iLocal_93 = 0;
			iLocal_94 = 0;
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_282(0);
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4), 7);
			if (func_274())
			{
				func_267(0);
				func_292(5);
			}
			break;
		
		case 5:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
			{
				AUDIO::START_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
			}
			CAM::_0x79C0E43EB9B944E2(518572876);
			func_222();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_282(0);
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			func_42();
			break;
		
		case 6:
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_282(0);
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4, 7))
			{
				MISC::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4), 7);
				func_31();
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
			{
				AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
			}
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				if (func_30() < 0.6f)
				{
					CAM::_0x79C0E43EB9B944E2(518572876);
				}
			}
			vVar0 = { PAD::GET_CONTROL_NORMAL(2, 218), PAD::GET_CONTROL_NORMAL(2, 219), 0f };
			vVar1 = { PAD::GET_CONTROL_NORMAL(2, 220), PAD::GET_CONTROL_NORMAL(2, 221), 0f };
			if ((func_30() > 0.99f || func_30() < 0f) || ((SYSTEM::VMAG(vVar0) >= 0.24f || SYSTEM::VMAG(vVar1) >= 0.24f) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2115798116)))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_29();
				func_292(0);
				if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (MISC::IS_BIT_SET(iLocal_60, 18))
				{
					STREAMING::REMOVE_ANIM_DICT(func_310());
					MISC::CLEAR_BIT(&iLocal_60, 18);
				}
				if (HUD::IS_RADAR_HIDDEN())
				{
					HUD::DISPLAY_RADAR(true);
				}
				func_9(&uLocal_76, 1, 0);
				if (MISC::IS_BIT_SET(iLocal_60, 2))
				{
					func_16(0);
					MISC::CLEAR_BIT(&iLocal_60, 2);
				}
			}
			break;
	}
}

void func_16(int iParam0)
{
	Global_968394 = iParam0;
}

void func_17(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_28())
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
		if (!func_26())
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
				else if (bVar13 || (!func_23(PLAYER::PLAYER_ID(), 0) && !func_22()))
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
				if (!func_21(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
					func_20();
					func_19();
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
				if (!func_21(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
					if (func_18(Global_4456448.f_161209))
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

bool func_18(int iParam0)
{
	return iParam0 == 17;
}

void func_19()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_20()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_21(int iParam0)
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

bool func_22()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26()
{
	if (func_27() == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	return Global_1312467.f_18;
}

int func_28()
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	vector3 vVar0[24];
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_97))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_97);
	}
	Local_97.f_1 = -1;
	if (iLocal_101 >= 0)
	{
		StringCopy(&cVar0, "machine_0", 24);
		StringIntConCat(&cVar0, Local_47[iLocal_101 /*21*/].f_17, 24);
		StringConCat(&cVar0, "a", 24);
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(&cVar0);
		}
	}
	iLocal_101 = -1;
}

float func_30()
{
	int iVar0;
	
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_63);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0);
	}
	return -1f;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1689901);
	iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1689902);
	if (Global_1689902 == -1)
	{
		func_35(iVar0);
	}
	else
	{
		func_35(iVar1);
	}
	func_34();
	func_32();
	Global_1689901 = -1;
	Global_1689902 = -1;
	Global_1689918 = -1;
	Global_2458547 = 1;
}

void func_32()
{
	func_33(joaat("MPPLY_CAS_24H_GMBLNG_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

void func_34()
{
	func_33(joaat("MPPLY_CAS_CUR_GMBLNG_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = func_41();
	Global_1689910 = (Global_1689910 + iParam0);
	func_36(iVar0, iParam0);
	func_32();
}

void func_36(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_40((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_39(iVar5);
		iVar0++;
	}
	iVar6 = func_38(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_37(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_40((iVar4 + iVar0));
		func_33(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_37(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (MISC::IS_BIT_SET(iParam3, iVar6))
			{
				MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_38(var uParam0, int iParam1, int iParam2)
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
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (MISC::IS_BIT_SET((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				MISC::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_39(int iParam0)
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

int func_40(int iParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_41()
{
	return func_39(joaat("MPPLY_CAS_CUR_GMBLNG_HR"));
}

void func_42()
{
	bool bVar0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = true;
	func_221();
	func_220();
	if ((((((func_219() || func_218()) || NETWORK::IS_COMMERCE_STORE_OPEN()) || HUD::_0x2F057596F2BD0061()) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_217(1)) || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		bVar0 = false;
	}
	if (MISC::IS_BIT_SET(Local_328.f_653[func_11(iLocal_100)], func_10(iLocal_100)) && !MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 2))
	{
		if (!func_216())
		{
			func_215(1);
			MISC::SET_BIT(&iLocal_60, 13);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_60, 13))
	{
		if (func_216())
		{
			func_215(0);
		}
		MISC::CLEAR_BIT(&iLocal_60, 13);
	}
	if (bVar0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, 0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 0))
		{
			iLocal_72++;
			if (iLocal_72 > 1)
			{
				iLocal_72 = 0;
			}
			func_213(iLocal_72);
			MISC::CLEAR_BIT(&iLocal_60, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_60, 21) || MISC::IS_BIT_SET(iLocal_60, 22))
		{
			if (((PAD::IS_CONTROL_JUST_RELEASED(0, 189) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 189)) || PAD::IS_CONTROL_JUST_RELEASED(0, 190)) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 190))
			{
				if (MISC::IS_BIT_SET(iLocal_60, 21))
				{
					MISC::SET_BIT(&iLocal_60, 22);
					MISC::CLEAR_BIT(&iLocal_60, 21);
				}
				else if (MISC::IS_BIT_SET(iLocal_60, 22))
				{
					MISC::SET_BIT(&iLocal_60, 21);
					MISC::CLEAR_BIT(&iLocal_60, 22);
				}
				MISC::CLEAR_BIT(&iLocal_60, 0);
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
			{
				MISC::CLEAR_BIT(&iLocal_60, 21);
				MISC::CLEAR_BIT(&iLocal_60, 22);
				MISC::CLEAR_BIT(&iLocal_60, 0);
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 210) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 210))
		{
			MISC::SET_BIT(&iLocal_60, 21);
			MISC::CLEAR_BIT(&iLocal_60, 0);
			return;
		}
	}
	if (MISC::IS_BIT_SET(iLocal_61, 2))
	{
		if ((((iLocal_64 == 4 || iLocal_64 == 10) || iLocal_64 == 11) || iLocal_64 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			MISC::CLEAR_BIT(&iLocal_60, 0);
			MISC::CLEAR_BIT(&iLocal_61, 2);
		}
	}
	if (Global_262145.f_25805)
	{
		if (!func_311(&Local_83))
		{
			func_6(&Local_83, 1, 0);
		}
		else if (func_5(&Local_83, 120000, 1))
		{
			func_212(1);
		}
	}
	if (!iLocal_94)
	{
		iLocal_96 = NETWORK::GET_NETWORK_TIME();
		iLocal_94 = 1;
	}
	if (!iLocal_93)
	{
		iLocal_95 = NETWORK::GET_NETWORK_TIME();
		iLocal_93 = 1;
	}
	if (!MISC::IS_BIT_SET(iLocal_60, 3))
	{
		if (iLocal_64 == 4 || iLocal_64 == 10)
		{
			if (!func_195(iLocal_100))
			{
				func_192(27);
				return;
			}
		}
		if ((((bVar0 && (!MISC::IS_BIT_SET(Local_328.f_653[func_11(iLocal_100)], func_10(iLocal_100)) || MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 2))) && !MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 0)) && MISC::IS_BIT_SET(iLocal_60, 0)) && !(MISC::IS_BIT_SET(iLocal_60, 21) || MISC::IS_BIT_SET(iLocal_60, 22)))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 208))
			{
				if (func_191())
				{
					if (iLocal_64 == 4 || iLocal_64 == 10)
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (func_187() == 2)
							{
								func_186("CAS_MG_CTIME", -1);
							}
							else
							{
								func_186("CAS_MG_CBAN", -1);
							}
							MISC::SET_BIT(&iLocal_60, 6);
						}
						func_192(27);
					}
				}
				else if (func_185() >= (Local_47[iLocal_100 /*21*/].f_16 * iLocal_103))
				{
					if ((((iLocal_64 == 4 || iLocal_64 == 10) || iLocal_64 == 11) || iLocal_64 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
					{
						MISC::SET_BIT(&iLocal_60, 30);
						MISC::CLEAR_BIT(&iLocal_60, 5);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 208))
						{
							func_184();
						}
						else
						{
							func_183();
						}
						func_182();
						MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
						MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
						MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
						MISC::CLEAR_BIT(&iLocal_60, 24);
						MISC::SET_BIT(&iLocal_60, 3);
						MISC::CLEAR_BIT(&iLocal_60, 0);
					}
				}
				else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_186("SLOTS_NOMON", -1);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_60, 3))
			{
				if ((((iLocal_64 == 4 || iLocal_64 == 10) || iLocal_64 == 11) || iLocal_64 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !MISC::IS_BIT_SET(iLocal_60, 27))
					{
						MISC::SET_BIT(&iLocal_60, 30);
						func_174(1, -1, -1, -1);
						iLocal_103++;
						if (iLocal_103 > 5)
						{
							iLocal_103 = 1;
						}
						func_173((Local_47[iLocal_100 /*21*/].f_16 * iLocal_103));
						if ((iLocal_64 == 4 || iLocal_64 == 10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
						{
							func_172(0);
						}
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 5);
						func_174(1, -1, -1, -1);
						MISC::CLEAR_BIT(&iLocal_60, 0);
					}
					else if (!PAD::IS_CONTROL_JUST_PRESSED(2, 203))
					{
						MISC::CLEAR_BIT(&iLocal_60, 27);
					}
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 204) && !MISC::IS_BIT_SET(iLocal_60, 28))
					{
						MISC::SET_BIT(&iLocal_60, 30);
						func_174(1, -1, -1, -1);
						iLocal_103 = 5;
						iVar3 = func_185();
						if (iVar3 < (Local_47[iLocal_100 /*21*/].f_16 * iLocal_103))
						{
							iLocal_103 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar3 / Local_47[iLocal_100 /*21*/].f_16)));
						}
						if ((iLocal_64 == 4 || iLocal_64 == 10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
						{
							func_172(1);
						}
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 6);
						func_173((Local_47[iLocal_100 /*21*/].f_16 * iLocal_103));
						MISC::CLEAR_BIT(&iLocal_60, 0);
					}
					else if (!PAD::IS_CONTROL_JUST_PRESSED(2, 204))
					{
						MISC::CLEAR_BIT(&iLocal_60, 28);
					}
				}
				if (iLocal_64 == 4 || iLocal_64 == 10)
				{
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
					{
						func_192(27);
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_60, 4))
	{
		if (func_167((Local_47[iLocal_100 /*21*/].f_16 * iLocal_103), &iLocal_327, 0, 0))
		{
			if (iLocal_327 == 2)
			{
				MISC::SET_BIT(&iLocal_60, 4);
				Local_83.f_5 = (Local_83.f_5 + (Local_47[iLocal_100 /*21*/].f_16 * iLocal_103));
			}
			else
			{
				MISC::CLEAR_BIT(&iLocal_60, 3);
				MISC::CLEAR_BIT(&iLocal_60, 24);
				MISC::CLEAR_BIT(&iLocal_60, 4);
				MISC::CLEAR_BIT(&iLocal_60, 5);
				MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
				MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
				MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
				MISC::CLEAR_BIT(&iLocal_60, 0);
				MISC::SET_BIT(&iLocal_61, 2);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_186("SLOTS_FAILTR", -1);
				}
				func_164(10);
			}
			iLocal_327 = 0;
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_60, 5))
	{
		if (((iLocal_64 == 8 || iLocal_64 == 14) || iLocal_64 == 9) || iLocal_64 == 15)
		{
			if (func_30() > 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2044168827))
			{
				if (MISC::IS_BIT_SET(iLocal_60, 0))
				{
					MISC::CLEAR_BIT(&iLocal_60, 0);
				}
				MISC::SET_BIT(&iLocal_60, 5);
				MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(iLocal_60, 0))
			{
				func_163(0, 0);
				func_160(1, -1);
				MISC::CLEAR_BIT(&iLocal_60, 0);
			}
			MISC::SET_BIT(&iLocal_60, 5);
			MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_60, 24))
	{
		if (MISC::IS_BIT_SET(Local_328.f_653[func_11(iLocal_100)], func_10(iLocal_100)))
		{
			func_14(iLocal_100, &uLocal_84, &Local_48, &Local_47);
			MISC::SET_BIT(&iLocal_60, 24);
		}
	}
	else
	{
		if (!MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 1))
		{
			Local_47[iLocal_100 /*21*/] = func_158(iLocal_100, Local_48.f_1[0 /*65*/][uLocal_84[0]], Local_48.f_1[1 /*65*/][uLocal_84[1]], Local_48.f_1[2 /*65*/][uLocal_84[2]], 0);
			Local_47[iLocal_100 /*21*/].f_1 = func_156(iLocal_100, Local_48.f_1[0 /*65*/][uLocal_84[0]], Local_48.f_1[1 /*65*/][uLocal_84[1]], Local_48.f_1[2 /*65*/][uLocal_84[2]], uLocal_84.f_8);
			if (Local_47[iLocal_100 /*21*/] > 0)
			{
				if (func_118(Local_47[iLocal_100 /*21*/], &iLocal_327, 0))
				{
					if (Local_47[iLocal_100 /*21*/].f_1 > 0)
					{
						func_64(Local_47[iLocal_100 /*21*/].f_1);
					}
					iVar2 = 0;
					while (iVar2 < 3)
					{
						Local_332[PLAYER::PLAYER_ID() /*11*/].f_5[iVar2] = uLocal_84.f_4[iVar2];
						Local_332[PLAYER::PLAYER_ID() /*11*/].f_1[iVar2] = uLocal_84[iVar2];
						iVar2++;
					}
					Local_332[PLAYER::PLAYER_ID() /*11*/].f_9 = uLocal_84.f_8;
					func_55();
					MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
					iLocal_327 = 0;
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					Local_332[PLAYER::PLAYER_ID() /*11*/].f_5[iVar2] = uLocal_84.f_4[iVar2];
					Local_332[PLAYER::PLAYER_ID() /*11*/].f_1[iVar2] = uLocal_84[iVar2];
					iVar2++;
				}
				Local_332[PLAYER::PLAYER_ID() /*11*/].f_9 = uLocal_84.f_8;
				MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
				func_55();
				func_50((Local_47[iLocal_100 /*21*/].f_16 * iLocal_103));
			}
		}
		if (!MISC::IS_BIT_SET(Local_328.f_653[func_11(iLocal_100)], func_10(iLocal_100)) || MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 2))
		{
			if (Local_47[iLocal_100 /*21*/] > 0)
			{
				if (MISC::IS_BIT_SET(iLocal_60, 16))
				{
					func_164(22);
				}
				else if (MISC::IS_BIT_SET(iLocal_60, 14))
				{
					if (MISC::IS_BIT_SET(iLocal_60, 29))
					{
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 4);
					}
					else
					{
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 3);
					}
					func_164(19);
				}
				else
				{
					func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 2);
					func_164(18);
				}
				Var1 = { func_49(Local_47[iLocal_100 /*21*/].f_17, 1) };
				func_47(&Var1);
				iVar4 = func_45(Local_48.f_1[0 /*65*/][uLocal_84[0]], Local_48.f_1[1 /*65*/][uLocal_84[1]], Local_48.f_1[2 /*65*/][uLocal_84[2]]);
				if (iVar4 == 6)
				{
					func_44(Local_47[iLocal_100 /*21*/].f_17, Local_47[iLocal_100 /*21*/]);
				}
				func_174(2, iVar4, Local_47[iLocal_100 /*21*/], Local_47[iLocal_100 /*21*/].f_1);
			}
			else
			{
				if (MISC::IS_BIT_SET(iLocal_60, 15))
				{
					func_164(24);
				}
				else
				{
					func_164(23);
				}
				func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 1);
				Var1 = { func_49(Local_47[iLocal_100 /*21*/].f_17, 0) };
				func_47(&Var1);
			}
			func_43(Local_47[iLocal_100 /*21*/]);
			MISC::CLEAR_BIT(&iLocal_60, 3);
			MISC::CLEAR_BIT(&iLocal_60, 4);
			MISC::CLEAR_BIT(&iLocal_60, 5);
			MISC::CLEAR_BIT(&iLocal_60, 24);
		}
	}
}

void func_43(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_97, "SET_LAST_WIN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 4);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 5);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 6);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 7);
			break;
		
		case 5:
			if (iParam1 >= 1000000)
			{
				MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 3);
			}
			else
			{
				MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 10);
			}
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 8);
			break;
		
		case 7:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 2);
			break;
		
		case 8:
			MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 9);
			break;
	}
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == iParam1 && iParam1 == iParam2)
	{
		return func_46(iParam0, 3);
	}
	else
	{
		if (iParam0 == 7)
		{
			iVar0++;
		}
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			return func_46(7, iVar0);
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
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
			if (iParam1 == 3)
			{
				return 7;
			}
			else if (iParam1 == 2)
			{
				return 8;
			}
			else if (iParam1 == 1)
			{
				return 9;
			}
			break;
	}
	return 0;
}

void func_47(char* sParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_97, "SET_MESSAGE");
	func_48(sParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_48(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

struct<6> func_49(int iParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "SLOTS_MES", 24);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 17);
	if (bParam1)
	{
		StringConCat(&Var0, "P", 24);
	}
	else
	{
		StringConCat(&Var0, "N", 24);
	}
	StringIntConCat(&Var0, iParam0, 24);
	if (iVar1 < 10)
	{
		StringConCat(&Var0, "0", 24);
		StringIntConCat(&Var0, iVar1, 24);
	}
	else
	{
		StringIntConCat(&Var0, iVar1, 24);
	}
	return Var0;
}

void func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_54();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_53();
	if (iVar0 == 0)
	{
		func_52();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26159)
	{
		func_51();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26160)
	{
		func_33(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26160);
		func_51();
		Global_2458546 = 1;
	}
	else
	{
		func_33(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 - iParam0));
	}
}

void func_51()
{
	func_52();
}

void func_52()
{
	func_33(joaat("MPPLY_CASINO_CHIPS_WONTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_53()
{
	return func_39(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_54()
{
	return func_39(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_55()
{
	struct<22> Var0;
	
	if (Global_262145.f_25805)
	{
		if (Local_47[iLocal_100 /*21*/] > 0)
		{
			Local_83.f_3++;
		}
		else
		{
			Local_83.f_4++;
		}
		Local_83.f_2 = (Local_83.f_2 + (Local_47[iLocal_100 /*21*/] - (iLocal_103 * Local_47[iLocal_100 /*21*/].f_16)));
	}
	if (Global_262145.f_25799)
	{
		Var0 = -1867894674;
		Var0.f_1 = -1125105727;
		Var0.f_2 = iLocal_100;
		if (func_191())
		{
			switch (func_187())
			{
				case 0:
					Var0.f_4 = MISC::GET_HASH_KEY("win cutoff");
					break;
				
				case 1:
					Var0.f_4 = MISC::GET_HASH_KEY("loss cutoff");
					break;
				
				case 2:
					Var0.f_4 = MISC::GET_HASH_KEY("time cutoff");
					break;
			}
		}
		else if (Local_47[iLocal_100 /*21*/] > 0)
		{
			Var0.f_4 = -562306862;
		}
		else
		{
			Var0.f_4 = -1851302466;
		}
		Var0.f_6 = (Local_47[iLocal_100 /*21*/] - (iLocal_103 * Local_47[iLocal_100 /*21*/].f_16));
		Var0.f_7 = func_185();
		Var0.f_10 = (MISC::IS_BIT_SET(iLocal_60, 20) || MISC::IS_BIT_SET(iLocal_61, 1));
		Var0.f_11 = func_63(PLAYER::PLAYER_ID());
		Var0.f_12 = (iLocal_103 * Local_47[iLocal_100 /*21*/].f_16);
		Var0.f_14 = Local_47[iLocal_100 /*21*/];
		if (iLocal_103 == 5)
		{
			Var0.f_5 = 1;
		}
		else
		{
			Var0.f_5 = 0;
		}
		Var0.f_15 = Local_47[iLocal_100 /*21*/] > 0;
		Var0.f_17 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iLocal_95, NETWORK::GET_NETWORK_TIME()));
		Var0.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Var0.f_19 = NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
		Var0.f_21 = Local_47[iLocal_100 /*21*/].f_17;
		if (func_63(PLAYER::PLAYER_ID()))
		{
			Var0.f_20 = 1983458449;
		}
		else if (func_62())
		{
			Var0.f_20 = 1334658487;
		}
		else if (func_56())
		{
			Var0.f_20 = 980726932;
		}
		else
		{
			Var0.f_20 = 939907746;
		}
		iLocal_93 = 0;
		STATS::_PLAYSTATS_CASINO_SLOTMACHINE(&Var0);
	}
}

int func_56()
{
	int iVar0;
	
	if (func_60(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_59();
		if (iVar0 == func_58())
		{
			return 0;
		}
		else
		{
			return func_57(iVar0);
		}
	}
	return 0;
}

bool func_57(int iParam0)
{
	if (iParam0 == func_58())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_1, 18);
}

int func_58()
{
	return -1;
}

int func_59()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

bool func_60(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_61(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_58();
}

int func_61(int iParam0)
{
	if (iParam0 != func_58())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_58())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_62()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_362.f_1, 18);
}

int func_63(int iParam0)
{
	if (iParam0 != func_58())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<9> Var2[20];
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_47[iLocal_100 /*21*/].f_17 == 8)
	{
		if (iParam0 == 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 25, false, false);
		}
		else
		{
			func_117(iParam0, &iVar0, &iVar1);
			WEAPON::_ADD_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		}
	}
	else if (Local_47[iLocal_100 /*21*/].f_17 == 4)
	{
		iLocal_46 = -1;
		iVar4 = 0;
		while (iVar4 < 36)
		{
			func_114(iVar4, &(Var2[iVar3 /*9*/]));
			if (Var2[iVar3 /*9*/].f_7 == iParam0)
			{
				if (!func_111(Var2[iVar3 /*9*/], -1, -1))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 > 0)
		{
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
			func_110(Var2[iVar5 /*9*/], 1, -1, 1);
			iLocal_46 = Var2[iVar5 /*9*/].f_8;
		}
		else
		{
			func_65(0, "SLOT MACHINE RP", -1827353931, 1223799452, Global_262145.f_26870, 1, -1, 0);
		}
	}
	MISC::SET_BIT(&iLocal_60, 16);
	return 1;
}

var func_65(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_66(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_66(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_109(PLAYER::PLAYER_ID()) || func_108(PLAYER::PLAYER_ID()))
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
	else if (func_105() || func_101(PLAYER::PLAYER_ID()))
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
	if (func_100(sParam2))
	{
	}
	if (func_99())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_97(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_96(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_93(0, &iVar1);
					break;
				
				case 3:
					func_93(1, &iVar1);
					break;
				
				case 1:
					func_89(&iVar1);
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
			func_86(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_75((func_85(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_2 != -1)
				{
					func_86(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_69(iVar1);
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
				func_67((func_68(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_67((func_68(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_67(int iParam0)
{
	if (func_99())
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_5 = iParam0;
		func_33(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

int func_68(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_39(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_39(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_69(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_74(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_72(func_73(&Var0));
			if (iVar1 == 0)
			{
				func_71(&Global_1382581, iParam0);
				func_70(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_71(&Global_1382582, iParam0);
				func_70(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_71(&Global_1382583, iParam0);
				func_70(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_71(&Global_1382584, iParam0);
				func_70(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_71(&Global_1382585, iParam0);
				func_70(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1382585);
			}
		}
	}
}

void func_70(int iParam0, int iParam1)
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

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_72(int iParam0)
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

int func_73(var uParam0)
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

struct<13> func_74(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	if (func_99())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_84(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_84(-1)])
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
		if (func_83(PLAYER::PLAYER_ID()))
		{
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_6 = func_81(iParam0, 1);
		}
		func_80(639, iParam0, -1, 1);
		func_79(640, func_81(iParam0, 1), -1, 1, 0);
		Global_1382702[func_84(-1)] = iParam0;
		func_76(7, 0);
	}
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_78(iParam0, iParam1))
	{
		iVar0 = func_77();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_77()
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

int func_78(int iParam0, var uParam1)
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

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_84(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_84(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_84(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_84(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_84(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_84(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_84(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_84(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_84(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_84(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_84(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_84(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_84(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_84(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_84(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_84(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_84(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_84(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_84(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_84(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_84(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_84(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_84(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_84(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_84(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_84(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_84(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_84(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_84(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_84(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_84(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_84(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_84(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_84(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_84(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_84(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_84(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_84(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_84(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_84(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_84(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_84(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_84(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_84(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_84(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_82(iParam0, 0);
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
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

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_85(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_84(-1)];
			}
			else if (func_83(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_84(-1)];
	}
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_88(iParam0, func_84(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_87(iParam0))
	{
		func_79(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_80(iParam0, iVar0, iParam2, 1);
	}
}

int func_87(int iParam0)
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

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_89(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_92(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_91(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_90(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_90(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_90(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_91(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2505680 = { func_74(iParam0) };
		Global_2505693 = { func_74(iParam1) };
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

int func_92(int iParam0, int iParam1, int iParam2)
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

void func_93(bool bParam0, int iParam1)
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_91(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_94(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_91(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_90(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_90(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_94(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_95(iParam0), func_95(iParam1));
	return 0f;
}

Vector3 func_95(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_90(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_97(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_85(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_85(PLAYER::PLAYER_ID());
		}
	}
	if (func_98(8000, 0, 0) > 0)
	{
		if (func_98(8000, 0, 0) < (iParam0 + func_85(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_98(8000, 0, 0) - func_85(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_98(int iParam0, bool bParam1, int iParam2)
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

int func_99()
{
	return 1;
}

int func_100(char* sParam0)
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

int func_101(int iParam0)
{
	return func_102(func_103(iParam0));
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_104(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_107();
	}
	return func_106(Global_4456448.f_138474);
}

int func_106(int iParam0)
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

var func_107()
{
	return Global_2448756.f_16;
}

bool func_108(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_109(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

int func_110(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_25();
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

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_113(iParam0, iParam1);
	uVar2 = func_112(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

void func_114(int iParam0, var uParam1)
{
	uParam1->f_8 = iParam0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 27147;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_27", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_27", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 1:
			*uParam1 = 27148;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_28", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_28", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 2:
			*uParam1 = 27149;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_33", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_33", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 3:
			*uParam1 = 27150;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_34", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_34", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 4:
			*uParam1 = 27151;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_35", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_35", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 5:
			*uParam1 = 27152;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_36", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_36", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 6:
			*uParam1 = 27153;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_37", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_37", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 7:
			*uParam1 = 27154;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_38", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_38", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 8:
			*uParam1 = 27155;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_39", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_39", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 9:
			*uParam1 = 27156;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_40", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_40", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 10:
			*uParam1 = 27157;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_41", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_41", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 11:
			*uParam1 = 27158;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_42", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_42", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 12:
			*uParam1 = 27159;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_6", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 13:
			*uParam1 = 27160;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_7", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 14:
			*uParam1 = 27161;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_8", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 15:
			*uParam1 = 27162;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_9", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 16:
			*uParam1 = 27163;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_10", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_10", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 17:
			*uParam1 = 27164;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_116", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_116", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 18:
			*uParam1 = 27165;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_117", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_117", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 19:
			*uParam1 = 27166;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_118", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_118", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 20:
			*uParam1 = 27167;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_119", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_119", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 21:
			*uParam1 = 27168;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_0", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_0", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 22:
			*uParam1 = 27169;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_1", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_1", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 23:
			*uParam1 = 27170;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_6", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 24:
			*uParam1 = 27171;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_7", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 25:
			*uParam1 = 27172;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_8", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 26:
			*uParam1 = 27173;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_9", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 27:
			*uParam1 = 27174;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_24", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_24", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 28:
			*uParam1 = 27175;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_25", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_25", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 29:
			*uParam1 = 27176;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_26", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_26", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 30:
			*uParam1 = 27177;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_29", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_29", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 31:
			*uParam1 = 27178;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_30", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_30", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 32:
			*uParam1 = 27179;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_31", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_31", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 33:
			*uParam1 = 27180;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_32", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_32", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 34:
			*uParam1 = 27181;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_43", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_43", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 35:
			*uParam1 = 27182;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_44", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_44", 24);
			}
			uParam1->f_7 = 3;
			break;
	}
}

bool func_115()
{
	return func_116(PLAYER::PLAYER_ID());
}

int func_116(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_117(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = joaat("AMMO_PISTOL");
			*uParam2 = 1500;
			break;
		
		case 2:
			*uParam1 = joaat("AMMO_PISTOL");
			*uParam2 = 3000;
			break;
		
		case 3:
			*uParam1 = joaat("AMMO_SMG");
			*uParam2 = 2000;
			break;
		
		case 4:
			*uParam1 = joaat("AMMO_SMG");
			*uParam2 = 4000;
			break;
		
		case 5:
			*uParam1 = joaat("AMMO_SHOTGUN");
			*uParam2 = 2000;
			break;
		
		case 6:
			*uParam1 = joaat("AMMO_SHOTGUN");
			*uParam2 = 4000;
			break;
		
		case 7:
			*uParam1 = joaat("AMMO_RIFLE");
			*uParam2 = 2500;
			break;
		
		case 8:
			*uParam1 = joaat("AMMO_RIFLE");
			*uParam2 = 5000;
			break;
		
		case 9:
			*uParam1 = joaat("AMMO_MG");
			*uParam2 = 5500;
			break;
		
		case 10:
			*uParam1 = joaat("AMMO_SNIPER");
			*uParam2 = 1000;
			break;
		
		case 11:
			*uParam1 = joaat("AMMO_MINIGUN");
			*uParam2 = 7000;
			break;
	}
}

bool func_118(int iParam0, int iParam1, int iParam2)
{
	return func_119(iParam0, 3, iParam1, iParam2, -1);
}

int func_119(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
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
	else if (!func_155(iParam1))
	{
	}
	else
	{
		iVar0 = func_185();
		iVar1 = (Global_262145.f_26157 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_153();
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
		if (func_134(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_185() - Global_1689891);
			func_133(iVar4, 1);
			func_131();
			func_130();
			Global_1689891 = (Global_1689891 + iVar4);
			if (iParam1 == 0)
			{
				func_124(iVar4);
				Global_2458546 = 1;
			}
			else if (iParam1 == 3)
			{
				func_123(iVar4);
				if (iVar4 >= Global_262145.f_26165)
				{
					Global_2458547 = 1;
				}
				else if (iVar4 >= Global_262145.f_26164)
				{
					Global_2458546 = 1;
				}
			}
			Var5 = func_122(iParam1);
			Var5.f_1 = func_121(iParam1, iParam3, iParam4);
			if (func_120(iParam1))
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

int func_120(int iParam0)
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

int func_121(int iParam0, int iParam1, int iParam2)
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

int func_122(int iParam0)
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

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_54();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_53();
	if (iVar0 == 0)
	{
		func_52();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26159)
	{
		func_51();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26161)
	{
		func_33(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26161);
		func_51();
		Global_2458546 = 1;
	}
	else
	{
		func_33(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_129();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_128();
	if (iVar0 == 0)
	{
		func_127();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26158)
	{
		func_126();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_125()
	{
		func_33(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_125());
		func_126();
		Global_2458546 = 1;
	}
	else
	{
		func_33(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

int func_125()
{
	if (func_63(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_25953;
	}
	return Global_262145.f_25952;
}

void func_126()
{
	func_127();
}

void func_127()
{
	func_33(joaat("MPPLY_CASINO_CHIPS_PURTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_128()
{
	return func_39(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_129()
{
	return func_39(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_130()
{
	if (MISC::IS_BIT_SET(Global_1689926, 6))
	{
		MISC::SET_BIT(&Global_1689926, 9);
		func_9(&Global_1689929, 0, 0);
	}
}

void func_131()
{
	if (func_132())
	{
		MISC::SET_BIT(&Global_1689926, 1);
	}
}

bool func_132()
{
	return (MISC::IS_BIT_SET(Global_1689926, 6) || MISC::IS_BIT_SET(Global_1689926, 5));
}

void func_133(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1689926, 6);
	Global_1689927 = iParam0;
	Global_1689928 = iParam1;
}

bool func_134(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_120(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_152())
	{
		if (*uParam0 == 0)
		{
			if (func_151() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_122(iParam1);
			iVar5 = -22148635;
			if (func_155(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_147(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_147(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_142())
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
			if (func_141(func_151()))
			{
				if (func_140(func_151()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_139(func_151()));
					if (func_155(iParam1))
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
				func_135(func_151());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 0))
	{
		if (func_155(iParam1))
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

void func_135(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_138(iParam0))
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
		func_136(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_136(var uParam0)
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
	func_137(&(uParam0->f_13));
	func_137(&(uParam0->f_13.f_13));
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

void func_137(var uParam0)
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

int func_138(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_140(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

int func_142()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_151();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_25()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_146(Global_4263509[iVar2 /*84*/].f_65.f_6, Global_4263509[iVar2 /*84*/].f_65.f_4, Global_4263509[iVar2 /*84*/].f_65.f_1) == 1)
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
	iVar3 = func_139(iVar2);
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
				func_143(Global_4263509[iVar2 /*84*/], iVar2);
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	return 0;
}

void func_143(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_145(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_144();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_144()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_145(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
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

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_25()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	iVar1 = func_151();
	if (iVar1 == -1)
	{
		if (!func_149(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_148(iParam1))
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

int func_148(int iParam0)
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

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_25()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_150(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_152())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = uParam0;
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
				func_143(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_151()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_139(iVar0) != 2147483647)
		{
			if (func_138(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_152()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_125() - func_128());
	iVar1 = (Global_262145.f_26157 - func_185());
	iVar2 = func_154();
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

int func_154()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_125();
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

int func_155(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 >= 0 && func_8(iParam0, &Local_47))
	{
		if ((iParam1 == 7 && iParam2 == 7) && iParam3 == 7)
		{
			return func_157(Local_47[iParam0 /*21*/].f_17, iParam4);
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 8;
					break;
				
				case 4:
					return 11;
					break;
				
				case 5:
					return 1;
					break;
				
				case 6:
					return 4;
					break;
				
				case 7:
					return 6;
					break;
				
				case 8:
					return 9;
					break;
				
				case 9:
					return 7;
					break;
				
				case 10:
					return 10;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 6:
				case 9:
					return 1;
					break;
				
				case 1:
				case 4:
				case 7:
				case 10:
					return 2;
					break;
				
				case 2:
				case 5:
				case 8:
				case 11:
					return 3;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (bParam4)
	{
	}
	MISC::CLEAR_BIT(&iLocal_60, 14);
	MISC::CLEAR_BIT(&iLocal_60, 15);
	MISC::CLEAR_BIT(&iLocal_60, 16);
	MISC::CLEAR_BIT(&iLocal_60, 29);
	MISC::CLEAR_BIT(&iLocal_61, 0);
	if (iParam1 == iParam2 && iParam2 == iParam3)
	{
		iVar1 = func_159(iParam1, 3);
		iVar1 = (iVar1 * (iLocal_103 * Local_47[iParam0 /*21*/].f_16));
		if (iParam1 >= 5)
		{
			MISC::SET_BIT(&iLocal_60, 14);
			if (iParam1 == 6)
			{
				MISC::SET_BIT(&iLocal_60, 29);
			}
		}
		else if (iParam1 >= 2)
		{
			MISC::SET_BIT(&iLocal_61, 0);
		}
		return iVar1;
	}
	else
	{
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iParam3 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			if (bParam4)
			{
			}
			iVar1 = func_159(7, iVar0);
			iVar1 = (iVar1 * (iLocal_103 * Local_47[iParam0 /*21*/].f_16));
			return iVar1;
		}
	}
	if (iParam1 == iParam2 && iParam1 >= 5)
	{
		MISC::SET_BIT(&iLocal_60, 15);
	}
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return Local_48.f_278[1];
		
		case 2:
			return Local_48.f_278[2];
		
		case 3:
			return Local_48.f_278[3];
		
		case 4:
			return Local_48.f_278[4];
		
		case 5:
			return Local_48.f_278[5];
		
		case 6:
			return Local_48.f_278[6];
		
		case 7:
			if (iParam1 == 3)
			{
				return Local_48.f_278[7];
			}
			else if (iParam1 == 2)
			{
				return Local_48.f_278[8];
			}
			else if (iParam1 == 1)
			{
				return Local_48.f_278[9];
			}
			break;
	}
	return 0;
}

void func_160(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_162(&iVar0, 0, iParam1))
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
		func_161(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_161(int iParam0)
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

int func_162(var uParam0, bool bParam1, int iParam2)
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

void func_163(bool bParam0, bool bParam1)
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

void func_164(int iParam0)
{
	vector3 vVar0[24];
	int iVar1;
	
	func_165(iParam0, &Local_98);
	iLocal_63 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_65, vLocal_66, 2, Local_98.f_17, Local_98.f_16, 1065353216, 0, 1065353216);
	if (iParam0 == 5 || iParam0 == 6)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_63, func_310(), &Local_98, 4f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 11 || iParam0 == 12)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_63, func_310(), &Local_98, 8f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 8 || iParam0 == 14)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_63, func_310(), &Local_98, 8f, -4f, 13, 16, 1148846080, 0);
	}
	else if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_63, func_310(), &Local_98, 2f, -1.5f, 13, 16, 2f, 0);
	}
	else
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_63, func_310(), &Local_98, 2f, -1.5f, 13, 16, 1148846080, 0);
		if (iParam0 == 15 || iParam0 == 9)
		{
			StringCopy(&cVar0, "vw_prop_casino_slot_0", 24);
			StringIntConCat(&cVar0, Local_47[iLocal_100 /*21*/].f_17, 24);
			StringConCat(&cVar0, "a", 24);
			iVar1 = MISC::GET_HASH_KEY(&cVar0);
			StringConCat(&Local_98, "_SLOTMACHINE", 64);
			NETWORK::_0x45F35C0EDC33B03B(iLocal_63, iVar1, vLocal_65, func_310(), &Local_98, 2f, -1.5f, 13);
		}
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_63);
	iLocal_64 = iParam0;
}

void func_165(int iParam0, char* sParam1)
{
	struct<8> Var0;
	
	sParam1->f_17 = 1;
	sParam1->f_16 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "enter_left", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "enter_right", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "enter_left_short", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "enter_right_short", 64);
			break;
		
		case 4:
			StringCopy(sParam1, "base_idle", 64);
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_166(4, &Var0, 1, 0);
			}
			else
			{
				func_166(4, &Var0, 5, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 5:
			StringCopy(sParam1, "press_betone_a", 64);
			break;
		
		case 6:
			StringCopy(sParam1, "press_betmax_a", 64);
			break;
		
		case 7:
			StringCopy(sParam1, "press_autospin", 64);
			break;
		
		case 8:
			StringCopy(sParam1, "press_spin", 64);
			func_166(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 9:
			StringCopy(sParam1, "pull_spin", 64);
			func_166(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 10:
			StringCopy(sParam1, "betidle_idle", 64);
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_166(10, &Var0, 1, 0);
			}
			else
			{
				func_166(10, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 11:
			StringCopy(sParam1, "betidle_press_betone", 64);
			func_166(11, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 12:
			StringCopy(sParam1, "betidle_press_betmax", 64);
			func_166(12, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 13:
			StringCopy(sParam1, "betidle_press_autospin", 64);
			break;
		
		case 14:
			StringCopy(sParam1, "betidle_press_spin", 64);
			func_166(14, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 15:
			StringCopy(sParam1, "betidle_pull_spin", 64);
			func_166(15, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 16:
			StringCopy(sParam1, "betidle_to_base_transition", 64);
			break;
		
		case 17:
			StringCopy(sParam1, "spinning", 64);
			func_166(17, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 18:
			StringCopy(sParam1, "win", 64);
			if (MISC::IS_BIT_SET(iLocal_61, 0))
			{
				func_166(18, &Var0, 4, 0);
			}
			else
			{
				func_166(18, &Var0, 7, 4);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 19:
			StringCopy(sParam1, "win_big", 64);
			func_166(19, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 20:
			StringCopy(sParam1, "win_to_spinning_wheel", 64);
			break;
		
		case 21:
			StringCopy(sParam1, "spinning_wheel", 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 22:
			StringCopy(sParam1, "win_spinning_wheel", 64);
			break;
		
		case 23:
			StringCopy(sParam1, "lose", 64);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (iVar1 >= 9)
			{
				func_166(23, &Var0, 6, 3);
			}
			else
			{
				func_166(23, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 24:
			StringCopy(sParam1, "lose_cruel", 64);
			func_166(24, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 25:
			StringCopy(sParam1, "exit_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 26:
			StringCopy(sParam1, "betidle_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 27:
			StringCopy(sParam1, "exit_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 28:
			StringCopy(sParam1, "betidle_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
	}
}

void func_166(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	if (iParam2 > 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
		if (iParam0 == 4)
		{
			iVar1 = iLocal_67;
		}
		else if (iParam0 == 10)
		{
			iVar1 = iLocal_68;
		}
		if (iVar0 == iVar1)
		{
			iVar0++;
			if (iVar0 >= iParam2)
			{
				iVar0 = 0;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			StringCopy(sParam1, "_a", 4);
			break;
		
		case 1:
			StringCopy(sParam1, "_b", 4);
			break;
		
		case 2:
			StringCopy(sParam1, "_c", 4);
			break;
		
		case 3:
			StringCopy(sParam1, "_d", 4);
			break;
		
		case 4:
			StringCopy(sParam1, "_e", 4);
			break;
		
		case 5:
			StringCopy(sParam1, "_f", 4);
			break;
		
		case 6:
			StringCopy(sParam1, "_g", 4);
			break;
	}
	if (iParam0 == 4)
	{
		iLocal_67 = iVar0;
	}
	else if (iParam0 == 10)
	{
		iLocal_68 = iVar0;
	}
}

int func_167(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_152() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_169(iParam0))
	{
		return func_168(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_168(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_155(iParam1))
	{
	}
	else
	{
		iVar0 = func_185();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_152() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_134(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1689891 - func_185());
			if (iParam1 == 1)
			{
				Global_2458547 = 1;
			}
			else if (iVar2 >= Global_262145.f_26166)
			{
				Global_2458546 = 1;
			}
			func_133(iVar2, 0);
			func_131();
			func_130();
			Global_1689891 = (Global_1689891 - iVar2);
			Var3 = func_122(iParam1);
			Var3.f_1 = func_121(iParam1, iParam3, iParam4);
			if (func_120(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1689891;
			Var3.f_7 = iParam5;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (func_191())
	{
		return 0;
	}
	iVar0 = func_185();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_171(iParam1);
	switch (iParam2)
	{
		case 1:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "no_win", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "small_win", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "big_win", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 4:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "jackpot", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 5:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_bet", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_max_bet", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 7:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spinning", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 8:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "start_spin", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 9:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_clunk", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 10:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_on_prize", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 11:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "welcome_stinger", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 12:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
		
		case 13:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel_win", PLAYER::GET_PLAYER_PED(iParam0), iVar0, true, 20);
			break;
	}
}

char* func_171(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_player_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_player_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_player_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_player_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_player_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_player_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_player_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_player_sounds";
		
		default:
	}
	return "";
}

void func_172(int iParam0)
{
	if (iParam0 == 0)
	{
		if (iLocal_64 == 4 || (iLocal_64 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
		{
			func_164(5);
		}
		else if (iLocal_64 == 10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			func_164(11);
		}
	}
	else if (iParam0 == 1)
	{
		if (iLocal_64 == 4 || (iLocal_64 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
		{
			func_164(6);
		}
		else if (iLocal_64 == 10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			func_164(12);
		}
	}
}

void func_173(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_97, "SET_BET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_174(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	struct<2> Var1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iLocal_80 != iParam0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		switch (iParam0)
		{
			case 1:
				func_181("SLOTS_HELPB", Local_47[iLocal_100 /*21*/].f_16, Local_47[iLocal_100 /*21*/].f_16 * 5);
				break;
			
			case 2:
			case 3:
				if (iParam1 == 1 && Local_47[iLocal_100 /*21*/].f_17 == 8)
				{
					StringCopy(&vVar2, "SLOTS_HELPW1b", 24);
				}
				else
				{
					StringCopy(&vVar2, "SLOTS_HELPW", 24);
					if (iParam1 >= 0)
					{
						StringIntConCat(&vVar2, iParam1, 24);
					}
					if ((iParam1 == 9 || iParam1 == 8) || iParam1 == 7)
					{
						StringIntConCat(&vVar2, Local_47[iLocal_100 /*21*/].f_17, 24);
					}
				}
				if (func_8(iLocal_100, &Local_47))
				{
					if (iParam1 == 7 && iParam3 > 0)
					{
						if (Local_47[iLocal_100 /*21*/].f_17 == 8)
						{
							if (iParam3 != 12)
							{
								func_117(iParam3, &iVar3, &iVar4);
								WEAPON::_GET_MAX_AMMO_2(PLAYER::PLAYER_PED_ID(), iVar3, &iVar5);
								if (iVar5 < iVar4)
								{
									if (iVar3 == joaat("AMMO_PISTOL"))
									{
										StringIntConCat(&vVar2, 1, 24);
									}
									else if (iVar3 == joaat("AMMO_SMG"))
									{
										StringIntConCat(&vVar2, 3, 24);
									}
									else if (iVar3 == joaat("AMMO_SHOTGUN"))
									{
										StringIntConCat(&vVar2, 5, 24);
									}
									else if (iVar3 == joaat("AMMO_RIFLE"))
									{
										StringIntConCat(&vVar2, 7, 24);
									}
									else
									{
										StringIntConCat(&vVar2, iParam3, 24);
									}
									StringConCat(&vVar2, "a", 24);
								}
								else
								{
									StringIntConCat(&vVar2, iParam3, 24);
									StringConCat(&vVar2, "b", 24);
								}
							}
							else
							{
								StringIntConCat(&vVar2, iParam3, 24);
							}
						}
						else if (Local_47[iLocal_100 /*21*/].f_17 == 4)
						{
							bVar0 = true;
							if (iLocal_46 == -1)
							{
								StringCopy(&vVar2, "SLOTS_HELPW74b", 24);
								func_180(&vVar2, Global_262145.f_26870);
							}
							else
							{
								func_114(iLocal_46, &Var1);
								StringCopy(&vVar2, "SLOTS_HELPW74a", 24);
								func_175(&vVar2, &(Var1.f_1), iParam2, 1);
							}
						}
					}
				}
				if (!bVar0)
				{
					func_180(&vVar2, iParam2);
				}
				func_9(&uLocal_81, 1, 0);
				break;
		}
		iLocal_80 = iParam0;
	}
}

int func_175(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_176(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_176(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_179() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_23(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_177(iParam2);
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

int func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_178(iVar0);
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

void func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_179()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_180(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, false, -1);
}

void func_181(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, false, -1);
}

void func_182()
{
	if (iLocal_80 != 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		iLocal_80 = 0;
	}
}

void func_183()
{
	if (iLocal_64 == 4 || (iLocal_64 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
	{
		func_164(8);
	}
	else if (((iLocal_64 == 10 || iLocal_64 == 11) || iLocal_64 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
	{
		func_164(14);
	}
}

void func_184()
{
	if (iLocal_64 == 4 || (iLocal_64 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
	{
		func_164(9);
	}
	else if (((iLocal_64 == 10 || iLocal_64 == 11) || iLocal_64 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
	{
		func_164(15);
	}
}

int func_185()
{
	return func_88(8248, -1, 0);
}

void func_186(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_187()
{
	if (func_190() <= 0)
	{
		return 0;
	}
	if (func_189() <= 0)
	{
		return 1;
	}
	if (func_188())
	{
		return 2;
	}
	return 3;
}

bool func_188()
{
	return Global_1689908 != 0;
}

int func_189()
{
	return (Global_262145.f_26160 + func_53());
}

int func_190()
{
	return (Global_262145.f_26161 - func_53());
}

bool func_191()
{
	return func_187() != 3;
}

void func_192(int iParam0)
{
	struct<8> Var0;
	
	func_212(0);
	if (iLocal_100 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_60, 23))
		{
			Var0 = { func_194(Local_47[iLocal_100 /*21*/].f_17) };
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
			MISC::CLEAR_BIT(&iLocal_60, 23);
		}
	}
	func_193(-1);
	MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
	MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
	MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
	MISC::CLEAR_BIT(&iLocal_60, 3);
	MISC::CLEAR_BIT(&iLocal_60, 4);
	MISC::CLEAR_BIT(&iLocal_60, 5);
	MISC::CLEAR_BIT(&iLocal_60, 24);
	MISC::CLEAR_BIT(&iLocal_60, 21);
	MISC::CLEAR_BIT(&iLocal_60, 22);
	iLocal_103 = 1;
	func_292(6);
	func_164(iParam0);
	func_182();
}

void func_193(int iParam0)
{
	if (iParam0 >= 0)
	{
		iLocal_101 = iParam0;
	}
	iLocal_100 = iParam0;
	Local_332[PLAYER::PLAYER_ID() /*11*/] = iParam0;
	iLocal_102 = -1;
}

struct<8> func_194(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "CasinoUI_Slots_Angel", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "CasinoUI_Slots_Impotent", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "CasinoUI_Slots_Ranger", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "CasinoUI_Slots_Fame", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "CasinoUI_Slots_Deity", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "CasinoUI_Slots_Knife", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "CasinoUI_Slots_Diamond", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "CasinoUI_Slots_Evacuator", 32);
			break;
	}
	return Var0;
}

int func_195(int iParam0)
{
	vector3 vVar0;
	bool bVar1;
	var uVar2;
	
	if (func_211(0, &uVar2))
	{
		StringCopy(&vVar0, "SLOTS_REGBAN", 24);
		bVar1 = true;
	}
	else if (func_191())
	{
		if (func_187() == 2)
		{
			StringCopy(&vVar0, "CAS_MG_CTIME", 24);
			bVar1 = true;
		}
		else
		{
			StringCopy(&vVar0, "CAS_MG_CBAN", 24);
			bVar1 = true;
		}
	}
	else if (!func_62() && !func_56())
	{
		StringCopy(&vVar0, "CAS_MG_MEMB2", 24);
		bVar1 = true;
	}
	else if (func_185() <= 0)
	{
		StringCopy(&vVar0, "CAS_MG_NOCHIPS1", 24);
		bVar1 = true;
	}
	else if (func_185() < Local_47[iParam0 /*21*/].f_16)
	{
		StringCopy(&vVar0, "CAS_MG_LOWCHIPS1", 24);
		bVar1 = true;
	}
	else if ((((((((Global_262145.f_25933 || (Global_262145.f_25940 && Local_47[iParam0 /*21*/].f_17 == 1)) || (Global_262145.f_25938 && Local_47[iParam0 /*21*/].f_17 == 2)) || (Global_262145.f_25935 && Local_47[iParam0 /*21*/].f_17 == 3)) || (Global_262145.f_25936 && Local_47[iParam0 /*21*/].f_17 == 4)) || (Global_262145.f_25939 && Local_47[iParam0 /*21*/].f_17 == 5)) || (Global_262145.f_25937 && Local_47[iParam0 /*21*/].f_17 == 6)) || (Global_262145.f_25934 && Local_47[iParam0 /*21*/].f_17 == 7)) || (Global_262145.f_25941 && Local_47[iParam0 /*21*/].f_17 == 8))
	{
		StringCopy(&vVar0, "SLOTS_ENTERB", 24);
		bVar1 = true;
	}
	if ((((func_210() || func_209()) || func_208()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		bVar1 = true;
		MISC::SET_BIT(&iLocal_60, 6);
	}
	if (func_202())
	{
		bVar1 = true;
		MISC::SET_BIT(&iLocal_60, 6);
	}
	if (bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&vVar0, "CAS_MG_MEMB2"))
		{
			if (!func_200("CAS_MG_MEMB2", func_201(1)))
			{
				func_199("CAS_MG_MEMB2", func_201(1));
			}
			MISC::SET_BIT(&iLocal_60, 6);
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 52))
			{
				HUD::CLEAR_HELP(1);
				func_198();
				func_292(2);
			}
		}
		else if (!MISC::IS_BIT_SET(iLocal_60, 6))
		{
			func_182();
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_186(&vVar0, -1);
				MISC::SET_BIT(&iLocal_60, 6);
			}
		}
		if (iLocal_99 != -1)
		{
			func_196(&iLocal_99);
		}
		return 0;
	}
	return 1;
}

void func_196(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_197(*iParam0);
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

int func_197(int iParam0)
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

void func_198()
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_201(0), false, true, 0, -1, 0))
	{
		func_186("MAITRD_M_D0E", -1);
	}
	else if (func_57(PLAYER::PLAYER_ID()))
	{
	}
	else if (MISC::IS_BIT_SET(Global_1671295.f_5, 31))
	{
	}
	else if (Global_4264077 != 0)
	{
	}
	else
	{
		MISC::SET_BIT(&(Global_1671295.f_5), 30);
	}
}

void func_199(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_200(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_201(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_202()
{
	int iVar0;
	
	if (func_60(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_59();
		if (func_12(iVar0, 1, 1) && MISC::IS_BIT_SET(Global_1589819[iVar0 /*818*/].f_273.f_362.f_3, 6))
		{
			return 1;
		}
		if ((func_104(PLAYER::PLAYER_ID(), 0) && func_206(PLAYER::PLAYER_ID())) || func_203(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	if (func_205(iParam0) != func_58())
	{
		return func_205(iParam0) == func_204(iParam0);
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 != func_58())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_58();
}

int func_205(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_207(iParam0, 9);
	}
	return 0;
}

bool func_207(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

bool func_208()
{
	return MISC::IS_BIT_SET(Global_2448756.f_2, 11);
}

bool func_209()
{
	return MISC::IS_BIT_SET(Global_2448756, 20);
}

bool func_210()
{
	return Global_2448756.f_579;
}

int func_211(int iParam0, var uParam1)
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

void func_212(bool bParam0)
{
	struct<17> Var0;
	
	if (Global_262145.f_25805)
	{
		Var0 = -1125105727;
		Var0.f_1 = iLocal_100;
		if (func_191())
		{
			switch (func_187())
			{
				case 0:
					Var0.f_2 = MISC::GET_HASH_KEY("win cutoff");
					break;
				
				case 1:
					Var0.f_2 = MISC::GET_HASH_KEY("loss cutoff");
					break;
				
				case 2:
					Var0.f_2 = MISC::GET_HASH_KEY("time cutoff");
					break;
			}
		}
		else if (bParam0)
		{
			Var0.f_2 = 1330140418;
		}
		else
		{
			Var0.f_2 = joaat("QUIT");
		}
		Var0.f_3 = Local_83.f_2;
		Var0.f_4 = func_185();
		if (bParam0)
		{
			Var0.f_5 = 120000;
		}
		else if (iLocal_94)
		{
			Var0.f_5 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iLocal_96, NETWORK::GET_NETWORK_TIME()));
		}
		Var0.f_6 = (MISC::IS_BIT_SET(iLocal_60, 20) || MISC::IS_BIT_SET(iLocal_61, 1));
		Var0.f_7 = Local_83.f_5;
		Var0.f_10 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Var0.f_11 = NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
		Var0.f_12 = (Local_83.f_3 + Local_83.f_4);
		Var0.f_13 = Local_83.f_3;
		Var0.f_14 = Local_83.f_4;
		Var0.f_16 = Local_47[iLocal_100 /*21*/].f_17;
		if (func_63(PLAYER::PLAYER_ID()))
		{
			Var0.f_15 = 1983458449;
		}
		else if (func_62())
		{
			Var0.f_15 = 1334658487;
		}
		else if (func_56())
		{
			Var0.f_15 = 980726932;
		}
		else
		{
			Var0.f_15 = 939907746;
		}
		STATS::_PLAYSTATS_CASINO_SLOTMACHINE_LIGHT(&Var0);
		func_4(&Local_83);
		Local_83.f_2 = 0;
		Local_83.f_3 = 0;
		Local_83.f_4 = 0;
		Local_83.f_5 = 0;
		iLocal_94 = 0;
	}
}

void func_213(int iParam0)
{
	var uVar0;
	float fVar1;
	
	func_214(iLocal_100, &uVar0, &fVar1);
	switch (iParam0)
	{
		case 0:
			if (CAM::_0xEE778F8C7E1142E2(0) != 4)
			{
				CAM::_0x2A2173E46DAECD12(0, 4);
			}
			break;
		
		case 1:
			if (CAM::_0xEE778F8C7E1142E2(0) != 0)
			{
				CAM::_0x2A2173E46DAECD12(0, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			break;
	}
	iLocal_72 = iParam0;
}

void func_214(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.483f, 230.4082f, -50.8409f };
			*fParam2 = 45f;
			break;
		
		case 1:
			*uParam1 = { 1100.939f, 231.0017f, -50.8409f };
			*fParam2 = 60f;
			break;
		
		case 2:
			*uParam1 = { 1101.221f, 231.6943f, -50.8409f };
			*fParam2 = 75f;
			break;
		
		case 3:
			*uParam1 = { 1101.323f, 232.4321f, -50.8409f };
			*fParam2 = 90f;
			break;
		
		case 4:
			*uParam1 = { 1101.229f, 233.1719f, -50.8409f };
			*fParam2 = 105f;
			break;
		
		case 5:
			*uParam1 = { 1108.938f, 239.4797f, -50.8409f };
			*fParam2 = -45f;
			break;
		
		case 6:
			*uParam1 = { 1109.536f, 239.0278f, -50.8409f };
			*fParam2 = -30f;
			break;
		
		case 7:
			*uParam1 = { 1110.229f, 238.7428f, -50.8409f };
			*fParam2 = -15f;
			break;
		
		case 8:
			*uParam1 = { 1110.974f, 238.642f, -50.8409f };
			*fParam2 = 0f;
			break;
		
		case 9:
			*uParam1 = { 1111.716f, 238.7384f, -50.8409f };
			*fParam2 = 15f;
			break;
		
		case 10:
			*uParam1 = { 1112.407f, 239.0216f, -50.8409f };
			*fParam2 = 30f;
			break;
		
		case 11:
			*uParam1 = { 1112.999f, 239.4742f, -50.8409f };
			*fParam2 = 45f;
			break;
		
		case 12:
			*uParam1 = { 1120.853f, 233.1621f, -50.8409f };
			*fParam2 = -105f;
			break;
		
		case 13:
			*uParam1 = { 1120.753f, 232.4272f, -50.8409f };
			*fParam2 = -90f;
			break;
		
		case 14:
			*uParam1 = { 1120.853f, 231.6886f, -50.8409f };
			*fParam2 = -75f;
			break;
		
		case 15:
			*uParam1 = { 1121.135f, 230.9999f, -50.8409f };
			*fParam2 = -60f;
			break;
		
		case 16:
			*uParam1 = { 1121.592f, 230.4106f, -50.8409f };
			*fParam2 = -45f;
			break;
		
		case 17:
			*uParam1 = { 1104.572f, 229.4451f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 18:
			*uParam1 = { 1104.302f, 230.3183f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 19:
			*uParam1 = { 1105.049f, 230.845f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 20:
			*uParam1 = { 1105.781f, 230.2973f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 21:
			*uParam1 = { 1105.486f, 229.4322f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 22:
			*uParam1 = { 1108.005f, 233.9177f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 23:
			*uParam1 = { 1107.735f, 234.7909f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 24:
			*uParam1 = { 1108.482f, 235.3176f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 25:
			*uParam1 = { 1109.214f, 234.7699f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 26:
			*uParam1 = { 1108.919f, 233.9048f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 27:
			*uParam1 = { 1113.64f, 233.6755f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 28:
			*uParam1 = { 1113.37f, 234.5486f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 29:
			*uParam1 = { 1114.117f, 235.0753f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 30:
			*uParam1 = { 1114.848f, 234.5277f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 31:
			*uParam1 = { 1114.554f, 233.6625f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 32:
			*uParam1 = { 1116.662f, 228.8896f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 33:
			*uParam1 = { 1116.392f, 229.7628f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 34:
			*uParam1 = { 1117.139f, 230.2895f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 35:
			*uParam1 = { 1117.871f, 229.7419f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 36:
			*uParam1 = { 1117.576f, 228.8767f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 37:
			*uParam1 = { 1129.64f, 250.451f, -52.0409f };
			*fParam2 = 180f;
			break;
		
		case 38:
			*uParam1 = { 1130.376f, 250.3577f, -52.0409f };
			*fParam2 = 165f;
			break;
		
		case 39:
			*uParam1 = { 1131.062f, 250.0776f, -52.0409f };
			*fParam2 = 150f;
			break;
		
		case 40:
			*uParam1 = { 1131.655f, 249.6264f, -52.0409f };
			*fParam2 = 135f;
			break;
		
		case 41:
			*uParam1 = { 1132.109f, 249.0355f, -52.0409f };
			*fParam2 = 120f;
			break;
		
		case 42:
			*uParam1 = { 1132.396f, 248.3382f, -52.0409f };
			*fParam2 = 105f;
			break;
		
		case 43:
			*uParam1 = { 1132.492f, 247.5984f, -52.0409f };
			*fParam2 = 90f;
			break;
		
		case 44:
			*uParam1 = { 1133.952f, 256.1037f, -52.0409f };
			*fParam2 = -45f;
			break;
		
		case 45:
			*uParam1 = { 1133.827f, 256.9098f, -52.0409f };
			*fParam2 = -117f;
			break;
		
		case 46:
			*uParam1 = { 1134.556f, 257.2778f, -52.0409f };
			*fParam2 = 171f;
			break;
		
		case 47:
			*uParam1 = { 1135.132f, 256.699f, -52.0409f };
			*fParam2 = 99f;
			break;
		
		case 48:
			*uParam1 = { 1134.759f, 255.9734f, -52.0409f };
			*fParam2 = 27f;
			break;
		
		case 49:
			*uParam1 = { 1138.195f, 251.8611f, -52.0409f };
			*fParam2 = -45f;
			break;
		
		case 50:
			*uParam1 = { 1138.07f, 252.6677f, -52.0409f };
			*fParam2 = -117f;
			break;
		
		case 51:
			*uParam1 = { 1138.799f, 253.0363f, -52.0409f };
			*fParam2 = 171f;
			break;
		
		case 52:
			*uParam1 = { 1139.372f, 252.4563f, -52.0409f };
			*fParam2 = 99f;
			break;
		
		case 53:
			*uParam1 = { 1139f, 251.7306f, -52.0409f };
			*fParam2 = 27f;
			break;
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1689926, 2);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1689926, 2);
	}
}

bool func_216()
{
	return MISC::IS_BIT_SET(Global_1689926, 2);
}

bool func_217(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

bool func_218()
{
	return Global_68807;
}

bool func_219()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_220()
{
	if (iLocal_72 == 0 && CAM::_0xEE778F8C7E1142E2(0) == 4)
	{
	}
}

void func_221()
{
	int iVar0;
	bool bVar1;
	
	if (iLocal_64 == 10)
	{
		if (!func_311(&uLocal_74))
		{
			func_6(&uLocal_74, 1, 0);
		}
		else if (func_5(&uLocal_74, 10000, 1))
		{
			MISC::CLEAR_BIT(&iLocal_60, 0);
			func_164(16);
			return;
		}
	}
	else
	{
		func_4(&uLocal_74);
	}
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_63);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (iLocal_64 == 4 || iLocal_64 == 16)
		{
			func_164(4);
		}
		else if (iLocal_64 == 10)
		{
			func_164(10);
		}
		else if (((((iLocal_64 == 5 || iLocal_64 == 6) || iLocal_64 == 7) || iLocal_64 == 11) || iLocal_64 == 12) || iLocal_64 == 13)
		{
			MISC::CLEAR_BIT(&iLocal_60, 0);
			func_164(10);
		}
		else if ((((iLocal_64 == 18 || iLocal_64 == 19) || iLocal_64 == 23) || iLocal_64 == 24) || iLocal_64 == 22)
		{
			func_164(10);
		}
		else if (iLocal_64 == 20)
		{
			func_164(21);
		}
		else if (((iLocal_64 == 8 || iLocal_64 == 9) || iLocal_64 == 14) || iLocal_64 == 15)
		{
			func_164(17);
		}
	}
}

void func_222()
{
	vector3 vVar0;
	
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		if (!iLocal_73)
		{
			MISC::CLEAR_BIT(&iLocal_60, 0);
		}
		iLocal_73 = 1;
	}
	else
	{
		if (iLocal_73)
		{
			MISC::CLEAR_BIT(&iLocal_60, 0);
		}
		iLocal_73 = 0;
	}
	if (!MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 0))
	{
		if (((iLocal_64 == 4 || iLocal_64 == 10) || iLocal_64 == 11) || iLocal_64 == 12)
		{
			if (MISC::IS_BIT_SET(iLocal_60, 25))
			{
				MISC::CLEAR_BIT(&iLocal_60, 0);
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_60, 25);
	}
	if (iLocal_100 >= 0 && (iLocal_59 == 5 || MISC::IS_BIT_SET(iLocal_60, 31)))
	{
		func_266();
		if ((!MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 0) && !MISC::IS_BIT_SET(iLocal_60, 3)) && (((iLocal_64 == 4 || iLocal_64 == 10) || iLocal_64 == 11) || iLocal_64 == 12))
		{
			if (!func_311(&uLocal_81) || func_5(&uLocal_81, 5000, 1))
			{
				func_174(1, -1, -1, -1);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_60, 0))
		{
			if (MISC::IS_BIT_SET(iLocal_60, 21) || MISC::IS_BIT_SET(iLocal_60, 22))
			{
				MemCopy(&vVar0, {func_194(Local_47[iLocal_100 /*21*/].f_17)}, 6);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&vVar0, false);
				MISC::SET_BIT(&iLocal_60, 23);
				if (func_264(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&vVar0))
				{
					func_163(0, 0);
					func_262(1, &vVar0, &vVar0);
					func_261(-1, 1, 1);
					if (MISC::IS_BIT_SET(iLocal_60, 21))
					{
						func_260("SLOTS_RULEaT");
						StringCopy(&vVar0, "SLOTS_RULEa", 24);
						StringIntConCat(&vVar0, Local_47[iLocal_100 /*21*/].f_17, 24);
						func_259(&vVar0, 0, 0);
					}
					else if (MISC::IS_BIT_SET(iLocal_60, 22))
					{
						func_260("SLOTS_RULEbT");
						func_259("SLOTS_RULEb", 0, 0);
						func_258(Local_47[iLocal_100 /*21*/].f_16);
						func_258(Local_47[iLocal_100 /*21*/].f_16 * 5);
					}
					if (MISC::IS_BIT_SET(iLocal_60, 21))
					{
						func_257(1, 1, 2);
					}
					else
					{
						func_257(1, 2, 2);
					}
					func_256(202, "SLOTS_RULEBK", -1);
					func_255(8, "SLOTS_RULENEXT", -1);
					MISC::SET_BIT(&iLocal_60, 0);
					func_232(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
					func_231(1);
				}
			}
			else if (func_264(0, -1, 0))
			{
				func_163(0, 0);
				if (!MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 0) && (((((iLocal_64 == 4 || iLocal_64 == 10) || iLocal_64 == 11) || iLocal_64 == 12) || MISC::IS_BIT_SET(iLocal_60, 31)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
				{
					func_256(202, "SLOTS_EXIT", -1);
					func_230("SLOTS_SPIN", PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 208, true), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, true), 0, 0);
					func_256(203, "SLOTS_BET", -1);
					if (iLocal_103 < 5)
					{
						func_256(204, "SLOTS_BETM", -1);
					}
				}
				func_256(210, "SLOTS_RULEIN", -1);
				MISC::SET_BIT(&iLocal_60, 0);
				func_223(0, -1, -1, 1, 0, 0, 1, 1, 0);
				func_231(1);
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(iLocal_60, 21) || MISC::IS_BIT_SET(iLocal_60, 22))
			{
				func_232(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else
			{
				func_223(0, -1, -1, 1, 0, 0, 1, 1, 0);
			}
			func_231(1);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_60, 0))
	{
		func_163(0, 0);
		func_160(1, -1);
		MISC::CLEAR_BIT(&iLocal_60, 0);
	}
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_162(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_227(bParam4, bParam8))
	{
		return;
	}
	if (func_225())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_23(PLAYER::PLAYER_ID(), 0))
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
					func_224(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_224(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_48(&(Global_17411.f_4964[iVar1 /*4*/]));
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
				func_224(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_48(&(Global_4267964.f_16));
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

void func_224(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_225()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_226())
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

int func_226()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_227(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_229(8, -1) && func_228() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_71850) || Global_17411.f_8352) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_228()
{
	return Global_1312802;
}

bool func_229(int iParam0, int iParam1)
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

void func_230(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (Global_17411.f_4769 >= 12)
	{
		return;
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam0, 16);
	Global_17411.f_4769++;
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam2, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), "PREV", 16);
	Global_17411.f_4769++;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam3, 64);
		StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), "PREV", 16);
		Global_17411.f_4769++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam4, 64);
		StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), "PREV", 16);
		Global_17411.f_4769++;
	}
}

void func_231(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_232(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_162(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_227(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_17411)
	{
		if (func_253(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_252())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_252())
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
			func_248(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_247(29), 64);
					StringCopy(&cVar64, func_245(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_244(Global_17408, Global_17409, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_244(Global_17408, (Global_17409 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17411.f_1)) != 0)
				{
					func_243();
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
					func_243();
					func_241((((Global_17408 + fParam5) - 0.00390625f) - func_242("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_243();
						func_241((((Global_17408 + fParam5) - 0.00390625f) - func_242("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
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
				func_244(Global_17408, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_253(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_240(fVar40);
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
				func_244(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_240(fVar40);
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
					func_253(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_239(Global_17411.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4768), func_245(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_253(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_240(fVar40);
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
				func_244(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_240(fVar40);
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
					func_253(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_239(Global_4267964.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_247(Global_4267964.f_67), func_245(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_223(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_253(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_253(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_236(bVar32);
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
												if (func_253(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_253(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_239(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar28)]), func_245(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar28)]), func_245(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_179() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_237(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_253(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_253(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_239(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar14)]), func_245(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar14)]), func_245(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar14)]), func_245(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_236(bVar32);
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
										if (func_253(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										func_235((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
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
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_236(bVar32);
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
										if (func_253(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
									func_234((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_253(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_253(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_239(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_239(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_253(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(Global_17411.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[iVar22]), func_245(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_233(Global_17411.f_4433[iVar22])), (fVar37 * func_233(Global_17411.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_282(0);
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
		func_231(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_233(int iParam0)
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

void func_234(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_235(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_236(bool bParam0)
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

void func_237(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_238(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_238(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_239(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_240(float fParam0)
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

void func_241(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_242(char* sParam0, int iParam1, int iParam2)
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
	func_243();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_243()
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

void func_244(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_245(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_74(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_246(&uVar1);
			}
		}
		else
		{
			return func_246(&(Global_17411.f_6997[iParam0 /*16*/]));
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

var func_246(var uParam0)
{
	return uParam0;
}

char* func_247(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_74(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_246(&uVar0);
		}
		else
		{
			return func_246(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_248(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_251(Global_17411.f_5218, 1);
	}
	else
	{
		func_251(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_250(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_253(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_249(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
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

float func_249(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_250(char* sParam0)
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
	func_237(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_251(int iParam0, bool bParam1)
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

int func_252()
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

int func_253(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_247(iParam0), 64);
	StringCopy(&cVar1, func_245(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_252())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_252())
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
		vVar7.x = (vVar7.x * (func_254(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_254(iParam0) / fVar4));
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

float func_254(int iParam0)
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

void func_255(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, true);
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

void func_256(int iParam0, char* sParam1, int iParam2)
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

void func_257(int iParam0, int iParam1, int iParam2)
{
	Global_17411.f_5735 = iParam0;
	Global_17411.f_5736 = iParam1;
	Global_17411.f_5737 = iParam2;
}

void func_258(var uParam0)
{
	if (Global_17411.f_4763 >= 3 || Global_17411.f_4762 >= 4)
	{
		return;
	}
	Global_17411.f_4696[Global_17411.f_4762] = 2;
	Global_17411.f_4762++;
	Global_17411.f_4701[Global_17411.f_4763] = uParam0;
	Global_17411.f_4763++;
}

void func_259(char* sParam0, int iParam1, int iParam2)
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

void func_260(char* sParam0)
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

void func_261(int iParam0, bool bParam1, int iParam2)
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

void func_262(int iParam0, char* sParam1, char* sParam2)
{
	Global_17411 = iParam0;
	func_263(29, sParam1, sParam2);
}

void func_263(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17411.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_6997[iParam0 /*16*/]), sParam2, 64);
}

bool func_264(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_162(&iVar0, 1, iParam1))
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
	bVar2 = func_265(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_265(var uParam0)
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

void func_266()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_97))
	{
		GRAPHICS::_0x32F34FF7F617643B(Local_97, 1);
		HUD::SET_TEXT_RENDER_ID(Local_97.f_1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_97, 0.401f, 0.09f, 0.805f, 0.195f, 255, 255, 255, 255, 0);
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_267(int iParam0)
{
	Global_1689901 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1689918 = iParam0;
	if (!func_273())
	{
		func_271();
	}
	if (!func_270())
	{
		func_268();
	}
}

void func_268()
{
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_269();
	func_32();
	Global_1689915 = 1;
	Global_1689910 = 0;
}

void func_269()
{
	func_33(joaat("MPPLY_CAS_GMBLNG_L24"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_1"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_2"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_3"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_4"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_5"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_6"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_7"), 0);
	func_33(joaat("MPPLY_CAS_GMBLNG_L24_8"), 0);
	func_33(joaat("MPPLY_CAS_CUR_GMBLNG_HR"), 0);
	func_33(joaat("MPPLY_CAS_24H_GMBLNG_PX"), 0);
}

bool func_270()
{
	return Global_1689915;
}

void func_271()
{
	func_33(joaat("MPPLY_CASINO_GMBLNG_GD"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_34();
	func_272((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
	Global_1689914 = 1;
}

void func_272(int iParam0)
{
	Global_1689909 = iParam0;
}

bool func_273()
{
	return func_39(joaat("MPPLY_CASINO_GMBLNG_GD")) != 0;
}

int func_274()
{
	int iVar0;
	struct<6> Var1;
	
	switch (iLocal_62)
	{
		case 0:
			if (func_281())
			{
				if (func_280())
				{
					func_173((Local_47[iLocal_100 /*21*/].f_16 * iLocal_103));
					func_43(0);
					Var1 = { func_49(Local_47[iLocal_100 /*21*/].f_17, 1) };
					func_47(&Var1);
					func_279(Local_47[iLocal_100 /*21*/].f_17);
					func_278(iLocal_100, &vLocal_65, &vLocal_66);
					iLocal_69 = func_277();
					MISC::CLEAR_BIT(&iLocal_60, 26);
					MISC::SET_BIT(&iLocal_60, 26);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_276(iLocal_69), 1f, 7000, 0.05f, 0, func_275(iLocal_69));
					MISC::CLEAR_BIT(&iLocal_60, 30);
					MISC::CLEAR_BIT(&iLocal_60, 31);
					iLocal_62++;
				}
			}
			break;
		
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), func_276(iLocal_69), false) <= 0.25f)
			{
				MISC::SET_BIT(&iLocal_60, 26);
			}
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0) && !TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID())) || (MISC::IS_BIT_SET(iLocal_60, 26) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0))
			{
				if (CAM::_0xEE778F8C7E1142E2(0) == 1 || CAM::_0xEE778F8C7E1142E2(0) == 2)
				{
					CAM::_0x2A2173E46DAECD12(0, 0);
				}
				if (CAM::_0xEE778F8C7E1142E2(0) == 4)
				{
					CAM::_0x79C0E43EB9B944E2(518572876);
				}
				func_164(iLocal_69);
				iLocal_62++;
			}
			break;
		
		case 2:
			iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_63);
			CAM::_0x79C0E43EB9B944E2(518572876);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
				{
					MISC::SET_BIT(&iLocal_60, 31);
					func_42();
					if (MISC::IS_BIT_SET(iLocal_60, 30))
					{
						MISC::CLEAR_BIT(&iLocal_60, 30);
						MISC::CLEAR_BIT(&iLocal_60, 31);
						return 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 11);
					func_164(4);
					iLocal_62++;
				}
			}
			break;
		
		case 3:
			CAM::_0x79C0E43EB9B944E2(518572876);
			MISC::CLEAR_BIT(&iLocal_60, 30);
			MISC::CLEAR_BIT(&iLocal_60, 31);
			return 1;
			break;
	}
	return 0;
}

var func_275(int iParam0)
{
	vector3 vVar0;
	
	func_165(iParam0, &Local_98);
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_310(), &Local_98, vLocal_65, vLocal_66, 0.01f, 2) };
	return vVar0.z;
}

Vector3 func_276(int iParam0)
{
	func_165(iParam0, &Local_98);
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_310(), &Local_98, vLocal_65, vLocal_66, 0.01f, 2);
}

int func_277()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 100f;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), func_276((0 + iVar2)), true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), func_276((0 + iVar2)), true);
			iVar1 = (0 + iVar2);
		}
		iVar2++;
	}
	return iVar1;
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	func_214(iParam0, uParam1, &fVar0);
	*uParam2 = { 0f, 0f, fVar0 };
}

void func_279(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 3:
			iVar0 = 3;
			break;
		
		case 4:
			iVar0 = 7;
			break;
		
		case 5:
			iVar0 = 4;
			break;
		
		case 6:
			iVar0 = 5;
			break;
		
		case 7:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 8;
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_97, "SET_THEME");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_280()
{
	vector3 vVar0[24];
	int iVar1;
	
	StringCopy(&cVar0, "vw_Prop_Casino_Slot_0", 24);
	StringIntConCat(&cVar0, Local_47[iLocal_100 /*21*/].f_17, 24);
	StringConCat(&cVar0, "A", 24);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	StringCopy(&cVar0, "machine_0", 24);
	StringIntConCat(&cVar0, Local_47[iLocal_100 /*21*/].f_17, 24);
	StringConCat(&cVar0, "a", 24);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_97))
	{
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(&cVar0, 0);
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar1))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar1);
				if (Local_97.f_1 == -1)
				{
					Local_97.f_1 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
				}
				return 1;
			}
			else
			{
				if (Local_97.f_1 == -1)
				{
					Local_97.f_1 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
				}
				return 1;
			}
		}
		else if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar1))
		{
			HUD::LINK_NAMED_RENDERTARGET(iVar1);
			if (Local_97.f_1 == -1)
			{
				Local_97.f_1 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
			}
			return 1;
		}
		else
		{
			if (Local_97.f_1 == -1)
			{
				Local_97.f_1 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_281()
{
	MISC::SET_BIT(&iLocal_60, 18);
	STREAMING::REQUEST_ANIM_DICT(func_310());
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_310()))
	{
		return 1;
	}
	return 0;
}

void func_282(int iParam0)
{
	if (func_287())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_286(0))
		{
			func_283(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

void func_283(int iParam0)
{
	if (func_287())
	{
		return;
	}
	if (Global_14725)
	{
		func_285(0, 0);
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
	if (!func_284())
	{
		Global_14553.f_1 = 3;
	}
}

int func_284()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_285(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_286(0))
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

int func_286(int iParam0)
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

bool func_287()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

bool func_288()
{
	return Global_4264077 == 1;
}

void func_289()
{
	char[] cVar0[8];
	vector3 vVar1;
	
	MemCopy(&cVar0, {func_194(Local_47[iLocal_100 /*21*/].f_17)}, 6);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	MISC::SET_BIT(&iLocal_60, 23);
	if (func_264(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		if (!MISC::IS_BIT_SET(iLocal_60, 19))
		{
			func_163(0, 0);
			func_262(1, &cVar0, &cVar0);
			StringCopy(&vVar1, "SLOTS_TITLE", 24);
			StringIntConCat(&vVar1, Local_47[iLocal_100 /*21*/].f_17, 24);
			func_260(&vVar1);
			func_261(-1, 1, 1);
			func_259("SLOTS_DIS", 0, 0);
			StringCopy(&vVar1, "SLOTS_DIS1", 24);
			StringIntConCat(&vVar1, Local_47[iLocal_100 /*21*/].f_17, 24);
			func_290(&vVar1);
			func_290("SLOTS_DIS2");
			func_290("SLOTS_DIS3");
			func_256(202, "SLOTS_EXIT", -1);
			func_256(201, "SLOTS_ACC", -1);
			MISC::SET_BIT(&iLocal_60, 19);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
		}
		func_231(1);
		func_232(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_102 = -1;
			func_193(-1);
			if (MISC::IS_BIT_SET(iLocal_60, 2))
			{
				if ((func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && func_26())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (HUD::IS_RADAR_HIDDEN())
				{
					HUD::DISPLAY_RADAR(true);
				}
				func_16(0);
				MISC::CLEAR_BIT(&iLocal_60, 2);
			}
			func_163(0, 0);
			func_160(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
			MISC::CLEAR_BIT(&iLocal_60, 23);
			MISC::CLEAR_BIT(&iLocal_60, 19);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_292(0);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			func_163(0, 0);
			func_160(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
			MISC::CLEAR_BIT(&iLocal_60, 19);
			MISC::CLEAR_BIT(&iLocal_60, 23);
			if (func_8(iLocal_100, &Local_47))
			{
				MISC::SET_BIT(&iLocal_61, 1);
			}
			else
			{
				MISC::SET_BIT(&iLocal_60, 20);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_292(4);
		}
	}
}

void func_290(char* sParam0)
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

void func_291(int iParam0)
{
	Local_332[PLAYER::PLAYER_ID() /*11*/] = iParam0;
	if (Local_328.f_598[iParam0] != -1)
	{
		if (Local_328.f_598[iParam0] == PLAYER::PLAYER_ID())
		{
			func_193(iParam0);
			if (func_8(iParam0, &Local_47) && MISC::IS_BIT_SET(iLocal_61, 1))
			{
				func_292(4);
			}
			else if (!func_8(iParam0, &Local_47) && MISC::IS_BIT_SET(iLocal_60, 20))
			{
				func_292(4);
			}
			else
			{
				func_292(3);
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(iLocal_60, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_186("SLOTS_USED", -1);
					MISC::SET_BIT(&iLocal_60, 1);
				}
			}
			iLocal_102 = -1;
			func_193(-1);
			if (MISC::IS_BIT_SET(iLocal_60, 2))
			{
				if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (HUD::IS_RADAR_HIDDEN())
				{
					HUD::DISPLAY_RADAR(true);
				}
				func_16(0);
				MISC::CLEAR_BIT(&iLocal_60, 2);
			}
			func_292(0);
		}
	}
}

void func_292(int iParam0)
{
	iLocal_59 = iParam0;
}

int func_293()
{
	vector3 vVar0[2];
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	int iVar7;
	
	if ((((((((((((((((func_12(PLAYER::PLAYER_ID(), 1, 1) && func_307(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405071.f_2668) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !MISC::IS_BIT_SET(Global_1671295.f_4, 2)) && !func_218()) && !NETWORK::IS_COMMERCE_STORE_OPEN()) && !HUD::_0x2F057596F2BD0061()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_217(1)) && !func_219()) && !func_210()) && !func_208()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !Global_2458648.f_12) && Global_1671289 != 31)
	{
		if (iLocal_105 < 0)
		{
			iVar3 = 0;
			while (iVar3 < 8)
			{
				func_214(iLocal_104, &vVar5, &fVar6);
				vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0.0579063f, -0.256112f, -0.197113f) };
				vVar0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0.0289372f, -1.85613f, 2.75002f) };
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0f, -0.4f, 1f) };
				vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0f, -0.6f, 1f) };
				fVar6 = func_306(func_95(PLAYER::PLAYER_ID()), vVar5, 1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vVar0[0 /*3*/], vVar0[1 /*3*/], 1.25f, 0, true, 0))
				{
					if ((func_305(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar6, 45f) || func_301(PLAYER::PLAYER_PED_ID(), vVar1, 45f)) || func_301(PLAYER::PLAYER_PED_ID(), vVar2, 45f))
					{
						iLocal_105 = iLocal_104;
					}
				}
				iLocal_104++;
				if (iLocal_104 >= 54)
				{
					iLocal_104 = 0;
				}
				iVar3++;
			}
		}
		else
		{
			func_214(iLocal_105, &vVar5, &fVar6);
			vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0.0579063f, -0.256112f, -0.197113f) };
			vVar0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0.0289372f, -1.85613f, 2.75002f) };
			vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0f, -0.4f, 1f) };
			vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0f, -0.6f, 1f) };
			fVar6 = func_306(func_95(PLAYER::PLAYER_ID()), vVar5, 1);
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vVar0[0 /*3*/], vVar0[1 /*3*/], 1.25f, 0, true, 0) || ((!func_305(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar6, 45f) && !func_301(PLAYER::PLAYER_PED_ID(), vVar1, 45f)) && !func_301(PLAYER::PLAYER_PED_ID(), vVar2, 45f)))
			{
				iLocal_105 = -1;
			}
		}
		if (iLocal_105 >= 0)
		{
			func_214(iLocal_105, &vVar5, &fVar6);
			vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar6, 0f, -0.5f, 0.77f) };
			if (Local_328.f_598[iLocal_105] == -1 && !func_300(iLocal_105))
			{
				if (MISC::IS_BIT_SET(iLocal_60, 1))
				{
					MISC::CLEAR_BIT(&iLocal_60, 1);
				}
				if (func_195(iLocal_105))
				{
					if (iLocal_99 == -1)
					{
						StringCopy(&vVar4, "SLOTS_ENTER", 24);
						StringIntConCat(&vVar4, Local_47[iLocal_105 /*21*/].f_17, 24);
						if (!func_62())
						{
							if (func_60(PLAYER::PLAYER_ID(), 0))
							{
								iVar7 = func_59();
								if (func_57(iVar7))
								{
									if (func_299(iVar7) == 1)
									{
										StringConCat(&vVar4, "c", 24);
									}
									else if (func_298(iVar7))
									{
										StringConCat(&vVar4, "a", 24);
									}
									else
									{
										StringConCat(&vVar4, "b", 24);
									}
								}
							}
						}
						func_297(&iLocal_99, 3, &vVar4, 0, 0, 0, 0);
					}
					if (func_296(iLocal_99, 1))
					{
						if (iLocal_99 != -1)
						{
							func_196(&iLocal_99);
						}
						iLocal_102 = iLocal_105;
						func_17(PLAYER::PLAYER_ID(), 0, 256, 0);
						HUD::DISPLAY_RADAR(false);
						func_16(1);
						PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
						PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
						PAD::SET_INPUT_EXCLUSIVE(0, 200);
						PAD::SET_INPUT_EXCLUSIVE(2, 200);
						PAD::SET_INPUT_EXCLUSIVE(0, 199);
						PAD::SET_INPUT_EXCLUSIVE(2, 199);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						if (!MISC::IS_BIT_SET(iLocal_60, 2))
						{
							MISC::SET_BIT(&iLocal_60, 2);
						}
						return 1;
					}
				}
			}
			else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (Local_328.f_598[iLocal_105] != PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_60, 1))
					{
						func_186("SLOTS_USED", -1);
						MISC::SET_BIT(&iLocal_60, 1);
					}
				}
			}
		}
		else
		{
			if (func_294())
			{
				HUD::CLEAR_HELP(1);
			}
			if (MISC::IS_BIT_SET(iLocal_60, 1))
			{
				MISC::CLEAR_BIT(&iLocal_60, 1);
			}
			if (MISC::IS_BIT_SET(iLocal_60, 6))
			{
				MISC::CLEAR_BIT(&iLocal_60, 6);
			}
			if (iLocal_99 != -1)
			{
				func_196(&iLocal_99);
			}
		}
	}
	else
	{
		if (func_294())
		{
			HUD::CLEAR_HELP(1);
		}
		if (MISC::IS_BIT_SET(iLocal_60, 1))
		{
			MISC::CLEAR_BIT(&iLocal_60, 1);
		}
		if (MISC::IS_BIT_SET(iLocal_60, 6))
		{
			MISC::CLEAR_BIT(&iLocal_60, 6);
		}
		if (iLocal_99 != -1)
		{
			func_196(&iLocal_99);
		}
	}
	return 0;
}

int func_294()
{
	if ((func_295("SLOTS_NOMON") || func_295("SLOTS_FAILTR")) || func_295("SLOTS_USED"))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(iLocal_60, 6))
	{
		if (((((func_295("CAS_MG_CBAN") || func_295("CAS_MG_CTIME")) || func_295("CAS_MG_LOWCHIPS1")) || func_295("CAS_MG_NOCHIPS1")) || func_200("CAS_MG_MEMB2", func_201(1))) || func_295("SLOTS_REGBAN"))
		{
			return 1;
		}
	}
	return 0;
}

int func_295(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_296(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_197(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_286(0))
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

void func_297(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_196(iParam0);
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

bool func_298(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

int func_299(int iParam0)
{
	if (func_60(iParam0, 1))
	{
		return Global_1626536[func_59() /*603*/].f_11.f_447;
	}
	return -1;
}

int func_300(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2506781, iParam0);
	}
	else
	{
		iParam0 = (iParam0 - 32);
		return MISC::IS_BIT_SET(Global_2506782, iParam0);
	}
	return 0;
}

bool func_301(int iParam0, vector3 vParam1, float fParam2)
{
	return func_302(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), vParam1, fParam2);
}

bool func_302(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_303(func_304(vVar0), func_304(vParam2 - vParam0));
	return MISC::ACOS(fVar1) <= fParam3;
}

float func_303(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_304(vector3 vParam0)
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

int func_305(float fParam0, float fParam1, float fParam2)
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

float func_306(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_309(iParam0);
	iVar1 = func_308(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_3;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37371[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_309(int iParam0)
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
		if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
		{
			return Global_37371[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

char* func_310()
{
	if (func_115())
	{
		return "anim_casino_a@amb@casino@games@slots@female";
	}
	return "anim_casino_a@amb@casino@games@slots@male";
}

bool func_311(var uParam0)
{
	return uParam0->f_1;
}

void func_312()
{
	func_323();
	func_222();
	func_321();
	func_319();
	func_314();
	func_313();
}

void func_313()
{
}

void func_314()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5[3];
	int iVar6[3];
	struct<5> Var7;
	float fVar8;
	
	Var7 = 3;
	Var7.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1689853[iVar0 /*3*/].f_1 >= 0)
		{
			if (!MISC::IS_BIT_SET(Local_110[func_11(Global_1689853[iVar0 /*3*/].f_1)], func_10(Global_1689853[iVar0 /*3*/].f_1)))
			{
				MISC::SET_BIT(&(Local_110[func_11(Global_1689853[iVar0 /*3*/].f_1)]), func_10(Global_1689853[iVar0 /*3*/].f_1));
			}
			if (Global_1689853[iVar0 /*3*/])
			{
				if (!MISC::IS_BIT_SET(Local_110.f_3[func_11(Global_1689853[iVar0 /*3*/].f_1)], func_10(Global_1689853[iVar0 /*3*/].f_1)))
				{
					func_318(&Var7, Global_1689853[iVar0 /*3*/].f_2);
					func_9(&(Local_110.f_6[Global_1689853[iVar0 /*3*/].f_1 /*2*/]), 0, 0);
					iVar1 = 0;
					while (iVar1 < 3)
					{
						Local_110.f_115[Global_1689853[iVar0 /*3*/].f_1 /*4*/][iVar1] = Var7.f_4[iVar1];
						iVar1++;
					}
					MISC::SET_BIT(&(Local_110.f_3[func_11(Global_1689853[iVar0 /*3*/].f_1)]), func_10(Global_1689853[iVar0 /*3*/].f_1));
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (MISC::IS_BIT_SET(Local_110.f_3[func_11(iVar1)], func_10(iVar1)))
		{
			func_214(iVar1, &uVar3, &fVar4);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar5[iVar0] = 0;
				iVar6[iVar0] = 0;
				if (func_311(&(Local_110.f_6[iVar1 /*2*/])))
				{
					if (func_5(&(Local_110.f_6[iVar1 /*2*/]), (2000 + (750 * iVar0)), 0))
					{
						if (iVar0 > 0)
						{
							if (iVar6[(iVar0 - 1)])
							{
								if (func_311(&(Local_78[iVar1 /*5*/][(iVar0 - 1) /*2*/])))
								{
									if (func_5(&(Local_78[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 150, 0))
									{
										iVar5[iVar0] = 1;
										if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
										{
											Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
										}
									}
								}
								else
								{
									func_6(&(Local_78[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 0, 0);
								}
							}
						}
						else
						{
							iVar5[iVar0] = 1;
							if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
							{
								Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
				{
					if (Local_47[iVar1 /*21*/].f_6[iVar0] != Local_47[iVar1 /*21*/].f_2[iVar0])
					{
						if (!iVar5[iVar0])
						{
							func_317(iVar1, iVar0);
						}
						ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
						Local_47[iVar1 /*21*/].f_6[iVar0] = Local_47[iVar1 /*21*/].f_2[iVar0];
					}
				}
				if (iVar5[iVar0])
				{
					fVar8 = ((Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f) - (Local_47[iVar1 /*21*/].f_2[iVar0] % 360f));
					if (MISC::ABSF(fVar8) <= 20f || (Local_47[iVar1 /*21*/].f_10[iVar0] != -1f && Local_47[iVar1 /*21*/].f_2[iVar0] >= Local_47[iVar1 /*21*/].f_10[iVar0]))
					{
						if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f))
						{
							func_315(iVar1, 9);
							if (Local_110.f_115[iVar1 /*4*/][iVar0] == 6f)
							{
								func_315(iVar1, 10);
							}
						}
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f);
						iVar6[iVar0] = 1;
						if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
						{
							ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
						}
					}
					else
					{
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
					}
				}
				else
				{
					Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
				}
				iVar0++;
			}
			if (!MISC::IS_BIT_SET(uLocal_70[func_11(iVar1)], func_10(iVar1)))
			{
				func_315(iVar1, 7);
				func_315(iVar1, 8);
				MISC::SET_BIT(&(uLocal_70[func_11(iVar1)]), func_10(iVar1));
			}
			if (iVar6[2])
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Global_1689853[iVar2 /*3*/].f_1 == iVar1)
					{
						MISC::CLEAR_BIT(&(uLocal_70[func_11(iVar1)]), func_10(iVar1));
						Local_47[iVar1 /*21*/].f_15 = -1f;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							Local_47[iVar1 /*21*/].f_10[iVar0] = -1f;
							if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
							{
								if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f))
								{
									func_214(iVar1, &uVar3, &fVar4);
									Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f);
									ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
								}
							}
							else
							{
								Local_47[iVar1 /*21*/].f_2[iVar0] = 0f;
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]))
						{
							Local_47[iVar1 /*21*/].f_14 = 0f;
							ENTITY::SET_ENTITY_ROTATION(iLocal_107[iVar1], 0f, 0f, fVar4, 2, 1);
						}
						func_4(&(Local_78[iVar1 /*5*/][0 /*2*/]));
						func_4(&(Local_78[iVar1 /*5*/][1 /*2*/]));
						func_4(&(Local_79[iVar1 /*2*/]));
						Global_1689853[iVar2 /*3*/] = 0;
						func_4(&(Local_110.f_6[Global_1689853[iVar2 /*3*/].f_1 /*2*/]));
						MISC::CLEAR_BIT(&(Local_110.f_3[func_11(Global_1689853[iVar2 /*3*/].f_1)]), func_10(Global_1689853[iVar2 /*3*/].f_1));
					}
					iVar2++;
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_1689853[iVar2 /*3*/].f_1 == iVar1)
				{
					MISC::CLEAR_BIT(&(uLocal_70[func_11(iVar1)]), func_10(iVar1));
					Local_47[iVar1 /*21*/].f_15 = -1f;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						Local_47[iVar1 /*21*/].f_10[iVar0] = -1f;
						if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
						{
							if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f))
							{
								func_214(iVar1, &uVar3, &fVar4);
								Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_110.f_115[iVar1 /*4*/][iVar0] * 22.5f);
								ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
							}
						}
						else
						{
							Local_47[iVar1 /*21*/].f_2[iVar0] = 0f;
						}
						iVar0++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]))
					{
						Local_47[iVar1 /*21*/].f_14 = 0f;
						ENTITY::SET_ENTITY_ROTATION(iLocal_107[iVar1], 0f, 0f, fVar4, 2, 1);
					}
					func_4(&(Local_78[iVar1 /*5*/][0 /*2*/]));
					func_4(&(Local_78[iVar1 /*5*/][1 /*2*/]));
					func_4(&(Local_79[iVar1 /*2*/]));
					func_4(&(Local_110.f_6[Global_1689853[iVar2 /*3*/].f_1 /*2*/]));
					MISC::CLEAR_BIT(&(Local_110.f_3[func_11(Global_1689853[iVar2 /*3*/].f_1)]), func_10(Global_1689853[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_315(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	iVar0 = func_316(Local_47[iParam0 /*21*/].f_17);
	func_214(iParam0, &vVar1, &fVar2);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, fVar2, 0f, -0.4f, 1f) };
	switch (iParam1)
	{
		case 1:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "no_win", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "small_win", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "big_win", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 4:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "jackpot", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 5:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_bet", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_max_bet", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 7:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spinning", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 8:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "start_spin", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 9:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_clunk", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 10:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_on_prize", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 11:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "welcome_stinger", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 12:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 13:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel_win", vVar1, iVar0, 0, 20, 0);
			break;
	}
}

char* func_316(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_npc_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_npc_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_npc_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_npc_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_npc_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_npc_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_npc_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_npc_sounds";
		
		default:
	}
	return "";
}

void func_317(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	if (Local_47[iParam0 /*21*/].f_6[iParam1] != 0f)
	{
		fVar0 = (Local_47[iParam0 /*21*/].f_2[iParam1] - Local_47[iParam0 /*21*/].f_6[iParam1]);
		fVar1 = (fVar0 % 22.5f);
		if (MISC::ABSF(fVar1) <= 2.5f)
		{
			if (fVar1 < 0f)
			{
				Local_47[iParam0 /*21*/].f_2[iParam1] = (Local_47[iParam0 /*21*/].f_2[iParam1] - IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(3, 8)));
			}
			else
			{
				Local_47[iParam0 /*21*/].f_2[iParam1] = (Local_47[iParam0 /*21*/].f_2[iParam1] + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(3, 8)));
			}
		}
	}
}

void func_318(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[8];
	int iVar5;
	int iVar6[3];
	
	uParam0->f_4[0] = 0f;
	uParam0->f_4[1] = 0f;
	uParam0->f_4[2] = 0f;
	switch (iParam1)
	{
		case 1:
		case 2:
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			iVar6[0] = iVar2;
			iVar6[1] = iVar2;
			iVar5 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (iVar0 != iVar6[0] && iVar0 != 7)
				{
					iVar4[iVar5] = iVar0;
					iVar5++;
				}
				iVar0++;
			}
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
			iVar6[2] = iVar4[iVar2];
			break;
		
		case 3:
		case 4:
		case 5:
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar6[0] = iVar2;
			iVar5 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar6[0] || iVar6[0] == 0)
				{
					iVar4[iVar5] = iVar0;
					iVar5++;
				}
				iVar0++;
			}
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
			iVar6[1] = iVar4[iVar2];
			iVar5 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar6[1] || iVar6[1] == 0)
				{
					iVar4[iVar5] = iVar0;
					iVar5++;
				}
				iVar0++;
			}
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
			iVar6[2] = iVar4[iVar2];
			break;
		
		case 6:
		case 7:
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
			iVar6[0] = iVar2;
			iVar6[1] = iVar2;
			iVar6[2] = iVar2;
			break;
		
		case 9:
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(5, 6);
			iVar6[0] = iVar2;
			iVar6[1] = iVar2;
			iVar6[2] = 0;
			break;
		
		case 8:
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(4, 5);
			iVar6[0] = iVar2;
			iVar6[1] = iVar2;
			iVar6[2] = iVar2;
			break;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = 0;
		if (iVar6[iVar0] == 0)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_48.f_225);
			uParam0->f_4[iVar0] = (IntToFloat(iVar2) + 0.5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < Local_48.f_225)
			{
				if (Local_48.f_226[iVar0 /*17*/][iVar1] == iVar6[iVar0])
				{
					iVar3++;
				}
				iVar1++;
			}
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
			iVar3 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_48.f_225)
			{
				if (Local_48.f_226[iVar0 /*17*/][iVar1] == iVar6[iVar0])
				{
					if (iVar3 == iVar2)
					{
						uParam0->f_4[iVar0] = SYSTEM::TO_FLOAT(iVar1);
						iVar1 = Local_48.f_225;
					}
					iVar3++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5[3];
	int iVar6[3];
	bool bVar7;
	float fVar8;
	float fVar9;
	
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (MISC::IS_BIT_SET(Local_110[func_11(iVar1)], func_10(iVar1)))
		{
		}
		else if (MISC::IS_BIT_SET(Local_328.f_653[func_11(iVar1)], func_10(iVar1)) || ((iVar1 == iLocal_100 && MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 0)) && !MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 2)))
		{
			if (iVar1 == iLocal_100 && MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 2))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar5[iVar0] = 0;
					iVar6[iVar0] = 0;
					if (func_311(&(Local_328.f_489[iVar1 /*2*/])))
					{
						if (func_5(&(Local_328.f_489[iVar1 /*2*/]), (2000 + (750 * iVar0)), 0))
						{
							if (MISC::IS_BIT_SET(Local_328.f_656[func_11(iVar1)], func_10(iVar1)))
							{
								if (iVar0 > 0)
								{
									if (iVar6[(iVar0 - 1)])
									{
										if (func_311(&(Local_78[iVar1 /*5*/][(iVar0 - 1) /*2*/])))
										{
											if (func_5(&(Local_78[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 150, 0))
											{
												iVar5[iVar0] = 1;
												if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
												{
													Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_328.f_217[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
												}
											}
										}
										else
										{
											func_6(&(Local_78[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 0, 0);
										}
									}
								}
								else
								{
									iVar5[iVar0] = 1;
									if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
									{
										Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_328.f_217[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
					{
						if (!iVar5[iVar0])
						{
							func_317(iVar1, iVar0);
						}
						if (iLocal_100 == iVar1)
						{
							if (!iVar5[iVar0])
							{
								if (!MISC::IS_BIT_SET(iLocal_60, (8 + iVar0)))
								{
									vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_106[iVar1 /*4*/][iVar0], true) };
									vVar3.z = (vVar3.z - 10f);
									ENTITY::SET_ENTITY_COORDS(Local_106[iVar1 /*4*/][iVar0], vVar3, 1, false, 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar0]))
									{
										vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_108[iVar0], true) };
										vVar3.z = (vVar3.z + 10f);
										ENTITY::SET_ENTITY_COORDS(iLocal_108[iVar0], vVar3, 1, false, 0, 1);
										INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_108[iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
										MISC::SET_BIT(&iLocal_60, (8 + iVar0));
									}
								}
							}
						}
						func_214(iVar1, &vVar3, &fVar4);
						ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
						if (iLocal_100 == iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar0]))
						{
							ENTITY::SET_ENTITY_ROTATION(iLocal_108[iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
						}
						Local_47[iVar1 /*21*/].f_6[iVar0] = Local_47[iVar1 /*21*/].f_2[iVar0];
					}
					if (iVar5[iVar0])
					{
						fVar8 = ((Local_328.f_217[iVar1 /*4*/][iVar0] * 22.5f) - (Local_47[iVar1 /*21*/].f_2[iVar0] % 360f));
						if (MISC::ABSF(fVar8) <= 20f || (Local_47[iVar1 /*21*/].f_10[iVar0] != -1f && Local_47[iVar1 /*21*/].f_2[iVar0] >= Local_47[iVar1 /*21*/].f_10[iVar0]))
						{
							Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_328.f_217[iVar1 /*4*/][iVar0] * 22.5f);
							if (iLocal_100 == iVar1)
							{
								if (MISC::IS_BIT_SET(iLocal_60, (8 + iVar0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar0]))
									{
										vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_106[iVar1 /*4*/][iVar0], true) };
										vVar3.z = (vVar3.z + 10f);
										ENTITY::SET_ENTITY_COORDS(Local_106[iVar1 /*4*/][iVar0], vVar3, 1, false, 0, 1);
										INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_106[iVar1 /*4*/][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
										vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_108[iVar0], true) };
										vVar3.z = (vVar3.z - 10f);
										ENTITY::SET_ENTITY_COORDS(iLocal_108[iVar0], vVar3, 1, false, 0, 1);
										MISC::CLEAR_BIT(&iLocal_60, (8 + iVar0));
									}
									func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 9);
									if (Local_48.f_1[0 /*65*/][uLocal_84[0]] == 6)
									{
										func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 10);
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
							{
								iVar6[iVar0] = 1;
								ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
								if (iLocal_100 == iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar0]))
								{
									ENTITY::SET_ENTITY_ROTATION(iLocal_108[iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
								}
							}
						}
						else
						{
							Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
						}
					}
					else
					{
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
					}
					iVar0++;
				}
				if (iVar1 == iLocal_100)
				{
					if (!MISC::IS_BIT_SET(uLocal_70[func_11(iVar1)], func_10(iVar1)))
					{
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 7);
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 8);
						MISC::SET_BIT(&(uLocal_70[func_11(iVar1)]), func_10(iVar1));
					}
				}
				if (func_320(iVar1, iVar6[2]))
				{
					if (!func_311(&(Local_79[iVar1 /*2*/])))
					{
						func_6(&(Local_79[iVar1 /*2*/]), 1, 0);
					}
					else if (func_5(&(Local_79[iVar1 /*2*/]), 1000, 1) && !MISC::IS_BIT_SET(iLocal_60, 12))
					{
						if (iLocal_100 == iVar1)
						{
							if (iLocal_64 == 17)
							{
								iVar2 = func_45(Local_48.f_1[0 /*65*/][uLocal_84[0]], Local_48.f_1[1 /*65*/][uLocal_84[1]], Local_48.f_1[2 /*65*/][uLocal_84[2]]);
								func_174(3, iVar2, Local_47[iLocal_100 /*21*/], -1);
								func_164(20);
							}
							if (!MISC::IS_BIT_SET(iLocal_60, 12))
							{
								MISC::SET_BIT(&iLocal_60, 12);
							}
						}
					}
					else if (func_5(&(Local_79[iVar1 /*2*/]), 1250, 1))
					{
						if (!func_5(&(Local_328.f_489[iVar1 /*2*/]), func_7(iVar1), 0))
						{
							if (func_5(&(Local_328.f_489[iVar1 /*2*/]), (func_7(iVar1) - 2000), 0))
							{
								bVar7 = true;
								if (Local_47[iVar1 /*21*/].f_15 == -1f)
								{
									Local_47[iVar1 /*21*/].f_15 = (SYSTEM::TO_FLOAT(Local_328.f_434[iVar1] * 30) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_14 / 360f)) * 360));
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]))
							{
								if (iLocal_100 == iVar1)
								{
									if (!bVar7)
									{
										if (!MISC::IS_BIT_SET(iLocal_60, 11))
										{
											vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_107[iVar1], true) };
											vVar3.z = (vVar3.z - 10f);
											ENTITY::SET_ENTITY_COORDS(iLocal_107[iVar1], vVar3, 1, false, 0, 1);
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
											{
												vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_109, true) };
												vVar3.z = (vVar3.z + 10f);
												ENTITY::SET_ENTITY_COORDS(iLocal_109, vVar3, 1, false, 0, 1);
												INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_109, INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
												MISC::SET_BIT(&iLocal_60, 11);
											}
											func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 12);
										}
									}
								}
								func_214(iVar1, &vVar3, &fVar4);
								ENTITY::SET_ENTITY_ROTATION(iLocal_107[iVar1], 0f, Local_47[iVar1 /*21*/].f_14, fVar4, 2, 1);
								if (iLocal_100 == iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_109))
								{
									ENTITY::SET_ENTITY_ROTATION(iLocal_109, 0f, Local_47[iVar1 /*21*/].f_14, fVar4, 2, 1);
								}
							}
							if (bVar7)
							{
								fVar9 = (SYSTEM::TO_FLOAT(Local_328.f_434[iVar1] * 30) - (Local_47[iVar1 /*21*/].f_14 % 360f));
								if (MISC::ABSF(fVar9) <= 20f || (Local_47[iVar1 /*21*/].f_15 != -1f && Local_47[iVar1 /*21*/].f_14 >= Local_47[iVar1 /*21*/].f_15))
								{
									Local_47[iVar1 /*21*/].f_14 = SYSTEM::TO_FLOAT(Local_328.f_434[iVar1] * 30);
									if (iLocal_100 == iVar1)
									{
										if (MISC::IS_BIT_SET(iLocal_60, 11))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_109))
											{
												vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_107[iVar1], true) };
												vVar3.z = (vVar3.z + 10f);
												ENTITY::SET_ENTITY_COORDS(iLocal_107[iVar1], vVar3, 1, false, 0, 1);
												INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_107[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
												vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_109, true) };
												vVar3.z = (vVar3.z - 10f);
												ENTITY::SET_ENTITY_COORDS(iLocal_109, vVar3, 1, false, 0, 1);
												MISC::CLEAR_BIT(&iLocal_60, 11);
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]))
										{
											ENTITY::SET_ENTITY_ROTATION(iLocal_107[iVar1], 0f, Local_47[iVar1 /*21*/].f_14, fVar4, 2, 1);
										}
										if (iLocal_100 == iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_109))
										{
											ENTITY::SET_ENTITY_ROTATION(iLocal_109, 0f, Local_47[iVar1 /*21*/].f_14, fVar4, 2, 1);
										}
										func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_100 /*21*/].f_17, 13);
										MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
									}
								}
								else
								{
									Local_47[iVar1 /*21*/].f_14 = (Local_47[iVar1 /*21*/].f_14 + (300f * SYSTEM::TIMESTEP()));
								}
							}
							else
							{
								Local_47[iVar1 /*21*/].f_14 = (Local_47[iVar1 /*21*/].f_14 + (300f * SYSTEM::TIMESTEP()));
							}
						}
					}
				}
				else if (iLocal_100 == iVar1 && iVar6[2])
				{
					if (func_8(iVar1, &Local_47))
					{
						if ((Local_48.f_1[0 /*65*/][Local_328[iVar1 /*4*/][0]] == 7 && Local_48.f_1[1 /*65*/][Local_328[iVar1 /*4*/][1]] == 7) && Local_48.f_1[2 /*65*/][Local_328[iVar1 /*4*/][2]] == 7)
						{
						}
						else
						{
							MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
					}
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uLocal_70[func_11(iVar1)]), func_10(iVar1));
			Local_47[iVar1 /*21*/].f_15 = -1f;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Local_47[iVar1 /*21*/].f_10[iVar0] = -1f;
				if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
				{
					if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_328.f_217[iVar1 /*4*/][iVar0] * 22.5f))
					{
						func_214(iVar1, &vVar3, &fVar4);
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_328.f_217[iVar1 /*4*/][iVar0] * 22.5f);
						ENTITY::SET_ENTITY_ROTATION(Local_106[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, fVar4, 2, 1);
					}
				}
				else
				{
					Local_47[iVar1 /*21*/].f_2[iVar0] = 0f;
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]))
			{
				if (Local_47[iVar1 /*21*/].f_14 != SYSTEM::TO_FLOAT(Local_328.f_434[iVar1] * 30))
				{
					func_214(iVar1, &vVar3, &fVar4);
					Local_47[iVar1 /*21*/].f_14 = SYSTEM::TO_FLOAT(Local_328.f_434[iVar1] * 30);
					ENTITY::SET_ENTITY_ROTATION(iLocal_107[iVar1], 0f, Local_47[iVar1 /*21*/].f_14, fVar4, 2, 1);
				}
			}
			else
			{
				Local_47[iVar1 /*21*/].f_14 = 0f;
			}
			if (iLocal_100 == iVar1)
			{
				if (MISC::IS_BIT_SET(iLocal_60, 12))
				{
					MISC::CLEAR_BIT(&iLocal_60, 12);
				}
				if (MISC::IS_BIT_SET(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10, 2) && !MISC::IS_BIT_SET(iLocal_60, 3))
				{
					func_4(&(Local_78[iVar1 /*5*/][0 /*2*/]));
					func_4(&(Local_78[iVar1 /*5*/][1 /*2*/]));
					func_4(&(Local_79[iVar1 /*2*/]));
					MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
					MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
					MISC::CLEAR_BIT(&(Local_332[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
					MISC::CLEAR_BIT(&iLocal_60, 0);
					MISC::SET_BIT(&iLocal_61, 2);
				}
				if (MISC::IS_BIT_SET(iLocal_60, 11))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar1]))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_107[iVar1], true) };
						vVar3.z = (vVar3.z + 10f);
						ENTITY::SET_ENTITY_COORDS(iLocal_107[iVar1], vVar3, 1, false, 0, 1);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_107[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_109, true) };
						vVar3.z = (vVar3.z - 10f);
						ENTITY::SET_ENTITY_COORDS(iLocal_109, vVar3, 1, false, 0, 1);
					}
					MISC::CLEAR_BIT(&iLocal_60, 11);
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (MISC::IS_BIT_SET(iLocal_60, (8 + iVar0)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar1 /*4*/][iVar0]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_106[iVar1 /*4*/][iVar0], true) };
							vVar3.z = (vVar3.z + 10f);
							ENTITY::SET_ENTITY_COORDS(Local_106[iVar1 /*4*/][iVar0], vVar3, 1, false, 0, 1);
							INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_106[iVar1 /*4*/][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
							vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_108[iVar0], true) };
							vVar3.z = (vVar3.z - 10f);
							ENTITY::SET_ENTITY_COORDS(iLocal_108[iVar0], vVar3, 1, false, 0, 1);
						}
						MISC::CLEAR_BIT(&iLocal_60, (8 + iVar0));
					}
					iVar0++;
				}
			}
			else
			{
				func_4(&(Local_78[iVar1 /*5*/][0 /*2*/]));
				func_4(&(Local_78[iVar1 /*5*/][1 /*2*/]));
				func_4(&(Local_79[iVar1 /*2*/]));
			}
		}
		iVar1++;
	}
}

int func_320(int iParam0, var uParam1)
{
	if (((func_8(iParam0, &Local_47) && Local_48.f_1[0 /*65*/][Local_328[iParam0 /*4*/][0]] == 7) && Local_48.f_1[1 /*65*/][Local_328[iParam0 /*4*/][1]] == 7) && Local_48.f_1[2 /*65*/][Local_328[iParam0 /*4*/][2]] == 7)
	{
		if (func_311(&(Local_328.f_489[iParam0 /*2*/])))
		{
			if (uParam1 || func_5(&(Local_328.f_489[iParam0 /*2*/]), 6500, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	char cVar5[64];
	
	iVar2 = 0;
	while (iVar2 < 54)
	{
		if (func_322(iVar2))
		{
			if (func_8(iVar2, &Local_47))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar2]))
				{
					if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
					{
						StringCopy(&cVar5, "vw_Prop_vw_slot_wheel_0", 64);
						StringIntConCat(&cVar5, Local_47[iVar2 /*21*/].f_17, 64);
						StringConCat(&cVar5, "a", 64);
						iVar0 = MISC::GET_HASH_KEY(&cVar5);
						STREAMING::REQUEST_MODEL(iVar0);
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							func_214(iVar2, &vVar3, &fVar4);
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, 0f, -0.12f, 1.6f) };
							iLocal_107[iVar2] = OBJECT::CREATE_OBJECT(iVar0, vVar3, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_107[iVar2], true);
							ENTITY::SET_ENTITY_ROTATION(iLocal_107[iVar2], 0f, 0f, fVar4, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_106[iVar2 /*4*/][iVar1]))
				{
					if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
					{
						StringCopy(&cVar5, "vw_Prop_Casino_Slot_0", 64);
						StringIntConCat(&cVar5, Local_47[iVar2 /*21*/].f_17, 64);
						StringConCat(&cVar5, "a_reels", 64);
						iVar0 = MISC::GET_HASH_KEY(&cVar5);
						STREAMING::REQUEST_MODEL(iVar0);
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							func_214(iVar2, &vVar3, &fVar4);
							if (iVar1 == 0)
							{
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, -0.115f, 0.047f, 0.906f) };
							}
							else if (iVar1 == 1)
							{
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, 0.005f, 0.047f, 0.906f) };
							}
							else if (iVar1 == 2)
							{
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, 0.125f, 0.047f, 0.906f) };
							}
							Local_106[iVar2 /*4*/][iVar1] = OBJECT::CREATE_OBJECT(iVar0, vVar3, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_106[iVar2 /*4*/][iVar1], true);
							ENTITY::SET_ENTITY_COLLISION(Local_106[iVar2 /*4*/][iVar1], false, 0);
							ENTITY::SET_ENTITY_ROTATION(Local_106[iVar2 /*4*/][iVar1], 0f, 0f, fVar4, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar2 /*4*/][iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(Local_106[iVar2 /*4*/][iVar1]));
				}
				iVar1++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar2]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_107[iVar2]));
			}
		}
		iVar2++;
	}
	if (iLocal_100 >= 0)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar1]))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					StringCopy(&cVar5, "Vw_prop_casino_slot_0", 64);
					StringIntConCat(&cVar5, Local_47[iLocal_100 /*21*/].f_17, 64);
					StringConCat(&cVar5, "b_reels", 64);
					iVar0 = MISC::GET_HASH_KEY(&cVar5);
					STREAMING::REQUEST_MODEL(iVar0);
					if (STREAMING::HAS_MODEL_LOADED(iVar0))
					{
						func_214(iLocal_100, &vVar3, &fVar4);
						if (iVar1 == 0)
						{
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, -0.115f, 0.047f, 0.906f) };
						}
						else if (iVar1 == 1)
						{
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, 0.005f, 0.047f, 0.906f) };
						}
						else if (iVar1 == 2)
						{
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, 0.125f, 0.047f, 0.906f) };
						}
						vVar3.z = (vVar3.z - 10f);
						iLocal_108[iVar1] = OBJECT::CREATE_OBJECT(iVar0, vVar3, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_108[iVar1], true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_108[iVar1], 0f, 0f, fVar4, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					}
				}
			}
			iVar1++;
		}
		if (func_8(iLocal_100, &Local_47))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_109))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					StringCopy(&cVar5, "vw_prop_vw_slot_wheel_0", 64);
					StringIntConCat(&cVar5, Local_47[iLocal_100 /*21*/].f_17, 64);
					StringConCat(&cVar5, "b", 64);
					iVar0 = MISC::GET_HASH_KEY(&cVar5);
					STREAMING::REQUEST_MODEL(iVar0);
					if (STREAMING::HAS_MODEL_LOADED(iVar0))
					{
						func_214(iLocal_100, &vVar3, &fVar4);
						vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar4, 0f, -0.12f, 1.6f) };
						vVar3.z = (vVar3.z - 10f);
						iLocal_109 = OBJECT::CREATE_OBJECT(iVar0, vVar3, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_109, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_109, 0f, 0f, fVar4, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					}
				}
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_108[iVar1]));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
		{
			OBJECT::DELETE_OBJECT(&iLocal_109);
		}
	}
}

int func_322(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	func_214(iParam0, &vVar0, &uVar1);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), vVar0, true) <= 10f)
	{
		return 1;
	}
	return 0;
}

void func_323()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_71[iVar0 /*2*/].f_1 == -1)
		{
			iVar1 = func_324(Local_71[iVar0 /*2*/], iVar0);
			if (iVar1 != -1)
			{
				Local_71[iVar0 /*2*/] = iVar1;
				Local_71[iVar0 /*2*/].f_1 = AUDIO::GET_SOUND_ID();
				func_214(iVar1, &vVar2, &fVar3);
				vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, fVar3, 0f, -0.2f, 1f) };
				iVar4 = func_171(Local_47[iVar1 /*21*/].f_17);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_71[iVar0 /*2*/].f_1, "attract_loop", vVar2, iVar4, 0, 0, 0);
			}
		}
		else if (Local_328.f_598[Local_71[iVar0 /*2*/]] != -1 || func_300(Local_71[iVar0 /*2*/]))
		{
			AUDIO::STOP_SOUND(Local_71[iVar0 /*2*/].f_1);
			AUDIO::RELEASE_SOUND_ID(Local_71[iVar0 /*2*/].f_1);
			Local_71[iVar0 /*2*/].f_1 = -1;
		}
		else if (AUDIO::HAS_SOUND_FINISHED(Local_71[iVar0 /*2*/].f_1))
		{
			AUDIO::RELEASE_SOUND_ID(Local_71[iVar0 /*2*/].f_1);
			Local_71[iVar0 /*2*/].f_1 = -1;
		}
		iVar0++;
	}
}

int func_324(int iParam0, int iParam1)
{
	int iVar0[36];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	if (iParam1 < 2)
	{
		iVar4 = 0;
		iVar5 = 35;
	}
	else
	{
		iVar4 = 36;
		iVar5 = 53;
	}
	iVar2 = iVar4;
	while (iVar2 <= iVar5)
	{
		if (Local_328.f_598[iVar2] == -1 && !func_300(iVar2))
		{
			bVar6 = false;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (Local_71[iVar3 /*2*/] == iVar2)
				{
					bVar6 = true;
					iVar3 = 4;
				}
				iVar3++;
			}
			if (!bVar6)
			{
				iVar0[iVar1] = iVar2;
				iVar1++;
			}
		}
		iVar2++;
	}
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iParam0 != -1 && (iVar0[iVar7] == iParam0 || Local_47[iVar0[iVar7] /*21*/].f_17 == Local_47[iParam0 /*21*/].f_17))
		{
			iVar7++;
			if (iVar7 >= iVar1)
			{
				iVar7 = 0;
			}
		}
		else
		{
			return iVar0[iVar7];
		}
		iVar2++;
	}
	return -1;
}

void func_325()
{
	if (func_329())
	{
		func_342();
	}
	if (Global_1689887)
	{
		Global_1689887 = 0;
		func_342();
	}
	if (Global_2405071.f_2668 && Global_2409274 != 0)
	{
		if (Global_2409274 != 6)
		{
			func_342();
		}
	}
	if (!func_327(PLAYER::PLAYER_ID()))
	{
		func_342();
	}
	if ((func_326() && Global_1671295.f_2688 != 123) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_342();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !MISC::IS_BIT_SET(Global_4456448.f_34, 9))
	{
		func_342();
	}
}

bool func_326()
{
	return MISC::IS_BIT_SET(Global_1671295.f_3, 2);
}

int func_327(int iParam0)
{
	if (iParam0 != func_58())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_328(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_328(int iParam0)
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

int func_329()
{
	var uVar0;
	
	func_337(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_336())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_335())
	{
		return 1;
	}
	if (func_334(157))
	{
		if (!func_333())
		{
			return 1;
		}
	}
	if (func_334(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_330() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_330()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_330()
{
	switch (func_332())
	{
		case 0:
			return func_331();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_331()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_332()
{
	return Global_25765;
}

bool func_333()
{
	return Global_2448756.f_586;
}

int func_334(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_335()
{
	return Global_2458613;
}

bool func_336()
{
	return Global_2448756.f_581;
}

void func_337(var uParam0)
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
					func_338(iVar0);
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

void func_338(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_339(iVar2, &bVar3))
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

int func_339(int iParam0, var uParam1)
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

void func_340()
{
	SYSTEM::WAIT(0);
}

void func_341(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_1[0 /*65*/][0] = 0;
	uParam0->f_1[0 /*65*/][1] = 6;
	uParam0->f_1[0 /*65*/][2] = 1;
	uParam0->f_1[0 /*65*/][3] = 2;
	uParam0->f_1[0 /*65*/][4] = 3;
	uParam0->f_1[0 /*65*/][5] = 4;
	uParam0->f_1[0 /*65*/][6] = 7;
	uParam0->f_1[0 /*65*/][7] = 2;
	uParam0->f_1[0 /*65*/][8] = 1;
	uParam0->f_1[0 /*65*/][9] = 3;
	uParam0->f_1[0 /*65*/][10] = 4;
	uParam0->f_1[0 /*65*/][11] = 1;
	uParam0->f_1[0 /*65*/][12] = 0;
	uParam0->f_1[0 /*65*/][13] = 5;
	uParam0->f_1[0 /*65*/][14] = 1;
	uParam0->f_1[0 /*65*/][15] = 0;
	uParam0->f_1[0 /*65*/][16] = 3;
	uParam0->f_1[0 /*65*/][17] = 0;
	uParam0->f_1[0 /*65*/][18] = 4;
	uParam0->f_1[0 /*65*/][19] = 2;
	uParam0->f_1[0 /*65*/][20] = 1;
	uParam0->f_1[0 /*65*/][21] = 2;
	uParam0->f_1[0 /*65*/][22] = 1;
	uParam0->f_1[0 /*65*/][23] = 1;
	uParam0->f_1[0 /*65*/][24] = 7;
	uParam0->f_1[0 /*65*/][25] = 3;
	uParam0->f_1[0 /*65*/][26] = 1;
	uParam0->f_1[0 /*65*/][27] = 2;
	uParam0->f_1[0 /*65*/][28] = 4;
	uParam0->f_1[0 /*65*/][29] = 5;
	uParam0->f_1[0 /*65*/][30] = 7;
	uParam0->f_1[0 /*65*/][31] = 3;
	uParam0->f_1[0 /*65*/][32] = 0;
	uParam0->f_1[0 /*65*/][33] = 4;
	uParam0->f_1[0 /*65*/][34] = 6;
	uParam0->f_1[0 /*65*/][35] = 1;
	uParam0->f_1[0 /*65*/][36] = 2;
	uParam0->f_1[0 /*65*/][37] = 0;
	uParam0->f_1[0 /*65*/][38] = 2;
	uParam0->f_1[0 /*65*/][39] = 0;
	uParam0->f_1[0 /*65*/][40] = 3;
	uParam0->f_1[0 /*65*/][41] = 5;
	uParam0->f_1[0 /*65*/][42] = 3;
	uParam0->f_1[0 /*65*/][43] = 4;
	uParam0->f_1[0 /*65*/][44] = 2;
	uParam0->f_1[0 /*65*/][45] = 1;
	uParam0->f_1[0 /*65*/][46] = 2;
	uParam0->f_1[0 /*65*/][47] = 1;
	uParam0->f_1[0 /*65*/][48] = 6;
	uParam0->f_1[0 /*65*/][49] = 1;
	uParam0->f_1[0 /*65*/][50] = 7;
	uParam0->f_1[0 /*65*/][51] = 5;
	uParam0->f_1[0 /*65*/][52] = 7;
	uParam0->f_1[0 /*65*/][53] = 1;
	uParam0->f_1[0 /*65*/][54] = 2;
	uParam0->f_1[0 /*65*/][55] = 4;
	uParam0->f_1[0 /*65*/][56] = 1;
	uParam0->f_1[0 /*65*/][57] = 2;
	uParam0->f_1[0 /*65*/][58] = 3;
	uParam0->f_1[0 /*65*/][59] = 5;
	uParam0->f_1[0 /*65*/][60] = 7;
	uParam0->f_1[0 /*65*/][61] = 4;
	uParam0->f_1[0 /*65*/][62] = 0;
	uParam0->f_1[0 /*65*/][63] = 6;
	uParam0->f_1[1 /*65*/][0] = 3;
	uParam0->f_1[1 /*65*/][1] = 0;
	uParam0->f_1[1 /*65*/][2] = 1;
	uParam0->f_1[1 /*65*/][3] = 6;
	uParam0->f_1[1 /*65*/][4] = 3;
	uParam0->f_1[1 /*65*/][5] = 1;
	uParam0->f_1[1 /*65*/][6] = 0;
	uParam0->f_1[1 /*65*/][7] = 3;
	uParam0->f_1[1 /*65*/][8] = 2;
	uParam0->f_1[1 /*65*/][9] = 7;
	uParam0->f_1[1 /*65*/][10] = 5;
	uParam0->f_1[1 /*65*/][11] = 0;
	uParam0->f_1[1 /*65*/][12] = 1;
	uParam0->f_1[1 /*65*/][13] = 7;
	uParam0->f_1[1 /*65*/][14] = 4;
	uParam0->f_1[1 /*65*/][15] = 0;
	uParam0->f_1[1 /*65*/][16] = 1;
	uParam0->f_1[1 /*65*/][17] = 1;
	uParam0->f_1[1 /*65*/][18] = 0;
	uParam0->f_1[1 /*65*/][19] = 2;
	uParam0->f_1[1 /*65*/][20] = 5;
	uParam0->f_1[1 /*65*/][21] = 1;
	uParam0->f_1[1 /*65*/][22] = 4;
	uParam0->f_1[1 /*65*/][23] = 0;
	uParam0->f_1[1 /*65*/][24] = 3;
	uParam0->f_1[1 /*65*/][25] = 0;
	uParam0->f_1[1 /*65*/][26] = 3;
	uParam0->f_1[1 /*65*/][27] = 0;
	uParam0->f_1[1 /*65*/][28] = 1;
	uParam0->f_1[1 /*65*/][29] = 0;
	uParam0->f_1[1 /*65*/][30] = 6;
	uParam0->f_1[1 /*65*/][31] = 0;
	uParam0->f_1[1 /*65*/][32] = 0;
	uParam0->f_1[1 /*65*/][33] = 1;
	uParam0->f_1[1 /*65*/][34] = 0;
	uParam0->f_1[1 /*65*/][35] = 3;
	uParam0->f_1[1 /*65*/][36] = 0;
	uParam0->f_1[1 /*65*/][37] = 1;
	uParam0->f_1[1 /*65*/][38] = 0;
	uParam0->f_1[1 /*65*/][39] = 2;
	uParam0->f_1[1 /*65*/][40] = 2;
	uParam0->f_1[1 /*65*/][41] = 4;
	uParam0->f_1[1 /*65*/][42] = 0;
	uParam0->f_1[1 /*65*/][43] = 0;
	uParam0->f_1[1 /*65*/][44] = 0;
	uParam0->f_1[1 /*65*/][45] = 7;
	uParam0->f_1[1 /*65*/][46] = 0;
	uParam0->f_1[1 /*65*/][47] = 2;
	uParam0->f_1[1 /*65*/][48] = 7;
	uParam0->f_1[1 /*65*/][49] = 5;
	uParam0->f_1[1 /*65*/][50] = 0;
	uParam0->f_1[1 /*65*/][51] = 1;
	uParam0->f_1[1 /*65*/][52] = 0;
	uParam0->f_1[1 /*65*/][53] = 0;
	uParam0->f_1[1 /*65*/][54] = 0;
	uParam0->f_1[1 /*65*/][55] = 1;
	uParam0->f_1[1 /*65*/][56] = 5;
	uParam0->f_1[1 /*65*/][57] = 5;
	uParam0->f_1[1 /*65*/][58] = 0;
	uParam0->f_1[1 /*65*/][59] = 7;
	uParam0->f_1[1 /*65*/][60] = 0;
	uParam0->f_1[1 /*65*/][61] = 0;
	uParam0->f_1[1 /*65*/][62] = 1;
	uParam0->f_1[1 /*65*/][63] = 6;
	uParam0->f_1[2 /*65*/][0] = 0;
	uParam0->f_1[2 /*65*/][1] = 1;
	uParam0->f_1[2 /*65*/][2] = 7;
	uParam0->f_1[2 /*65*/][3] = 6;
	uParam0->f_1[2 /*65*/][4] = 0;
	uParam0->f_1[2 /*65*/][5] = 2;
	uParam0->f_1[2 /*65*/][6] = 2;
	uParam0->f_1[2 /*65*/][7] = 4;
	uParam0->f_1[2 /*65*/][8] = 0;
	uParam0->f_1[2 /*65*/][9] = 1;
	uParam0->f_1[2 /*65*/][10] = 0;
	uParam0->f_1[2 /*65*/][11] = 5;
	uParam0->f_1[2 /*65*/][12] = 0;
	uParam0->f_1[2 /*65*/][13] = 2;
	uParam0->f_1[2 /*65*/][14] = 5;
	uParam0->f_1[2 /*65*/][15] = 0;
	uParam0->f_1[2 /*65*/][16] = 0;
	uParam0->f_1[2 /*65*/][17] = 3;
	uParam0->f_1[2 /*65*/][18] = 0;
	uParam0->f_1[2 /*65*/][19] = 1;
	uParam0->f_1[2 /*65*/][20] = 0;
	uParam0->f_1[2 /*65*/][21] = 0;
	uParam0->f_1[2 /*65*/][22] = 0;
	uParam0->f_1[2 /*65*/][23] = 2;
	uParam0->f_1[2 /*65*/][24] = 1;
	uParam0->f_1[2 /*65*/][25] = 0;
	uParam0->f_1[2 /*65*/][26] = 1;
	uParam0->f_1[2 /*65*/][27] = 0;
	uParam0->f_1[2 /*65*/][28] = 0;
	uParam0->f_1[2 /*65*/][29] = 2;
	uParam0->f_1[2 /*65*/][30] = 0;
	uParam0->f_1[2 /*65*/][31] = 1;
	uParam0->f_1[2 /*65*/][32] = 0;
	uParam0->f_1[2 /*65*/][33] = 4;
	uParam0->f_1[2 /*65*/][34] = 0;
	uParam0->f_1[2 /*65*/][35] = 4;
	uParam0->f_1[2 /*65*/][36] = 0;
	uParam0->f_1[2 /*65*/][37] = 0;
	uParam0->f_1[2 /*65*/][38] = 0;
	uParam0->f_1[2 /*65*/][39] = 3;
	uParam0->f_1[2 /*65*/][40] = 0;
	uParam0->f_1[2 /*65*/][41] = 4;
	uParam0->f_1[2 /*65*/][42] = 0;
	uParam0->f_1[2 /*65*/][43] = 0;
	uParam0->f_1[2 /*65*/][44] = 7;
	uParam0->f_1[2 /*65*/][45] = 0;
	uParam0->f_1[2 /*65*/][46] = 2;
	uParam0->f_1[2 /*65*/][47] = 0;
	uParam0->f_1[2 /*65*/][48] = 5;
	uParam0->f_1[2 /*65*/][49] = 4;
	uParam0->f_1[2 /*65*/][50] = 0;
	uParam0->f_1[2 /*65*/][51] = 3;
	uParam0->f_1[2 /*65*/][52] = 0;
	uParam0->f_1[2 /*65*/][53] = 0;
	uParam0->f_1[2 /*65*/][54] = 0;
	uParam0->f_1[2 /*65*/][55] = 3;
	uParam0->f_1[2 /*65*/][56] = 0;
	uParam0->f_1[2 /*65*/][57] = 3;
	uParam0->f_1[2 /*65*/][58] = 0;
	uParam0->f_1[2 /*65*/][59] = 2;
	uParam0->f_1[2 /*65*/][60] = 4;
	uParam0->f_1[2 /*65*/][61] = 0;
	uParam0->f_1[2 /*65*/][62] = 0;
	uParam0->f_1[2 /*65*/][63] = 6;
	uParam0->f_278[0] = 0;
	uParam0->f_278[1] = 25;
	uParam0->f_278[2] = 50;
	uParam0->f_278[3] = 75;
	uParam0->f_278[4] = 100;
	uParam0->f_278[5] = 250;
	uParam0->f_278[6] = 1000;
	uParam0->f_278[7] = 500;
	uParam0->f_278[8] = 5;
	uParam0->f_278[9] = 2;
	uParam0->f_226[0 /*17*/][0] = 5;
	uParam0->f_226[0 /*17*/][1] = 2;
	uParam0->f_226[0 /*17*/][2] = 1;
	uParam0->f_226[0 /*17*/][3] = 3;
	uParam0->f_226[0 /*17*/][4] = 7;
	uParam0->f_226[0 /*17*/][5] = 6;
	uParam0->f_226[0 /*17*/][6] = 1;
	uParam0->f_226[0 /*17*/][7] = 4;
	uParam0->f_226[0 /*17*/][8] = 5;
	uParam0->f_226[0 /*17*/][9] = 2;
	uParam0->f_226[0 /*17*/][10] = 3;
	uParam0->f_226[0 /*17*/][11] = 7;
	uParam0->f_226[0 /*17*/][12] = 2;
	uParam0->f_226[0 /*17*/][13] = 4;
	uParam0->f_226[0 /*17*/][14] = 1;
	uParam0->f_226[0 /*17*/][15] = 7;
	uParam0->f_226[1 /*17*/][0] = 5;
	uParam0->f_226[1 /*17*/][1] = 2;
	uParam0->f_226[1 /*17*/][2] = 1;
	uParam0->f_226[1 /*17*/][3] = 3;
	uParam0->f_226[1 /*17*/][4] = 7;
	uParam0->f_226[1 /*17*/][5] = 6;
	uParam0->f_226[1 /*17*/][6] = 1;
	uParam0->f_226[1 /*17*/][7] = 4;
	uParam0->f_226[1 /*17*/][8] = 5;
	uParam0->f_226[1 /*17*/][9] = 2;
	uParam0->f_226[1 /*17*/][10] = 3;
	uParam0->f_226[1 /*17*/][11] = 7;
	uParam0->f_226[1 /*17*/][12] = 2;
	uParam0->f_226[1 /*17*/][13] = 4;
	uParam0->f_226[1 /*17*/][14] = 1;
	uParam0->f_226[1 /*17*/][15] = 7;
	uParam0->f_226[2 /*17*/][0] = 5;
	uParam0->f_226[2 /*17*/][1] = 2;
	uParam0->f_226[2 /*17*/][2] = 1;
	uParam0->f_226[2 /*17*/][3] = 3;
	uParam0->f_226[2 /*17*/][4] = 7;
	uParam0->f_226[2 /*17*/][5] = 6;
	uParam0->f_226[2 /*17*/][6] = 1;
	uParam0->f_226[2 /*17*/][7] = 4;
	uParam0->f_226[2 /*17*/][8] = 5;
	uParam0->f_226[2 /*17*/][9] = 2;
	uParam0->f_226[2 /*17*/][10] = 3;
	uParam0->f_226[2 /*17*/][11] = 7;
	uParam0->f_226[2 /*17*/][12] = 2;
	uParam0->f_226[2 /*17*/][13] = 4;
	uParam0->f_226[2 /*17*/][14] = 1;
	uParam0->f_226[2 /*17*/][15] = 7;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			uParam0->f_197[iVar0 /*9*/][uParam0->f_1[iVar0 /*65*/][iVar1]]++;
			iVar1++;
		}
		iVar0++;
	}
	(uParam1[0 /*21*/])->f_17 = 4;
	(uParam1[1 /*21*/])->f_17 = 5;
	(uParam1[2 /*21*/])->f_17 = 6;
	(uParam1[3 /*21*/])->f_17 = 7;
	(uParam1[4 /*21*/])->f_17 = 8;
	(uParam1[5 /*21*/])->f_17 = 1;
	(uParam1[6 /*21*/])->f_17 = 2;
	(uParam1[7 /*21*/])->f_17 = 3;
	(uParam1[8 /*21*/])->f_17 = 4;
	(uParam1[9 /*21*/])->f_17 = 5;
	(uParam1[10 /*21*/])->f_17 = 6;
	(uParam1[11 /*21*/])->f_17 = 7;
	(uParam1[12 /*21*/])->f_17 = 1;
	(uParam1[13 /*21*/])->f_17 = 2;
	(uParam1[14 /*21*/])->f_17 = 3;
	(uParam1[15 /*21*/])->f_17 = 4;
	(uParam1[16 /*21*/])->f_17 = 5;
	(uParam1[17 /*21*/])->f_17 = 4;
	(uParam1[18 /*21*/])->f_17 = 5;
	(uParam1[19 /*21*/])->f_17 = 1;
	(uParam1[20 /*21*/])->f_17 = 2;
	(uParam1[21 /*21*/])->f_17 = 3;
	(uParam1[22 /*21*/])->f_17 = 7;
	(uParam1[23 /*21*/])->f_17 = 8;
	(uParam1[24 /*21*/])->f_17 = 4;
	(uParam1[25 /*21*/])->f_17 = 5;
	(uParam1[26 /*21*/])->f_17 = 6;
	(uParam1[27 /*21*/])->f_17 = 4;
	(uParam1[28 /*21*/])->f_17 = 5;
	(uParam1[29 /*21*/])->f_17 = 1;
	(uParam1[30 /*21*/])->f_17 = 2;
	(uParam1[31 /*21*/])->f_17 = 3;
	(uParam1[32 /*21*/])->f_17 = 7;
	(uParam1[33 /*21*/])->f_17 = 8;
	(uParam1[34 /*21*/])->f_17 = 4;
	(uParam1[35 /*21*/])->f_17 = 5;
	(uParam1[36 /*21*/])->f_17 = 6;
	(uParam1[37 /*21*/])->f_17 = 8;
	(uParam1[38 /*21*/])->f_17 = 7;
	(uParam1[39 /*21*/])->f_17 = 6;
	(uParam1[40 /*21*/])->f_17 = 5;
	(uParam1[41 /*21*/])->f_17 = 4;
	(uParam1[42 /*21*/])->f_17 = 3;
	(uParam1[43 /*21*/])->f_17 = 2;
	(uParam1[44 /*21*/])->f_17 = 3;
	(uParam1[45 /*21*/])->f_17 = 4;
	(uParam1[46 /*21*/])->f_17 = 5;
	(uParam1[47 /*21*/])->f_17 = 1;
	(uParam1[48 /*21*/])->f_17 = 2;
	(uParam1[49 /*21*/])->f_17 = 6;
	(uParam1[50 /*21*/])->f_17 = 7;
	(uParam1[51 /*21*/])->f_17 = 8;
	(uParam1[52 /*21*/])->f_17 = 4;
	(uParam1[53 /*21*/])->f_17 = 5;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		switch ((uParam1[iVar0 /*21*/])->f_17)
		{
			case 1:
			case 6:
				(uParam1[iVar0 /*21*/])->f_16 = 100;
				break;
			
			case 2:
			case 3:
				(uParam1[iVar0 /*21*/])->f_16 = 25;
				break;
			
			case 4:
			case 8:
				(uParam1[iVar0 /*21*/])->f_16 = 5;
				break;
			
			case 5:
			case 7:
				(uParam1[iVar0 /*21*/])->f_16 = 500;
				break;
		}
		iVar0++;
	}
}

void func_342()
{
	struct<8> Var0;
	int iVar1;
	int iVar2;
	
	if (iLocal_99 != -1)
	{
		func_196(&iLocal_99);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
	}
	if (iLocal_100 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_60, 23))
		{
			Var0 = { func_194(Local_47[iLocal_100 /*21*/].f_17) };
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
			MISC::CLEAR_BIT(&iLocal_60, 23);
		}
		if (MISC::IS_BIT_SET(iLocal_60, 19))
		{
			func_163(0, 0);
			func_160(1, -1);
			MISC::CLEAR_BIT(&iLocal_60, 19);
		}
		func_212(0);
	}
	func_182();
	func_29();
	if (MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4, 7))
	{
		MISC::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4), 7);
		func_31();
	}
	if (MISC::IS_BIT_SET(iLocal_60, 13))
	{
		if (func_216())
		{
			func_215(0);
		}
		MISC::CLEAR_BIT(&iLocal_60, 13);
	}
	if (MISC::IS_BIT_SET(iLocal_60, 18))
	{
		STREAMING::REMOVE_ANIM_DICT(func_310());
		MISC::CLEAR_BIT(&iLocal_60, 18);
	}
	iVar2 = 0;
	while (iVar2 < 54)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_106[iVar2 /*4*/][iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(Local_106[iVar2 /*4*/][iVar1]));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_107[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_107[iVar2]));
		}
		iVar2++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_108[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_108[iVar1]));
		}
		iVar1++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		OBJECT::DELETE_OBJECT(&iLocal_109);
	}
	if (MISC::IS_BIT_SET(iLocal_60, 2))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (HUD::IS_RADAR_HIDDEN())
		{
			HUD::DISPLAY_RADAR(true);
		}
		func_16(0);
		MISC::CLEAR_BIT(&iLocal_60, 2);
	}
	func_163(0, 0);
	func_160(1, -1);
	func_343();
}

void func_343()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_344()
{
	if (Global_1689887)
	{
		Global_1689887 = 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_346(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_328, 660);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_332, 353);
	if (!func_345())
	{
		func_342();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		func_342();
	}
}

int func_345()
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
		if (func_336())
		{
			return 0;
		}
		if (func_334(155))
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

int func_346(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_343();
			}
			else
			{
				return 0;
			}
		}
		if (!func_347())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_343();
					}
					else
					{
						return 0;
					}
				}
				if (func_336())
				{
					if (!bParam2)
					{
						func_343();
					}
					else
					{
						return 0;
					}
				}
				if (func_334(155))
				{
					if (!bParam2)
					{
						func_343();
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
					func_343();
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
				func_343();
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
			func_343();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_347()
{
	return Global_1312844;
}

void func_348()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Local_328.f_598[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_71[iVar0 /*2*/].f_1 = -1;
		Local_71[iVar0 /*2*/] = -1;
		iVar0++;
	}
}

