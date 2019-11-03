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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	fLocal_98 = 0.952f;
	fLocal_99 = 0.949f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		if (func_242(&uVar0, 5, 0))
		{
			func_39();
		}
		if (Global_1373453.f_1 == 0)
		{
			bVar1 = true;
		}
		func_38();
		func_37();
		func_11();
		if (bVar1)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("timerbar_lines");
			func_1();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1373453 = 0;
	Global_1373453.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1373453.f_2[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_23[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_44[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_65[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_86[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_107[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_128[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_149[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_170[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_191[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_212[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_233[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_254[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_275[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_296[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_317[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_338[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_359[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_464[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_485[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_506[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_527[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_548[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_569[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_590[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_611[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_632[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_653[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_674[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_695[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_716[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_737[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_758[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_779[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_842[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_1066[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_874[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_906[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_938[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_970[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_1002[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_1034[iVar0 /*2*/] = { Var1 };
		Global_1373453.f_863[iVar0] = 0;
		Global_1373453.f_895[iVar0] = 0;
		Global_1373453.f_927[iVar0] = 0;
		Global_1373453.f_959[iVar0] = 0;
		Global_1373453.f_991[iVar0] = 0;
		Global_1373453.f_1023[iVar0] = 0;
		Global_1373453.f_1055[iVar0] = 0;
		Global_1373453.f_1087[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_1373453.f_6184[iVar0] = 0;
		Global_1373453.f_6198[iVar0] = 0;
		Global_1373453.f_6212[iVar0] = 0;
		Global_1373453.f_6226[iVar0] = 0;
		iVar0++;
	}
	Global_1373453.f_6240 = 0;
	Global_1373453.f_6241 = 0f;
}

void func_2()
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_4854), &Var0, 227);
	}
	else
	{
		Global_1373453.f_4854 = { Var0 };
	}
}

void func_3()
{
	struct<401> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_4453), &Var0, 401);
	}
	else
	{
		Global_1373453.f_4453 = { Var0 };
	}
}

void func_4()
{
	struct<618> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Var0.f_552 = 10;
	Var0.f_563 = 10;
	Var0.f_574 = 10;
	Var0.f_585 = 10;
	Var0.f_596 = 10;
	Var0.f_607 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_3835), &Var0, 618);
	}
	else
	{
		Global_1373453.f_3835 = { Var0 };
	}
}

void func_5()
{
	struct<314> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_3521), &Var0, 314);
	}
	else
	{
		Global_1373453.f_3521 = { Var0 };
	}
}

void func_6()
{
	struct<358> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_347 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_3163), &Var0, 358);
	}
	else
	{
		Global_1373453.f_3163 = { Var0 };
	}
}

void func_7()
{
	struct<508> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	Var0.f_475 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_2655), &Var0, 508);
	}
	else
	{
		Global_1373453.f_2655 = { Var0 };
	}
}

void func_8()
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_1936), &Var0, 719);
	}
	else
	{
		Global_1373453.f_1936 = { Var0 };
	}
}

void func_9()
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_1591), &Var0, 345);
	}
	else
	{
		Global_1373453.f_1591 = { Var0 };
	}
}

void func_10()
{
	struct<477> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Var0.f_422 = 10;
	Var0.f_433 = 10;
	Var0.f_444 = 10;
	Var0.f_455 = 10;
	Var0.f_466 = 10;
	if (Global_2437363)
	{
		MISC::_COPY_MEMORY(&(Global_1373453.f_1114), &Var0, 477);
	}
	else
	{
		Global_1373453.f_1114 = { Var0 };
	}
}

void func_11()
{
	int iVar0;
	
	Global_1373453 = 0;
	Global_1373453.f_1099 = 0.725f;
	Global_1373453.f_1098 = func_30();
	Global_1373453.f_1 = 0;
	Global_1373453.f_1100 = 0;
	Global_1373453.f_1101 = 0;
	Global_1373453.f_1102 = 0;
	Global_1373453.f_1103 = 0;
	Global_1373453.f_1104 = 0;
	Global_1373453.f_1105 = 0;
	Global_1373453.f_1106 = 0;
	Global_1373453.f_1107 = 0;
	Global_1373453.f_1108 = 0;
	Global_1373453.f_1109 = 0;
	Global_1373453.f_1110 = 0;
	Global_1373453.f_1111 = 0;
	Global_1373453.f_1112 = 0;
	Global_1373453.f_1113 = 0;
	Global_2460155 = 0;
	Global_2458627 = 0;
	Global_2458628 = 0;
	Global_2460130 = 1;
	Global_2460850 = 0;
	if (func_29(3))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(3, iVar0) && func_27(3, iVar0))
			{
				func_26(iVar0);
				func_25(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(6))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(6, iVar0) && func_27(6, iVar0))
			{
				func_24(iVar0);
				func_25(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(7))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(7, iVar0) && func_27(7, iVar0))
			{
				func_23(iVar0);
				func_25(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(4))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(4, iVar0) && func_27(4, iVar0))
			{
				func_22(iVar0);
				func_25(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(5))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(5, iVar0) && func_27(5, iVar0))
			{
				func_21(iVar0);
				func_25(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(1, iVar0) && func_27(1, iVar0))
			{
				func_20(iVar0);
				func_25(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(0))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(0, iVar0) && func_27(0, iVar0))
			{
				func_19(iVar0);
				func_25(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0) == 0)
			{
				func_18(iVar0);
				func_25(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(8))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(8, iVar0) && func_27(8, iVar0) == 0)
			{
				func_17(iVar0);
				func_25(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(9))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(9, iVar0) && func_27(9, iVar0) == 0)
			{
				func_16(iVar0);
				func_25(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(10))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(10, iVar0) && func_27(10, iVar0) == 0)
			{
				func_14(iVar0);
				func_25(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(11))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(11, iVar0) && func_27(11, iVar0) == 0)
			{
				func_13(iVar0);
				func_25(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(12))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(12, iVar0) && func_27(12, iVar0) == 0)
			{
				func_12(iVar0);
				func_25(12, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	Global_1373453.f_5782[iParam0] = 0;
	Global_1373453.f_5782.f_11[iParam0] = 0;
	Global_1373453.f_5782.f_22[iParam0] = 0f;
	StringCopy(&(Global_1373453.f_5782.f_33[iParam0 /*6*/]), "", 24);
	Global_1373453.f_5782.f_94[iParam0] = 0;
	Global_1373453.f_5782.f_105[iParam0] = 0;
	Global_1373453.f_5782.f_116[iParam0] = 0;
	Global_1373453.f_5782.f_127[iParam0] = 0;
	Global_1373453.f_5782.f_138[iParam0] = 0;
	Global_1373453.f_5782.f_149[iParam0] = 0;
	Global_1373453.f_5782.f_160[iParam0] = 0;
	Global_1373453.f_5782.f_171[iParam0] = 0;
	Global_1373453.f_5782.f_182[iParam0] = 0;
	Global_1373453.f_5782.f_193[iParam0] = 0;
	Global_1373453.f_5782.f_204[iParam0] = 0;
	Global_1373453.f_5782.f_215[iParam0] = 0;
	Global_1373453.f_5782.f_226[iParam0] = 0;
	Global_1373453.f_5782.f_237[iParam0] = 2;
	Global_1373453.f_5782.f_248[iParam0] = 0;
	Global_1373453.f_5782.f_259[iParam0] = 0;
	Global_1373453.f_5782.f_270[iParam0] = 0;
	Global_1373453.f_5782.f_281[iParam0] = 0;
	Global_1373453.f_5782.f_292[iParam0] = 0;
	Global_1373453.f_5782.f_303[iParam0] = 0;
	Global_1373453.f_5782.f_314[iParam0] = 0;
	Global_1373453.f_5782.f_325[iParam0] = 0;
	Global_1373453.f_5782.f_336[iParam0] = 0;
	Global_1373453.f_5782.f_347[iParam0] = 0;
	Global_1373453.f_5782.f_358[iParam0] = 0;
	Global_1373453.f_5782.f_369[iParam0] = 0;
	Global_1373453.f_5782.f_380[iParam0] = 0;
	Global_1373453.f_5782.f_391[iParam0] = 0;
}

void func_13(int iParam0)
{
	Global_1373453.f_5617[iParam0] = 0;
	Global_1373453.f_5617.f_11[iParam0] = 0;
	Global_1373453.f_5617.f_22[iParam0] = 0;
	Global_1373453.f_5617.f_33[iParam0] = 0;
	Global_1373453.f_5617.f_44[iParam0] = 0;
	Global_1373453.f_5617.f_55[iParam0] = 0;
	Global_1373453.f_5617.f_66[iParam0] = 0;
	Global_1373453.f_5617.f_77[iParam0] = 0;
	Global_1373453.f_5617.f_88[iParam0] = 0;
	Global_1373453.f_5617.f_99[iParam0] = 2;
	Global_1373453.f_5617.f_110[iParam0] = 0;
	Global_1373453.f_5617.f_121[iParam0] = 0;
	Global_1373453.f_5617.f_132[iParam0] = 0;
	Global_1373453.f_5617.f_143[iParam0] = 0;
	Global_1373453.f_5617.f_154[iParam0] = -1;
}

void func_14(int iParam0)
{
	Global_1373453.f_5114.f_6[iParam0] = 0;
	Global_1373453.f_5114.f_17[iParam0] = 0;
	StringCopy(&(Global_1373453.f_5114.f_28[iParam0 /*16*/]), "", 64);
	Global_1373453.f_5114.f_189[iParam0] = -1;
	Global_1373453.f_5114.f_200[iParam0] = 1;
	Global_1373453.f_5114.f_211[iParam0] = -1;
	Global_1373453.f_5114.f_222[iParam0] = 2;
	Global_1373453.f_5114.f_233[iParam0] = 0;
	Global_1373453.f_5114.f_244[iParam0] = 0;
	func_15(&(Global_1373453.f_5114.f_255[iParam0 /*2*/]));
	Global_1373453.f_5114.f_276[iParam0] = -1;
	Global_1373453.f_5114.f_470[iParam0] = 0;
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_16(int iParam0)
{
	Global_1373453.f_5081[iParam0] = 0;
	Global_1373453.f_5081.f_11[iParam0] = 1;
	Global_1373453.f_5081.f_22[iParam0] = 2;
}

void func_17(int iParam0)
{
	Global_1373453.f_4854[iParam0] = 0f;
	StringCopy(&(Global_1373453.f_4854.f_11[iParam0 /*16*/]), "", 64);
	Global_1373453.f_4854.f_172[iParam0] = 0;
	Global_1373453.f_4854[iParam0] = 0f;
	Global_1373453.f_4854.f_183[iParam0] = 0;
	Global_1373453.f_4854.f_194[iParam0] = 0;
	Global_1373453.f_4854.f_205[iParam0] = 0;
	Global_1373453.f_4854.f_216[iParam0] = 2;
}

void func_18(int iParam0)
{
	Global_1373453.f_1936[iParam0] = 0;
	Global_1373453.f_1936.f_11[iParam0] = 0;
	Global_1373453.f_1936.f_22[iParam0] = 0;
	Global_1373453.f_1936.f_33[iParam0] = 0;
	Global_1373453.f_1936.f_44[iParam0] = 0;
	Global_1373453.f_1936.f_55[iParam0] = 0;
	Global_1373453.f_1936.f_66[iParam0] = 0;
	Global_1373453.f_1936.f_77[iParam0] = 0;
	Global_1373453.f_1936.f_88[iParam0] = 0;
	StringCopy(&(Global_1373453.f_1936.f_99[iParam0 /*16*/]), "", 64);
	Global_1373453.f_1936.f_260[iParam0] = -1;
	Global_1373453.f_1936.f_271[iParam0] = -1;
	Global_1373453.f_1936.f_282[iParam0] = 18;
	Global_1373453.f_1936.f_293[iParam0] = 6;
	Global_1373453.f_1936.f_304[iParam0] = -1;
	Global_1373453.f_1936.f_315[iParam0] = 2;
	Global_1373453.f_1936.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1373453.f_1936.f_357[iParam0] = 0;
	Global_1373453.f_1936.f_368[iParam0] = 1;
	Global_1373453.f_1936.f_379[iParam0] = 1;
	Global_1373453.f_1936.f_390[iParam0] = 1;
	Global_1373453.f_1936.f_401[iParam0] = 1;
	Global_1373453.f_1936.f_412[iParam0] = 1;
	Global_1373453.f_1936.f_423[iParam0] = 1;
	Global_1373453.f_1936.f_434[iParam0] = 1;
	Global_1373453.f_1936.f_445[iParam0] = 1;
	Global_1373453.f_1936.f_456[iParam0] = 1;
	Global_1373453.f_1936.f_467[iParam0] = 1;
	Global_1373453.f_1936.f_478[iParam0] = 1;
	Global_1373453.f_1936.f_489[iParam0] = 1;
	Global_1373453.f_1936.f_500[iParam0] = 1;
	Global_1373453.f_1936.f_511[iParam0] = 1;
	Global_1373453.f_1936.f_522[iParam0] = 1;
	Global_1373453.f_1936.f_533[iParam0] = 1;
	func_15(&(Global_1373453.f_1936.f_555[iParam0 /*2*/]));
	Global_1373453.f_1936.f_576[iParam0] = -1;
	Global_1373453.f_1936.f_609[iParam0] = 0;
}

void func_19(int iParam0)
{
	Global_1373453.f_1114[iParam0] = 0;
	Global_1373453.f_1114.f_11[iParam0] = 0;
	StringCopy(&(Global_1373453.f_1114.f_22[iParam0 /*16*/]), "", 64);
	Global_1373453.f_1114.f_183[iParam0] = -1;
	Global_1373453.f_1114.f_194[iParam0] = 1;
	Global_1373453.f_1114.f_205[iParam0] = -1;
	Global_1373453.f_1114.f_216[iParam0] = 2;
	Global_1373453.f_1114.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1373453.f_1114.f_258[iParam0] = 0;
	Global_1373453.f_1114.f_269[iParam0] = 0;
	func_15(&(Global_1373453.f_1114.f_280[iParam0 /*2*/]));
	Global_1373453.f_1114.f_301[iParam0] = -1;
	Global_1373453.f_1114.f_334[iParam0] = 0;
	Global_1373453.f_1114.f_345[iParam0] = 0;
	Global_1373453.f_1114.f_356[iParam0] = 0;
	Global_1373453.f_1114.f_444[iParam0] = 1;
	Global_1373453.f_1114.f_455[iParam0] = -1;
}

void func_20(int iParam0)
{
	Global_1373453.f_1591[iParam0] = 0;
	Global_1373453.f_1591.f_11[iParam0] = 0;
	StringCopy(&(Global_1373453.f_1591.f_22[iParam0 /*16*/]), "", 64);
	Global_1373453.f_1591.f_183[iParam0] = -1;
	Global_1373453.f_1591.f_194[iParam0] = 1;
	Global_1373453.f_1591.f_205[iParam0] = -1;
	Global_1373453.f_1591.f_216[iParam0] = 2;
	Global_1373453.f_1591.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1373453.f_1591.f_258[iParam0] = 0;
	Global_2537643[iParam0] = 0;
	Global_2537654[iParam0] = 0;
	Global_2537665[iParam0] = 0;
	Global_2537676[iParam0] = 0;
	Global_2537687[iParam0] = 0;
	Global_2537698[iParam0] = 0;
	Global_2537709[iParam0] = 0;
	Global_2537720[iParam0] = 0;
	Global_2537731[iParam0] = 0;
	Global_2537742[iParam0] = 0;
	Global_2537753[iParam0] = 0;
	Global_2537764[iParam0] = 0;
	Global_2537775[iParam0] = 0;
	Global_2537786[iParam0] = 0;
	Global_2537797[iParam0] = 0;
	Global_2537808[iParam0] = 0;
	func_15(&(Global_1373453.f_1591.f_280[iParam0 /*2*/]));
	Global_1373453.f_1591.f_301[iParam0] = -1;
}

void func_21(int iParam0)
{
	Global_1373453.f_3521[iParam0] = 0;
	StringCopy(&(Global_1373453.f_3521.f_11[iParam0 /*16*/]), "", 64);
	Global_1373453.f_3521.f_172[iParam0] = -1;
	Global_1373453.f_3521.f_183[iParam0] = -1;
	Global_1373453.f_3521.f_194[iParam0] = 1;
	Global_1373453.f_3521.f_205[iParam0] = -1;
	Global_1373453.f_3521.f_216[iParam0] = 2;
	Global_1373453.f_3521.f_227[iParam0] = 0;
	func_15(&(Global_1373453.f_3521.f_238[iParam0 /*2*/]));
	Global_1373453.f_3521.f_259[iParam0] = -1;
}

void func_22(int iParam0)
{
	Global_1373453.f_3163[iParam0] = -1;
	StringCopy(&(Global_1373453.f_3163.f_11[iParam0 /*16*/]), "", 64);
	Global_1373453.f_3163.f_172[iParam0] = -1;
	Global_1373453.f_3163.f_183[iParam0] = -1;
	Global_1373453.f_3163.f_194[iParam0] = 1;
	Global_1373453.f_3163.f_205[iParam0] = -1;
	Global_1373453.f_3163.f_216[iParam0] = 2;
	Global_1373453.f_3163.f_227[iParam0] = 0;
	func_15(&(Global_1373453.f_3163.f_238[iParam0 /*2*/]));
	Global_1373453.f_3163.f_259[iParam0] = -1;
}

void func_23(int iParam0)
{
	Global_1373453.f_4453[iParam0] = 0;
	StringCopy(&(Global_1373453.f_4453.f_11[iParam0 /*16*/]), "", 64);
	Global_1373453.f_4453.f_172[iParam0] = -1;
	Global_1373453.f_4453.f_183[iParam0] = -1;
	Global_1373453.f_4453.f_194[iParam0] = 0;
	Global_1373453.f_4453.f_205[iParam0] = 1;
	Global_1373453.f_4453.f_216[iParam0] = 0;
	Global_1373453.f_4453.f_227[iParam0] = -1;
	Global_1373453.f_4453.f_249[iParam0] = 2;
	Global_1373453.f_4453.f_260[iParam0] = 0;
	func_15(&(Global_1373453.f_4453.f_282[iParam0 /*2*/]));
	Global_1373453.f_4453.f_303[iParam0] = -1;
}

void func_24(int iParam0)
{
	Global_1373453.f_3835[iParam0] = 0;
	StringCopy(&(Global_1373453.f_3835.f_11[iParam0 /*16*/]), "", 64);
	Global_1373453.f_3835.f_172[iParam0] = -1;
	Global_1373453.f_3835.f_183[iParam0] = 1;
	Global_1373453.f_3835.f_194[iParam0] = -1;
	Global_1373453.f_3835.f_260[iParam0] = 2;
	Global_1373453.f_3835.f_271[iParam0] = 0;
	StringCopy(&(Global_1373453.f_3835.f_282[iParam0 /*16*/]), "", 64);
	Global_1373453.f_3835.f_443[iParam0] = 0;
	Global_1373453.f_3835.f_454[iParam0] = -1f;
	func_15(&(Global_1373453.f_3835.f_465[iParam0 /*2*/]));
	Global_1373453.f_3835.f_486[iParam0] = -1;
	Global_1373453.f_3835.f_519[iParam0] = 0;
}

void func_25(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Global_1373453.f_6212[iParam0]), iParam1);
}

void func_26(int iParam0)
{
	Global_1373453.f_2655[iParam0] = 0;
	StringCopy(&(Global_1373453.f_2655.f_11[iParam0 /*16*/]), "", 64);
	Global_1373453.f_2655.f_172[iParam0] = -1;
	Global_1373453.f_2655.f_183[iParam0] = 1;
	Global_1373453.f_2655.f_194[iParam0] = -1;
	Global_1373453.f_2655.f_205[iParam0] = 2;
	Global_1373453.f_2655.f_216[iParam0] = 0;
	func_15(&(Global_1373453.f_2655.f_227[iParam0 /*2*/]));
	Global_1373453.f_2655.f_248[iParam0] = -1;
}

bool func_27(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

bool func_28(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1373453.f_6212[iParam0], iParam1);
}

int func_29(int iParam0)
{
	if (Global_1373453.f_6184[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_30()
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_1373453.f_1100)));
	if (Global_1373453.f_1101 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_1373453.f_1102 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_1373453.f_1105 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_1373453.f_1106 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_1373453.f_1107 == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_1373453.f_1103 == 1 && Global_1373453.f_1104 == 0)
	{
		switch (func_31())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				fVar0 = (fVar0 + -0.405f);
				break;
			}
	}
	return fVar0;
}

int func_31()
{
	func_32();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_36(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_33(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_34(Global_106565.f_2357.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1373453.f_6184[iVar0] = 0;
		iVar0++;
	}
}

void func_38()
{
	Global_2460035 = 0;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (HUD::BUSYSPINNER_IS_DISPLAYING())
	{
		if (Global_1373453.f_1100 == 0)
		{
			func_241(1);
		}
	}
	func_237();
	if (func_232())
	{
		if ((MISC::GET_FRAME_COUNT() % 100) == 0)
		{
			if (func_227(PLAYER::PLAYER_ID()))
			{
				func_226();
			}
		}
		if (func_225())
		{
			Global_1371947.f_1179 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			iVar4 = 0;
			if (func_27(7, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3835.f_260[iVar0];
			}
			iVar4 = 1;
			if (func_27(3, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_2655.f_205[iVar0];
			}
			iVar4 = 2;
			if (func_27(4, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3163.f_216[iVar0];
			}
			iVar4 = 3;
			if (func_27(5, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3521.f_216[iVar0];
			}
			iVar4 = 4;
			if (func_27(1, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_1591.f_216[iVar0];
			}
			iVar4 = 5;
			if (func_27(0, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_1114.f_216[iVar0];
			}
			iVar4 = 6;
			if (func_27(6, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3835.f_260[iVar0];
			}
			iVar4 = 7;
			if (func_27(2, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_1936.f_315[iVar0];
			}
			iVar4 = 8;
			if (func_27(8, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_4854.f_216[iVar0];
			}
			iVar4 = 9;
			if (func_27(9, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5081.f_22[iVar0];
			}
			iVar4 = 10;
			if (func_27(10, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5114.f_222[iVar0];
			}
			iVar4 = 11;
			if (func_27(11, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5617.f_99[iVar0];
			}
			iVar4 = 12;
			if (func_27(12, iVar0))
			{
				Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5782.f_237[iVar0];
			}
			iVar0++;
		}
		iVar4 = 0;
		if (Global_1371947.f_1179 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar4 = 0;
				if (func_27(7, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_4453.f_249[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_4453.f_249[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_4453.f_249[iVar0] == 2) || Global_1373453.f_4453.f_249[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_4453.f_249[iVar0] == 13) || Global_1373453.f_4453.f_249[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_4453.f_249[iVar0];
						}
					}
				}
				iVar4 = 1;
				if (func_27(3, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_2655.f_205[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_2655.f_205[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_2655.f_205[iVar0] == 2) || Global_1373453.f_2655.f_205[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_2655.f_205[iVar0] == 13) || Global_1373453.f_2655.f_205[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_2655.f_205[iVar0];
						}
					}
				}
				iVar4 = 2;
				if (func_27(4, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3163.f_216[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_3163.f_216[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_3163.f_216[iVar0] == 2) || Global_1373453.f_3163.f_216[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_3163.f_216[iVar0] == 13) || Global_1373453.f_3163.f_216[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_3163.f_216[iVar0];
						}
					}
				}
				iVar4 = 3;
				if (func_27(5, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3521.f_216[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_3521.f_216[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_3521.f_216[iVar0] == 2) || Global_1373453.f_3521.f_216[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_3521.f_216[iVar0] == 13) || Global_1373453.f_3521.f_216[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_3521.f_216[iVar0];
						}
					}
				}
				iVar4 = 4;
				if (func_27(1, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_1591.f_216[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_1591.f_216[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_1591.f_216[iVar0] == 2) || Global_1373453.f_1591.f_216[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_1591.f_216[iVar0] == 13) || Global_1373453.f_1591.f_216[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_1591.f_216[iVar0];
						}
					}
				}
				iVar4 = 5;
				if (func_27(0, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_1114.f_216[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_1114.f_216[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_1114.f_216[iVar0] == 2) || Global_1373453.f_1114.f_216[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_1114.f_216[iVar0] == 13) || Global_1373453.f_1114.f_216[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_1114.f_216[iVar0];
						}
					}
				}
				iVar4 = 6;
				if (func_27(6, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_3835.f_260[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_3835.f_260[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_3835.f_260[iVar0] == 2) || Global_1373453.f_3835.f_260[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_3835.f_260[iVar0] == 13) || Global_1373453.f_3835.f_260[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_3835.f_260[iVar0];
						}
					}
				}
				iVar4 = 7;
				if (func_27(2, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_1936.f_315[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_1936.f_315[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_1936.f_315[iVar0] == 2) || Global_1373453.f_1936.f_315[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_1936.f_315[iVar0] == 13) || Global_1373453.f_1936.f_315[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_1936.f_315[iVar0];
						}
					}
				}
				iVar4 = 8;
				if (func_27(8, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_4854.f_216[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_4854.f_216[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_4854.f_216[iVar0] == 2) || Global_1373453.f_4854.f_216[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_4854.f_216[iVar0] == 13) || Global_1373453.f_4854.f_216[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_4854.f_216[iVar0];
						}
					}
				}
				iVar4 = 9;
				if (func_27(9, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5081.f_22[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_5081.f_22[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5081.f_22[iVar0] == 2) || Global_1373453.f_5081.f_22[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5081.f_22[iVar0] == 13) || Global_1373453.f_5081.f_22[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_5081.f_22[iVar0];
						}
					}
				}
				iVar4 = 10;
				if (func_27(10, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5114.f_222[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_5114.f_222[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5114.f_222[iVar0] == 2) || Global_1373453.f_5114.f_222[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5114.f_222[iVar0] == 13) || Global_1373453.f_5114.f_222[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_5114.f_222[iVar0];
						}
					}
				}
				iVar4 = 11;
				if (func_27(11, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5617.f_99[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_5617.f_99[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5617.f_99[iVar0] == 2) || Global_1373453.f_5617.f_99[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5617.f_99[iVar0] == 13) || Global_1373453.f_5617.f_99[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_5617.f_99[iVar0];
						}
					}
				}
				iVar4 = 12;
				if (func_27(12, iVar0))
				{
					Global_1371947.f_1180[iVar4 /*11*/][iVar0] = Global_1373453.f_5782.f_237[iVar0];
					if (Global_1371947.f_1180[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] != Global_1373453.f_5782.f_237[iVar0] && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5782.f_237[iVar0] == 2) || Global_1373453.f_5782.f_237[iVar0] != 2)) && ((Global_1371947.f_1324[iVar4 /*11*/][iVar0] == 0 && Global_1373453.f_5782.f_237[iVar0] == 13) || Global_1373453.f_5782.f_237[iVar0] != 13))
						{
							Global_1371947.f_1324[iVar4 /*11*/][iVar0] = Global_1373453.f_5782.f_237[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] != Global_1371947.f_1324[iVar1 /*11*/][iVar0])
					{
						Global_1371947.f_1324[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 12)
					{
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1371947.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1371947.f_1324[iVar1 /*11*/][iVar0] = Global_1371947.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1371947.f_1180[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[(iVar2 - 1)] == 1)
							{
								Global_1371947.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1371947.f_1324[iVar1 /*11*/][iVar0] = Global_1371947.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_1371947.f_1180[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1371947.f_1324[iVar1 /*11*/][iVar0] = Global_1371947.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 = (iVar2 + -1);
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1371947.f_1179 = 0;
		}
		if (Global_1373453.f_1105)
		{
			iVar5 = 84;
		}
		else
		{
			iVar5 = 66;
		}
		if (func_232())
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (func_224(0))
				{
					if (func_29(func_222(0)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar6 = func_221(func_222(0));
							if (func_220(iVar6))
							{
								if (Global_1371947.f_1324[iVar6 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[iVar6 /*11*/][iVar0] == 1)
								{
									if (func_216(Global_1371947.f_1180[iVar6 /*11*/][iVar0]))
									{
										func_212(1);
										if (Global_1373453.f_1102 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
										}
										func_211(func_222(0), iVar0);
										if (Global_1373453.f_1102 == 0)
										{
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
										}
										func_212(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_224(1))
				{
					if (func_29(func_222(1)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar7 = func_221(func_222(1));
							if (func_220(iVar7))
							{
								if (Global_1371947.f_1324[iVar7 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[iVar7 /*11*/][iVar0] == 1)
								{
									if (func_216(Global_1371947.f_1180[iVar7 /*11*/][iVar0]))
									{
										func_212(1);
										if (Global_1373453.f_1102 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
										}
										func_211(func_222(1), iVar0);
										if (Global_1373453.f_1102 == 0)
										{
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
										}
										func_212(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_29(7) && !func_210(7))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[0 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[0 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[0 /*11*/][iVar0]))
							{
								func_212(1);
								if (Global_1373453.f_1102 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								}
								func_194(iVar0, Global_1373453.f_4453[iVar0], &(Global_1373453.f_4453.f_11[iVar0 /*16*/]), Global_1373453.f_4453.f_172[iVar0], Global_1373453.f_4453.f_194[iVar0], Global_1373453.f_4453.f_216[iVar0], Global_1373453.f_4453.f_205[iVar0], Global_1373453.f_4453.f_183[iVar0], Global_1373453.f_4453.f_227[iVar0], Global_1373453.f_4453.f_260[iVar0], Global_1373453.f_4453.f_314[iVar0], Global_1373453.f_4453.f_325[iVar0], Global_1373453.f_4453.f_357[iVar0], Global_1373453.f_4453.f_238[iVar0], Global_1373453.f_4453.f_271[iVar0], Global_1373453.f_4453.f_368[iVar0], Global_1373453.f_4453.f_379[iVar0], Global_1373453.f_4453.f_390[iVar0]);
								if (Global_1373453.f_1102 == 0)
								{
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(3) && !func_210(3))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[1 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[1 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[1 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_193(iVar0, Global_1373453.f_2655[iVar0], &(Global_1373453.f_2655.f_11[iVar0 /*16*/]), Global_1373453.f_2655.f_183[iVar0], Global_1373453.f_2655.f_172[iVar0], Global_1373453.f_2655.f_194[iVar0], Global_1373453.f_2655.f_216[iVar0], &(Global_1373453.f_2655.f_259[iVar0 /*16*/]), Global_1373453.f_2655.f_420[iVar0], Global_1373453.f_2655.f_453[iVar0], Global_1373453.f_2655.f_431[iVar0], Global_1373453.f_2655.f_442[iVar0], Global_1373453.f_2655.f_464[iVar0], Global_1373453.f_2655.f_475[iVar0], Global_1373453.f_2655.f_486[iVar0], Global_1373453.f_2655.f_497[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(4) && !func_210(4))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[2 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[2 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[2 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_192(iVar0, Global_1373453.f_3163[iVar0], Global_1373453.f_3163.f_172[iVar0], &(Global_1373453.f_3163.f_11[iVar0 /*16*/]), Global_1373453.f_3163.f_194[iVar0], Global_1373453.f_3163.f_183[iVar0], Global_1373453.f_3163.f_205[iVar0], Global_1373453.f_3163.f_227[iVar0], Global_1373453.f_3163.f_270[iVar0], Global_1373453.f_3163.f_281[iVar0], Global_1373453.f_3163.f_292[iVar0], Global_1373453.f_3163.f_303[iVar0], Global_1373453.f_3163.f_314[iVar0], Global_1373453.f_3163.f_325[iVar0], Global_1373453.f_3163.f_336[iVar0], Global_1373453.f_3163.f_347[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(5) && !func_210(5))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[3 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[3 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[3 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_191(iVar0, Global_1373453.f_3521[iVar0], Global_1373453.f_3521.f_172[iVar0], &(Global_1373453.f_3521.f_11[iVar0 /*16*/]), Global_1373453.f_3521.f_194[iVar0], Global_1373453.f_3521.f_183[iVar0], Global_1373453.f_3521.f_205[iVar0], Global_1373453.f_3521.f_227[iVar0], Global_1373453.f_3521.f_270[iVar0], Global_1373453.f_3521.f_281[iVar0], Global_1373453.f_3521.f_292[iVar0], Global_1373453.f_3521.f_303[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(1) && !func_210(1))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[4 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[4 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[4 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_181(iVar0, Global_1373453.f_1591[iVar0], Global_1373453.f_1591.f_11[iVar0], &(Global_1373453.f_1591.f_22[iVar0 /*16*/]), Global_1373453.f_1591.f_194[iVar0], Global_1373453.f_1591.f_205[iVar0], Global_1373453.f_1591.f_258[iVar0], Global_1373453.f_1591.f_183[iVar0], Global_1373453.f_1591.f_227[iVar0 /*3*/], Global_1373453.f_1591.f_227[iVar0 /*3*/].f_1, Global_1373453.f_1591.f_312[iVar0], Global_1373453.f_1591.f_323[iVar0], Global_1373453.f_1591.f_269[iVar0], Global_2537643[iVar0], Global_2537654[iVar0], Global_2537665[iVar0], Global_2537676[iVar0], Global_2537687[iVar0], Global_2537698[iVar0], Global_2537709[iVar0], Global_2537720[iVar0], Global_1373453.f_1591.f_334[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(0) && !func_210(0))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[5 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[5 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[5 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_172(iVar0, Global_1373453.f_1114[iVar0], Global_1373453.f_1114.f_11[iVar0], &(Global_1373453.f_1114.f_22[iVar0 /*16*/]), Global_1373453.f_1114.f_194[iVar0], Global_1373453.f_1114.f_183[iVar0], Global_1373453.f_1114.f_227[iVar0 /*3*/], Global_1373453.f_1114.f_227[iVar0 /*3*/].f_1, Global_1373453.f_1114.f_258[iVar0], Global_1373453.f_1114.f_205[iVar0], Global_1373453.f_1114.f_269[iVar0], Global_1373453.f_1114.f_312[iVar0], Global_1373453.f_1114.f_323[iVar0], Global_1373453.f_1114.f_334[iVar0], Global_1373453.f_1114.f_345[iVar0], Global_1373453.f_1114.f_356[iVar0], Global_1373453.f_1114.f_367[iVar0], Global_1373453.f_1114.f_378[iVar0], Global_1373453.f_1114.f_389[iVar0], Global_1373453.f_1114.f_400[iVar0], Global_1373453.f_1114.f_411[iVar0], Global_1373453.f_1114.f_422[iVar0], Global_1373453.f_1114.f_433[iVar0], Global_1373453.f_1114.f_444[iVar0], Global_1373453.f_1114.f_455[iVar0], Global_1373453.f_1114.f_466[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(6) && !func_210(6))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[6 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[6 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[6 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_162(iVar0, Global_1373453.f_3835[iVar0], &(Global_1373453.f_3835.f_11[iVar0 /*16*/]), Global_1373453.f_3835.f_183[iVar0], Global_1373453.f_3835.f_172[iVar0], Global_1373453.f_3835.f_194[iVar0], Global_1373453.f_3835.f_271[iVar0], &(Global_1373453.f_3835.f_282[iVar0 /*16*/]), Global_1373453.f_3835.f_443[iVar0], Global_1373453.f_3835.f_454[iVar0], Global_1373453.f_3835.f_497[iVar0], Global_1373453.f_3835.f_508[iVar0], Global_1373453.f_3835.f_205[iVar0], Global_1373453.f_3835.f_216[iVar0], Global_1373453.f_3835.f_227[iVar0], Global_1373453.f_3835.f_238[iVar0], Global_1373453.f_3835.f_249[iVar0], Global_1373453.f_3835.f_519[iVar0], Global_1373453.f_3835.f_530[iVar0], Global_1373453.f_3835.f_541[iVar0], Global_1373453.f_3835.f_552[iVar0], Global_1373453.f_3835.f_563[iVar0], Global_1373453.f_3835.f_574[iVar0], Global_1373453.f_3835.f_585[iVar0], Global_1373453.f_3835.f_596[iVar0], Global_1373453.f_3835.f_607[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(2) && !func_210(2))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[7 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[7 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[7 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_150(iVar0, Global_1373453.f_1936[iVar0], &(Global_1373453.f_1936.f_99[iVar0 /*16*/]), Global_1373453.f_1936.f_282[iVar0], Global_1373453.f_1936.f_293[iVar0], Global_1373453.f_1936.f_260[iVar0], Global_1373453.f_1936.f_11[iVar0], Global_1373453.f_1936.f_22[iVar0], Global_1373453.f_1936.f_33[iVar0], Global_1373453.f_1936.f_44[iVar0], Global_1373453.f_1936.f_55[iVar0], Global_1373453.f_1936.f_66[iVar0], Global_1373453.f_1936.f_77[iVar0], Global_1373453.f_1936.f_88[iVar0], Global_1373453.f_1936.f_271[iVar0], Global_1373453.f_1936.f_304[iVar0], Global_1373453.f_1936.f_357[iVar0], Global_1373453.f_1936.f_326[iVar0 /*3*/], Global_1373453.f_1936.f_326[iVar0 /*3*/].f_1, Global_1373453.f_1936.f_368[iVar0], Global_1373453.f_1936.f_379[iVar0], Global_1373453.f_1936.f_390[iVar0], Global_1373453.f_1936.f_401[iVar0], Global_1373453.f_1936.f_412[iVar0], Global_1373453.f_1936.f_423[iVar0], Global_1373453.f_1936.f_434[iVar0], Global_1373453.f_1936.f_445[iVar0], Global_1373453.f_1936.f_456[iVar0], Global_1373453.f_1936.f_467[iVar0], Global_1373453.f_1936.f_478[iVar0], Global_1373453.f_1936.f_489[iVar0], Global_1373453.f_1936.f_500[iVar0], Global_1373453.f_1936.f_511[iVar0], Global_1373453.f_1936.f_522[iVar0], Global_1373453.f_1936.f_533[iVar0], Global_1373453.f_1936.f_587[iVar0], Global_1373453.f_1936.f_598[iVar0], Global_1373453.f_1936.f_544[iVar0], Global_2537731[iVar0], Global_2537742[iVar0], Global_2537753[iVar0], Global_2537764[iVar0], Global_2537775[iVar0], Global_2537786[iVar0], Global_2537797[iVar0], Global_2537808[iVar0], Global_1373453.f_1936.f_609[iVar0], Global_1373453.f_1936.f_620[iVar0], Global_1373453.f_1936.f_631[iVar0], Global_1373453.f_1936.f_642[iVar0], Global_1373453.f_1936.f_653[iVar0], Global_1373453.f_1936.f_664[iVar0], Global_1373453.f_1936.f_675[iVar0], Global_1373453.f_1936.f_686[iVar0], Global_1373453.f_1936.f_697[iVar0], Global_1373453.f_1936.f_708[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(8) && !func_210(8))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[8 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[8 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[8 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_147(iVar0, &(Global_1373453.f_4854.f_11[iVar0 /*16*/]), Global_1373453.f_4854[iVar0], Global_1373453.f_4854.f_172[iVar0], Global_1373453.f_4854.f_183[iVar0], Global_1373453.f_4854.f_194[iVar0], Global_1373453.f_4854.f_205[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(9) && !func_210(9))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[9 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[9 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[9 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_141(iVar0, Global_1373453.f_5081[iVar0], Global_1373453.f_5081.f_11[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(10) && !func_210(10))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[10 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[10 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[10 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_110(iVar0, Global_1373453.f_5114.f_6[iVar0], Global_1373453.f_5114.f_17[iVar0], &(Global_1373453.f_5114.f_28[iVar0 /*16*/]), Global_1373453.f_5114.f_200[iVar0], Global_1373453.f_5114.f_189[iVar0], Global_1373453.f_5114.f_233[iVar0], Global_1373453.f_5114.f_211[iVar0], Global_1373453.f_5114.f_244[iVar0], Global_1373453.f_5114.f_287[iVar0], Global_1373453.f_5114.f_298[iVar0], &(Global_1373453.f_5114.f_309[iVar0 /*16*/]), &(Global_1373453.f_5114), Global_1373453.f_5114.f_470[iVar0], Global_1373453.f_5114.f_481[iVar0], Global_1373453.f_5114.f_492[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(11) && !func_210(11))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[11 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[11 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[11 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_106(iVar0, Global_1373453.f_5617[iVar0], Global_1373453.f_5617.f_11[iVar0], Global_1373453.f_5617.f_22[iVar0], Global_1373453.f_5617.f_33[iVar0], Global_1373453.f_5617.f_44[iVar0], Global_1373453.f_5617.f_55[iVar0], Global_1373453.f_5617.f_66[iVar0], Global_1373453.f_5617.f_77[iVar0], Global_1373453.f_5617.f_88[iVar0], Global_1373453.f_5617.f_110[iVar0], Global_1373453.f_5617.f_121[iVar0], Global_1373453.f_5617.f_132[iVar0], Global_1373453.f_5617.f_143[iVar0], Global_1373453.f_5617.f_154[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(12) && !func_210(12))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1371947.f_1324[12 /*11*/][iVar0] == iVar1 + 3 || Global_1371947.f_1180[12 /*11*/][iVar0] == 1)
						{
							if (func_216(Global_1371947.f_1180[12 /*11*/][iVar0]))
							{
								func_212(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_96, fLocal_97, fLocal_98, fLocal_99);
								func_41(iVar0, Global_1373453.f_5782[iVar0], Global_1373453.f_5782.f_22[iVar0], &(Global_1373453.f_5782.f_33[iVar0 /*6*/]), Global_1373453.f_5782.f_94[iVar0], Global_1373453.f_5782.f_11[iVar0], Global_1373453.f_5782.f_105[iVar0], Global_1373453.f_5782.f_116[iVar0], Global_1373453.f_5782.f_127[iVar0], Global_1373453.f_5782.f_138[iVar0], Global_1373453.f_5782.f_149[iVar0], Global_1373453.f_5782.f_160[iVar0], Global_1373453.f_5782.f_171[iVar0], Global_1373453.f_5782.f_182[iVar0], Global_1373453.f_5782.f_193[iVar0], Global_1373453.f_5782.f_204[iVar0], Global_1373453.f_5782.f_215[iVar0], Global_1373453.f_5782.f_226[iVar0], Global_1373453.f_5782.f_248[iVar0], Global_1373453.f_5782.f_259[iVar0], Global_1373453.f_5782.f_270[iVar0], Global_1373453.f_5782.f_281[iVar0], Global_1373453.f_5782.f_292[iVar0], Global_1373453.f_5782.f_303[iVar0], Global_1373453.f_5782.f_314[iVar0], Global_1373453.f_5782.f_325[iVar0], Global_1373453.f_5782.f_336[iVar0], Global_1373453.f_5782.f_347[iVar0], Global_1373453.f_5782.f_358[iVar0], Global_1373453.f_5782.f_369[iVar0], Global_1373453.f_5782.f_380[iVar0], Global_1373453.f_5782.f_391[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_212(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_40();
	}
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1373453.f_6198[iVar0] = Global_1373453.f_6184[iVar0];
		iVar0++;
	}
}

void func_41(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, bool bParam26, int iParam27, int iParam28, var uParam29, int iParam30, int iParam31)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(12, iParam0))
	{
		func_42(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, uParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, uParam29, iParam30, iParam31);
	}
}

void func_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, bool bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, bool bParam31, int iParam32, int iParam33, var uParam34, int iParam35, int iParam36)
{
	struct<8> Var0;
	struct<8> Var1;
	struct<8> Var2;
	struct<8> Var3;
	struct<8> Var4;
	struct<8> Var5;
	struct<8> Var6;
	struct<8> Var7;
	struct<8> Var8;
	struct<8> Var9;
	struct<8> Var10;
	struct<8> Var11;
	struct<8> Var12;
	struct<8> Var13;
	struct<8> Var14;
	struct<8> Var15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	vector3 vVar21[24];
	vector3 vVar22;
	vector3 vVar23[24];
	vector3 vVar24[24];
	vector3 vVar25;
	vector3 vVar26[24];
	vector3 vVar27[24];
	vector3 vVar28;
	vector3 vVar29[24];
	vector3 vVar30[24];
	vector3 vVar31;
	vector3 vVar32[24];
	vector3 vVar33[24];
	vector3 vVar34;
	vector3 vVar35[24];
	vector3 vVar36[24];
	vector3 vVar37[24];
	vector3 vVar38[24];
	vector3 vVar39[24];
	vector3 vVar40[24];
	vector3 vVar41[24];
	vector3 vVar42[24];
	vector3 vVar43[24];
	vector3 vVar44[24];
	vector3 vVar45[24];
	vector3 vVar46[24];
	vector3 vVar47[24];
	vector3 vVar48[24];
	vector3 vVar49[24];
	vector3 vVar50[24];
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	bool bVar67;
	bool bVar68;
	
	Global_1373453++;
	if (func_105())
	{
		func_104(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_103(uParam1, 3);
		if (iParam5 < 1000000)
		{
			if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam6 >= 100f) && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN", sParam7))
			{
				func_102(uParam2, 0, 0);
			}
			else if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12) && ((iParam5 > 999 || iParam9 > 999) || fParam6 > 1000f))
			{
				func_102(uParam2, 0, 0);
			}
			else if (iParam9 > 99)
			{
				func_101(uParam2, 0, 0);
			}
			else
			{
				func_100(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam7)))
		{
			func_102(uParam2, 0, 0);
		}
		else
		{
			func_101(uParam2, 0, 0);
		}
		func_98(uParam1);
		func_97(uParam2);
		func_96(12, iParam0);
		if (Global_1373453 == 1)
		{
			func_95(iParam12);
		}
		func_89(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_88(uParam2, iParam11);
		uParam2->f_6 = 255;
		Var1 = (*uParam4 + 0.095f);
		Var2 = (*uParam4 + 0.095f);
		Var3 = (*uParam4 + 0.095f);
		Var4 = (*uParam4 + 0.072f);
		Var5 = (*uParam4 + 0.072f);
		Var6 = (*uParam4 + 0.072f);
		Var7 = (*uParam4 + 0.049f);
		Var8 = (*uParam4 + 0.049f);
		Var9 = (*uParam4 + 0.049f);
		Var10 = (*uParam4 + 0.026f);
		Var11 = (*uParam4 + 0.026f);
		Var12 = (*uParam4 + 0.026f);
		Var13 = (*uParam4 + 0.003f);
		Var14 = (*uParam4 + 0.003f);
		Var15 = (*uParam4 + 0.003f);
		if (func_87())
		{
			Var1.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var2.f_1 = (uParam4->f_1 + 0.016f);
			Var3.f_1 = (uParam4->f_1 + 0.016f);
			Var4.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var5.f_1 = (uParam4->f_1 + 0.016f);
			Var6.f_1 = (uParam4->f_1 + 0.016f);
			Var7.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var8.f_1 = (uParam4->f_1 + 0.016f);
			Var9.f_1 = (uParam4->f_1 + 0.016f);
			Var10.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var11.f_1 = (uParam4->f_1 + 0.016f);
			Var12.f_1 = (uParam4->f_1 + 0.016f);
			Var13.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var14.f_1 = (uParam4->f_1 + 0.016f);
			Var15.f_1 = (uParam4->f_1 + 0.016f);
		}
		else
		{
			Var1.f_1 = (uParam4->f_1 + 0.0185f);
			Var2.f_1 = (uParam4->f_1 + 0.019f);
			Var3.f_1 = (uParam4->f_1 + 0.019f);
			Var4.f_1 = (uParam4->f_1 + 0.0185f);
			Var5.f_1 = (uParam4->f_1 + 0.019f);
			Var6.f_1 = (uParam4->f_1 + 0.019f);
			Var7.f_1 = (uParam4->f_1 + 0.0185f);
			Var8.f_1 = (uParam4->f_1 + 0.019f);
			Var9.f_1 = (uParam4->f_1 + 0.019f);
			Var10.f_1 = (uParam4->f_1 + 0.0185f);
			Var11.f_1 = (uParam4->f_1 + 0.019f);
			Var12.f_1 = (uParam4->f_1 + 0.019f);
			Var13.f_1 = (uParam4->f_1 + 0.0185f);
			Var14.f_1 = (uParam4->f_1 + 0.019f);
			Var15.f_1 = (uParam4->f_1 + 0.019f);
		}
		Var1.f_2 = (0.016f + 0.003f);
		Var2.f_2 = (0.016f + 0.003f);
		Var3.f_2 = (0.016f + 0.003f);
		Var4.f_2 = (0.016f + 0.003f);
		Var5.f_2 = (0.016f + 0.003f);
		Var6.f_2 = (0.016f + 0.003f);
		Var7.f_2 = (0.016f + 0.003f);
		Var8.f_2 = (0.016f + 0.003f);
		Var9.f_2 = (0.016f + 0.003f);
		Var10.f_2 = (0.016f + 0.003f);
		Var11.f_2 = (0.016f + 0.003f);
		Var12.f_2 = (0.016f + 0.003f);
		Var13.f_2 = (0.016f + 0.003f);
		Var14.f_2 = (0.016f + 0.003f);
		Var15.f_2 = (0.016f + 0.003f);
		Var1.f_3 = (0.032f + 0.004f);
		Var2.f_3 = (0.032f + 0.004f);
		Var3.f_3 = (0.032f + 0.004f);
		Var4.f_3 = (0.032f + 0.004f);
		Var5.f_3 = (0.032f + 0.004f);
		Var6.f_3 = (0.032f + 0.004f);
		Var7.f_3 = (0.032f + 0.004f);
		Var8.f_3 = (0.032f + 0.004f);
		Var9.f_3 = (0.032f + 0.004f);
		Var10.f_3 = (0.032f + 0.004f);
		Var11.f_3 = (0.032f + 0.004f);
		Var12.f_3 = (0.032f + 0.004f);
		Var13.f_3 = (0.032f + 0.004f);
		Var14.f_3 = (0.032f + 0.004f);
		Var15.f_3 = (0.032f + 0.004f);
		Var1.f_7 = 255;
		Var2.f_7 = 255;
		Var3.f_7 = 255;
		Var4.f_7 = 255;
		Var5.f_7 = 255;
		Var6.f_7 = 255;
		Var7.f_7 = 255;
		Var8.f_7 = 255;
		Var9.f_7 = 255;
		Var10.f_7 = 255;
		Var11.f_7 = 255;
		Var12.f_7 = 255;
		Var13.f_7 = 255;
		Var14.f_7 = 255;
		Var15.f_7 = 255;
		func_86(&Var1, 1);
		func_86(&Var2, 1);
		func_86(&Var3, 1);
		func_86(&Var4, 1);
		func_86(&Var5, 1);
		func_86(&Var6, 1);
		func_86(&Var7, 1);
		func_86(&Var8, 1);
		func_86(&Var9, 1);
		func_86(&Var10, 1);
		func_86(&Var11, 1);
		func_86(&Var12, 1);
		func_86(&Var13, 1);
		func_86(&Var14, 1);
		func_86(&Var15, 1);
		StringCopy(&cVar21, "", 24);
		StringCopy(&vVar22, "", 24);
		StringCopy(&cVar23, "", 24);
		StringCopy(&cVar24, "", 24);
		StringCopy(&vVar25, "", 24);
		StringCopy(&cVar26, "", 24);
		StringCopy(&cVar27, "", 24);
		StringCopy(&vVar28, "", 24);
		StringCopy(&cVar29, "", 24);
		StringCopy(&cVar30, "", 24);
		StringCopy(&vVar31, "", 24);
		StringCopy(&cVar32, "", 24);
		StringCopy(&cVar33, "", 24);
		StringCopy(&vVar34, "", 24);
		StringCopy(&cVar35, "", 24);
		StringCopy(&cVar36, "", 24);
		StringCopy(&cVar37, "", 24);
		StringCopy(&cVar38, "", 24);
		StringCopy(&cVar39, "", 24);
		StringCopy(&cVar40, "", 24);
		StringCopy(&cVar41, "", 24);
		StringCopy(&cVar42, "", 24);
		StringCopy(&cVar43, "", 24);
		StringCopy(&cVar44, "", 24);
		StringCopy(&cVar45, "", 24);
		StringCopy(&cVar46, "", 24);
		StringCopy(&cVar47, "", 24);
		StringCopy(&cVar48, "", 24);
		StringCopy(&cVar49, "", 24);
		StringCopy(&cVar50, "", 24);
		iVar51 = 1;
		iVar52 = 1;
		iVar53 = 1;
		iVar54 = 1;
		iVar55 = 1;
		iVar56 = 1;
		iVar57 = 1;
		iVar58 = 1;
		iVar59 = 1;
		iVar60 = 1;
		iVar61 = 1;
		iVar62 = 1;
		iVar63 = 1;
		iVar64 = 1;
		iVar65 = 1;
		func_78(&iParam18, &Var1, &cVar21, &cVar36, &iVar51, &iParam13, &uVar16, &Var2, &vVar22, &cVar37, &iVar52, iParam11, iParam25);
		func_78(&iParam19, &Var4, &cVar24, &cVar39, &iVar54, &iParam14, &uVar17, &Var5, &vVar25, &cVar40, &iVar55, iParam11, iParam26);
		func_78(&iParam20, &Var7, &cVar27, &cVar42, &iVar57, &iParam15, &uVar18, &Var8, &vVar28, &cVar43, &iVar58, iParam11, iParam27);
		func_78(&iParam21, &Var10, &cVar30, &cVar45, &iVar60, &iParam16, &uVar19, &Var11, &vVar31, &cVar46, &iVar61, iParam11, iParam28);
		func_78(&iParam22, &Var13, &cVar33, &cVar48, &iVar63, &iParam17, &uVar20, &Var14, &vVar34, &cVar49, &iVar64, iParam11, iParam29);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (func_76(&cVar21, &vVar22, &cVar24, &vVar25, &cVar27, &vVar28, &cVar30, &vVar31, &cVar33, &vVar34) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar66 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar66);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000)
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.008f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.036f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.01f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.033f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_87())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1373453.f_6241 = (Global_1373453.f_6241 + Var0.f_3);
			func_67("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_66(uParam1, 0);
			if (iParam35 == 0)
			{
				func_65(iParam0);
			}
			if (func_62(iParam35, &(Global_1373453.f_422[iParam0 /*2*/]), &(Global_1373453.f_443[iParam0 /*2*/])))
			{
				bVar67 = true;
			}
			else
			{
				bVar67 = false;
			}
			if (uParam34 && GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
			{
				if (bVar67)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
					{
						func_61(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
					}
					if (iParam33 == iParam14 && iParam36 == 4)
					{
						func_61(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
					}
					if (iParam33 == iParam15 && iParam36 == 3)
					{
						func_61(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
					}
					if (iParam33 == iParam16 && iParam36 == 2)
					{
						func_61(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
					}
					if (iParam33 == iParam17 && iParam36 == 1)
					{
						func_61(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
					}
				}
				if (iParam33 == iParam13 && iParam36 != 5)
				{
					func_61(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
				}
				if (iParam33 == iParam14 && iParam36 != 4)
				{
					func_61(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
				}
				if (iParam33 == iParam15 && iParam36 != 3)
				{
					func_61(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
				}
				if (iParam33 == iParam16 && iParam36 != 2)
				{
					func_61(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
				}
				if (iParam33 == iParam17 && iParam36 != 1)
				{
					func_61(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
				}
				if (iParam33 != iParam13)
				{
					func_61(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
				}
				if (iParam33 != iParam14)
				{
					func_61(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
				}
				if (iParam33 != iParam15)
				{
					func_61(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
				}
				if (iParam33 != iParam16)
				{
					func_61(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
				}
				if (iParam33 != iParam17)
				{
					func_61(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
				}
			}
			else
			{
				func_61(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
				func_61(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
				func_61(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
				func_61(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
				func_61(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
			}
			if (iParam32 == 0)
			{
				func_60(iParam0);
			}
			if (func_62(iParam32, &(Global_1373453.f_380[iParam0 /*2*/]), &(Global_1373453.f_401[iParam0 /*2*/])))
			{
				bVar68 = true;
			}
			else
			{
				bVar68 = false;
			}
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_58(&Var3, &cVar23, &cVar38, &iVar53, &iParam13, &uParam23, iParam11);
						func_58(&Var6, &cVar26, &cVar41, &iVar56, &iParam14, &uParam23, iParam11);
						func_58(&Var9, &cVar29, &cVar44, &iVar59, &iParam15, &uParam23, iParam11);
						func_58(&Var12, &cVar32, &cVar47, &iVar62, &iParam16, &uParam23, iParam11);
						func_58(&Var15, &cVar35, &cVar50, &iVar65, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_57(&Var3, &cVar23, &cVar38, iVar53);
								func_57(&Var6, &cVar26, &cVar41, iVar56);
								func_57(&Var9, &cVar29, &cVar44, iVar59);
								func_57(&Var12, &cVar32, &cVar47, iVar62);
								func_57(&Var15, &cVar35, &cVar50, iVar65);
							}
						}
						else
						{
							func_57(&Var3, &cVar23, &cVar38, iVar53);
							func_57(&Var6, &cVar26, &cVar41, iVar56);
							func_57(&Var9, &cVar29, &cVar44, iVar59);
							func_57(&Var12, &cVar32, &cVar47, iVar62);
							func_57(&Var15, &cVar35, &cVar50, iVar65);
						}
						break;
					
					case 0:
						break;
					
					case 1:
						func_58(&Var3, &cVar23, &cVar38, &iVar53, &iParam13, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_57(&Var3, &cVar23, &cVar38, iVar53);
							}
						}
						else
						{
							func_57(&Var3, &cVar23, &cVar38, iVar53);
						}
						break;
					
					case 2:
						func_58(&Var6, &cVar26, &cVar41, &iVar56, &iParam14, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_57(&Var6, &cVar26, &cVar41, iVar56);
							}
						}
						else
						{
							func_57(&Var6, &cVar26, &cVar41, iVar56);
						}
						break;
					
					case 3:
						func_58(&Var9, &cVar29, &cVar44, &iVar59, &iParam15, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_57(&Var9, &cVar29, &cVar44, iVar59);
							}
						}
						else
						{
							func_57(&Var9, &cVar29, &cVar44, iVar59);
						}
						break;
					
					case 4:
						func_58(&Var12, &cVar32, &cVar47, &iVar62, &iParam16, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_57(&Var12, &cVar32, &cVar47, iVar62);
							}
						}
						else
						{
							func_57(&Var12, &cVar32, &cVar47, iVar62);
						}
						break;
					
					case 5:
						func_58(&Var15, &cVar35, &cVar50, &iVar65, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_57(&Var15, &cVar35, &cVar50, iVar65);
							}
						}
						else
						{
							func_57(&Var15, &cVar35, &cVar50, iVar65);
						}
						break;
					}
			}
			func_66(uParam2, 0);
			if (bParam10)
			{
				func_56(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_55(sParam7))
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 0)
					{
						if (iParam5 != -999)
						{
							func_53(uParam4, uParam2, "NUMBER", iParam5, 2);
						}
					}
					else
					{
						func_51(uParam4, uParam2, "NUMBER", fParam6, Global_2460130, 2);
					}
				}
				else
				{
					func_49(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam9, 2, 0);
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S", sParam7))
			{
				sParam7 = "HUD_CASH_S";
				*uParam2 = 5;
				func_66(uParam2, 0);
				func_44(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S", sParam7))
			{
				*uParam2 = 5;
				func_66(uParam2, 0);
				sParam7 = "HUD_CASH_NEG_S";
				func_44(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_53(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_51(uParam4, uParam2, sParam7, fParam6, Global_2460130, 2);
			}
			func_43();
		}
	}
}

void func_43()
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}

void func_44(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, 1);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_46(*uParam0), func_45(uParam0->f_1), 0);
		}
	}
}

float func_45(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_46(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_47()
{
	if (func_48())
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

bool func_48()
{
	return Global_1312439;
}

void func_49(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_CENTRE(iParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_50(func_46(*uParam0), func_45(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_50(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_51(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5)
{
	if (!func_55(sParam2))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_52(func_46(*uParam0), func_45(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

void func_52(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_53(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_54(func_46(*uParam0), func_45(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_54(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

int func_55(char* sParam0)
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

void func_56(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	if (!func_55(sParam2))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			if (func_55(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_46(*uParam0), func_45(uParam0->f_1), 0);
		}
	}
}

void func_57(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			func_86(uParam0, iParam3);
			func_67(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	if (*uParam5 != func_59() && *iParam4 != func_59())
	{
		if (*uParam5 == *iParam4)
		{
			StringCopy(sParam1, "timerbar_sr", 24);
			StringCopy(sParam2, "timer_box", 24);
			*iParam3 = iParam6;
			uParam0->f_2 = (0.016f + 0.008f);
			uParam0->f_3 = 0.038f;
		}
	}
}

int func_59()
{
	return -1;
}

void func_60(int iParam0)
{
	func_15(&(Global_1373453.f_380[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_401[iParam0 /*2*/]));
}

void func_61(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_86(uParam1, iParam5);
		func_67(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			func_86(uParam2, iParam8);
			func_67(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

int func_62(int iParam0, var uParam1, var uParam2)
{
	if (func_242(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (!func_64(uParam2))
	{
		func_63(uParam2, 0, 0);
	}
	else if (func_242(uParam2, 300, 0))
	{
		if (func_242(uParam2, 800, 0))
		{
			func_15(uParam2);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_63(var uParam0, bool bParam1, bool bParam2)
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

bool func_64(var uParam0)
{
	return uParam0->f_1;
}

void func_65(int iParam0)
{
	func_15(&(Global_1373453.f_422[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_443[iParam0 /*2*/]));
}

void func_66(var uParam0, bool bParam1)
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_67(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_74(&Var0);
			break;
		
		case 1:
			func_73(&Var0);
			break;
		
		case 5:
			func_72(&Var0);
			break;
		
		case 6:
			func_71(&Var0);
			break;
		
		case 7:
			func_70(&Var0);
			break;
		
		case 8:
			func_69(&Var0);
			break;
		
		case 9:
			func_68(&Var0);
			break;
	}
	if (func_47())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_68(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_69(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_70(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_71(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_72(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_73(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_74(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_75()
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1373453.f_1108)
	{
		iVar0 = 7;
	}
	return iVar0;
}

int func_76(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_77(sParam0, sParam1) == 0)
	{
		iVar0 = 0;
	}
	if (func_77(sParam2, sParam3) == 0)
	{
		iVar0 = 0;
	}
	if (func_77(sParam4, sParam5) == 0)
	{
		iVar0 = 0;
	}
	if (func_77(sParam6, sParam7) == 0)
	{
		iVar0 = 0;
	}
	if (func_77(sParam8, sParam9) == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_77(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam0, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam0))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

void func_78(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = (uParam1->f_3 + -0.009f);
			uParam1->f_2 = (uParam1->f_2 + -0.002f);
			if (func_87())
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0055f);
			}
			else
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0025f);
			}
			StringCopy(sParam2, "MPRPSymbol", 24);
			StringCopy(sParam3, "RP", 24);
			break;
		
		case 2:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Rockets", 24);
			break;
		
		case 3:
			StringCopy(sParam2, "MpSpecialRace", 24);
			StringCopy(sParam3, "HOMING_ROCKET", 24);
			break;
		
		case 1:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Spikes", 24);
			break;
		
		case 4:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Boost", 24);
			break;
		
		case 6:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeTick_32", 24);
			break;
		
		case 7:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeCross_32", 24);
			break;
		
		case 8:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Beast", 24);
			*iParam4 = 118;
			break;
		
		case 9:
			StringCopy(sParam2, "MPSpecialRace", 24);
			StringCopy(sParam3, "MACHINE_GUN", 24);
			break;
		
		case 10:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Random", 24);
			*iParam4 = 118;
			break;
		
		case 11:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Slow_Time", 24);
			break;
		
		case 12:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Swap", 24);
			*iParam4 = 118;
			break;
		
		case 13:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Testosterone", 24);
			*iParam4 = 118;
			break;
		
		case 14:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Thermal", 24);
			*iParam4 = 118;
			break;
		
		case 15:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Weed", 24);
			*iParam4 = 118;
			break;
		
		case 16:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Hidden", 24);
			*iParam4 = 118;
			break;
		
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
			if (*uParam5 != func_59())
			{
				*uParam6 = func_79(*uParam5);
				if (*uParam6 != 0)
				{
					StringCopy(sParam2, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
					StringCopy(sParam3, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
				}
			}
			uParam1->f_2 = (0.016f + 0.004f);
			uParam1->f_3 = 0.034f;
			if (*uParam0 == 18)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_cross", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 19)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_tick", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_0", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_1", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_2", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_3", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_4", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_5", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 26)
			{
				*iParam10 = iParam11;
			}
			if ((((((*uParam0 == 20 || *uParam0 == 21) || *uParam0 == 22) || *uParam0 == 23) || *uParam0 == 24) || *uParam0 == 25) || *uParam0 == 26)
			{
				uParam1->f_7 = 127;
			}
			break;
		
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

int func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		func_80(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_80(int iParam0, bool bParam1)
{
	if (!func_82(iParam0, 0, 1))
	{
		return;
	}
	if (func_83(iParam0) != -1)
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
	if (func_81(iParam0))
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

int func_81(int iParam0)
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

int func_82(int iParam0, bool bParam1, bool bParam2)
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

int func_83(int iParam0)
{
	int iVar0;
	
	if (!func_82(iParam0, 0, 1))
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
			func_84(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_84(int iParam0)
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
	func_85(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_85(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_59();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_86(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_87()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_88(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_89(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_94(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_93(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_92(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_91(uParam0));
	func_90(iParam3, -fVar0);
}

void func_90(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_1373453.f_1098 = (Global_1373453.f_1098 + fParam1);
			break;
		
		case 2:
			Global_1373453.f_1099 = (Global_1373453.f_1099 + fParam1);
			break;
	}
}

float func_91(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_87())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_92(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_93(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1373453.f_1098;
			break;
		
		case 2:
			return Global_1373453.f_1099;
			break;
	}
	return Global_1373453.f_1098;
}

float func_94(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_95(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Global_1373453.f_1098 = func_30();
			break;
		
		case 2:
			Global_1373453.f_1099 = func_30();
			break;
	}
}

void func_96(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1373453.f_6212[iParam0]), iParam1);
}

void func_97(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_1373453.f_1102 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_1373453.f_1102 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_98(var uParam0)
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_1373453.f_1109)
	{
		fVar0 = (fVar0 + -0.034f);
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_1373453.f_1110 && Global_1373453.f_1109 == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_1373453.f_1111 && Global_1373453.f_1110 == 0) && Global_1373453.f_1109 == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_1373453.f_1102 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 && LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && !GRAPHICS::GET_IS_WIDESCREEN()) && Global_1373453.f_1111)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_1373453.f_1112)
	{
		if (((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_1373453.f_1113)
	{
		if (func_99())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if (((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 7) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && Global_1373453.f_1110 == 0) && Global_1373453.f_1109 == 0) && Global_1373453.f_1102 == 0) && Global_1373453.f_1111 == 0) && Global_1373453.f_1112 == 0) && Global_1373453.f_1113 == 0) && MISC::IS_PC_VERSION())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_99()
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

void func_100(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

void func_101(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

void func_102(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_104(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_105()
{
	return 1;
}

void func_106(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(11, iParam0))
	{
		func_107(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

void func_107(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)
{
	struct<8> Var0;
	bool bVar1;
	int iVar2;
	struct<8> Var3;
	struct<8> Var4;
	struct<8> Var5;
	struct<8> Var6;
	struct<8> Var7;
	struct<8> Var8;
	struct<8> Var9;
	struct<8> Var10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	vector3 vVar15[24];
	vector3 vVar16;
	vector3 vVar17[24];
	vector3 vVar18;
	vector3 vVar19[24];
	vector3 vVar20;
	vector3 vVar21[24];
	vector3 vVar22;
	char[] cVar23[8];
	char[] cVar24[8];
	char[] cVar25[8];
	char[] cVar26[8];
	char[] cVar27[8];
	char[] cVar28[8];
	char[] cVar29[8];
	char[] cVar30[8];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	Global_1373453++;
	if (func_105())
	{
		func_96(11, iParam0);
		func_103(uParam1, 0);
		func_98(uParam1);
		if (Global_1373453 == 1)
		{
			func_95(iParam6);
		}
		func_100(uParam2, 0, 0);
		func_97(uParam2);
		func_89(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_104(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0)
		{
			func_109(iParam0);
		}
		if (func_62(iParam19, &(Global_1373453.f_338[iParam0 /*2*/]), &(Global_1373453.f_359[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_87())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1373453.f_6241 = (Global_1373453.f_6241 + Var0.f_3);
			func_67("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_66(uParam1, 0);
			Var3 = ((*uParam4 + 0.145f) + 0.001f);
			Var4 = ((*uParam4 + 0.145f) + 0.001f);
			Var5 = (*uParam4 + 0.123f);
			Var6 = (*uParam4 + 0.123f);
			Var7 = (*uParam4 + 0.101f);
			Var8 = (*uParam4 + 0.101f);
			Var9 = (*uParam4 + 0.078f);
			Var10 = (*uParam4 + 0.078f);
			if (func_87())
			{
				Var3.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var4.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var5.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var6.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var7.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var8.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var9.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var10.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var3.f_1 = (uParam4->f_1 + 0.0185f);
				Var4.f_1 = (uParam4->f_1 + 0.019f);
				Var5.f_1 = (uParam4->f_1 + 0.0185f);
				Var6.f_1 = (uParam4->f_1 + 0.019f);
				Var7.f_1 = (uParam4->f_1 + 0.0185f);
				Var8.f_1 = (uParam4->f_1 + 0.019f);
				Var9.f_1 = (uParam4->f_1 + 0.0185f);
				Var10.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var3.f_2 = (0.016f + 0.003f);
			Var4.f_2 = (0.016f + 0.003f);
			Var5.f_2 = (0.016f + 0.003f);
			Var6.f_2 = (0.016f + 0.003f);
			Var7.f_2 = (0.016f + 0.003f);
			Var8.f_2 = (0.016f + 0.003f);
			Var9.f_2 = (0.016f + 0.003f);
			Var10.f_2 = (0.016f + 0.003f);
			Var3.f_3 = (0.032f + 0.004f);
			Var4.f_3 = (0.032f + 0.004f);
			Var5.f_3 = (0.032f + 0.004f);
			Var6.f_3 = (0.032f + 0.004f);
			Var7.f_3 = (0.032f + 0.004f);
			Var8.f_3 = (0.032f + 0.004f);
			Var9.f_3 = (0.032f + 0.004f);
			Var10.f_3 = (0.032f + 0.004f);
			Var3.f_7 = 255;
			Var4.f_7 = 255;
			Var5.f_7 = 255;
			Var6.f_7 = 255;
			Var7.f_7 = 255;
			Var8.f_7 = 255;
			Var9.f_7 = 255;
			Var10.f_7 = 255;
			func_86(&Var3, 1);
			func_86(&Var4, 1);
			func_86(&Var5, 1);
			func_86(&Var6, 1);
			func_86(&Var7, 1);
			func_86(&Var8, 1);
			func_86(&Var9, 1);
			func_86(&Var10, 1);
			StringCopy(&cVar15, "", 24);
			StringCopy(&vVar16, "", 24);
			StringCopy(&cVar17, "", 24);
			StringCopy(&vVar18, "", 24);
			StringCopy(&cVar19, "", 24);
			StringCopy(&vVar20, "", 24);
			StringCopy(&cVar21, "", 24);
			StringCopy(&vVar22, "", 24);
			iVar31 = 1;
			iVar32 = 1;
			iVar33 = 1;
			iVar34 = 1;
			iVar35 = 1;
			iVar36 = 1;
			iVar37 = 1;
			iVar38 = 1;
			func_78(&iParam11, &Var3, &cVar15, &cVar23, &iVar31, &uParam7, &uVar11, &Var4, &vVar16, &cVar24, &iVar32, uParam5, 0);
			func_78(&iParam12, &Var5, &cVar17, &cVar25, &iVar33, &uParam8, &uVar12, &Var6, &vVar18, &cVar26, &iVar34, uParam5, 0);
			func_78(&iParam13, &Var7, &cVar19, &cVar27, &iVar35, &uParam9, &uVar13, &Var8, &vVar20, &cVar28, &iVar36, uParam5, 0);
			func_78(&iParam14, &Var9, &cVar21, &cVar29, &iVar37, &uParam10, &uVar14, &Var10, &vVar22, &cVar30, &iVar38, uParam5, 0);
			if (bParam15)
			{
				if (bVar1)
				{
					func_108(iParam11, &Var3, &Var4, &cVar15, &cVar23, iVar31, &vVar16, &cVar24, iVar32);
				}
			}
			else
			{
				func_108(iParam11, &Var3, &Var4, &cVar15, &cVar23, iVar31, &vVar16, &cVar24, iVar32);
			}
			if (bParam16)
			{
				if (bVar1)
				{
					func_108(iParam12, &Var5, &Var6, &cVar17, &cVar25, iVar33, &vVar18, &cVar26, iVar34);
				}
			}
			else
			{
				func_108(iParam12, &Var5, &Var6, &cVar17, &cVar25, iVar33, &vVar18, &cVar26, iVar34);
			}
			if (bParam17)
			{
				if (bVar1)
				{
					func_108(iParam13, &Var7, &Var8, &cVar19, &cVar27, iVar35, &vVar20, &cVar28, iVar36);
				}
			}
			else
			{
				func_108(iParam13, &Var7, &Var8, &cVar19, &cVar27, iVar35, &vVar20, &cVar28, iVar36);
			}
			if (bParam18)
			{
				if (bVar1)
				{
					func_108(iParam14, &Var9, &Var10, &cVar21, &cVar29, iVar37, &vVar22, &cVar30, iVar38);
				}
			}
			else
			{
				func_108(iParam14, &Var9, &Var10, &cVar21, &cVar29, iVar37, &vVar22, &cVar30, iVar38);
			}
		}
		func_43();
	}
}

void func_108(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
		{
			func_86(uParam1, iParam5);
			func_67(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam6, false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam6))
			{
				func_86(uParam2, iParam8);
				func_67(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_109(int iParam0)
{
	func_15(&(Global_1373453.f_338[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_359[iParam0 /*2*/]));
}

void func_110(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_27(10, iParam0))
	{
		uVar2 = 4;
		func_111(iParam0, &uVar0, &uVar1, &uVar2, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, uParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, iParam15);
	}
}

void func_111(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, bool bParam17, int iParam18, int iParam19)
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	
	Global_1373453++;
	if (func_105())
	{
		if (iParam13 == 2)
		{
		}
		func_96(10, iParam0);
		if (func_87())
		{
			func_140(uParam1, 0);
		}
		else if (bParam17)
		{
			func_103(uParam1, 0);
		}
		else if (bParam10)
		{
			func_139(uParam1, 3);
		}
		else
		{
			func_103(uParam1, 0);
		}
		if (Global_1373453 == 1)
		{
			func_95(iParam6);
		}
		func_133(uParam2, uParam3, &Var0, iParam6, uParam1);
		func_98(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_131())));
		if (iParam11 == 0)
		{
			func_130(iParam0);
		}
		if (iParam14 == 0)
		{
			func_129(iParam0);
		}
		if (func_62(iParam11, &(Global_1373453.f_296[iParam0 /*2*/]), &(Global_1373453.f_317[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			Var0 = *uParam2;
			Var0.f_1 = uParam2->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_87())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1373453.f_6241 = (Global_1373453.f_6241 + Var0.f_3);
			if (iParam14 > 0)
			{
				Var3 = { Var0 };
				if (func_242(&(Global_1373453.f_842[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_128(Global_1373453.f_842[iParam0 /*2*/], 1250, 0))
					{
						Global_1373453.f_863[iParam0] = (Global_1373453.f_863[iParam0] - 17);
					}
					Var3.f_7 = Global_1373453.f_863[iParam0];
					func_86(&Var3, iParam8);
					func_67("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
				}
			}
			else
			{
				Global_1373453.f_863[iParam0] = 255;
				func_127(&(Global_1373453.f_842[iParam0 /*2*/]), 0, 0);
			}
			func_67("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			func_121(&Var0, iParam18);
			if (func_87())
			{
				if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
			}
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (bParam17)
			{
				func_120(uParam1, iParam8);
				func_66(uParam1, 0);
				func_56(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else if (bParam10 == 1)
			{
				func_120(uParam1, iParam8);
				func_66(uParam1, 0);
				func_56(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else
			{
				func_66(uParam1, 0);
				if (iParam9 == -1)
				{
					func_118(uParam2, uParam1, sParam7, 0, 1);
				}
				else
				{
					func_53(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (bVar1)
			{
				func_114(iParam4, iParam5, uParam3, iParam8, uParam12, iVar2);
				func_112(sParam15, uParam3, iVar2, sParam16);
			}
			func_43();
		}
	}
}

void func_112(char* sParam0, var uParam1, int iParam2, char* sParam3)
{
	struct<9> Var0[1];
	
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
	{
		func_113(uParam1[0 /*9*/], &(Var0[0 /*9*/]));
		func_86(uParam1[0 /*9*/], 1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
		(uParam1[0 /*9*/])->f_7 = 255;
		func_67(sParam3, sParam0, uParam1[0 /*9*/], 0, 0, iParam2, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	}
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_114(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	struct<9> Var0[2];
	float fVar1;
	
	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_113(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_113(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_86(uParam2[1 /*9*/], iParam3);
		func_86(uParam2[3 /*9*/], iParam3);
		fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_67("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_86(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_67("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_115(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_67("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_115(struct<9> Param0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5)
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
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_117(Param0);
	fVar3 = fParam1;
	if (fParam1 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam1 > 100f)
	{
		fVar3 = 100f;
	}
	if (fParam1 > 95f && fParam1 < 100f)
	{
		fVar3 = 96f;
	}
	if (iParam4 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0;
		fVar8 = func_116(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam1 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	*uParam2 = fVar9;
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = fVar7;
	if (iParam3 == 1)
	{
		uParam2->f_3 = Param0.f_3;
	}
	uParam2->f_8 = Param0.f_8;
}

float func_116(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (vParam0.z / 2f);
	fVar1 = vParam0.x;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_117(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (vParam0.z / 2f);
	fVar1 = vParam0.x;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_118(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_119(func_46(*uParam0), func_45(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_119(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_120(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_121(var uParam0, int iParam1)
{
	struct<8> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar1, &uVar2, &uVar3, &uVar4);
	Var0.f_4 = uVar1;
	Var0.f_5 = uVar2;
	Var0.f_6 = uVar3;
	Var0.f_7 = uVar4;
	func_122(Var0, 0, 0);
}

void func_122(struct<8> Param0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_126(&Var0);
			break;
		
		case 1:
			func_125(&Var0);
			break;
		
		case 3:
			func_124(&Var0);
			break;
		
		case 4:
			func_123(&Var0);
			break;
	}
	if (func_47())
	{
		if (iParam2 == 1)
		{
			GRAPHICS::DRAW_RECT(func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_123(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_124(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_125(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_126(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_127(var uParam0, bool bParam1, bool bParam2)
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

int func_128(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0)
{
	func_15(&(Global_1373453.f_758[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_779[iParam0 /*2*/]));
}

void func_130(int iParam0)
{
	func_15(&(Global_1373453.f_296[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_317[iParam0 /*2*/]));
	Global_1373453.f_1114.f_205[iParam0] = -1;
}

float func_131()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(0);
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar1, &iVar2);
	fVar3 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar2));
	fVar0 = func_132(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_132(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_133(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_138(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_93(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_92(uParam4));
	func_134(uParam1, iParam3, -1f, -1f);
	func_90(iParam3, -fVar0);
	func_104(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_134(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_137(fParam2, fParam3))
	{
		fVar0 = (func_136() + func_93(iParam1));
		fVar1 = func_135();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

float func_135()
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

float func_136()
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

int func_137(float fParam0, float fParam1)
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

float func_138(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	if (bParam1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_27(9, iParam0))
	{
		func_142(iParam0, &uVar0, &uVar1, 1, iParam1, iParam2);
	}
}

void func_142(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;
	
	Global_1373453++;
	if (func_105())
	{
		func_146();
		HUD::GET_HUD_COLOUR(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_145(uParam1, 3, uVar0, uVar1, uVar2);
		if (func_87())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
		if (Global_1373453 == 1)
		{
			func_95(iParam3);
		}
		fVar4 = 0.131f;
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
		{
			fVar4 = 0.0872f;
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
		{
			fVar4 = 0.095f;
		}
		*uParam2 = 0.795f;
		uParam2->f_1 = ((func_93(iParam3) + func_91(uParam1)) - fVar4);
		func_97(uParam1);
		func_66(uParam1, 0);
		func_96(9, iParam0);
		func_144(&uVar5, iParam4);
		func_118(uParam2, uParam1, func_143(&uVar5), 0, 1);
		func_43();
	}
}

var func_143(var uParam0)
{
	return uParam0;
}

void func_144(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = { Var0 };
}

void func_145(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

void func_146()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_147(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_27(8, iParam0))
	{
		uVar2 = 2;
		func_148(iParam0, &uVar0, &uVar1, &uVar2, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_148(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	struct<9> Var0;
	struct<8> Var1;
	
	Global_1373453++;
	if (func_105())
	{
		func_104(&Var1, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_103(uParam1, 0);
		func_98(uParam1);
		func_96(8, iParam0);
		if (Global_1373453 == 1)
		{
			func_95(iParam4);
		}
		func_149(uParam2, iParam4, uParam1, &Var0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting"))
		{
			Var1 = *uParam2;
			Var1.f_1 = uParam2->f_1;
			Var1 = (Var1 + 0.079f);
			Var1.f_1 = (Var1.f_1 + 0.008f);
			Var1.f_2 = (Var1.f_2 + 0.157f);
			Var1.f_3 = (Var1.f_3 + 0.036f);
			Var1.f_4 += 255;
			Var1.f_5 += 255;
			Var1.f_6 += 255;
			Var1.f_7 = 140;
			if (func_87())
			{
				Var1 = (Var1 + -0.025f);
				Var1.f_2 = (Var1.f_2 + 0.05f);
			}
			Global_1373453.f_6241 = (Global_1373453.f_6241 + Var1.f_3);
			func_67("TimerBars", "ALL_BLACK_bg", &Var1, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_67("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_66(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_53(uParam2, uParam1, sParam5, iParam6, 2);
			func_43();
		}
	}
}

void func_149(var uParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = func_138(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_93(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_92(uParam2));
	func_90(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_92(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(2, iParam0))
	{
		uVar2 = 9;
		if (iParam1 < 9)
		{
			func_151(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	
	Global_1373453++;
	if (func_105())
	{
		if (iParam40 == 2)
		{
		}
		func_96(2, iParam0);
		if (Global_1373453 == 1)
		{
			func_95(iParam6);
		}
		func_158(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_87())
		{
			func_140(uParam1, 0);
		}
		else if (bParam51)
		{
			func_103(uParam1, 0);
		}
		else if (bParam21)
		{
			func_139(uParam1, 3);
		}
		else
		{
			func_103(uParam1, 0);
		}
		func_98(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_131())));
		if (iParam19 == 0)
		{
			func_157(iParam0);
		}
		if (iParam41 == 0)
		{
			func_156(iParam0);
		}
		iVar2 = func_75();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			if (func_62(iParam19, &(Global_1373453.f_212[iParam0 /*2*/]), &(Global_1373453.f_233[iParam0 /*2*/])))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if (!func_137(fParam22, fParam23))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_87())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1373453.f_6241 = (Global_1373453.f_6241 + Var0.f_3);
				if (iParam41 > 0)
				{
					Var3 = { Var0 };
					if (func_242(&(Global_1373453.f_1002[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_128(Global_1373453.f_1002[iParam0 /*2*/], 1250, 0))
						{
							Global_1373453.f_1023[iParam0] = (Global_1373453.f_1023[iParam0] - 17);
						}
						Var3.f_7 = Global_1373453.f_1023[iParam0];
						func_86(&Var3, iParam7);
						func_67("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
					}
				}
				else
				{
					Global_1373453.f_1023[iParam0] = 255;
					func_127(&(Global_1373453.f_1002[iParam0 /*2*/]), 0, 0);
				}
				func_67("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			}
			func_121(&Var0, iParam52);
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			func_120(uParam1, iParam42);
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_87())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_87() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.003f);
			}
			if (!func_137(fParam22, fParam23))
			{
				func_66(uParam1, 0);
				if (bParam51)
				{
					func_56(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_56(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_118(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 - -0.003f);
					func_53(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar1)
			{
				func_152(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar2, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_43();
		}
	}
}

void func_152(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar6;
	
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Cross", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_155(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar6 = false;
				if (iVar2 == 2)
				{
					bVar6 = true;
					iVar2 = 1;
				}
				Var5 = { func_154(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar6)
				{
					Var5.f_7 = 51;
				}
				func_67("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_153(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_86(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_86(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_86(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_86(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_86(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_86(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_86(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_86(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_67("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_154(struct<9> Param0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam4 == 0)
	{
		if (bParam1)
		{
			func_86(&Var0, iParam2);
		}
		else
		{
			func_86(&Var0, iParam3);
		}
	}
	else if (bParam1)
	{
		func_86(&Var0, iParam4);
	}
	else
	{
		func_86(&Var0, iParam5);
	}
	if (bParam1 == 0)
	{
	}
	return Var0;
}

int func_155(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_156(int iParam0)
{
	func_15(&(Global_1373453.f_674[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_695[iParam0 /*2*/]));
}

void func_157(int iParam0)
{
	func_15(&(Global_1373453.f_212[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_233[iParam0 /*2*/]));
}

void func_158(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_138(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_93(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_92(uParam7));
	func_160(uParam1, iParam4, fParam5, fParam6);
	func_159(uParam3);
	if (!func_137(fParam5, fParam6))
	{
		func_90(iParam4, -fVar0);
	}
	func_104(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_159(var uParam0)
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_160(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_137(fParam2, fParam3))
	{
		fVar0 = (func_136() + func_93(iParam1));
		fVar1 = func_161();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_161()
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

void func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, int iParam22, bool bParam23, bool bParam24, int iParam25)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(6, iParam0))
	{
		func_163(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, bParam18, iParam19, iParam20, bParam21, iParam22, bParam23, bParam24, iParam25, 0, 0, -1);
	}
}

void func_163(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, bool bParam23, int iParam24, int iParam25, bool bParam26, int iParam27, bool bParam28, bool bParam29, int iParam30, bool bParam31, int iParam32, int iParam33)
{
	struct<8> Var0;
	struct<9> Var1;
	struct<9> Var2;
	struct<9> Var3;
	bool bVar4;
	int iVar5;
	struct<9> Var6;
	bool bVar7;
	float fVar8;
	float fVar9;
	struct<8> Var10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<8> Var15;
	struct<8> Var16;
	int iVar17;
	char* sVar18;
	char* sVar19;
	int iVar20;
	char* sVar21;
	char* sVar22;
	int iVar23;
	
	Global_1373453++;
	if (func_105())
	{
		func_104(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_104(&Var1, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_104(&Var2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_104(&Var3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_87())
		{
			if (bParam23)
			{
				func_171(uParam1, 0);
			}
			else if (bParam11)
			{
				func_139(uParam1, 3);
			}
			else
			{
				func_171(uParam1, 0);
			}
		}
		else if (bParam23)
		{
			func_103(uParam1, 0);
		}
		else if (bParam11)
		{
			func_139(uParam1, 3);
		}
		else
		{
			func_103(uParam1, 0);
		}
		if (Global_2458627 && bParam11)
		{
			if (func_87())
			{
				func_171(uParam1, 0);
			}
			else
			{
				func_103(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam14 >= 100f) && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN", sParam12))
			{
				func_102(uParam2, 0, 0);
			}
			else if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_102(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_101(uParam2, 0, 0);
			}
			else
			{
				func_100(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam12)))
		{
			func_102(uParam2, 0, 0);
		}
		else
		{
			func_101(uParam2, 0, 0);
		}
		func_98(uParam1);
		func_97(uParam2);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_131())));
		func_96(6, iParam0);
		if (Global_1373453 == 1)
		{
			func_95(iParam6);
		}
		func_89(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_88(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_170(iParam0);
		}
		if (iParam16 == 0)
		{
			func_169(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar5 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			if (func_62(iParam9, &(Global_1373453.f_86[iParam0 /*2*/]), &(Global_1373453.f_107[iParam0 /*2*/])))
			{
				bVar4 = true;
			}
			else
			{
				bVar4 = false;
			}
			Var3 = *uParam3;
			Var3.f_1 = uParam3->f_1;
			Var0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.002f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.049f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.008f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.036f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			else
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.01f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.033f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			if (func_87())
			{
				Var3 = (Var3 + -0.025f);
				Var3.f_2 = (Var3.f_2 + 0.05f);
			}
			Global_1373453.f_6241 = (Global_1373453.f_6241 + Var3.f_3);
			if (iParam16 > 0)
			{
				Var6 = { Var3 };
				if (func_242(&(Global_1373453.f_1066[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_128(Global_1373453.f_1066[iParam0 /*2*/], 1250, 0))
					{
						Global_1373453.f_1087[iParam0] = (Global_1373453.f_1087[iParam0] - 17);
					}
					Var6.f_7 = Global_1373453.f_1087[iParam0];
					if (iParam15 == 2)
					{
						func_86(&Var6, 6);
					}
					else if (iParam15 == 3)
					{
						func_86(&Var6, 18);
					}
					else
					{
						func_86(&Var6, iParam8);
					}
					func_67("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar5, 0);
				}
			}
			else
			{
				Global_1373453.f_1087[iParam0] = 255;
				func_127(&(Global_1373453.f_1066[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_67("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar5, 0);
			}
			else
			{
				func_67("TimerBars", "ALL_BLACK_bg", &Var3, 1, 0, iVar5, 0);
			}
			func_121(&Var3, iParam24);
			iVar5 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			func_120(uParam1, iParam17);
			bVar7 = true;
			if (Global_2458627)
			{
				bVar7 = false;
			}
			if (Global_2458628 == 1)
			{
				bVar7 = true;
			}
			func_66(uParam1, 0);
			if (func_87())
			{
				if (bParam11)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_87())
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam23)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_2458627 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2 && MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 4)
			{
				sParam7 = "HUD_BOOST";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			uParam1->f_6 = iParam25;
			uParam2->f_6 = iParam25;
			if (bParam26)
			{
				uParam2->f_6 = 0;
			}
			if (bParam28)
			{
				if (bVar4)
				{
					func_168(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar7);
				}
			}
			else
			{
				func_168(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar7);
			}
			if (bParam31)
			{
				if (iParam33 > 0)
				{
					if (!func_64(&(Global_1373453.f_821[iParam0 /*2*/])))
					{
						func_63(&(Global_1373453.f_821[iParam0 /*2*/]), 0, 0);
					}
					else if (func_242(&(Global_1373453.f_821[iParam0 /*2*/]), iParam33, 0))
					{
						func_127(&(Global_1373453.f_821[iParam0 /*2*/]), 0, 0);
					}
					func_165(uParam2, iParam8, iParam32, iParam33, Global_1373453.f_821[iParam0 /*2*/]);
				}
			}
			if (iParam22 == 1)
			{
				Var1 = uParam2->f_9;
				Var1.f_1 = (uParam4->f_1 - 0.0175f);
				Var2 = uParam2->f_9;
				Var2.f_1 = (uParam4->f_1 + 0.0175f);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArrow", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArrow"))
				{
					Var1 = (Var1 + 0.0095f);
					Var1 = (Var1 - 0.015f);
					Var1.f_1 = (Var1.f_1 + 0.019f);
					Var1.f_2 = (Var1.f_2 + 0.01f);
					Var1.f_3 = (Var1.f_3 + 0.01f);
					Var1.f_4 = Var1.f_4;
					Var1.f_5 = Var1.f_5;
					Var1.f_6 = Var1.f_6;
					Var1.f_7 = (Var1.f_7 - 50);
					Var1.f_8 = -90f;
					func_67("MPArrow", "MP_ArrowXLarge", &Var1, 1, 0, iVar5, 0);
					Var2 = (Var2 + 0.0095f);
					Var2 = (Var2 - 0.015f);
					Var2.f_1 = (Var2.f_1 + 0.019f);
					Var2.f_2 = (Var2.f_2 + 0.01f);
					Var2.f_3 = (Var2.f_3 + 0.01f);
					Var2.f_4 = Var2.f_4;
					Var2.f_5 = Var2.f_5;
					Var2.f_6 = Var2.f_6;
					Var2.f_7 = (Var2.f_7 - 50);
					Var2.f_8 = 90f;
					func_67("MPArrow", "MP_ArrowXLarge", &Var2, 1, 0, iVar5, 0);
				}
			}
			if (bParam29)
			{
				fVar8 = (func_136() + func_93(iParam6));
				fVar9 = func_135();
				if (func_87())
				{
					Var10 = (fVar9 - 0.061f);
				}
				else
				{
					Var10 = (fVar9 - 0.0365f);
				}
				Var10.f_1 = (fVar8 + 0.057f);
				Var10.f_2 = (Var3.f_2 - 0.004f);
				Var10.f_3 = 0.01f;
				Var10.f_4 = 255;
				Var10.f_5 = 255;
				Var10.f_6 = 255;
				Var10.f_7 = 255;
				func_86(&Var10, iParam30);
				func_67("TimerBars", "DamagebarFill_128", &Var10, 0, 0, iVar5, 0);
			}
			if (bParam18)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
				{
					fVar11 = 0f;
					if (bParam11 == 1)
					{
						HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						fVar12 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
					}
					else
					{
						HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam7);
						if (iParam10 != -1)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
						}
						fVar12 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && bParam11 == 0)
					{
						fVar13 = (0.153f - 0.072f);
						fVar14 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 && bParam11 == 0)
					{
						fVar13 = ((0.153f - 0.01f) - 0.06f);
						fVar14 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 && bParam11 == 0)
					{
						fVar13 = ((0.153f - 0.012f) - 0.06f);
						fVar14 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam11 == 0)
					{
						fVar13 = ((0.153f - 0.012f) - 0.06f);
						fVar14 = -0.457f;
					}
					else
					{
						fVar13 = ((0.153f - 0.037f) - 0.036f);
						fVar14 = (-0.457f + 0.194f);
					}
					fVar13 = (fVar13 + 0.03f);
					if (Global_1373453.f_1109)
					{
						fVar13 = (fVar13 + -0.03f);
					}
					if (MISC::IS_PC_VERSION() && !GRAPHICS::GET_IS_WIDESCREEN())
					{
						fVar13 = (fVar13 + -0.015f);
					}
					if (Global_1373453.f_1110 && Global_1373453.f_1109 == 0)
					{
						fVar13 = (fVar13 + (-0.015f - 0.003f));
					}
					fVar11 = ((fVar14 * fVar12) + fVar13);
					Var0 = (Var0 + fVar11);
					Var0 = (Var0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_67("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar5, 0);
				}
			}
			if (bVar4)
			{
				if (iParam21 != 0)
				{
					func_164(uParam2);
					Var15 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_87())
					{
						Var15.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var15.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var15.f_2 = (0.016f + 0.003f);
					Var15.f_3 = (0.032f + 0.004f);
					Var15.f_7 = iParam25;
					func_86(&Var15, 1);
					Var16 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_87())
					{
						Var16.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var16.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var16.f_2 = (0.016f + 0.003f);
					Var16.f_3 = (0.032f + 0.004f);
					Var16.f_7 = 255;
					func_86(&Var16, 1);
					if (bParam26)
					{
						Var15.f_7 = 0;
					}
					sVar18 = "";
					iVar20 = 1;
					sVar21 = "";
					iVar23 = 1;
					switch (iParam21)
					{
						case 5:
							Var15.f_3 = (Var15.f_3 + -0.009f);
							Var15.f_2 = (Var15.f_2 + -0.002f);
							if (func_87())
							{
								Var15.f_1 = (Var15.f_1 + 0.0055f);
							}
							else
							{
								Var15.f_1 = (Var15.f_1 + 0.0025f);
							}
							sVar21 = "MPRPSymbol";
							sVar22 = "RP";
							break;
						
						case 2:
							sVar21 = "TimerBars";
							sVar22 = "Rockets";
							break;
						
						case 3:
							sVar21 = "MpSpecialRace";
							sVar22 = "HOMING_ROCKET";
							break;
						
						case 1:
							sVar21 = "TimerBars";
							sVar22 = "Spikes";
							break;
						
						case 4:
							sVar21 = "TimerBars";
							sVar22 = "Boost";
							break;
						
						case 6:
							sVar21 = "CrossTheLine";
							sVar22 = "Timer_LargeTick_32";
							iVar23 = 18;
							break;
						
						case 7:
							sVar21 = "CrossTheLine";
							sVar22 = "Timer_LargeCross_32";
							iVar23 = 6;
							break;
						
						case 8:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Beast";
							iVar23 = 118;
							break;
						
						case 9:
							sVar21 = "MPSpecialRace";
							sVar22 = "MACHINE_GUN";
							break;
						
						case 10:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Random";
							iVar23 = 118;
							break;
						
						case 11:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Slow_Time";
							break;
						
						case 12:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Swap";
							iVar23 = 118;
							break;
						
						case 13:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Testosterone";
							iVar23 = 118;
							break;
						
						case 14:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Thermal";
							iVar23 = 118;
							break;
						
						case 15:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Weed";
							iVar23 = 118;
							break;
						
						case 16:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Hidden";
							iVar23 = 118;
							break;
						
						case 17:
						case 18:
							if (iParam27 != func_59())
							{
								iVar17 = func_79(iParam27);
								if (iVar17 != 0)
								{
									sVar21 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar17);
									sVar22 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar17);
								}
							}
							if (func_87())
							{
								Var15.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
							}
							else
							{
								Var15.f_1 = (uParam4->f_1 + 0.0185f);
							}
							Var15.f_2 = (0.016f + 0.004f);
							Var15.f_3 = (0.032f + 0.002f);
							if (iParam21 == 18)
							{
								if (func_87())
								{
									Var16.f_1 = (uParam4->f_1 + 0.016f);
								}
								else
								{
									Var16.f_1 = (uParam4->f_1 + 0.019f);
								}
								Var16.f_2 = (0.016f + 0.004f);
								Var16.f_3 = (0.032f + 0.002f);
								sVar18 = "timerbar_sr";
								sVar19 = "timer_cross";
								iVar20 = iParam17;
								Var15.f_7 = 127;
							}
							break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar21))
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar21, false);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar21))
						{
							func_86(&Var15, iVar23);
							func_67(sVar21, sVar22, &Var15, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar18))
						{
							GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar18, false);
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar18))
							{
								func_86(&Var16, iVar20);
								func_67(sVar18, sVar19, &Var16, 1, 0, 4, 0);
							}
						}
					}
				}
				func_66(uParam2, 0);
				iVar5 = func_75();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
				if ((iParam21 == 0 || iParam21 == 5) || iParam21 == 9)
				{
					if (bParam20)
					{
						func_56(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (iParam13 == 0)
						{
							func_53(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_51(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_2460130, 2);
						}
					}
					else if (func_55(sParam12))
					{
						if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_53(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_51(uParam4, uParam2, "NUMBER", fParam14, Global_2460130, 2);
							}
						}
						else
						{
							func_49(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_66(uParam2, 0);
						func_44(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_66(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_44(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_53(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_51(uParam4, uParam2, sParam12, fParam14, Global_2460130, 2);
					}
				}
			}
			func_43();
		}
	}
}

void func_164(var uParam0)
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

void func_165(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_167(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_3 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_4 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

float func_166(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_167(var uParam0, bool bParam1, bool bParam2)
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

void func_168(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 == 1)
	{
		if (bParam7)
		{
			func_56(uParam1, uParam0, sParam2, "", iParam3, 2);
		}
		else
		{
			func_56(uParam1, uParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == -1)
	{
		func_118(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = (uParam1->f_1 + (-0.003f - 0.001f));
		func_53(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_169(int iParam0)
{
	func_15(&(Global_1373453.f_548[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_569[iParam0 /*2*/]));
}

void func_170(int iParam0)
{
	func_15(&(Global_1373453.f_86[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_107[iParam0 /*2*/]));
}

void func_171(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_172(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, int iParam24, bool bParam25)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_27(0, iParam0))
	{
		uVar2 = 4;
		func_173(iParam0, &uVar0, &uVar1, &uVar2, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24, bParam25);
	}
}

void func_173(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27, int iParam28, bool bParam29)
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	float fVar4;
	float fVar5;
	struct<8> Var6;
	
	Global_1373453++;
	if (func_105())
	{
		if (iParam15 == 2)
		{
		}
		func_96(0, iParam0);
		if (func_87())
		{
			if (bParam17)
			{
				func_180(uParam1, 0);
			}
			else
			{
				func_140(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_103(uParam1, 0);
		}
		else if (bParam10)
		{
			func_139(uParam1, 3);
		}
		else if (bParam17)
		{
			func_179(uParam1, 0);
		}
		else
		{
			func_103(uParam1, 0);
		}
		if (Global_1373453 == 1)
		{
			func_95(iParam6);
		}
		func_178(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_98(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_131())));
		if (iParam11 == 0)
		{
			func_130(iParam0);
		}
		if (iParam16 == 0)
		{
			func_129(iParam0);
		}
		if (func_62(iParam11, &(Global_1373453.f_296[iParam0 /*2*/]), &(Global_1373453.f_317[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (!func_137(fParam12, fParam13))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_87())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1373453.f_6241 = (Global_1373453.f_6241 + Var0.f_3);
				if (iParam16 > 0)
				{
					Var3 = { Var0 };
					if (func_242(&(Global_1373453.f_842[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_128(Global_1373453.f_842[iParam0 /*2*/], 1250, 0))
						{
							Global_1373453.f_863[iParam0] = (Global_1373453.f_863[iParam0] - 17);
						}
						Var3.f_7 = Global_1373453.f_863[iParam0];
						func_86(&Var3, iParam8);
						func_67("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
					}
				}
				else
				{
					Global_1373453.f_863[iParam0] = 255;
					func_127(&(Global_1373453.f_842[iParam0 /*2*/]), 0, 0);
				}
				func_67("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			}
			func_121(&Var0, iParam21);
			if (func_87())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (!func_137(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_120(uParam1, iParam8);
					func_66(uParam1, 0);
					func_56(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == 1)
				{
					func_120(uParam1, iParam8);
					func_66(uParam1, 0);
					func_56(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_120(uParam1, iParam22);
					func_66(uParam1, 0);
					if (bParam29)
					{
						func_177(uParam2, uParam1, sParam7, 0, 1, iParam4, iParam5);
					}
					else if (iParam9 == -1)
					{
						func_118(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_53(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23)
			{
				if (!func_137(fParam12, fParam13))
				{
					fVar4 = (func_136() + func_93(iParam6));
					fVar5 = func_135();
				}
				else
				{
					fVar4 = fParam13;
					fVar5 = fParam12;
				}
				Var6.f_1 = (fVar4 + 0.0486f);
				Var6 = (fVar5 - 0.0505f);
				Var6.f_2 = 0.18f;
				Var6.f_3 = 0.01f;
				Var6.f_4 = 255;
				Var6.f_5 = 255;
				Var6.f_6 = 255;
				Var6.f_7 = 255;
				func_86(&Var6, iParam24);
				func_67("TimerBars", "TPBar", &Var6, 0, 0, iVar2, 0);
			}
			iVar2 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (bVar1)
			{
				if (bParam17)
				{
					func_176(iParam4, iParam5, uParam3, iParam8, uParam14, iVar2, iParam20);
				}
				else
				{
					func_174(iParam4, iParam5, uParam3, iParam8, uParam14, iVar2, &(Global_1373453.f_800[iParam0 /*2*/]), iParam18, iParam20, bParam25, iParam26, iParam27, iParam28);
				}
			}
			func_43();
		}
	}
}

void func_174(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	struct<9> Var0[2];
	float fVar1;
	char* sVar2;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (iParam8 != 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_113(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_113(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_86(uParam2[1 /*9*/], iParam3);
		if (bParam9)
		{
			func_86(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_86(uParam2[3 /*9*/], iParam3);
		}
		if (iParam10 != 0 && iParam0 < iParam10)
		{
			func_86(uParam2[1 /*9*/], 6);
		}
		if (iParam12 > 0)
		{
			if (!func_64(uParam6))
			{
				func_63(uParam6, 0, 0);
			}
			else if (func_242(uParam6, iParam12, 0))
			{
				func_127(uParam6, 0, 0);
			}
			func_175(uParam2[1 /*9*/], iParam3, iParam11, iParam12, *uParam6);
		}
		fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_67("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam9)
		{
			func_86(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_86(uParam2[3 /*9*/], iParam3);
		}
		(uParam2[3 /*9*/])->f_7 = 51;
		func_67("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_115(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_67("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam8 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				if (iParam8 != 10)
				{
					sVar2 = "LineMarker90_128";
					switch (iParam8)
					{
						case 1:
							sVar2 = "LineMarker10_128";
							break;
						
						case 2:
							sVar2 = "LineMarker20_128";
							break;
						
						case 3:
							sVar2 = "LineMarker30_128";
							break;
						
						case 4:
							sVar2 = "LineMarker40_128";
							break;
						
						case 5:
							sVar2 = "LineMarker50_128";
							break;
						
						case 6:
							sVar2 = "LineMarker60_128";
							break;
						
						case 7:
							sVar2 = "LineMarker70_128";
							break;
						
						case 8:
							sVar2 = "LineMarker80_128";
							break;
						
						case 9:
							sVar2 = "LineMarker90_128";
							break;
					}
					(uParam2[3 /*9*/])->f_7 = 255;
					func_86(uParam2[3 /*9*/], 2);
					func_67("timerbar_lines", sVar2, uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					(uParam2[3 /*9*/])->f_7 = 255;
					func_86(uParam2[3 /*9*/], 2);
					func_67("timerbar_lines", "LineMarker20_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_67("timerbar_lines", "LineMarker40_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_67("timerbar_lines", "LineMarker60_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_67("timerbar_lines", "LineMarker80_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam7 > 0 && fVar1 >= IntToFloat(iParam7))
		{
			func_86(uParam2[1 /*9*/], 6);
			func_115(*(uParam2[0 /*9*/]), SYSTEM::TO_FLOAT(iParam7), uParam2[1 /*9*/], 1, 1, uParam4);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_67("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_175(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_167(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_7 = SYSTEM::FLOOR(func_166(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

void func_176(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	struct<9> Var0[2];
	float fVar1;
	char* sVar2;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (iParam6 != 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_113(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_113(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_86(uParam2[1 /*9*/], iParam3);
		func_86(uParam2[3 /*9*/], iParam3);
		fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_67("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_86(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_67("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_115(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_67("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam6 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				sVar2 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar2 = "LineMarker10_128";
						break;
					
					case 2:
						sVar2 = "LineMarker20_128";
						break;
					
					case 3:
						sVar2 = "LineMarker30_128";
						break;
					
					case 4:
						sVar2 = "LineMarker40_128";
						break;
					
					case 5:
						sVar2 = "LineMarker50_128";
						break;
					
					case 6:
						sVar2 = "LineMarker60_128";
						break;
					
					case 7:
						sVar2 = "LineMarker70_128";
						break;
					
					case 8:
						sVar2 = "LineMarker80_128";
						break;
					
					case 9:
						sVar2 = "LineMarker90_128";
						break;
				}
				(uParam2[1 /*9*/])->f_7 = 255;
				func_86(uParam2[1 /*9*/], 2);
				func_67("timerbar_lines", sVar2, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_177(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_66(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_50(func_46(*uParam0), func_45(uParam0->f_1), sVar0, iParam5, iParam6);
		}
	}
}

void func_178(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)
{
	float fVar0;
	
	fVar0 = func_138(bParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_93(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_92(uParam6));
	func_134(uParam1, iParam3, fParam4, fParam5);
	if (!func_137(fParam4, fParam5))
	{
		func_90(iParam3, -fVar0);
	}
	func_104(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_181(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (func_27(1, iParam0))
	{
		uVar2 = 11;
		func_182(iParam0, &uVar0, &uVar1, &uVar2, &uVar5, &uVar3, &uVar4, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_182(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	struct<9> Var0;
	struct<2> Var1;
	vector3 vVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<9> Var6;
	
	Global_1373453++;
	if (func_105())
	{
		if (iParam17 == 2)
		{
		}
		func_96(1, iParam0);
		if (func_87())
		{
			func_140(uParam1, 0);
		}
		else if (bParam13)
		{
			func_139(uParam1, 3);
		}
		else
		{
			func_103(uParam1, 0);
		}
		func_103(&vVar2, 0);
		vVar2.z = (vVar2.z + (0.166f + 0.095f));
		if (Global_1373453 == 1)
		{
			func_95(iParam9);
		}
		func_190(uParam5, 0, 0);
		func_97(uParam5);
		func_66(uParam5, 0);
		iVar4 = 0;
		if (iParam20 > 0)
		{
			iVar4 = 1;
		}
		func_188(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar4);
		Var1 = *uParam2;
		Var1.f_1 = uParam2->f_1;
		Var1.f_1 = (Var1.f_1 + (-0.006f - 0.007f));
		func_98(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_131())));
		func_187(&vVar2);
		if (iParam14 == 0)
		{
			func_186(iParam0);
		}
		if (iParam18 == 0)
		{
			func_185(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar5 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			if (func_62(iParam14, &(Global_1373453.f_254[iParam0 /*2*/]), &(Global_1373453.f_275[iParam0 /*2*/])))
			{
				bVar3 = true;
			}
			else
			{
				bVar3 = false;
			}
			if (!func_137(fParam15, fParam16))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_87())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1373453.f_6241 = (Global_1373453.f_6241 + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var6 = { Var0 };
					if (func_242(&(Global_1373453.f_1034[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_128(Global_1373453.f_1034[iParam0 /*2*/], 1250, 0))
						{
							Global_1373453.f_1055[iParam0] = (Global_1373453.f_1055[iParam0] - 17);
						}
						Var6.f_7 = Global_1373453.f_1055[iParam0];
						func_86(&Var6, iParam11);
						func_67("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar5, 0);
					}
				}
				else
				{
					Global_1373453.f_1055[iParam0] = 255;
					func_127(&(Global_1373453.f_1034[iParam0 /*2*/]), 0, 0);
				}
				func_67("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar5, 0);
			}
			func_121(&Var0, iParam29);
			if (bParam13)
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_87() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_87())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar5 = func_75();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			if (!func_137(fParam15, fParam16))
			{
				func_66(uParam1, 0);
				if (bParam13 == 1)
				{
					func_56(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_118(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_53(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_53(&Var1, &vVar2, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar3)
			{
				func_183(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar5, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_43();
		}
	}
}

void func_183(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_86(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_67("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_86(uParam2[iVar1 /*9*/], iParam5);
					func_67("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_153(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_86(uParam2[iVar1 /*9*/], 2);
						func_67("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_49(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_184(uParam3);
		if (bParam7)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_86(uParam2[0 /*9*/], iParam5);
				func_67("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_49(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_184(var uParam0)
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_185(int iParam0)
{
	func_15(&(Global_1373453.f_716[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_737[iParam0 /*2*/]));
}

void func_186(int iParam0)
{
	func_15(&(Global_1373453.f_254[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_275[iParam0 /*2*/]));
	Global_1373453.f_1591.f_205[iParam0] = -1;
}

void func_187(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)
{
	float fVar0;
	
	fVar0 = func_94(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_138(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_93(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_92(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_91(uParam5));
	func_189(uParam2, iParam7, fParam8, fParam9);
	func_159(uParam6);
	if (!func_137(fParam8, fParam9))
	{
		func_90(iParam7, -fVar0);
	}
	func_104(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_189(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_137(fParam2, fParam3))
	{
		fVar0 = (func_136() + func_93(iParam1));
		fVar1 = func_161();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_190(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_191(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(5, iParam0))
	{
		func_163(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, 0, iParam11, 255, 0, 0, 0, 0, 1, 0, 0, -1);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(4, iParam0))
	{
		func_163(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, 0, 0, 0, bParam11, iParam13, iParam14, 0, 0, bParam15, 0, 1, 0, 0, -1);
	}
}

void func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(3, iParam0))
	{
		func_163(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, 0, iParam12, 255, 0, 0, 0, 0, 1, bParam13, iParam14, iParam15);
	}
}

void func_194(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, int iParam16, bool bParam17)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (func_27(7, iParam0))
	{
		func_195(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, iParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13, bParam14, iParam15, iParam16, bParam17);
	}
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, bool bParam24)
{
	var uVar0;
	var uVar1;
	struct<9> Var2;
	bool bVar3;
	int iVar4;
	struct<8> Var5;
	struct<9> Var6;
	
	Global_1373453++;
	if (iParam17 == 2)
	{
	}
	func_104(&Var2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_96(7, iParam0);
	if (bParam21)
	{
		func_103(uParam1, 0);
	}
	else if (bParam16)
	{
		func_139(uParam1, 3);
	}
	else if (func_87())
	{
		func_171(uParam1, 0);
	}
	else
	{
		func_103(uParam1, 0);
	}
	func_209(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_208(uParam3, 0);
				func_190(uParam2, 0, 0);
			}
			else
			{
				func_208(uParam3, 0);
				func_190(uParam2, 0, 5);
			}
			func_97(uParam2);
			func_97(uParam3);
			break;
		
		case 2:
			func_190(uParam2, 0, 0);
			func_97(&uVar0);
			func_97(uParam3);
			func_207(uParam2);
			break;
		
		case 3:
			func_190(uParam2, 0, 0);
			func_97(&uVar0);
			func_97(uParam3);
			func_207(uParam2);
			break;
		
		case 4:
			func_190(uParam3, 0, 0);
			if (bParam19)
			{
				func_190(uParam2, 0, 0);
			}
			else
			{
				func_190(uParam2, 0, 5);
			}
			func_97(uParam2);
			func_97(uParam3);
			break;
	}
	func_98(uParam1);
	if (Global_1373453.f_1109 == 0 && Global_1373453.f_1110 == 0)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + -0.016f);
			if (func_87())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.008f);
			}
		}
	}
	else if (Global_1373453.f_1109 == 0 && Global_1373453.f_1110 == 1)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + 0f);
			if (func_87())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.009f);
			}
		}
	}
	if (Global_1373453 == 1)
	{
		func_95(iParam8);
	}
	func_206(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar1);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_131())));
	func_88(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_205(iParam0);
	}
	if (iParam18 == 0)
	{
		func_204(iParam0);
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		iVar4 = func_75();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar4);
		if (func_62(iParam14, &(Global_1373453.f_170[iParam0 /*2*/]), &(Global_1373453.f_191[iParam0 /*2*/])))
		{
			bVar3 = true;
		}
		else
		{
			bVar3 = false;
		}
		Var2 = *uParam4;
		Var2.f_1 = uParam4->f_1;
		if (Global_1373453.f_1102 == 1)
		{
			Var2 = (Var2 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 2:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 3:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 4:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
		}
		Var5 = ((*uParam5 + 0.145f) + 0.001f);
		if (func_87())
		{
			Var5.f_1 = ((uParam5->f_1 + 0.019f) - 0.006f);
		}
		else
		{
			Var5.f_1 = (uParam5->f_1 + 0.019f);
		}
		Var5.f_2 = (0.016f + 0.003f);
		Var5.f_3 = (0.032f + 0.004f);
		Var5.f_7 = 255;
		func_86(&Var5, 1);
		Var5 = (uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f));
		if (func_87())
		{
			Var5 = (Var5 - 0.003f);
		}
		switch (iParam23)
		{
			case 5:
				Var5.f_3 = (Var5.f_3 + -0.009f);
				Var5.f_2 = (Var5.f_2 + -0.002f);
				if (func_87())
				{
					Var5.f_1 = (Var5.f_1 + 0.0055f);
				}
				else
				{
					Var5.f_1 = (Var5.f_1 + 0.0025f);
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPRPSymbol", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPRPSymbol"))
				{
					func_67("MPRPSymbol", "RP", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_67("TimerBars", "Rockets", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_67("TimerBars", "Spikes", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 4:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_67("TimerBars", "Boost", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_86(&Var5, 18);
					func_67("CrossTheLine", "Timer_LargeTick_32", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_86(&Var5, 6);
					func_67("CrossTheLine", "Timer_LargeCross_32", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Beast", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_B_Time", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Random", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Slow_Time", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Swap", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Testosterone", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Thermal", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Weed", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 16:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_86(&Var5, 118);
					func_67("TimerBar_Icons", "Pickup_Hidden", &Var5, 1, 0, 4, 0);
				}
				break;
		}
		if (func_87())
		{
			Var2 = (Var2 + -0.025f);
			Var2.f_2 = (Var2.f_2 + 0.05f);
		}
		Global_1373453.f_6241 = (Global_1373453.f_6241 + Var2.f_3);
		if (Global_1373453.f_1102 == 0)
		{
			if (iParam18 > 0)
			{
				Var6 = { Var2 };
				if (func_242(&(Global_1373453.f_970[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_128(Global_1373453.f_970[iParam0 /*2*/], 1250, 0))
					{
						Global_1373453.f_991[iParam0] = (Global_1373453.f_991[iParam0] - 17);
					}
					Var6.f_7 = Global_1373453.f_991[iParam0];
					if (iParam17 == 2)
					{
						func_86(&Var6, 6);
					}
					else if (iParam17 == 3)
					{
						func_86(&Var6, 18);
					}
					else
					{
						func_86(&Var6, iParam12);
					}
					func_67("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar4, 0);
				}
			}
			else
			{
				Global_1373453.f_991[iParam0] = 255;
				func_127(&(Global_1373453.f_970[iParam0 /*2*/]), 0, 0);
			}
			func_67("TimerBars", "ALL_BLACK_bg", &Var2, 1, 0, iVar4, 0);
		}
		func_121(&Var2, iParam22);
		if (bParam16)
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_87())
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar4 = func_75();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar4);
		func_88(uParam1, iParam20);
		if (Global_1373453.f_1102 == 0)
		{
			func_66(uParam1, 0);
			if (func_55(sParam11) == 0)
			{
				if (bParam21 == 1)
				{
					func_56(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (bParam16 == 1)
				{
					*uParam1 = 4;
					func_56(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_118(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_53(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
		if (bVar3)
		{
			if (iParam9 == 0)
			{
				func_203(iParam0);
			}
			if (iParam9 != 0 && func_242(&(Global_1373453.f_4453.f_336[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_202(uParam3);
						func_201(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_200(uParam3);
					}
					else
					{
						func_199(uParam3);
						func_201(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_200(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_199(uParam3);
					func_201(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_200(uParam3);
				}
				else
				{
					func_202(uParam3);
					func_201(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_200(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_198(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_197(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_196(uParam2);
					}
				}
				if (Global_1373453.f_1102 == 1)
				{
					uParam2->f_7 = 0;
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				}
				func_66(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_56(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							if (bParam24)
							{
								func_201(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							}
							else
							{
								func_201(uParam5, uParam2, iParam7, 2567, "", 0, 1);
							}
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_56(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_201(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_201(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_118(&uVar1, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_201(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_118(&uVar1, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_56(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_201(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_201(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_43();
	}
}

void func_196(var uParam0)
{
	func_120(uParam0, 109);
}

void func_197(var uParam0)
{
	func_120(uParam0, 108);
}

void func_198(var uParam0)
{
	func_120(uParam0, 107);
}

void func_199(var uParam0)
{
	func_120(uParam0, 6);
}

void func_200(var uParam0)
{
	func_120(uParam0, 1);
}

void func_201(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_47())
	{
		func_66(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(iParam6);
		HUD::SET_TEXT_CENTRE(iParam5);
		if (func_55(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_46(*uParam0), func_45(uParam0->f_1), 0);
	}
}

void func_202(var uParam0)
{
	func_120(uParam0, 18);
}

void func_203(int iParam0)
{
	func_15(&(Global_1373453.f_4453.f_336[iParam0 /*2*/]));
}

void func_204(int iParam0)
{
	func_15(&(Global_1373453.f_632[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_653[iParam0 /*2*/]));
}

void func_205(int iParam0)
{
	func_15(&(Global_1373453.f_170[iParam0 /*2*/]));
	func_15(&(Global_1373453.f_191[iParam0 /*2*/]));
}

void func_206(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_94(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_93(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_92(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_91(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_91(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_90(iParam4, -fVar0);
}

void func_207(var uParam0)
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_220(iParam0))
	{
		iVar1 = 2;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (Global_1367921[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_211(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			func_194(iParam1, Global_1373453.f_4453[iParam1], &(Global_1373453.f_4453.f_11[iParam1 /*16*/]), Global_1373453.f_4453.f_172[iParam1], Global_1373453.f_4453.f_194[iParam1], Global_1373453.f_4453.f_216[iParam1], Global_1373453.f_4453.f_205[iParam1], Global_1373453.f_4453.f_183[iParam1], Global_1373453.f_4453.f_227[iParam1], Global_1373453.f_4453.f_260[iParam1], Global_1373453.f_4453.f_314[iParam1], Global_1373453.f_4453.f_325[iParam1], Global_1373453.f_4453.f_357[iParam1], Global_1373453.f_4453.f_238[iParam1], Global_1373453.f_4453.f_271[iParam1], Global_1373453.f_4453.f_368[iParam1], Global_1373453.f_4453.f_379[iParam1], Global_1373453.f_4453.f_390[iParam1]);
			break;
		
		case 3:
			func_193(iParam1, Global_1373453.f_2655[iParam1], &(Global_1373453.f_2655.f_11[iParam1 /*16*/]), Global_1373453.f_2655.f_183[iParam1], Global_1373453.f_2655.f_172[iParam1], Global_1373453.f_2655.f_194[iParam1], Global_1373453.f_2655.f_216[iParam1], &(Global_1373453.f_2655.f_259[iParam1 /*16*/]), Global_1373453.f_2655.f_420[iParam1], Global_1373453.f_2655.f_453[iParam1], Global_1373453.f_2655.f_431[iParam1], Global_1373453.f_2655.f_442[iParam1], Global_1373453.f_2655.f_464[iParam1], Global_1373453.f_2655.f_475[iParam1], Global_1373453.f_2655.f_486[iParam1], Global_1373453.f_2655.f_497[iParam1]);
			break;
		
		case 4:
			func_192(iParam1, Global_1373453.f_3163[iParam1], Global_1373453.f_3163.f_172[iParam1], &(Global_1373453.f_3163.f_11[iParam1 /*16*/]), Global_1373453.f_3163.f_194[iParam1], Global_1373453.f_3163.f_183[iParam1], Global_1373453.f_3163.f_205[iParam1], Global_1373453.f_3163.f_227[iParam1], Global_1373453.f_3163.f_270[iParam1], Global_1373453.f_3163.f_281[iParam1], Global_1373453.f_3163.f_292[iParam1], Global_1373453.f_3163.f_303[iParam1], Global_1373453.f_3163.f_314[iParam1], Global_1373453.f_3163.f_325[iParam1], Global_1373453.f_3163.f_336[iParam1], Global_1373453.f_3163.f_347[iParam1]);
			break;
		
		case 5:
			func_191(iParam1, Global_1373453.f_3521[iParam1], Global_1373453.f_3521.f_172[iParam1], &(Global_1373453.f_3521.f_11[iParam1 /*16*/]), Global_1373453.f_3521.f_194[iParam1], Global_1373453.f_3521.f_183[iParam1], Global_1373453.f_3521.f_205[iParam1], Global_1373453.f_3521.f_227[iParam1], Global_1373453.f_3521.f_270[iParam1], Global_1373453.f_3521.f_281[iParam1], Global_1373453.f_3521.f_292[iParam1], Global_1373453.f_3521.f_303[iParam1]);
			break;
		
		case 1:
			func_181(iParam1, Global_1373453.f_1591[iParam1], Global_1373453.f_1591.f_11[iParam1], &(Global_1373453.f_1591.f_22[iParam1 /*16*/]), Global_1373453.f_1591.f_194[iParam1], Global_1373453.f_1591.f_205[iParam1], Global_1373453.f_1591.f_258[iParam1], Global_1373453.f_1591.f_183[iParam1], Global_1373453.f_1591.f_227[iParam1 /*3*/], Global_1373453.f_1591.f_227[iParam1 /*3*/].f_1, Global_1373453.f_1591.f_312[iParam1], Global_1373453.f_1591.f_323[iParam1], Global_1373453.f_1591.f_269[iParam1], Global_2537643[iParam1], Global_2537654[iParam1], Global_2537665[iParam1], Global_2537676[iParam1], Global_2537687[iParam1], Global_2537698[iParam1], Global_2537709[iParam1], Global_2537720[iParam1], Global_1373453.f_1591.f_334[iParam1]);
			break;
		
		case 0:
			func_172(iParam1, Global_1373453.f_1114[iParam1], Global_1373453.f_1114.f_11[iParam1], &(Global_1373453.f_1114.f_22[iParam1 /*16*/]), Global_1373453.f_1114.f_194[iParam1], Global_1373453.f_1114.f_183[iParam1], Global_1373453.f_1114.f_227[iParam1 /*3*/], Global_1373453.f_1114.f_227[iParam1 /*3*/].f_1, Global_1373453.f_1114.f_258[iParam1], Global_1373453.f_1114.f_205[iParam1], Global_1373453.f_1114.f_269[iParam1], Global_1373453.f_1114.f_312[iParam1], Global_1373453.f_1114.f_323[iParam1], Global_1373453.f_1114.f_334[iParam1], Global_1373453.f_1114.f_345[iParam1], Global_1373453.f_1114.f_356[iParam1], Global_1373453.f_1114.f_367[iParam1], Global_1373453.f_1114.f_378[iParam1], Global_1373453.f_1114.f_389[iParam1], Global_1373453.f_1114.f_400[iParam1], Global_1373453.f_1114.f_411[iParam1], Global_1373453.f_1114.f_422[iParam1], Global_1373453.f_1114.f_433[iParam1], Global_1373453.f_1114.f_444[iParam1], Global_1373453.f_1114.f_455[iParam1], Global_1373453.f_1114.f_466[iParam1]);
			break;
		
		case 6:
			func_162(iParam1, Global_1373453.f_3835[iParam1], &(Global_1373453.f_3835.f_11[iParam1 /*16*/]), Global_1373453.f_3835.f_183[iParam1], Global_1373453.f_3835.f_172[iParam1], Global_1373453.f_3835.f_194[iParam1], Global_1373453.f_3835.f_271[iParam1], &(Global_1373453.f_3835.f_282[iParam1 /*16*/]), Global_1373453.f_3835.f_443[iParam1], Global_1373453.f_3835.f_454[iParam1], Global_1373453.f_3835.f_497[iParam1], Global_1373453.f_3835.f_508[iParam1], Global_1373453.f_3835.f_205[iParam1], Global_1373453.f_3835.f_216[iParam1], Global_1373453.f_3835.f_227[iParam1], Global_1373453.f_3835.f_238[iParam1], Global_1373453.f_3835.f_249[iParam1], Global_1373453.f_3835.f_519[iParam1], Global_1373453.f_3835.f_530[iParam1], Global_1373453.f_3835.f_541[iParam1], Global_1373453.f_3835.f_552[iParam1], Global_1373453.f_3835.f_563[iParam1], Global_1373453.f_3835.f_574[iParam1], Global_1373453.f_3835.f_585[iParam1], Global_1373453.f_3835.f_596[iParam1], Global_1373453.f_3835.f_607[iParam1]);
			break;
		
		case 2:
			func_150(iParam1, Global_1373453.f_1936[iParam1], &(Global_1373453.f_1936.f_99[iParam1 /*16*/]), Global_1373453.f_1936.f_282[iParam1], Global_1373453.f_1936.f_293[iParam1], Global_1373453.f_1936.f_260[iParam1], Global_1373453.f_1936.f_11[iParam1], Global_1373453.f_1936.f_22[iParam1], Global_1373453.f_1936.f_33[iParam1], Global_1373453.f_1936.f_44[iParam1], Global_1373453.f_1936.f_55[iParam1], Global_1373453.f_1936.f_66[iParam1], Global_1373453.f_1936.f_77[iParam1], Global_1373453.f_1936.f_88[iParam1], Global_1373453.f_1936.f_271[iParam1], Global_1373453.f_1936.f_304[iParam1], Global_1373453.f_1936.f_357[iParam1], Global_1373453.f_1936.f_326[iParam1 /*3*/], Global_1373453.f_1936.f_326[iParam1 /*3*/].f_1, Global_1373453.f_1936.f_368[iParam1], Global_1373453.f_1936.f_379[iParam1], Global_1373453.f_1936.f_390[iParam1], Global_1373453.f_1936.f_401[iParam1], Global_1373453.f_1936.f_412[iParam1], Global_1373453.f_1936.f_423[iParam1], Global_1373453.f_1936.f_434[iParam1], Global_1373453.f_1936.f_445[iParam1], Global_1373453.f_1936.f_456[iParam1], Global_1373453.f_1936.f_467[iParam1], Global_1373453.f_1936.f_478[iParam1], Global_1373453.f_1936.f_489[iParam1], Global_1373453.f_1936.f_500[iParam1], Global_1373453.f_1936.f_511[iParam1], Global_1373453.f_1936.f_522[iParam1], Global_1373453.f_1936.f_533[iParam1], Global_1373453.f_1936.f_587[iParam1], Global_1373453.f_1936.f_598[iParam1], Global_1373453.f_1936.f_544[iParam1], Global_2537731[iParam1], Global_2537742[iParam1], Global_2537753[iParam1], Global_2537764[iParam1], Global_2537775[iParam1], Global_2537786[iParam1], Global_2537797[iParam1], Global_2537808[iParam1], Global_1373453.f_1936.f_609[iParam1], Global_1373453.f_1936.f_620[iParam1], Global_1373453.f_1936.f_631[iParam1], Global_1373453.f_1936.f_642[iParam1], Global_1373453.f_1936.f_653[iParam1], Global_1373453.f_1936.f_664[iParam1], Global_1373453.f_1936.f_675[iParam1], Global_1373453.f_1936.f_686[iParam1], Global_1373453.f_1936.f_697[iParam1], Global_1373453.f_1936.f_708[iParam1]);
			break;
		
		case 8:
			func_147(iParam1, &(Global_1373453.f_4854.f_11[iParam1 /*16*/]), Global_1373453.f_4854[iParam1], Global_1373453.f_4854.f_172[iParam1], Global_1373453.f_4854.f_183[iParam1], Global_1373453.f_4854.f_194[iParam1], Global_1373453.f_4854.f_205[iParam1]);
			break;
		
		case 9:
			func_141(iParam1, Global_1373453.f_5081[iParam1], Global_1373453.f_5081.f_11[iParam1]);
			break;
		
		case 10:
			func_110(iParam1, Global_1373453.f_5114.f_6[iParam1], Global_1373453.f_5114.f_17[iParam1], &(Global_1373453.f_5114.f_28[iParam1 /*16*/]), Global_1373453.f_5114.f_200[iParam1], Global_1373453.f_5114.f_189[iParam1], Global_1373453.f_5114.f_233[iParam1], Global_1373453.f_5114.f_211[iParam1], Global_1373453.f_5114.f_244[iParam1], Global_1373453.f_5114.f_287[iParam1], Global_1373453.f_5114.f_298[iParam1], &(Global_1373453.f_5114.f_309[iParam1 /*16*/]), &(Global_1373453.f_5114), Global_1373453.f_5114.f_470[iParam1], Global_1373453.f_5114.f_481[iParam1], Global_1373453.f_5114.f_492[iParam1]);
			break;
		
		case 11:
			func_106(iParam1, Global_1373453.f_5617[iParam1], Global_1373453.f_5617.f_11[iParam1], Global_1373453.f_5617.f_22[iParam1], Global_1373453.f_5617.f_33[iParam1], Global_1373453.f_5617.f_44[iParam1], Global_1373453.f_5617.f_55[iParam1], Global_1373453.f_5617.f_66[iParam1], Global_1373453.f_5617.f_77[iParam1], Global_1373453.f_5617.f_88[iParam1], Global_1373453.f_5617.f_110[iParam1], Global_1373453.f_5617.f_121[iParam1], Global_1373453.f_5617.f_132[iParam1], Global_1373453.f_5617.f_143[iParam1], Global_1373453.f_5617.f_154[iParam1]);
			break;
		
		case 12:
			func_41(iParam1, Global_1373453.f_5782[iParam1], Global_1373453.f_5782.f_22[iParam1], &(Global_1373453.f_5782.f_33[iParam1 /*6*/]), Global_1373453.f_5782.f_94[iParam1], Global_1373453.f_5782.f_11[iParam1], Global_1373453.f_5782.f_105[iParam1], Global_1373453.f_5782.f_116[iParam1], Global_1373453.f_5782.f_127[iParam1], Global_1373453.f_5782.f_138[iParam1], Global_1373453.f_5782.f_149[iParam1], Global_1373453.f_5782.f_160[iParam1], Global_1373453.f_5782.f_171[iParam1], Global_1373453.f_5782.f_182[iParam1], Global_1373453.f_5782.f_193[iParam1], Global_1373453.f_5782.f_204[iParam1], Global_1373453.f_5782.f_215[iParam1], Global_1373453.f_5782.f_226[iParam1], Global_1373453.f_5782.f_248[iParam1], Global_1373453.f_5782.f_259[iParam1], Global_1373453.f_5782.f_270[iParam1], Global_1373453.f_5782.f_281[iParam1], Global_1373453.f_5782.f_292[iParam1], Global_1373453.f_5782.f_303[iParam1], Global_1373453.f_5782.f_314[iParam1], Global_1373453.f_5782.f_325[iParam1], Global_1373453.f_5782.f_336[iParam1], Global_1373453.f_5782.f_347[iParam1], Global_1373453.f_5782.f_358[iParam1], Global_1373453.f_5782.f_369[iParam1], Global_1373453.f_5782.f_380[iParam1], Global_1373453.f_5782.f_391[iParam1]);
			break;
	}
}

void func_212(bool bParam0)
{
	if (func_213())
	{
		if (bParam0)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		else
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
		}
	}
}

int func_213()
{
	if (func_214(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	switch (func_215(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 40:
		case 35:
		case 38:
		case 41:
			return 0;
		
		default:
	}
	return 1;
}

int func_215(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196;
}

int func_216(int iParam0)
{
	if (Global_2460155 == 1)
	{
		return 0;
	}
	if (func_219() == 0)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return 0;
		}
	}
	if ((iParam0 != 1 && Global_1373453.f_1103 == 0) && Global_1373453.f_1104 == 0)
	{
		if (func_217())
		{
			return 0;
		}
	}
	return 1;
}

int func_217()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_218())
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

int func_218()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	return Global_25765;
}

bool func_220(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 13);
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 7:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 3;
		
		case 1:
			return 4;
		
		case 0:
			return 5;
		
		case 6:
			return 6;
		
		case 2:
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
		
		default:
	}
	return -1;
}

int func_222(int iParam0)
{
	if (func_223(iParam0))
	{
		return Global_1367921[iParam0];
	}
	return -1;
}

bool func_223(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 2);
}

int func_224(int iParam0)
{
	if (func_223(iParam0))
	{
		return Global_1367921[iParam0] != -1;
	}
	return 0;
}

int func_225()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1373453.f_6198[iVar0] != Global_1373453.f_6184[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_1373453.f_6240)
	{
		Global_1373453.f_6240 = 0;
		return 1;
	}
	return 0;
}

void func_226()
{
	Global_1373453.f_6240 = 1;
}

int func_227(int iParam0)
{
	if (func_229(iParam0, 0))
	{
		return 1;
	}
	if (func_228())
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

bool func_228()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_229(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_230(-1, 0) == 8;
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

int func_230(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_231();
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

int func_231()
{
	return Global_1312745;
}

int func_232()
{
	if (Global_1312367)
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (HUD::_IS_MULTIPLAYER_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_1665914.f_4)
	{
		return 0;
	}
	if (Global_1373453.f_1106 || Global_1373453.f_1107)
	{
		if (Global_1373453.f_1108 == 0)
		{
			if (func_236(PLAYER::PLAYER_PED_ID()))
			{
				func_235();
			}
		}
		return 1;
	}
	if (func_48())
	{
		if (Global_1373453.f_1108 == 0)
		{
			if (func_236(PLAYER::PLAYER_PED_ID()))
			{
				func_235();
			}
		}
		return 1;
	}
	if (Global_2460850)
	{
		return 0;
	}
	if (Global_1315680)
	{
		return 0;
	}
	if (func_234())
	{
		if (Global_1373453.f_1108 == 0)
		{
			if (func_236(PLAYER::PLAYER_PED_ID()))
			{
				func_235();
			}
		}
		return 1;
	}
	if (Global_17272.f_4 && func_214(PLAYER::PLAYER_ID()) == 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1373453.f_1108 == 0)
	{
		if (func_236(PLAYER::PLAYER_PED_ID()))
		{
			func_235();
		}
	}
	if (func_233(8, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON() == 0)
	{
		return 0;
	}
	if (func_219() == 0)
	{
		if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_222 != 99)
		{
			if (((NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() == 0 && Global_1574391 == 0) && !MISC::IS_BIT_SET(Global_2437364.f_1893.f_743, 11)) && Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 0)
			{
				return 0;
			}
		}
	}
	if (MISC::IS_BIT_SET(Global_2359302, 11))
	{
		return 0;
	}
	return 1;
}

bool func_233(int iParam0, int iParam1)
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

int func_234()
{
	if (Global_1647688)
	{
		return 1;
	}
	return 0;
}

void func_235()
{
	Global_1373453.f_1108 = 1;
}

int func_236(int iParam0)
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

void func_237()
{
	int iVar0;
	
	if (func_240(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0))
			{
				func_15(&(Global_1373453.f_1936.f_555[iVar0 /*2*/]));
			}
			else if (func_242(&(Global_1373453.f_1936.f_555[iVar0 /*2*/]), Global_1373453.f_1936.f_576[iVar0], 0) == 0)
			{
				Global_1373453.f_1 = 1;
				func_239(2, iVar0);
			}
			else
			{
				func_238(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_238(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Global_1373453.f_6226[iParam0]), iParam1);
}

void func_239(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_240(int iParam0)
{
	if (Global_1373453.f_6226[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_241(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

int func_242(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_63(uParam0, bParam2, 0);
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

