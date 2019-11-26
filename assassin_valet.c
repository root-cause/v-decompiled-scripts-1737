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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	struct<39> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 16;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_94 = 0;
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
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	float fLocal_230 = 0f;
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
	var uLocal_241 = 21;
	var uLocal_242 = 6;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 1132396544;
	var uLocal_249 = 1132396544;
	var uLocal_250 = 1132396544;
	var uLocal_251 = 0;
	var uLocal_252 = -1082130432;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 8;
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
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = -1;
	var uLocal_313 = 1092616192;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	bool bLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<7> Local_320 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	bool bLocal_329 = 0;
	bool bLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 1;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 2;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 13;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 13;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 13;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 13;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 13;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 13;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 13;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	struct<55> Local_919 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933[3] = { 0, 0, 0 };
	int iLocal_934[2] = { 0, 0 };
	int iLocal_935 = 0;
	int iLocal_936[2] = { 0, 0 };
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940[2] = { 0, 0 };
	int iLocal_941[3] = { 0, 0, 0 };
	int iLocal_942[2] = { 0, 0 };
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	struct<8> Local_946[3];
	struct<8> Local_947[2];
	struct<8> Local_948[2];
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	var uLocal_951[3] = { 0, 0, 0 };
	var uLocal_952[2] = { 0, 0 };
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	bool bLocal_960 = 0;
	int iLocal_961 = 0;
	bool bLocal_962 = 0;
	int iLocal_963 = 0;
	bool bLocal_964 = 0;
	bool bLocal_965 = 0;
	bool bLocal_966 = 0;
	bool bLocal_967 = 0;
	int iLocal_968 = 0;
	bool bLocal_969 = 0;
	bool bLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	bool bLocal_974 = 0;
	bool bLocal_975 = 0;
	bool bLocal_976 = 0;
	bool bLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = 0;
	int iLocal_983 = 0;
	bool bLocal_984 = 0;
	int iLocal_985 = 0;
	bool bLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	bool bLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	bool bLocal_992 = 0;
	int iLocal_993 = 0;
	bool bLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	bool bLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	bool bLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	bool bLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	bool bLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	var uLocal_1021[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1022 = 0;
	var uLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	float fLocal_1038 = 0f;
	float fLocal_1039 = 0f;
	float fLocal_1040 = 0f;
	float fLocal_1041[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1042[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1043 = 0f;
	float fLocal_1044 = 0f;
	float fLocal_1045[3] = { 0f, 0f, 0f };
	var uLocal_1046[3] = { 0, 0, 0 };
	float fLocal_1047 = 0f;
	float fLocal_1048 = 0f;
	float fLocal_1049 = 0f;
	int iLocal_1050 = 0;
	float fLocal_1051 = 0f;
	vector3 vLocal_1052[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1053[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1054[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1055 = { 0f, 0f, 0f };
	vector3 vLocal_1056 = { 0f, 0f, 0f };
	vector3 vLocal_1057 = { 0f, 0f, 0f };
	vector3 vLocal_1058 = { 0f, 0f, 0f };
	vector3 vLocal_1059 = { 0f, 0f, 0f };
	vector3 vLocal_1060 = { 0f, 0f, 0f };
	vector3 vLocal_1061 = { 0f, 0f, 0f };
	vector3 vLocal_1062 = { 0f, 0f, 0f };
	vector3 vLocal_1063 = { 0f, 0f, 0f };
	float fLocal_1064 = 0f;
	int iLocal_1065 = 0;
	int iLocal_1066 = 0;
	int iLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069[2] = { 0, 0 };
	int iLocal_1070 = 0;
	int iLocal_1071[3] = { 0, 0, 0 };
	int iLocal_1072 = 0;
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080 = 0;
	int iLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	int iLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	int iLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	int iLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	int iLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	int iLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	int iLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	int iLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	int iLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	bool bLocal_1111 = 0;
	var uLocal_1112 = 16;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = -1;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 1000;
	var uLocal_1287 = 1000;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 8;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 4;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 4;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 4;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 4;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 4;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 4;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 4;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 4;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	vector3 vLocal_1413 = { 0f, 0f, 0f };
	float fLocal_1414 = 0f;
	vector3 vLocal_1415 = { 0f, 0f, 0f };
	float fLocal_1416 = 0f;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	vector3 vLocal_1419 = { 0f, 0f, 0f };
	vector3 vLocal_1420 = { 0f, 0f, 0f };
	vector3 vLocal_1421 = { 0f, 0f, 0f };
	vector3 vLocal_1422 = { 0f, 0f, 0f };
	int iLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	int iLocal_1426 = 0;
	struct<12> Local_1427 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_52 = HUD::_GET_LEVEL_BLIP_SPRITE();
	iLocal_53 = HUD::_GET_WAYPOINT_BLIP_SPRITE();
	iLocal_228 = -1;
	fLocal_230 = 1f;
	iLocal_337 = 100;
	iLocal_338 = 3;
	iLocal_931 = 3;
	iLocal_1030 = 37000;
	iLocal_1036 = -1;
	fLocal_1038 = 90000f;
	fLocal_1047 = 135f;
	fLocal_1049 = 0f;
	fLocal_1051 = 0f;
	vLocal_1058 = { -1162.985f, -161.715f, -38.221f };
	vLocal_1059 = { -1327.63f, -266.202f, 38.221f };
	vLocal_1060 = { -1236.661f, -197.316f, 39.6313f };
	vLocal_1061 = { -1266.027f, -218.9829f, 41.44594f };
	vLocal_1063 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1064 = 40f;
	iLocal_1073 = joaat("a_m_y_beachvesp_02");
	iLocal_1074 = joaat("FBI2");
	iLocal_1075 = joaat("s_m_m_highsec_01");
	iLocal_1076 = joaat("s_m_m_highsec_02");
	iLocal_1077 = joaat("washington");
	vLocal_1413 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1414 = 304.201f;
	vLocal_1415 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1416 = 137.9228f;
	vLocal_1419 = { -1510.733f, -935.96f, 10.90214f };
	vLocal_1420 = { 15.07491f, -0.024198f, -71.86189f };
	vLocal_1421 = { -1510.878f, -936.1155f, 9.798549f };
	vLocal_1422 = { 4.686822f, -0.024198f, -72.45972f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		func_526(&(Global_106565.f_19957.f_1), 1024);
		func_524();
		func_519();
	}
	MISC::SET_MISSION_FLAG(1);
	iLocal_938 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (func_518())
	{
		if (func_517())
		{
			iLocal_978 = 1;
		}
		bLocal_967 = true;
	}
	else
	{
		bLocal_967 = false;
	}
	func_516();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
	func_515();
	iLocal_229 = 0;
	Local_55 = { func_513(iLocal_229) };
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1075, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1076, true);
	CAM::INVALIDATE_IDLE_CAM();
	if (func_518())
	{
		bLocal_330 = true;
		iLocal_1029 = func_512();
		if (Global_87889)
		{
			if (iLocal_1029 <= 1)
			{
				iLocal_1029++;
			}
		}
		func_511();
		if (iLocal_1029 == 0)
		{
			if (iLocal_978)
			{
				func_509();
				while (!func_508())
				{
					SYSTEM::WAIT(0);
				}
				iVar0 = func_457(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_BIG_VEHICLE(iVar0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			func_456(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1029 == 1)
		{
			if (iLocal_978)
			{
				func_509();
				while (!func_508())
				{
					SYSTEM::WAIT(0);
				}
				iVar1 = func_457(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_BIG_VEHICLE(iVar1))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1, 1084227584);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar1);
				}
			}
			func_456(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1029 == 2)
		{
			if (iLocal_978)
			{
				func_509();
				while (!func_508())
				{
					SYSTEM::WAIT(0);
				}
				iVar2 = func_457(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar2)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_BIG_VEHICLE(iVar2))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar2);
				}
			}
			func_456(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ASS1", 0);
		if (iLocal_968)
		{
			if (func_455())
			{
				func_454();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_938))
		{
			func_447();
			if (iLocal_931 < 10)
			{
				Local_320.f_6 = 1;
			}
			else
			{
				Local_320.f_6 = 5;
			}
			func_149();
			func_97();
			if (iLocal_983)
			{
				func_92();
			}
			if (!bLocal_966)
			{
				if (iLocal_931 >= 9 && iLocal_931 < 11)
				{
					func_88(&uLocal_1023, &fLocal_1038, &bLocal_965, &bLocal_966);
				}
			}
			func_55();
			func_53();
			if (((iLocal_959 || bLocal_964) && iLocal_931 < 11) || (bLocal_994 && iLocal_931 < 11))
			{
				if (!func_52(&iLocal_1102) && iLocal_931 > 8)
				{
					func_49(&iLocal_1102);
				}
				else if (iLocal_931 < 8 || func_46(&iLocal_1102) > 5f)
				{
					if (iLocal_937 == 1)
					{
						func_31(1);
					}
					else if (iLocal_937 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&iLocal_1102) > 2.5f)
				{
					if (!iLocal_995)
					{
						if (!bLocal_1014)
						{
							iLocal_943 = func_30(70f, 0);
						}
						else
						{
							iLocal_943 = func_30(70f, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_943))
							{
								TASK::CLEAR_PED_TASKS(iLocal_943);
								if (iLocal_937 == 1)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1067))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_943, 0))
										{
											TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_943, iLocal_1067, iLocal_1067, 2f, 0, 1056964608, 1082130432, 1, 0, -957453492);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_943) && !PED::IS_PED_INJURED(iLocal_943))
									{
										func_28(iLocal_943, 6, "OJAvaGUARD2");
										func_27(&uLocal_1112, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_937 == 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
									{
										TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_943, iLocal_1065, iLocal_1065, 2f, 0, 1056964608, 1082130432, 1, 0, -957453492);
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1112, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_943, PLAYER::PLAYER_PED_ID(), -1, 0);
									func_2(iLocal_943);
								}
							}
						}
						iLocal_995 = 1;
					}
				}
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_938, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_938, 0);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TOWTRUCK") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			bLocal_969 = true;
		}
	}
	else
	{
		bLocal_969 = false;
	}
	if (bLocal_969)
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1065))
		{
			VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iVar0, iLocal_1065);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1005)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_937 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_937 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1112, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1005 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!MISC::ARE_STRINGS_EQUAL(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_14732 = 0;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_4();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_19();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()
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

void func_9()
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

int func_10()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
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

void func_12()
{
	if (func_18(14))
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
		Global_14553 = func_13();
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

int func_13()
{
	func_14();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_18(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_15(Global_106565.f_2357.f_539.f_4321))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_19()
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

bool func_20(int iParam0, int iParam1)
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_22()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, bool bParam1)
{
	return func_24(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_24(int iParam0, int iParam1, bool bParam2)
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

int func_25(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_941[iVar0]))
		{
			if (func_26(iLocal_941[iVar0], vLocal_1057, 1) < fParam0)
			{
				return iLocal_941[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_942[iVar0]))
		{
			if (func_26(iLocal_942[iVar0], vLocal_1057, 1) < fParam0)
			{
				return iLocal_942[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, vector3 vParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1, bParam2);
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_29(&uLocal_1112, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_941[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_941[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_941[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_941[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_942[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_942[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_942[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_942[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_940[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_942[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_940[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_940[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)
{
	char* sVar0;
	
	if (iLocal_968 == 0)
	{
		iLocal_937 = iParam0;
		func_3();
		HUD::CLEAR_PRINTS();
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Global_93682.f_12[0] = 1;
		}
		else
		{
			Global_93682.f_12[0] = 0;
		}
		switch (iLocal_937)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_968 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	if (Global_106565.f_9079 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
		Global_93718 = iParam0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_34(&(Global_106565.f_2357.f_539), iVar1);
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

void func_34(var uParam0, int iParam1)
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
			if (!func_36(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_35(&(uParam0->f_2296[iVar0]));
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

void func_35(var uParam0)
{
	*uParam0 = -15;
}

int func_36(int iParam0, var uParam1, float fParam2)
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
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
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

void func_37(int iParam0, bool bParam1)
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

void func_38()
{
	Global_93717 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_13())
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
			switch (func_13())
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

int func_39()
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

bool func_40(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_41(char* sParam0)
{
	func_526(&(Global_106565.f_19957.f_1), 1024);
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)
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

void func_43(vector3 vParam0, float fParam1)
{
	if (func_44(Global_71830, 0f, 0f, 0f, 0))
	{
		Global_71830 = { vParam0 };
		Global_71833 = fParam1;
	}
}

bool func_44(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_45()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_46(int iParam0)
{
	if (func_52(iParam0))
	{
		if (func_48(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_47(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_47(bool bParam0)
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

bool func_48(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_49(int iParam0)
{
	if (!func_52(iParam0))
	{
		func_50(iParam0);
	}
}

void func_50(int iParam0)
{
	func_51(iParam0, 0f);
}

void func_51(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_47(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_52(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_53()
{
	if (func_54(&iLocal_937))
	{
		func_31(6);
	}
}

int func_54(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_931 > 11)
	{
		if (!PED::IS_PED_INJURED(iLocal_939))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_939, iLocal_1065, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_989)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
		{
			if (!PED::IS_PED_INJURED(iLocal_939))
			{
				if (func_24(iLocal_938, iLocal_939, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1065) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1065))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_939))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_950))
				{
					if (func_24(iLocal_938, iLocal_939, 1) >= (fVar0 * 0.5f))
					{
						if (!HUD::IS_BLIP_FLASHING(iLocal_950))
						{
							HUD::SET_BLIP_FLASHES(iLocal_950, true);
						}
					}
					else if (HUD::IS_BLIP_FLASHING(iLocal_950))
					{
						HUD::SET_BLIP_FLASHES(iLocal_950, false);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (!PED::IS_PED_INJURED(iLocal_939))
		{
			func_56(&uLocal_1277, iLocal_939, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_57(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_58(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_87(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_59(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_86(iVar0))
	{
		func_85();
	}
	if (func_84(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_79(uParam0, bParam5, bParam7, 0))
			{
				func_76(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_86(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_86(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_62(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_86(sParam3))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_87(uParam0, iVar0, 1);
				}
			}
			if (!func_79(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_87(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)
{
	if (func_84(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_61(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_63(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_64(char* sParam0)
{
	if (!func_65(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_86(sParam0)) || func_86("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_75(0))
	{
		return 0;
	}
	if (func_74())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_73() || func_72(Global_4456448.f_161209)) || func_71())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_70(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("APC") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_69(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_66(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_67(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == PLAYER::PLAYER_ID()) && func_67(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_67(int iParam0, bool bParam1, bool bParam2)
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

int func_68()
{
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
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

var func_71()
{
	return Global_2448756.f_16;
}

bool func_72(int iParam0)
{
	return iParam0 == 51;
}

var func_73()
{
	return Global_2448756.f_15;
}

bool func_74()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_75(int iParam0)
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

void func_76(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319096 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_87(uParam0, 0, 0);
	}
	if (func_44(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_77())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_77()
{
	return func_78(PLAYER::PLAYER_ID());
}

int func_78(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_83(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_61(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_83(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_82(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_82(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_82(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_83(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_81(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_80(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_80(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_81(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_65(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_85();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_80(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_82(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_83(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_85()
{
	MISC::SET_BIT(&Global_2424, 4);
}

int func_86(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_86(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_86(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_88(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_52(&iLocal_1099))
		{
			func_49(&iLocal_1099);
		}
		*bParam2 = 1;
	}
	if (func_52(&iLocal_1099))
	{
		fVar0 = func_46(&iLocal_1099);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1033 = SYSTEM::ROUND((*fParam1 - fVar0));
	iLocal_1033 *= 1000;
	if (iLocal_1033 < 63000)
	{
		iLocal_972 = 1;
	}
	if (iLocal_1033 < 65000)
	{
		iLocal_979 = 1;
	}
	if (iLocal_1033 < iLocal_1030)
	{
		iLocal_1002 = 1;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", false, -1))
	{
		bLocal_1111 = false;
	}
	else
	{
		bLocal_1111 = true;
	}
	if (iLocal_1033 < 30000)
	{
		iLocal_993 = 1;
		if (bLocal_1111)
		{
			if (func_52(&iLocal_1108))
			{
				if (func_46(&iLocal_1108) > 1f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", true);
					func_50(&iLocal_1108);
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", true);
				func_49(&iLocal_1108);
			}
		}
		func_89(iLocal_1033, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_89(iLocal_1033, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_89(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_91(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_90(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_90(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_91(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

void func_92()
{
	int iVar0;
	
	switch (iLocal_1027)
	{
		case 0:
			if (!func_22())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_941[0], 0))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_941[0]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_941[1], 0))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_941[1]);
				}
				iVar0 = func_96();
				if (bLocal_982)
				{
					if (!iLocal_998)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_998 = 1;
						}
					}
				}
				else if (!bLocal_989 && PED::IS_PED_INJURED(iLocal_939))
				{
					if (!iLocal_998)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_998 = 1;
						}
					}
				}
				if (!func_52(&iLocal_1087))
				{
					func_49(&iLocal_1087);
				}
				else
				{
					func_50(&iLocal_1087);
				}
				iLocal_1027 = 1;
			}
			break;
		
		case 1:
			iLocal_1027 = 2;
			break;
		
		case 2:
			if (iLocal_998 || !PED::IS_PED_INJURED(iLocal_939))
			{
				if (!func_22() && !bLocal_982)
				{
					if (!iLocal_996)
					{
						iVar0 = func_96();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_996 = 1;
						}
					}
					else if (!bLocal_1006 && PED::IS_PED_INJURED(iLocal_939))
					{
						iVar0 = func_96();
						func_95(iVar0);
					}
				}
			}
			else if (bLocal_982)
			{
				if (!iLocal_998)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_998 = 1;
					}
				}
			}
			else if (!bLocal_989)
			{
				if (!iLocal_998)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_998 = 1;
					}
				}
			}
			if (func_94(iLocal_938))
			{
				fLocal_1048 = 2.5f;
			}
			else
			{
				fLocal_1048 = 5f;
			}
			if (func_52(&iLocal_1087))
			{
				if ((func_46(&iLocal_1087) > fLocal_1048 && func_93()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					func_3();
					if (!iLocal_959)
					{
						iLocal_959 = 1;
						iLocal_1003 = 1;
					}
					iLocal_983 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_941[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_941[iVar0], 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_941[iVar0], 85, true);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_941[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_942[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_942[iVar0], 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_942[iVar0], 85, true);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_942[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_940[iVar0], 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_940[iVar0], 85, true);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_940[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_95(int iParam0)
{
	if (!bLocal_1006)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_939) && PED::IS_PED_INJURED(iLocal_939))
		{
			if (!func_22())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1006 = true;
				}
			}
		}
	}
}

int func_96()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_941[iVar1]) && !PED::IS_PED_INJURED(iLocal_941[iVar1]))
		{
			iVar0 = iLocal_941[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_942[iVar1]) && !PED::IS_PED_INJURED(iLocal_942[iVar1]))
			{
				iVar0 = iLocal_942[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar1]) && !PED::IS_PED_INJURED(iLocal_940[iVar1]))
			{
				iVar0 = iLocal_940[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_97()
{
	func_104();
	if (!iLocal_983)
	{
		if (!iLocal_959)
		{
			if (func_98(&iLocal_937))
			{
				iLocal_959 = 1;
			}
		}
	}
}

int func_98(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_959)
	{
		if (iLocal_993 && !bLocal_962)
		{
			if (func_103(&iLocal_937))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(iLocal_938, 4))
		{
			if (PED::IS_PED_SHOOTING(iLocal_938))
			{
				fVar1 = func_26(PLAYER::PLAYER_PED_ID(), -1230.599f, -196.5408f, 38.1528f, 1);
				WEAPON::GET_CURRENT_PED_WEAPON(iLocal_938, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("WEAPON_SNIPERRIFLE")) || iVar2 == joaat("WEAPON_HEAVYSNIPER")) || iVar2 == joaat("WEAPON_REMOTESNIPER")) || iVar2 == joaat("WEAPON_MARKSMANRIFLE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
					{
						iLocal_983 = 1;
						iLocal_981 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_102(iLocal_1065) || func_101(iLocal_1065)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1065) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1065, iLocal_938, 1)))
		{
			return 1;
		}
		if (func_102(iLocal_1066) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1066) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1066, iLocal_938, 1)))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065) && !ENTITY::IS_ENTITY_DEAD(iLocal_1065, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_938, iLocal_1065, 0))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_1065, 1);
				VEHICLE::START_VEHICLE_ALARM(iLocal_1065);
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_938, 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_938, 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_1065) || (bLocal_969 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1065)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_931 == 12)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				if (func_24(iLocal_938, iLocal_1065, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_933[0] == 2 || iLocal_933[1] == 2) || iLocal_933[2] == 2)
		{
			if (func_100())
			{
				return 1;
			}
		}
		if (iLocal_931 < 11)
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vLocal_1063, fLocal_1064))
			{
				return 1;
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vLocal_1063, fLocal_1064))
		{
			if (func_99())
			{
				iLocal_1013 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_99()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, false, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, false, 0))
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	int iVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == joaat("WEAPON_STICKYBOMB"))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 3 && PED::GET_VEHICLE_PED_IS_ENTERING(iLocal_938) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_24(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
	{
		if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_1065, joaat("WEAPON_STICKYBOMB"), -1))
		{
			if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("WEAPON_STICKYBOMB"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("WEAPON_STICKYBOMB"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_104()
{
	int iVar0;
	
	func_145();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_941[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_144(iLocal_941[iVar0], &(Local_946[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_942[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_144(iLocal_942[iVar0], &(Local_947[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_144(iLocal_940[iVar0], &(Local_948[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_940[iVar0]))
			{
				if (iLocal_936[iVar0] == 4)
				{
					PED::SET_PED_RESET_FLAG(iLocal_940[iVar0], 128, true);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1024 == 0)
	{
		func_142(0);
	}
	else if (iLocal_1024 == 1)
	{
		func_142(1);
	}
	else if (iLocal_1024 == 2)
	{
		if (iLocal_931 >= 9)
		{
			func_131(0);
		}
	}
	else if (iLocal_1024 == 3)
	{
		if (iLocal_931 >= 9)
		{
			func_131(1);
		}
	}
	else if (iLocal_1024 == 4)
	{
		if (iLocal_931 >= 9)
		{
			func_131(2);
			func_130(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1024 == 5)
	{
		func_105(0);
		func_130(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1024 == 6)
	{
		func_105(1);
		func_130(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1024++;
	if (iLocal_1024 > 6)
	{
		iLocal_1024 = 0;
	}
	if (iLocal_959)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_939, 120, true);
		}
	}
}

void func_105(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = iLocal_942[iParam0];
	switch (iLocal_934[iParam0])
	{
		case 0:
			if (iLocal_972)
			{
				iLocal_934[iParam0] = 1;
			}
			else if (bLocal_970)
			{
				iLocal_934[iParam0] = 3;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
			{
				if (func_129())
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1066))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1066, -1, 0) == iLocal_942[iParam0])
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_942[iParam0], iLocal_1066, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_934[iParam0] = 2;
				}
				else
				{
					func_128(iParam0);
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1066))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1066, true) };
					fVar2 = ENTITY::GET_ENTITY_HEADING(iLocal_1066);
					iLocal_972 = 0;
					iLocal_934[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_942[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_942[iParam0], iLocal_1066, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
					{
						if (!iLocal_959)
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1066, -1, 0) == iLocal_942[iParam0])
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_942[iParam0], -1273030092) != 1)
								{
									TASK::TASK_VEHICLE_ESCORT(iLocal_942[iParam0], iLocal_1066, iLocal_1065, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1066, -1, 0) == iLocal_942[iParam0])
						{
							if (!iLocal_973)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
									}
									else
									{
										iLocal_934[iParam0] = 8;
									}
								}
								else
								{
									TASK::TASK_VEHICLE_ESCORT(iLocal_942[iParam0], iLocal_1066, iLocal_1065, -1, 45f, 786981, 10f, -1, 10f);
									TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iVar0, PLAYER::PLAYER_PED_ID());
									iLocal_973 = 1;
								}
							}
						}
						else if (!bLocal_989)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_942[iParam0], 780511057) != 1)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_1066) < 5f)
									{
										iLocal_934[iParam0] = 8;
									}
								}
								TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_942[iParam0], 780511057) != 1)
						{
							TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (!iLocal_983)
					{
						iLocal_934[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&iLocal_1081))
			{
				func_50(&iLocal_1081);
			}
			func_125(&(iLocal_942[iParam0]));
			iLocal_934[iParam0] = 5;
			break;
		
		case 5:
			if (!func_94(iLocal_938))
			{
				if (func_46(&iLocal_1081) >= 27f || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_938, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_124(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_128(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_934[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_984)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_LOOK_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				if (!PED::IS_PED_INJURED(iLocal_942[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_942[iParam0], iLocal_1072);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 1, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				if (!PED::IS_PED_INJURED(iLocal_942[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_942[iParam0], iLocal_1072);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			}
			iLocal_934[iParam0] = 7;
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_942[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_942[iParam0], 1435919172) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_942[iParam0], iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 8:
			if (iLocal_937 != 4 && iLocal_937 != 5)
			{
				func_122(iVar0);
			}
			else
			{
				func_121(iVar0);
			}
			iLocal_934[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_937 != 4)
				{
					func_120(iLocal_1066, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_95(iVar0);
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_934[iParam0] != 6 && iLocal_934[iParam0] != 7)
			{
				iLocal_934[iParam0] = 6;
			}
		}
		else if (func_113(iVar0, iLocal_1066, &Local_320, &iLocal_325, 0, 0, 0, 1, 1) || func_112(iLocal_1066))
		{
			iVar3 = func_30(1116471296, 1);
			if (iVar3 != 0)
			{
				func_111(ENTITY::GET_ENTITY_COORDS(iVar3, true), 1097859072, 1116471296);
			}
			if (!func_110())
			{
				iLocal_959 = 1;
			}
		}
		else if (!bLocal_962)
		{
			if (func_109(iVar0, 10f))
			{
				if (iLocal_934[iParam0] != 4 && iLocal_934[iParam0] != 5)
				{
					if (!bLocal_960)
					{
						func_107(&Local_320, 4);
						iLocal_934[iParam0] = 4;
					}
					else if (!func_94(iLocal_938))
					{
						iLocal_959 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_939))
						{
							iLocal_937 = 5;
						}
						iLocal_934[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1066, 0))
		{
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0)) || iLocal_971) || !bLocal_962)
			{
				if (iLocal_934[iParam0] < 8)
				{
					iLocal_934[iParam0] = 8;
				}
			}
		}
		else if (iLocal_934[iParam0] < 8)
		{
			iLocal_934[iParam0] = 8;
		}
	}
	func_106(iVar0, uLocal_952[iParam0]);
}

void func_106(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(iParam1))
			{
				HUD::REMOVE_BLIP(&iParam1);
			}
		}
	}
}

void func_107(var uParam0, int iParam1)
{
	func_108(uParam0, iParam1);
}

void func_108(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_109(int iParam0, float fParam1)
{
	if (!iLocal_959)
	{
		if (!func_94(iLocal_938))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (PED::IS_PED_FACING_PED(iParam0, iLocal_938, 120f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_938, 17))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, true, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_938, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, iLocal_938, 120f))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_938, 17))
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

int func_110()
{
	if (iLocal_983 || bLocal_984)
	{
		return 1;
	}
	return 0;
}

void func_111(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1065, 0) || iLocal_1013)
	{
		bLocal_982 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_939, joaat("WEAPON_SNIPERRIFLE"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_939, joaat("WEAPON_HEAVYSNIPER"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_939, joaat("WEAPON_REMOTESNIPER"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_939, joaat("WEAPON_MARKSMANRIFLE"), 0))
		{
			iLocal_981 = 1;
			iLocal_932 = 1;
		}
	}
	if (iLocal_325 == 4 || iLocal_325 == 8)
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1065))
		{
			fParam1 = (fParam1 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_959)
	{
		if ((iLocal_981 || bLocal_982) || iVar0)
		{
			fVar1 = func_26(PLAYER::PLAYER_PED_ID(), vParam0, 1);
			if (fVar1 > fParam1)
			{
				iLocal_983 = 1;
				if (fVar1 > fParam2)
				{
					bLocal_984 = true;
				}
			}
		}
	}
}

int func_112(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
						if (fVar1 > 7f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iParam0, 1))
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

int func_113(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_119(*uParam2, 1))
		{
			if (func_118(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_119(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_119(*uParam2, 4))
		{
			if (func_117(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_119(*uParam2, 8))
		{
			if (func_116(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_119(*uParam2, 128);
		if (bParam4)
		{
			if (func_114(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_119(*uParam2, 16))
		{
			if (func_114(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_316)
		{
			iLocal_317 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_316 = true;
		}
		iLocal_318 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_319 = (iLocal_317 - iLocal_318);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_319) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_316)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_319) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_115(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_116(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_102(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

bool func_119(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_120(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 6, 35f, 786469, -1f, -1f, 1);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 35f, 786469, -1f, -1f, 1);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
		{
			TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
}

void func_121(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_938) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_938, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_122(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_938, 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_938, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_COMBAT_PED(0, iLocal_938, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1072);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
		}
		else if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 780511057) != 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::TASK_COMBAT_PED(iParam0, iLocal_938, 0, 16);
			}
		}
	}
}

Vector3 func_123()
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar1)
	{
		case 0:
			vVar0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			vVar0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			vVar0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return vVar0;
}

void func_124(int iParam0, vector3 vParam1)
{
	if (!iLocal_959)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_938, iParam0, vParam1, 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, iLocal_938, 160f))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_938, 17))
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
						iLocal_937 = 5;
						iLocal_959 = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

void func_125(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (iLocal_943 == 0)
	{
		iLocal_943 = func_30(70f, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
		{
			if (!iLocal_961)
			{
				if (*iParam0 == iLocal_943)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_ENTITY(0, iLocal_938, 20000, 2f, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_938, -1);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_961 = 1;
					vVar1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_938, -1);
				}
			}
			else if (*iParam0 != iLocal_943)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_938, -1);
				}
			}
		}
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, true);
		func_126();
	}
}

void func_126()
{
	int iVar0;
	
	if (!iLocal_963)
	{
		if (!bLocal_974)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_127())
				{
					func_6(&uLocal_1112, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_963 = 1;
				}
				else
				{
					func_27(&uLocal_1112, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_963 = 1;
				}
			}
		}
	}
}

int func_127()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1065, 0))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1065, true) };
		}
		fVar2 = SYSTEM::VDIST2(vVar0, vVar1);
		if (fVar2 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_128(int iParam0)
{
	int iVar0;
	
	bLocal_960 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_942[iParam0], 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_942[iParam0], iLocal_1066, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_942[iParam0], -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_942[iParam0], iLocal_1066, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_129()
{
	if (!PED::IS_PED_INJURED(iLocal_942[0]) && !PED::IS_PED_INJURED(iLocal_942[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_942[0], iLocal_1066, 0) && PED::IS_PED_IN_VEHICLE(iLocal_942[1], iLocal_1066, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_130(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (!iLocal_959)
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vParam0, vParam1, fParam2, joaat("WEAPON_STICKYBOMB"), 0))
		{
			iLocal_959 = 1;
		}
	}
}

void func_131(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = iLocal_941[iParam0];
	switch (iLocal_933[iParam0])
	{
		case 0:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, vLocal_1054[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				TASK::TASK_ACHIEVE_HEADING(0, fLocal_1041[iParam0], 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_1072);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
				iLocal_933[iParam0] = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (!bLocal_994)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503) != 1)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_1054[iParam0 /*3*/], 3f, 3f, 3f, false, true, 0))
							{
								func_139(iVar0, &(uLocal_1021[iParam0]), 1);
							}
							else
							{
								iLocal_933[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&iLocal_1081))
			{
				func_50(&iLocal_1081);
				func_125(&iVar0);
				iLocal_933[iParam0] = 2;
			}
			else if (func_46(&iLocal_1081) > fLocal_1042[iParam0] || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_125(&iVar0);
				iLocal_933[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_94(iLocal_938))
			{
				iLocal_987 = 1;
				if (bLocal_986)
				{
					iLocal_933[iParam0] = 4;
					break;
				}
				else if (func_46(&iLocal_1081) >= 27f && iLocal_963)
				{
					func_124(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&iLocal_1081) >= 15f)
				{
					func_137(iVar0);
				}
			}
			else
			{
				iLocal_987 = 0;
				bLocal_960 = true;
				if (!bLocal_980)
				{
					iLocal_933[iParam0] = 0;
				}
				else
				{
					iLocal_933[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				PED::SET_PED_RESET_FLAG(iVar0, 60, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_941[0], iLocal_941[1], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1065, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1065, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_941[1], iLocal_941[0], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1065, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1065, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1066, 0))
							{
								TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1066, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_933[iParam0] = 5;
			}
			else
			{
				iLocal_933[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 60, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_941[iParam0], iLocal_941[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_941[iParam0], iLocal_941[0], -1, 2048, 4);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				if (!func_135())
				{
					if (iLocal_959)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 780511057) != 1)
							{
								if (func_134(iLocal_941[0]))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_941[0]);
								}
								if (func_134(iLocal_941[1]))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_941[1]);
								}
								TASK::TASK_COMBAT_PED(iVar0, iLocal_938, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_933[iParam0] = 6;
				}
			}
			else
			{
				iLocal_933[iParam0] = 10;
			}
			if (bLocal_975)
			{
				if (iLocal_933[iParam0] != 10 && iLocal_933[iParam0] != 11)
				{
					iLocal_933[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_959)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, -1, 0) == iVar0)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1065, true, true, 0);
							if (func_133())
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1065, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1065, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_933[iParam0] = 7;
				}
			}
			else
			{
				if (func_134(iLocal_941[0]))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_941[0]);
				}
				if (func_134(iLocal_941[1]))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_941[1]);
				}
				iLocal_933[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_959)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, -1, 0) == iVar0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, 1, 0) == iLocal_939)
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (bLocal_974 || (iLocal_988 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1065)))
						{
							TASK::CLEAR_PED_TASKS(iVar0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
									{
										TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1065, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
								{
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, iLocal_1065, PLAYER::PLAYER_PED_ID(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iVar0, iLocal_938, 0, 16);
					}
				}
			}
			else if (bLocal_974 || (iLocal_988 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1065)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, -1, 0) == iVar0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, iLocal_1065, vLocal_1057, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_984)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_941[iParam0], 0))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_941[iParam0], iLocal_1072);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 1, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_941[iParam0], 0))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_941[iParam0], iLocal_1072);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			}
			iLocal_933[iParam0] = 9;
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_941[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_941[iParam0], 1435919172) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_941[iParam0], iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 10:
			if (iLocal_937 == 4 || iLocal_937 == 5)
			{
				func_121(iVar0);
			}
			else if (iLocal_937 != 8)
			{
				func_122(iVar0);
				iLocal_933[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_120(iLocal_1065, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_95(iVar0);
			break;
	}
	if (iLocal_931 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1044;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_933[iParam0] != 8 && iLocal_933[iParam0] != 9)
			{
				iLocal_933[iParam0] = 8;
			}
		}
		else if (func_132(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_111(ENTITY::GET_ENTITY_COORDS(iVar2, true), 1097859072, 1116471296);
			}
			if (!func_110())
			{
				iLocal_959 = 1;
			}
		}
		else if (!bLocal_962)
		{
			if (func_109(iVar0, fVar1))
			{
				if ((iLocal_933[iParam0] != 3 && iLocal_933[iParam0] != 2) && !bLocal_986)
				{
					if (!bLocal_960)
					{
						func_107(&Local_320, 4);
						iLocal_933[iParam0] = 3;
					}
					else if (!func_94(iLocal_938))
					{
						iLocal_959 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_939))
						{
							iLocal_937 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_933[iParam0] != 10 && iLocal_933[iParam0] != 11) && iLocal_933[iParam0] != 7)
	{
		iLocal_933[iParam0] = 10;
	}
	func_106(iVar0, uLocal_951[iParam0]);
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (!iLocal_959)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_113(iParam0, iVar0, &Local_320, &iLocal_325, 0, 0, 0, 1, 1) || (PED::IS_PED_RAGDOLL(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1[10];
	
	iLocal_1032 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar1);
	iLocal_1032 = iLocal_1032;
	iLocal_1032 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iVar1[iVar0], 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, true, 0))
			{
				iLocal_1031++;
			}
		}
		iVar0++;
	}
	if (iLocal_1031 >= 1)
	{
		iLocal_988 = 1;
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
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

int func_135()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_939))
		{
			if (!iLocal_959)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_939, iLocal_1065, 0) && func_136())
				{
					return 1;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_939, iLocal_1065, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_940[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_940[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_137(int iParam0)
{
	switch (iLocal_1028)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1112, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_963 = 1;
				iLocal_1028 = 1;
			}
			break;
		
		case 1:
			func_138(iParam0);
			break;
	}
}

void func_138(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_938, -1, 0);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_943)
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_938, -1, 0);
			}
		}
	}
}

void func_139(int iParam0, var uParam1, bool bParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam2)
		{
			func_140(iParam0, uParam1);
		}
	}
}

void func_140(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_141(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	}
	return iVar0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_940[iParam0]))
	{
		return;
	}
	switch (iLocal_936[iParam0])
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_939, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_940[iParam0]))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_940[iParam0], iLocal_939, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar2);
								TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_1066, 30000, 2, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar2);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_940[iParam0], iVar2);
								TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							}
						}
						iLocal_936[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1065;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1066;
				iVar1 = 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_940[iParam0], 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_940[iParam0], 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_940[iParam0], iVar0, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_939, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_940[iParam0], -1794415470) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_940[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_936[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1065;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1066;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_940[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_940[iParam0], iVar0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
					{
						if (iLocal_959)
						{
							if (!bLocal_989)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_940[iParam0], 780511057) != 1)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
										{
											iLocal_936[iParam0] = 5;
										}
									}
									TASK::TASK_COMBAT_PED(iLocal_940[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_940[iParam0], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(iLocal_940[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!iLocal_983)
					{
						iLocal_936[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_940[iParam0]))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_940[iParam0]))
				{
					PED::_0xF1C03A5352243A30(iLocal_940[iParam0]);
				}
			}
			if (bLocal_984)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_123(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_940[iParam0], iLocal_1072);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			}
			else if (!PED::IS_PED_INJURED(iLocal_940[iParam0]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_940[iParam0], vLocal_1062, 15f, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_940[iParam0], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iParam0], 0, true);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_940[iParam0], 2f);
				if (!iLocal_956 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_940[iParam0], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
					if (PED::IS_PED_INJURED(iLocal_939))
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), 3000, 0, 1);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_939, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
					iLocal_956 = 1;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
					{
						vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1065, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1065, "wheel_lr")) };
						vVar5 = { ENTITY::GET_ENTITY_COORDS(iLocal_1065, true) };
						vVar5 = { vVar4 - vVar5 };
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_940[iParam0], iLocal_1065, vVar5, 1.5f, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					if (PED::IS_PED_INJURED(iLocal_939) && !func_44(func_143(), vVar4, 0))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, vVar4, func_123(), 2f, false, 0.5f, 4f, true, 0, 0, -957453492);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar4, -1, false, 0.25f, false, 0, 0, 1);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, func_123(), 1500, 1, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_939, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_940[iParam0], 0))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_940[iParam0], iLocal_1072);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
			}
			iLocal_936[iParam0] = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_940[iParam0], 0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1065;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1066;
			}
			if (!PED::IS_PED_INJURED(iLocal_939))
			{
				if (!PED::IS_PED_INJURED(iLocal_940[iParam0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_939, 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_940[iParam0], iLocal_938, 0, 16);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_940[iParam0], iLocal_939, PLAYER::PLAYER_PED_ID(), 3f, 1, 0.005f, 1082130432, 1, 0, -957453492);
					}
				}
				iLocal_936[iParam0] = 6;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
				{
					func_122(iLocal_940[iParam0]);
					iLocal_936[iParam0] = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_940[iParam0], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(iLocal_940[iParam0], iLocal_938, 0, 16);
				}
			}
			else
			{
				func_122(iLocal_940[iParam0]);
				iLocal_936[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_940[iParam0]);
			func_95(iLocal_940[iParam0]);
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_936[iParam0] != 3 && iLocal_936[iParam0] != 4)
			{
				iLocal_936[iParam0] = 3;
			}
		}
		else if (func_132(iLocal_940[iParam0]))
		{
			iLocal_959 = 1;
		}
	}
	else if (iLocal_936[iParam0] < 5)
	{
		if (!PED::IS_PED_INJURED(iLocal_940[iParam0]))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_940[iParam0]))
			{
				PED::_0xF1C03A5352243A30(iLocal_940[iParam0]);
			}
			TASK::TASK_CLEAR_DEFENSIVE_AREA(iLocal_940[iParam0]);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_940[iParam0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iParam0], 13, true);
		}
		iLocal_936[iParam0] = 5;
	}
}

Vector3 func_143()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_144(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_145()
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		vLocal_1062 = { ENTITY::GET_ENTITY_COORDS(iLocal_939, false) };
	}
	switch (iLocal_935)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_941[0], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_939, iLocal_1065, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -1794415470) != 1)
						{
							if (!iLocal_959 && !iLocal_983)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_939, iLocal_1065, 30000, 1, 1f, 1, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_939, iLocal_1065, 30000, 1, 2f, 1, 0);
							}
							if (!func_52(&iLocal_1090))
							{
								func_49(&iLocal_1090);
							}
							else
							{
								func_50(&iLocal_1090);
							}
						}
						if (!iLocal_985)
						{
							if (func_52(&iLocal_1090))
							{
								if (func_46(&iLocal_1090) > 3.5f)
								{
									if (!PED::IS_PED_INJURED(iLocal_939))
									{
										func_29(&uLocal_1112, 4, iLocal_939, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_985 = 1;
										}
									}
								}
							}
						}
						if (func_148(iLocal_939))
						{
							func_3();
							iLocal_935 = 4;
						}
					}
					else
					{
						bLocal_962 = true;
						iLocal_935 = 1;
					}
				}
				else
				{
					iLocal_935 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_985)
			{
				if (!PED::IS_PED_INJURED(iLocal_939))
				{
					func_29(&uLocal_1112, 4, iLocal_939, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_985 = 1;
					}
				}
			}
			if (!iLocal_1004)
			{
				if (func_147())
				{
					if (func_24(iLocal_939, PLAYER::PLAYER_PED_ID(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_146())
							{
								iLocal_1004 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_939, iLocal_1065, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -828834893) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_939, 0, 256);
					}
				}
				else if (!bLocal_989)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_939, 2f);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_938, 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_939, iVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_989 = true;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, 1435919172) != 1)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_939, iLocal_938, 200f, -1, 0, 0);
				}
				if (!iLocal_1004)
				{
					if (!func_22() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1004 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
		}
		else if (func_132(iLocal_939) || iLocal_1013)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_111(ENTITY::GET_ENTITY_COORDS(iVar1, true), 1097859072, 1116471296);
			}
			if (!func_110())
			{
				iLocal_959 = 1;
			}
		}
	}
}

int func_146()
{
	switch (iLocal_1034)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&iLocal_1090);
				iLocal_1034++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&iLocal_1090) > 7f)
			{
				func_27(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&iLocal_1090);
				iLocal_1034++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&iLocal_1090) > 8f)
			{
				func_27(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1065, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	int iVar0;
	
	if ((iLocal_959 || iLocal_983) || bLocal_984)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (func_22())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (!bLocal_989)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_938, 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_939, iVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_989 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_149()
{
	if (!iLocal_990)
	{
		if (iLocal_931 > 15)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
			iLocal_990 = 1;
		}
	}
	if (!iLocal_991)
	{
		if (iLocal_959 && !func_22())
		{
			func_446();
			iLocal_991 = 1;
			if (!iLocal_990)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
				iLocal_990 = 1;
			}
		}
	}
	func_445();
	switch (iLocal_931)
	{
		case 3:
			if (func_518())
			{
				iLocal_931 = 4;
				break;
			}
			func_444();
			func_442();
			break;
		
		case 4:
			if (func_518())
			{
				if (func_517())
				{
					iLocal_978 = 1;
				}
				bLocal_967 = true;
			}
			func_441();
			func_440();
			func_439();
			func_438(1);
			func_437();
			func_526(&Local_320, 2);
			iLocal_931 = 5;
			break;
		
		case 5:
			if (func_436())
			{
				iLocal_931 = 6;
			}
			break;
		
		case 6:
			func_435();
			func_434();
			if (bLocal_967)
			{
				if (Global_106565.f_19957.f_5 != 0f)
				{
					func_51(&iLocal_1084, Global_106565.f_19957.f_5);
				}
				iLocal_1029 = func_512();
				if (Global_87889)
				{
					if (iLocal_1029 <= 2)
					{
						iLocal_1029++;
					}
				}
				if (iLocal_1029 == 0)
				{
					func_433();
				}
				else if (iLocal_1029 == 1)
				{
					func_432();
				}
				else if (iLocal_1029 == 2)
				{
					func_428();
				}
			}
			else
			{
				if (!func_52(&iLocal_1084))
				{
					func_49(&iLocal_1084);
					Global_106565.f_19957.f_5 = 0f;
				}
				iLocal_931 = 7;
			}
			break;
		
		case 7:
			func_422();
			func_407();
			break;
		
		case 8:
			func_373();
			break;
		
		case 9:
			func_422();
			func_372();
			func_281();
			break;
		
		case 10:
			func_372();
			func_277();
			break;
		
		case 11:
			func_263();
			func_262();
			break;
		
		case 12:
			func_261();
			func_262();
			break;
		
		case 13:
			func_257();
			func_262();
			break;
		
		case 15:
			func_255();
			break;
		
		case 16:
			func_252();
			break;
		
		case 17:
			func_246();
			break;
		
		case 18:
			func_150();
			break;
	}
}

void func_150()
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_151();
}

void func_151()
{
	func_245();
	switch (iLocal_1035)
	{
		case 0:
			if (!iLocal_331)
			{
				if (iLocal_932 == 1)
				{
					bLocal_329 = true;
					func_244();
				}
				Global_106565.f_19957.f_5 = func_46(&iLocal_1084);
				fLocal_326 = Global_106565.f_19957.f_5;
				func_237();
				iLocal_331 = 1;
				iLocal_1035 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1012)
			{
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
				iLocal_1012 = 1;
			}
			if (func_233(&uLocal_342, 1, 0) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				func_232(&uLocal_1289, 0, 0, 0, 1);
				func_231(&uLocal_1289, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_231(&uLocal_1289, "ES_XPAND", 2, 216, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_1035 = 2;
			}
			break;
		
		case 2:
			if (func_205(&uLocal_342, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1010 = true;
			}
			if (!bLocal_1010)
			{
				func_197(&uLocal_1289, 1128792064, 1, 0, 1, 1065353216);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
			{
				if (!bLocal_1010)
				{
					bLocal_1010 = true;
					func_196(&uLocal_342);
				}
			}
			if (bLocal_1010)
			{
				if (func_205(&uLocal_342, 0, 1065353216, 0, 0, 0))
				{
					func_194(&uLocal_342);
					Global_106565.f_19957++;
					func_193();
					func_156(Local_55);
					func_154(0, 0);
					func_152();
					func_519();
				}
			}
			break;
	}
}

void func_152()
{
	func_153();
}

int func_153()
{
	if (func_40(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

void func_154(bool bParam0, int iParam1)
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
		if ((func_40(0) && Global_71836.f_1 == 1) && func_155(Global_71836))
		{
		}
		else
		{
			Global_56494 = 1;
		}
	}
	if (Global_106565.f_9079 || func_40(0))
	{
		iVar0 = func_39();
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

int func_155(int iParam0)
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

void func_156(struct<25> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	float fVar0;
	
	fVar0 = (1f + func_192());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_119(Global_106565.f_19957.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_157(func_13(), 97, SYSTEM::ROUND(fVar0), 0, 0);
}

void func_157(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_158(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_191();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_190(99, 1);
					func_189(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_189(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_189(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_174(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_169(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_189(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_189(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_189(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_169(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_189(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_189(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_189(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_189(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_189(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_189(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
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
					switch (iParam0)
					{
						case 0:
							func_189(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_189(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_189(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_189(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_189(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_189(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_189(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_189(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_189(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_169(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_189(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_189(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_189(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_189(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_189(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_189(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_168(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_190(95, iParam3);
					break;
				
				case 1:
					func_190(97, iParam3);
					break;
				
				case 2:
					func_190(96, iParam3);
					break;
			}
			func_190(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_161(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_161(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_189(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_189(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_189(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_160(iParam0);
	if (Global_36425 == 15)
	{
		func_159(0);
	}
	return 1;
}

void func_159(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_161(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_167(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_167(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_167(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_167(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_164(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_164(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_164(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_164(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_164(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_164(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_163() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_163() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_162(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_162(int iParam0)
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

int func_163()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_165(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_166();
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

int func_166()
{
	return Global_1312745;
}

int func_167(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_166();
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

void func_168(int iParam0)
{
	func_190(93, iParam0);
	func_190(29, iParam0);
	func_190(30, iParam0);
}

bool func_169(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_171(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_171(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_171(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_171(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_170(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_170(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_170(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_170(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_170(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_170(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_163() /*10778*/].f_6165.f_10, iParam0);
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_165(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_166();
	}
	iVar1 = func_173(iParam0, iParam1);
	uVar2 = func_172(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_172(int iParam0)
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

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_166();
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

int func_174(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_188(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_175(27, 1);
	return 1;
}

int func_175(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_176(iParam0, iParam1);
}

int func_176(int iParam0, int iParam1)
{
	if (func_18(14) && !func_187(iParam0))
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
	if (func_186(&Global_4269608))
	{
		if (func_184(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_177(&Global_4269608, iParam0))
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

int func_177(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_187(iParam1))
	{
		return 0;
	}
	if (func_184(uParam0, iParam1))
	{
		return 0;
	}
	if (func_183(uParam0) < 0f)
	{
		func_182(uParam0, 0);
	}
	func_180(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_178(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_178(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_187(iParam1))
	{
		return 0;
	}
	if (func_184(uParam0, iParam1))
	{
		return 0;
	}
	if (func_183(uParam0) < 0f)
	{
		func_182(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_179(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_179(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_180(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_181(uParam0, iVar0);
		iVar0++;
	}
	func_182(uParam0, (Global_4269607 - 0.5f));
}

void func_181(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_182(var uParam0, float fParam1)
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

float func_183(var uParam0)
{
	return uParam0->f_80;
}

bool func_184(var uParam0, int iParam1)
{
	return func_185(uParam0, iParam1) != -1;
}

int func_185(var uParam0, int iParam1)
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

bool func_186(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_187(int iParam0)
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

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_191()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

float func_192()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_119(Global_106565.f_19957.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_119(Global_106565.f_19957.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_119(Global_106565.f_19957.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_119(Global_106565.f_19957.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_119(Global_106565.f_19957.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_119(Global_106565.f_19957.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_119(Global_106565.f_19957.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_119(Global_106565.f_19957.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_119(Global_106565.f_19957.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_193()
{
	func_526(&(Global_106565.f_19957.f_1), 2048);
}

void func_194(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_40(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_195(0);
}

void func_195(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

void func_196(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_197(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_204(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_203(uParam0->f_1, 256) || (func_203(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_203(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_202(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_201(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_203(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_200(bParam4, func_200(func_203(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_199(&(uParam0->f_1), 256);
		func_198(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_198(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_200(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_201(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_202(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_203(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_204(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_199(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_205(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_227(0);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_36975 = 1;
	if (!uParam0->f_563)
	{
		switch (func_16(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_226(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_226(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_226((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_226(30f) - func_226(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_195(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_208(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_207(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_207(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_207(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_206(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_206(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_207((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_207((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_207((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_207((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_195(0);
			}
			return !bVar0;
		}
	}
	func_195(0);
	return 1;
}

void func_206(var uParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_202(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_201("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_202(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_201("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_207(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_208(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_225() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_201(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_224(&(uParam0->f_13));
				}
				else
				{
					func_201(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_223();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_226((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_225());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_222(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_222(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_225()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_89((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_226(6f));
	fVar1 = (fVar1 + (func_226(30f) - func_226((2f * 2f))));
	fVar11 = (fVar2 - func_226((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_207((fVar11 / (0.6f * func_226(25f))), 0f, 1f);
		func_223();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_226((2f - 0.5f)) - 0.001388889f)), fVar6, func_221(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_226((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_226((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_225())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_207((fVar11 / (0.8f * func_226(25f))), 0f, 1f);
			func_218(uParam0, iVar17, (fVar1 + func_226(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_226(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_226((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_225())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_226(2f));
					fVar12 = func_207((fVar11 / (0.6f * func_226(25f))), 0f, 1f);
					func_223();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_226((2f * 0.5f))), fVar6, func_221(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_226((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_226((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_226((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_225())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_226(2f));
			fVar12 = func_207((fVar11 / (0.6f * func_226(25f))), 0f, 1f);
			func_223();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_226((2f * 0.5f))), fVar6, func_221(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_226((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_225())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_207((fVar11 / (0.8f * func_226(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_211(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_225()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_225()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_225()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_225()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_210(&(uParam0->f_550), fVar20, (fVar1 + func_226((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_223();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_226((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_226((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_226((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_226((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_209(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_226(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_226(30f) - 2f));
		}
	}
}

float func_209(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_210(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_223();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_211(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_217(iParam0), 64);
	StringCopy(&cVar1, func_214(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_213())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_213())
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
		vVar7.x = (vVar7.x * (func_212(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_212(iParam0) / fVar4));
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

float func_212(int iParam0)
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

int func_213()
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

var func_214(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_216(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_215(&uVar1);
			}
		}
		else
		{
			return func_215(&(Global_17411.f_6997[iParam0 /*16*/]));
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

var func_215(var uParam0)
{
	return uParam0;
}

struct<13> func_216(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_217(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_216(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_215(&uVar0);
		}
		else
		{
			return func_215(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_218(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_220(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_223();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_211(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_214(7, 0), (fParam4 - 0.006f), ((fParam2 + func_226(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_211(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_214(5, 0), (fParam4 - 0.006f), ((fParam2 + func_226(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_211(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_214(6, 0), (fParam4 - 0.006f), ((fParam2 + func_226(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_220(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_219(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_219(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_223();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_220(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_220(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_220(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_220(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_220(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_221(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_222(char* sParam0)
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_223()
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

void func_224(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

float func_225()
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_226(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_227(int iParam0)
{
	if (func_230())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_75(0))
		{
			func_228(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

void func_228(int iParam0)
{
	if (func_230())
	{
		return;
	}
	if (Global_14725)
	{
		func_229(0, 0);
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
	if (!func_10())
	{
		Global_14553.f_1 = 3;
	}
}

void func_229(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_75(0))
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

bool func_230()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

int func_231(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_232(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_199(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_199(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_199(&(uParam0->f_1), 8192);
	}
}

int func_233(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_236(uParam0);
	func_235(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_234(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_206(uParam0, 1);
		}
		else
		{
			func_206(uParam0, 0);
		}
	}
	Global_71851 = 1;
	return 1;
}

void func_234(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_202(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_201("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_202(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_201("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_202(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_201("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_235(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_220(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_236(var uParam0)
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

void func_237()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_331)
	{
		func_243(&uLocal_342, &Local_919, &Global_56509, 0);
		fLocal_326 = (fLocal_326 * 1000f);
		if (Global_87889)
		{
			func_242(&uLocal_342, 6, &(Local_919.f_12), "MTPHPERSKI", SYSTEM::FLOOR(fLocal_326), 0, 3, 0);
			func_242(&uLocal_342, 6, &(Local_919.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_242(&uLocal_342, 6, &(Local_919.f_30), "MTPHPERSKI", SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0, 3, 0);
			func_241();
		}
		else
		{
			if (bLocal_330)
			{
				func_242(&uLocal_342, 6, &(Local_919.f_12), "MTPHPERRET", SYSTEM::FLOOR(fLocal_326), 0, 3, 0);
			}
			else
			{
				func_242(&uLocal_342, 9, &(Local_919.f_12), "", SYSTEM::FLOOR(fLocal_326), 0, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_919.f_18)))
			{
				if (bLocal_329)
				{
					func_242(&uLocal_342, 6, &(Local_919.f_24), "", 0, 0, 2, 0);
					func_242(&uLocal_342, 3, &(Local_919.f_30), "", SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0, 2, 0);
				}
				else
				{
					func_242(&uLocal_342, 6, &(Local_919.f_24), "", 0, 0, 1, 0);
					func_242(&uLocal_342, 3, &(Local_919.f_30), "", SYSTEM::ROUND(fLocal_327), 0, 0, 0);
				}
			}
			else
			{
				func_242(&uLocal_342, 3, &(Local_919.f_30), "", SYSTEM::ROUND(fLocal_327), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_87889)
		{
			iVar1 = 0;
			while (iVar1 < Global_68589)
			{
				if (Global_68590[iVar1 /*9*/] >= 0 && !Global_56719[Global_68590[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_68590[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_337 = 50;
			iLocal_338 = 1;
			func_240(&uLocal_342, 1, &(Local_919.f_48), iLocal_337, 0, 0, 1, 0);
		}
		else if (bLocal_329)
		{
			if (bLocal_330)
			{
				iLocal_337 = 75;
				iLocal_338 = 2;
				func_240(&uLocal_342, 1, &(Local_919.f_42), iLocal_337, 0, 0, 2, 0);
			}
			else
			{
				iLocal_337 = 100;
				iLocal_338 = 3;
				func_240(&uLocal_342, 1, &(Local_919.f_36), iLocal_337, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_329 && !bLocal_330)
		{
			iLocal_337 = 75;
			iLocal_338 = 2;
			func_240(&uLocal_342, 1, &(Local_919.f_42), iLocal_337, 0, 0, 2, 0);
		}
		else
		{
			iLocal_337 = 50;
			iLocal_338 = 1;
			func_240(&uLocal_342, 1, &(Local_919.f_48), iLocal_337, 0, 0, 1, 0);
		}
		func_238();
		iLocal_331 = 1;
	}
}

void func_238()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 1)
	{
		func_239(38, SYSTEM::FLOOR(fLocal_326), 1);
		if (bLocal_329)
		{
			func_239(39, 1, 1);
		}
		else
		{
			func_239(39, 0, 1);
		}
		if (bLocal_329)
		{
			func_239(40, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_239(40, SYSTEM::ROUND(fLocal_327), 1);
		}
		func_239(41, iLocal_337, 1);
		func_239(42, iLocal_338, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_multi")) == 1)
	{
		func_239(52, SYSTEM::FLOOR(fLocal_326), 1);
		if (bLocal_329)
		{
			func_239(53, 1, 1);
		}
		else
		{
			func_239(53, 0, 1);
		}
		if (bLocal_329)
		{
			func_239(56, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_239(56, SYSTEM::ROUND(fLocal_327), 1);
		}
		func_239(54, iLocal_337, 1);
		func_239(55, iLocal_338, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_hooker")) == 1)
	{
		func_239(66, SYSTEM::FLOOR(fLocal_326), 1);
		if (bLocal_329)
		{
			func_239(67, 1, 1);
		}
		else
		{
			func_239(67, 0, 1);
		}
		if (bLocal_329)
		{
			func_239(68, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_239(68, SYSTEM::ROUND(fLocal_327), 1);
		}
		func_239(69, iLocal_337, 1);
		func_239(70, iLocal_338, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_bus")) == 1)
	{
		func_239(81, SYSTEM::FLOOR(fLocal_326), 1);
		if (bLocal_329)
		{
			func_239(82, 1, 1);
		}
		else
		{
			func_239(82, 0, 1);
		}
		if (bLocal_329)
		{
			func_239(83, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_239(83, SYSTEM::ROUND(fLocal_327), 1);
		}
		func_239(84, iLocal_337, 1);
		func_239(85, iLocal_338, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_construction")) == 1)
	{
		func_239(97, SYSTEM::FLOOR(fLocal_326), 1);
		if (bLocal_329)
		{
			func_239(98, 1, 1);
		}
		else
		{
			func_239(98, 0, 1);
		}
		if (bLocal_329)
		{
			func_239(99, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_239(99, SYSTEM::ROUND(fLocal_327), 1);
		}
		func_239(100, iLocal_337, 1);
		func_239(101, iLocal_338, 1);
	}
}

void func_239(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68589)
	{
		if (Global_68590[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_68590[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_68590[iVar0 /*9*/].f_1 = (Global_68590[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_68590[iVar0 /*9*/] != -1)
	{
		if (Global_56719[Global_68590[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_68590[iVar0 /*9*/].f_1 > 1)
			{
				Global_68590[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_68590[iVar0 /*9*/].f_1 < 0)
			{
				Global_68590[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_240(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_241()
{
	Global_87888 = 0;
	Global_87889 = 0;
}

void func_242(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_243(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_244()
{
	func_526(&(Global_106565.f_19957.f_1), 4194304);
}

void func_245()
{
	int iVar0;
	
	if (!bLocal_1000)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0))
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("ASS1_LOST"))
						{
							bLocal_1000 = true;
						}
					}
				}
			}
		}
	}
}

void func_246()
{
	float fVar0;
	
	if (!iLocal_997)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!func_22())
			{
				func_251("ASS_VA_GO", 7500, -1);
				iLocal_997 = 1;
			}
		}
	}
	func_250(&iLocal_1009, &uLocal_1112, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1018)
	{
		case 0:
			iLocal_1018++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = func_26(PLAYER::PLAYER_PED_ID(), vLocal_1060, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_992 = true;
					func_248();
					iLocal_1018++;
				}
				else
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			break;
		
		case 2:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_245();
					if (func_247())
					{
						iLocal_931 = 18;
					}
				}
			}
			else if (!iLocal_1008)
			{
				if (!func_22())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_251("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1018++;
						iLocal_1008 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_1018 = 2;
			}
			break;
	}
}

int func_247()
{
	if (bLocal_1000)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
		iLocal_1001 = 1;
	}
	func_248();
	return 1;
}

void func_248()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_940[iVar0]))
			{
				func_249(&(Local_948[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_940[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_940[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (!PED::IS_PED_INJURED(iLocal_939))
		{
			TASK::CLEAR_PED_TASKS(iLocal_939);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_939);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_941[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_941[iVar0]))
			{
				func_249(&(Local_946[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_941[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_941[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_942[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_942[iVar0]))
			{
				func_249(&(Local_947[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_942[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_942[iVar0]));
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1073);
}

void func_249(int iParam0)
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

int func_250(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_251(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_252()
{
	func_250(&iLocal_1009, &uLocal_1112, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1018)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!iLocal_1008)
				{
					if (!func_22())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_251("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1018++;
							iLocal_1008 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_997)
				{
					if (!func_22())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_251("ASS_VA_GO", 7500, -1);
							iLocal_1018++;
							iLocal_997 = 1;
						}
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1018++;
			}
			break;
		
		case 1:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_30(125f, 1) == 0)
			{
				func_245();
				func_248();
				func_254(1);
				func_253();
				iLocal_1018++;
			}
			break;
		
		case 2:
			func_245();
			iLocal_931 = 18;
			break;
	}
}

void func_253()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1065, 1);
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1065);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1066))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1066, 0))
		{
			if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1066) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1066)) && !CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1066);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_942[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_942[0], 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1066, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_942[0], iLocal_1066, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_942[0]);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_942[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_942[1], 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1066, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_942[1], iLocal_1066, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_942[1]);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1066, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1066);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1069[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1069[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1070) && !ENTITY::IS_ENTITY_DEAD(iLocal_1070, 0))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1070) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1070, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1070);
		}
	}
}

void func_254(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_950))
		{
			HUD::REMOVE_BLIP(&iLocal_950);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_951[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_951[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_952[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_952[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_952[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_952[iVar0]));
		}
		iVar0++;
	}
}

void func_255()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_1058, vLocal_1059, fLocal_1047, 1, false, 0))
	{
		bLocal_977 = true;
	}
	else
	{
		bLocal_977 = false;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_950))
	{
		HUD::REMOVE_BLIP(&iLocal_950);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	if (bLocal_977)
	{
		func_256();
		iLocal_931 = 17;
	}
	else
	{
		func_256();
		iLocal_931 = 16;
	}
	func_87(&uLocal_1277, 0, 0);
}

void func_256()
{
	iLocal_1018 = 0;
}

void func_257()
{
	if (!bLocal_974)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1065, 3);
				if (func_259(iLocal_1065, 5f))
				{
					bLocal_974 = true;
				}
			}
		}
	}
	if (!iLocal_971)
	{
		if (func_258(iLocal_1065, 10000))
		{
			iLocal_971 = 1;
		}
	}
}

int func_258(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, iParam1) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, float fParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_260(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_260(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_261()
{
	switch (iLocal_1018)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				if (func_135())
				{
					if (!PED::IS_PED_INJURED(iLocal_941[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_941[0], iLocal_1065, 0))
							{
								bLocal_970 = true;
								func_256();
								iLocal_931 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_262()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (PED::IS_PED_INJURED(iLocal_939))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
			{
				bLocal_975 = true;
				if (HUD::DOES_BLIP_EXIST(iLocal_950))
				{
					HUD::REMOVE_BLIP(&iLocal_950);
				}
				func_111(vLocal_1062, 1097859072, 1116471296);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
			func_256();
			iLocal_931 = 15;
		}
	}
}

void func_263()
{
	func_254(0);
	func_270();
	func_268();
	func_265();
	func_264();
	func_251("ASS_VA_KILL", 7500, -1);
	SYSTEM::SETTIMERA(0);
	bLocal_986 = true;
	func_256();
	iLocal_931 = 12;
}

void func_264()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1075);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1076);
}

void func_265()
{
	func_267(&(Local_1427.f_4));
	func_266(&(Local_1427[0]));
	func_266(&(Local_1427[1]));
	func_266(&(Local_1427.f_8[0]));
	func_266(&(Local_1427.f_8[1]));
	func_266(&(Local_1427.f_5[0]));
	func_266(&(Local_1427.f_5[1]));
	func_266(&(Local_1427.f_3));
}

void func_266(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_267(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_268()
{
	vector3 vVar0[2];
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939) && !ENTITY::IS_ENTITY_DEAD(iLocal_939, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_939, true) };
		fVar2 = ENTITY::GET_ENTITY_HEADING(iLocal_939);
	}
	vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, fVar2, 1f, -1f, 0f) };
	vVar0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, fVar2, -1f, -1f, 0f) };
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (iVar3 == 0)
		{
			iLocal_940[iVar3] = PED::CREATE_PED(26, iLocal_1075, vVar0[0 /*3*/], vVar0[0 /*3*/].f_1, 38.3253f, uLocal_1046[iLocal_1022], 1, true);
		}
		else
		{
			iLocal_940[iVar3] = PED::CREATE_PED(26, iLocal_1076, vVar0[1 /*3*/], vVar0[1 /*3*/].f_1, 38.3253f, uLocal_1046[iLocal_1022], 1, true);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_940[iVar3], true, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_940[iVar3]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iVar3], 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iVar3], 23, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iVar3], 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iVar3], 13, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_940[iVar3], 2);
		PED::SET_PED_KEEP_TASK(iLocal_940[iVar3], true);
		func_269(iLocal_940[iVar3], 1);
		PED::SET_PED_TO_LOAD_COVER(iLocal_940[iVar3], 1);
		iVar3++;
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_939)
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_PISTOL"), -1, false, true);
	}
	if (!bParam1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	}
	else
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, true);
	}
	PED::SET_PED_ACCURACY(iParam0, 60);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_AS_ENEMY(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1080);
}

void func_270()
{
	func_272();
	iLocal_1022 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_1020);
	iLocal_939 = PED::CREATE_PED(26, iLocal_1073, vLocal_1053[iLocal_1022 /*3*/], uLocal_1046[iLocal_1022], 1, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_939, true, 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_939);
	func_269(iLocal_939, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1073);
	if (!HUD::DOES_BLIP_EXIST(iLocal_950))
	{
		iLocal_950 = func_271(iLocal_939, 0, 0);
	}
	HUD::SET_BLIP_SCALE(iLocal_950, 1f);
}

int func_271(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_200(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_200(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_200(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_272()
{
	int iVar0;
	
	iLocal_1020 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_1052[iVar0 /*3*/], 5f) && !func_276(iVar0, 6f))
		{
			vLocal_1053[iLocal_1020 /*3*/] = { vLocal_1052[iVar0 /*3*/] };
			uLocal_1046[iLocal_1020] = fLocal_1045[iVar0];
			iLocal_1020++;
		}
		iVar0++;
	}
	if (iLocal_1020 == 0)
	{
		if (func_99())
		{
			vLocal_1053[0 /*3*/] = { vLocal_1052[1 /*3*/] };
			uLocal_1046[0] = fLocal_1045[1];
			iLocal_1020++;
		}
		else if (func_275())
		{
			vLocal_1053[0 /*3*/] = { vLocal_1052[0 /*3*/] };
			uLocal_1046[0] = fLocal_1045[0];
			iLocal_1020++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_274(vLocal_1052[iVar0 /*3*/], 1) > 30f && !func_276(iVar0, 6f))
				{
					vLocal_1053[iLocal_1020 /*3*/] = { vLocal_1052[iVar0 /*3*/] };
					uLocal_1046[iLocal_1020] = fLocal_1045[iVar0];
					iLocal_1020++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1020 == 0)
	{
		func_273();
	}
}

void func_273()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar2 = SYSTEM::VDIST(vVar1, vLocal_1052[iVar0 /*3*/]);
		if (fVar2 > fLocal_1051)
		{
			fLocal_1051 = fVar2;
			iLocal_1050 = iVar0;
		}
		iVar0++;
	}
	vLocal_1053[0 /*3*/] = { vLocal_1052[iLocal_1050 /*3*/] };
	uLocal_1046[0] = fLocal_1045[iLocal_1050];
}

float func_274(vector3 vParam0, bool bParam1)
{
	return func_26(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, bParam1);
}

int func_275()
{
	if (func_26(PLAYER::PLAYER_PED_ID(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0, float fParam1)
{
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vLocal_1052[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_277()
{
	switch (iLocal_1018)
	{
		case 0:
			if (!iLocal_987)
			{
				func_107(&Local_320, 4);
				func_280();
				SYSTEM::SETTIMERA(0);
				iLocal_1018++;
			}
			break;
		
		case 1:
			if (((bLocal_966 && !bLocal_964) && func_279()) && func_278())
			{
				func_256();
				iLocal_931 = 11;
			}
			break;
	}
}

int func_278()
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_1073);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1073))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_279()
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_941[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_941[1])) && !PED::IS_PED_INJURED(iLocal_941[0])) && !PED::IS_PED_INJURED(iLocal_941[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_941[0], iLocal_1065, 0) && PED::IS_PED_IN_VEHICLE(iLocal_941[1], iLocal_1065, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_280()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_933[iVar0] = 4;
		iVar0++;
	}
	bLocal_980 = true;
}

void func_281()
{
	switch (iLocal_1018)
	{
		case 0:
			func_303(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_107(&Local_320, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1065, false, true, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1070) && !ENTITY::IS_ENTITY_DEAD(iLocal_1070, 0))
					{
						func_289(iLocal_1070);
					}
				}
			}
			func_286();
			func_285();
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_START");
			MISC::SET_BIT(&Local_320, 4);
			func_251("ASS_VA_PLANT", 7500, 1);
			iLocal_1018++;
			break;
		
		case 1:
			if (iLocal_993)
			{
				if (((!func_284(&iLocal_1067) && !func_283(&(iLocal_1071[0]), &bLocal_1014)) && !func_283(&(iLocal_1071[1]), &bLocal_1014)) && !func_283(&(iLocal_1071[2]), &bLocal_1014))
				{
					SYSTEM::SETTIMERA(0);
					func_256();
					iLocal_931 = 10;
				}
				else
				{
					func_282();
				}
			}
			break;
	}
}

void func_282()
{
	iLocal_937 = 1;
	bLocal_964 = true;
}

int func_283(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1066))
	{
		return 0;
	}
	if (func_24(*uParam0, iLocal_1066, 1) <= 5f)
	{
		iLocal_1067 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_284(var uParam0)
{
	vector3 vVar0;
	
	*uParam0 = VEHICLE::GET_CLOSEST_VEHICLE(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1065) && *uParam0 != iLocal_1066) && *uParam0 != Local_1427.f_4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, 0) == 0)
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
				vVar0 = { vVar0 };
				return 1;
			}
		}
	}
	if (iLocal_1070 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1070) && !ENTITY::IS_ENTITY_DEAD(iLocal_1070, 0))
		{
			if (!func_94(iLocal_1070))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1070, true) };
				return 1;
			}
		}
	}
	return 0;
}

void func_285()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_941[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1076;
			}
			else
			{
				iVar0 = iLocal_1075;
			}
			iLocal_941[iVar1] = PED::CREATE_PED(26, iVar0, vLocal_1054[iVar1 /*3*/], fLocal_1041[iVar1], 1, true);
			if (iVar1 == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iVar1], 11, 1, 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_941[iVar1]))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_941[iVar1], false);
			PED::SET_PED_KEEP_TASK(iLocal_941[iVar1], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_941[iVar1], 23, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_941[iVar1], 30, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_941[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(iLocal_941[iVar1], 104, true);
			func_269(iLocal_941[iVar1], 1);
		}
		iVar1++;
	}
}

void func_286()
{
	func_288();
	func_287();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1077);
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_942[iVar0]))
		{
			if (iVar0 == 0)
			{
				iLocal_942[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1066, 26, iLocal_1075, -1, 1, true);
			}
			else if (iVar0 == 1)
			{
				iLocal_942[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1066, 26, iLocal_1076, 0, 1, true);
			}
			func_269(iLocal_942[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_942[iVar0], 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_942[iVar0], 23, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_942[iVar0], 30, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_942[iVar0], 2);
			PED::SET_PED_KEEP_TASK(iLocal_942[iVar0], true);
		}
		iVar0++;
	}
}

void func_288()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1066))
	{
		iLocal_1066 = VEHICLE::CREATE_VEHICLE(iLocal_1077, vLocal_1055, fLocal_1043, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1066, 0);
	}
}

void func_289(int iParam0)
{
	func_290(&(Global_100114.f_2890), &Global_100114, iParam0, 1);
}

int func_290(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_292(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_291(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_291(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_93682.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_292(var uParam0, int iParam1, int iParam2)
{
	func_298(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_295(iParam1, 145, 0);
	uParam0->f_11 = func_294(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_293(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_71314 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[iVar0]))
		{
			if (iParam0 == Global_70409.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_294(int iParam0)
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

int func_295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_91053[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_296(iParam1, iParam2))
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

int func_296(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_297(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_297(int iParam0, var uParam1, int iParam2)
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

void func_298(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_302(uParam1);
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
		if (uParam1->f_65 == -1 && !func_301(uParam1->f_66))
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
		func_300(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_299(iVar0 + 1));
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

int func_299(int iParam0)
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

int func_300(int iParam0, var uParam1, var uParam2)
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

int func_301(int iParam0)
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

void func_302(var uParam0)
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

void func_303(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_93719)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_93719)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_159(1);
		if (iParam0 <= Global_93719)
		{
		}
		iVar1 = func_370(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_106565.f_9079.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_368(iVar1);
			cVar3 = { Global_84500[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_106565.f_9079.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_93719, iParam0);
		}
		else
		{
			iVar4 = func_363(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_106565.f_18568[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_362(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_93719, iParam0);
			}
			else
			{
				iVar6 = func_361(&(Global_93682.f_3));
				if (iVar6 > -1)
				{
					Global_106565.f_24980.f_4[iVar6] = 0;
				}
			}
		}
		Global_87890 = iParam2;
		Global_93719 = iParam0;
		func_304(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_93719)
	{
	}
}

void func_304(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_305(&Global_100114, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_305(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_350();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_324(&(uParam0->f_2884), 0);
		func_323(PLAYER::PLAYER_PED_ID());
		func_316(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_106565.f_2357.f_539.f_294[iVar1];
		if (iVar1 == func_315())
		{
			func_311(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_93407[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_93407[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_93407[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_93407[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_93407[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_93407[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_93407[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_93407[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_93407[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_93407[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_106565.f_2357.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_106565.f_2357.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_106565.f_20558.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53668[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_106565.f_2357.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_106565.f_2357.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_106565.f_2357[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_307(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_306(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_306(var uParam0)
{
	*uParam0 = Global_89561;
	uParam0->f_1 = Global_89562;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_307(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_308(iParam2, &iVar0, iParam3, iParam5))
	{
		func_290(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("SKYLIFT")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_290(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_308(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("TAXI")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_309(*uParam1, func_13(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("BLIMP")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_310(iParam1, iVar0, &sVar1, &iVar2))
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

int func_310(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_311(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_314(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_313(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			uParam1->f_59 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_312(161, iParam3))
			{
				uParam1->f_59 = func_170(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_170(752, iParam3, 0);
			}
			uParam1->f_60 = func_170(753, iParam3, 0);
			uParam1->f_61 = func_170(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_312(161, iParam3))
			{
				uParam1->f_59 = func_170(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_170(752, iParam3, 0);
			}
		}
	}
}

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2571340[iParam0 /*3*/][func_165(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_313(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_314(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_315()
{
	func_14();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_316(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_317(iParam0, &(Global_106565.f_2357.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_106565.f_2357.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_106565.f_2357.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_106565.f_2357.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
		}
	}
}

void func_317(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_322(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_322(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_320(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_320(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_319(Var7.f_1)) && iVar9 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (!func_318(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_318(int iParam0)
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

int func_319(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("WEAPON_FLAREGUN"):
			case joaat("weapon_handcuffs"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("weapon_garbagebag"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
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
				iVar1 = func_321(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_318(Var5.f_3))
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

int func_321(int iParam0, var uParam1)
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

int func_322(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_106565.f_2357.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_324(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_71838, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_71838, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_71838, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_71838, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_327(&iVar0))
		{
			if (func_326(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_13();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_325(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_325(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam2, sParam1);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_326(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

int func_327(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_349())
		{
			*uParam0 = func_333(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_332(*uParam0) && !func_328(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_328(int iParam0)
{
	return func_329(iParam0, 0, 1);
}

int func_329(int iParam0, int iParam1, bool bParam2)
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
		if (func_331() == 0)
		{
			return MISC::IS_BIT_SET(func_170(func_330(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_330(int iParam0)
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

int func_331()
{
	return Global_25765;
}

int func_332(int iParam0)
{
	return func_329(iParam0, 5, 1);
}

int func_333(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 51)
	{
		if (iParam1 == 6 || iParam1 == func_348(iVar0))
		{
			if (!bParam3 || func_347(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_334(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_334(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_344(Global_95769);
			break;
		
		case 46:
			if (Global_1589661 != func_68())
			{
				if (func_343(Global_1589661))
				{
					return func_336(2, 2);
				}
				else if (func_335(Global_1589661))
				{
					return func_336(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 50:
			return Global_1689895;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_335(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_336(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589661 != func_68())
	{
		if (iParam1 == 3)
		{
			if (func_337(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1589819[Global_1589661 /*818*/].f_273.f_253, 4))
			{
				if (func_337(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1589819[Global_1589661 /*818*/].f_273.f_253, 5))
			{
				if (func_337(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_337(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_342(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_342(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_340(iParam0) };
	}
	else
	{
		Var2 = { func_339(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_338(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_338(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_338(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_339(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_340(int iParam0)
{
	return func_341(iParam0);
}

struct<6> func_341(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_342(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_343(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_253, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_344(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_345() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_345()
{
	return func_346(PLAYER::PLAYER_ID());
}

int func_346(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2424047[iParam0 /*416*/].f_309.f_3, 28, 31);
}

int func_347(int iParam0)
{
	return func_329(iParam0, 0, 0);
}

int func_348(int iParam0)
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

bool func_349()
{
	return Global_93734.f_339 > 0;
}

var func_350()
{
	var uVar0;
	
	func_360(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_359(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_358(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_353(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_352(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_351(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_351(var uParam0, int iParam1)
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

void func_352(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_353(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_357(*uParam0);
	iVar1 = func_355(*uParam0);
	if (iParam1 < 1 || iParam1 > func_354(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_354(int iParam0, int iParam1)
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

var func_355(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_356(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_356(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_357(var uParam0)
{
	return uParam0 & 15;
}

void func_358(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_359(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_361(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_362(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_363(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_364(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_364(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_365(uParam1, "Abigail1", func_367(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 1:
			func_365(uParam1, "Abigail2", func_367(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 2:
			func_365(uParam1, "Barry1", func_367(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 3:
			func_365(uParam1, "Barry2", func_367(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_366(iParam0), 1, 1);
			break;
		
		case 4:
			func_365(uParam1, "Barry3", func_367(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 5:
			func_365(uParam1, "Barry3A", func_367(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 6:
			func_365(uParam1, "Barry3C", func_367(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 7:
			func_365(uParam1, "Barry4", func_367(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_366(iParam0), 0, 0);
			break;
		
		case 8:
			func_365(uParam1, "Dreyfuss1", func_367(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 9:
			func_365(uParam1, "Epsilon1", func_367(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 10:
			func_365(uParam1, "Epsilon2", func_367(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 11:
			func_365(uParam1, "Epsilon3", func_367(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 12:
			func_365(uParam1, "Epsilon4", func_367(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 13:
			func_365(uParam1, "Epsilon5", func_367(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 14:
			func_365(uParam1, "Epsilon6", func_367(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 15:
			func_365(uParam1, "Epsilon7", func_367(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 16:
			func_365(uParam1, "Epsilon8", func_367(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 17:
			func_365(uParam1, "Extreme1", func_367(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 18:
			func_365(uParam1, "Extreme2", func_367(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 19:
			func_365(uParam1, "Extreme3", func_367(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 20:
			func_365(uParam1, "Extreme4", func_367(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 21:
			func_365(uParam1, "Fanatic1", func_367(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_366(iParam0), 1, 0);
			break;
		
		case 22:
			func_365(uParam1, "Fanatic2", func_367(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_366(iParam0), 1, 0);
			break;
		
		case 23:
			func_365(uParam1, "Fanatic3", func_367(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_366(iParam0), 0, 1);
			break;
		
		case 24:
			func_365(uParam1, "Hao1", func_367(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_366(iParam0), 0, 1);
			break;
		
		case 25:
			func_365(uParam1, "Hunting1", func_367(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 26:
			func_365(uParam1, "Hunting2", func_367(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 27:
			func_365(uParam1, "Josh1", func_367(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 28:
			func_365(uParam1, "Josh2", func_367(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_366(iParam0), 1, 1);
			break;
		
		case 29:
			func_365(uParam1, "Josh3", func_367(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_366(iParam0), 1, 1);
			break;
		
		case 30:
			func_365(uParam1, "Josh4", func_367(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 31:
			func_365(uParam1, "Maude1", func_367(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 32:
			func_365(uParam1, "Minute1", func_367(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 33:
			func_365(uParam1, "Minute2", func_367(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 34:
			func_365(uParam1, "Minute3", func_367(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 35:
			func_365(uParam1, "MrsPhilips1", func_367(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 36:
			func_365(uParam1, "MrsPhilips2", func_367(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 37:
			func_365(uParam1, "Nigel1", func_367(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 38:
			func_365(uParam1, "Nigel1A", func_367(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_366(iParam0), 1, 1);
			break;
		
		case 39:
			func_365(uParam1, "Nigel1B", func_367(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_366(iParam0), 1, 1);
			break;
		
		case 40:
			func_365(uParam1, "Nigel1C", func_367(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_366(iParam0), 1, 1);
			break;
		
		case 41:
			func_365(uParam1, "Nigel1D", func_367(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_366(iParam0), 1, 1);
			break;
		
		case 42:
			func_365(uParam1, "Nigel2", func_367(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_366(iParam0), 1, 1);
			break;
		
		case 43:
			func_365(uParam1, "Nigel3", func_367(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_366(iParam0), 1, 1);
			break;
		
		case 44:
			func_365(uParam1, "Omega1", func_367(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 45:
			func_365(uParam1, "Omega2", func_367(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 46:
			func_365(uParam1, "Paparazzo1", func_367(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 47:
			func_365(uParam1, "Paparazzo2", func_367(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 48:
			func_365(uParam1, "Paparazzo3", func_367(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 49:
			func_365(uParam1, "Paparazzo3A", func_367(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 50:
			func_365(uParam1, "Paparazzo3B", func_367(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 51:
			func_365(uParam1, "Paparazzo4", func_367(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 52:
			func_365(uParam1, "Rampage1", func_367(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 54:
			func_365(uParam1, "Rampage3", func_367(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 55:
			func_365(uParam1, "Rampage4", func_367(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 56:
			func_365(uParam1, "Rampage5", func_367(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_366(iParam0), 0, 0);
			break;
		
		case 53:
			func_365(uParam1, "Rampage2", func_367(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_366(iParam0), 1, 0);
			break;
		
		case 57:
			func_365(uParam1, "TheLastOne", func_367(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 58:
			func_365(uParam1, "Tonya1", func_367(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 59:
			func_365(uParam1, "Tonya2", func_367(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 60:
			func_365(uParam1, "Tonya3", func_367(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 61:
			func_365(uParam1, "Tonya4", func_367(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		case 62:
			func_365(uParam1, "Tonya5", func_367(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_366(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_365(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_367(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_362(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_369(Global_106565.f_9079.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_369(Global_106565.f_9079.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_369(Global_106565.f_9079.f_99.f_205[11]);
			break;
		
		case 90:
			return func_369(Global_106565.f_9079.f_99.f_205[7]);
			break;
		
		case 93:
			return func_369(Global_106565.f_9079.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_370(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_371(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_371(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84500[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_372()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, false, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0.5f)
				{
					if (!func_52(&iLocal_1093))
					{
						func_49(&iLocal_1093);
					}
				}
				else if (func_52(&iLocal_1093))
				{
					func_50(&iLocal_1093);
				}
				if (func_52(&iLocal_1093))
				{
					if (func_46(&iLocal_1093) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&iLocal_1093))
			{
				func_50(&iLocal_1093);
			}
		}
	}
}

void func_373()
{
	switch (iLocal_1018)
	{
		case 0:
			if (func_404(1084227584, 1) || (bLocal_976 && STREAMING::_0x7D41E9D2D17C5B2D(iLocal_955)))
			{
				func_403(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, vLocal_1413, fLocal_1414, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_402();
				func_401();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1065, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1065, 107, "ASSOJva", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1065, 2500f);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), "OFF");
					}
				}
				iLocal_1018++;
			}
			else if (STREAMING::_0x7D41E9D2D17C5B2D(iLocal_955))
			{
			}
			break;
		
		case 1:
			if (func_374())
			{
				iLocal_1019 = 0;
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				func_511();
				func_256();
				iLocal_931 = 9;
			}
			break;
	}
}

int func_374()
{
	int iVar0;
	
	switch (iLocal_1019)
	{
		case 0:
			func_400(0, 0, 1);
			func_399();
			CAM::SHAKE_CAM(iLocal_1078, "HAND_SHAKE", 0.2f);
			CAM::SHAKE_CAM(iLocal_1079, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1079, iLocal_1078, 6000, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			func_251("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_976)
			{
				func_398();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			else
			{
				func_389();
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1019++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1065, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
				{
					if (SYSTEM::TIMERA() > 6000)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1065))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1065);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1065, 102, "ASSOJva", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1065, 4500f);
						VEHICLE::_0x1F2E4E06DEA8992B(iLocal_1065, 1);
						func_251("ASS_VA_SNIPE2", 7500, 1);
						CAM::SET_CAM_PARAMS(iLocal_1078, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(iLocal_1078, 0.5f);
						CAM::SET_CAM_FAR_DOF(iLocal_1078, 7f);
						CAM::SHAKE_CAM(iLocal_1078, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_PARAMS(iLocal_1079, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(iLocal_1079, 0.7f);
						CAM::SET_CAM_FAR_DOF(iLocal_1079, 10f);
						CAM::SHAKE_CAM(iLocal_1079, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1079, iLocal_1078, 2000, 3, 3);
						iLocal_1019++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1065, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1065) >= 7000f)
					{
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1065);
						iLocal_1017 = 0;
						while (iLocal_1017 < 3)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_941[iLocal_1017], 0))
							{
								if (iLocal_1017 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1017 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_941[iLocal_1017], 242628503) != 1)
								{
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1072);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1052[iLocal_1017 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_1072);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_941[iLocal_1017], iLocal_1072);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_1072);
								}
							}
							iLocal_1017++;
						}
						SYSTEM::SETTIMERA(0);
						iLocal_1019++;
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() >= 2000)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::SET_CAM_PARAMS(iLocal_1078, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1078, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(iLocal_1079, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1079, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1079, iLocal_1078, 4000, 3, 3);
					iLocal_1037 = 4000;
				}
				else
				{
					CAM::SET_CAM_PARAMS(iLocal_1078, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1078, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(iLocal_1079, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1079, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1079, iLocal_1078, 4000, 3, 3);
					iLocal_1037 = 4000;
				}
				SYSTEM::SETTIMERA(0);
				iLocal_1019++;
			}
			break;
		
		case 4:
			if (!iLocal_1015)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					if (SYSTEM::TIMERA() >= (iLocal_1037 - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_1015 = 1;
					}
				}
			}
			if (SYSTEM::TIMERA() >= iLocal_1037)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1065))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1065);
					}
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
				VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 2, 1);
				HUD::CLEAR_HELP(1);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				else
				{
					CAM::_RENDER_FIRST_PERSON_CAM(1, 0f, 1, 0);
				}
				func_379(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_377(iLocal_336))
	{
		HUD::CLEAR_HELP(1);
		func_375(1);
		return 1;
	}
	return 0;
}

void func_375(bool bParam0)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1065))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1065);
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
		VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
		ENTITY::SET_ENTITY_COORDS(iLocal_1065, vLocal_1057, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_1065, fLocal_1040);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 2, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1065, 2, 1);
		iLocal_1019 = 0;
		HUD::CLEAR_PRINTS();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		func_379(1, 1, 1);
		if (bParam0)
		{
			func_376();
		}
	}
}

void func_376()
{
	CAM::DO_SCREEN_FADE_IN(1000);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
}

int func_377(int iParam0)
{
	if (func_378() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_228(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_378()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_379(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_381(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_380(23, 0);
}

void func_380(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_26010, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_26010, iParam0);
	}
}

void func_381(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_388(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_10())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_387(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_388(0);
		HUD::THEFEED_RESUME();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_387(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_385(PLAYER::PLAYER_ID())) && !func_383(PLAYER::PLAYER_ID(), 0)) && !func_382()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_385(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_382()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_383(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_384(-1, 0) == 8;
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

int func_384(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_166();
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

int func_385(int iParam0)
{
	if (func_383(iParam0, 0))
	{
		return 1;
	}
	if (func_386())
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

bool func_386()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_387(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_388(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 13);
	}
}

void func_389()
{
	func_390(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_397(), 1, 1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1266.173f, -214.0011f, 41.4459f, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 310.0126f);
	}
}

void func_390(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_391(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_391(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam10)
			{
				func_396(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_393(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("TAXI")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0 + vParam1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_309(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_392(vParam5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &vVar4, &vVar5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("ZENTORNO") || iVar7 == joaat("BTYPE")) || iVar7 == joaat("DUBSTA3")) || iVar7 == joaat("MONSTER"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("T20") || iVar7 == joaat("VIRGO"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(vParam3, 5f, 0, 0, 0, 0, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, vParam3, 1, false, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, 0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), 1, false, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_392(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_395(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_394(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_394(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_394(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_394(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_394(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_394(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_394(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_394(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_394(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_394(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_394(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_394(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_394(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_394(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_394(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_394(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_394(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_395(vector3 vParam0)
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

void func_396(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

Vector3 func_397()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_398()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_1061, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 299.4985f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1068))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1068, 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1068, false, true, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_1068, -1251.873f, -256.7999f, 38.2695f, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_1068, 296.7603f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1068, 1084227584);
		}
	}
}

int func_399()
{
	iLocal_336 = MISC::GET_GAME_TIMER();
	return iLocal_336;
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_228(0);
	func_381(1, 1, iParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_380(23, 1);
}

void func_401()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1065, 0))
		{
			iLocal_1017 = 0;
			while (iLocal_1017 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_941[iLocal_1017]))
				{
					if (iLocal_1017 == 0)
					{
						iLocal_941[iLocal_1017] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1065, 26, iLocal_1075, -1, 1, true);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 0, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 11, 0, 0, 0);
					}
					else if (iLocal_1017 == 1)
					{
						iLocal_941[iLocal_1017] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1065, 26, iLocal_1075, 0, 1, true);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 11, 0, 2, 0);
					}
					else if (iLocal_1017 == 2)
					{
						iLocal_941[iLocal_1017] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1065, 26, iLocal_1076, 1, 1, true);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_941[iLocal_1017], 11, 1, 1, 0);
					}
				}
				iLocal_1017++;
			}
		}
	}
}

void func_402()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
	{
		iLocal_1065 = VEHICLE::CREATE_VEHICLE(iLocal_1074, vLocal_1056, fLocal_1039, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1074);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_1065, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1065, true, 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_1065, 1);
	}
}

void func_403(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_391(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

int func_404(float fParam0, int iParam1)
{
	int iVar0;
	
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_405(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam0, 1, 1056964608, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_52(&iLocal_321))
		{
			func_50(&iLocal_321);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (func_46(&iLocal_321) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_405(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_406(iParam0);
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

void func_406(int iParam0)
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

void func_407()
{
	int iVar0;
	
	switch (iLocal_1018)
	{
		case 0:
			func_421(500);
			func_303(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_251("ASS_VA_LOSECOPS", 7500, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false, 0);
			iLocal_1018++;
			break;
		
		case 1:
			func_420();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1070))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_1070 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1070) && !ENTITY::IS_ENTITY_DEAD(iLocal_1070, 0))
							{
								func_289(iLocal_1070);
							}
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!func_417())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_949))
					{
						iLocal_949 = func_416(vLocal_1061, 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_949, "ASS_VA_DESTBLIP");
						func_415(&iLocal_949, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_958)
						{
							func_251("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_958 = 1;
						}
						else if (func_414("ASS_VA_LOSECOPS", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				else if (STREAMING::_0x7D41E9D2D17C5B2D(iLocal_955) && func_413())
				{
					func_412();
					func_256();
					iLocal_931 = 8;
				}
			}
			else if (!func_417())
			{
				func_411(iLocal_949, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_408();
			break;
	}
}

void func_408()
{
	if (!iLocal_957)
	{
		if (func_274(vLocal_1061, 1) <= 100f)
		{
			func_410();
			iLocal_955 = STREAMING::_0x1F3F018BC3AFA77C(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_957 = 1;
		}
	}
	else if (func_274(vLocal_1061, 1) > 120f)
	{
		if (STREAMING::_0x07C313F94746702C(iLocal_955))
		{
			STREAMING::_0x1EE7D8DF4425F053(iLocal_955);
			func_264();
			iLocal_957 = 0;
		}
	}
	else if (!STREAMING::_0x07C313F94746702C(iLocal_955))
	{
		if (!func_409())
		{
			iLocal_957 = 0;
		}
	}
}

int func_409()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("TAXI")))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0) != PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_410()
{
	STREAMING::REQUEST_MODEL(iLocal_1075);
	STREAMING::REQUEST_MODEL(iLocal_1076);
}

void func_411(int iParam0, char* sParam1)
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0))
		{
			HUD::REMOVE_BLIP(&iParam0);
			HUD::CLEAR_PRINTS();
			func_251(sParam1, 7500, 1);
		}
	}
}

void func_412()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_949))
	{
		HUD::REMOVE_BLIP(&iLocal_949);
	}
}

int func_413()
{
	int iVar0;
	
	func_410();
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1075) && STREAMING::HAS_MODEL_LOADED(iLocal_1076))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_414(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_415(int iParam0, vector3 vParam1, float fParam2)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		Global_105601 = *iParam0;
		Global_105606 = { vParam1 };
		Global_105610 = fParam2;
	}
}

int func_416(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_200(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

int func_417()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_938, vLocal_1061, 1);
	if (fVar0 < 200f)
	{
		func_419();
	}
	if (func_418())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_938, vLocal_1061, 25f, 25f, 90f, true, true, 0))
		{
			iVar1 = 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((fVar0 < 2f || ENTITY::IS_ENTITY_AT_COORD(iLocal_938, vLocal_1061, 2f, 2f, 2f, true, true, 0)) || iVar1)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, true, 0))
			{
				if (func_418() && iVar1)
				{
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_418()
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1068 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1068);
		if (iVar0 != joaat("BLIMP") && iVar0 != joaat("BLIMP2"))
		{
			bLocal_976 = true;
			return 1;
		}
	}
	return 0;
}

void func_419()
{
	int iVar0;
	
	switch (iLocal_1025)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_hipster_01"));
			STREAMING::REQUEST_MODEL(joaat("TAXI"));
			TASK::REQUEST_WAYPOINT_RECORDING("OJAS_HotelTaxi01");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
			if ((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("TAXI"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_hipster_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAS_HotelTaxi01"))
			{
				iLocal_1025++;
			}
			break;
		
		case 1:
			Local_1427[0] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, true);
			Local_1427[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427[1], true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1427[1], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1427[0], 0))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1427[0], iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1427[0], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1427[1], 0))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1427[1], iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			Local_1427.f_4 = VEHICLE::CREATE_VEHICLE(joaat("TAXI"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1427.f_4, 1084227584);
			Local_1427.f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1427.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427.f_3, true);
			TASK::TASK_LOOK_AT_ENTITY(Local_1427.f_3, Local_1427[0], -1, 0, 2);
			Local_1427.f_8[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, true);
			Local_1427.f_8[1] = PED::CREATE_PED(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427.f_8[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427.f_8[1], true);
			TASK::TASK_PLAY_ANIM(Local_1427.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_1427.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1427.f_5[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, true);
			Local_1427.f_5[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427.f_5[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1427.f_5[1], true);
			TASK::TASK_PLAY_ANIM(Local_1427.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_1427.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1427.f_11 = 1;
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_bevhills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_bevhills_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_hipster_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("TAXI"));
			iLocal_1025++;
			break;
		
		case 2:
			break;
	}
}

void func_420()
{
	vector3 vVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_1011 = 1;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (iLocal_1011)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			fLocal_1049 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_1061);
			iLocal_1011 = 0;
		}
	}
	else if (fLocal_1049 == 0f)
	{
		fLocal_1049 = SYSTEM::VDIST(-1510.291f, -946.9932f, 8.278f, vLocal_1061);
	}
	if (SYSTEM::VDIST(vVar0, vLocal_1061) > (fLocal_1049 + 400f))
	{
		func_31(7);
	}
	else if (SYSTEM::VDIST(vVar0, vLocal_1061) > (fLocal_1049 + 200f))
	{
		if (!iLocal_1007)
		{
			func_251("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1007 = 1;
		}
	}
}

void func_421(int iParam0)
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_422()
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_944))
	{
		func_427();
		if (!PED::IS_PED_INJURED(iLocal_944))
		{
			fVar1 = func_23(iLocal_944, 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_944, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_944, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_944, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_944, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_944, 208, true);
			if (fVar1 < 5f)
			{
				if (func_52(&iLocal_1105))
				{
					if (!func_22())
					{
						if (func_424(&iLocal_1105, 10f))
						{
							func_29(&uLocal_1112, 3, iLocal_944, "LESTER", 0, 1);
							func_6(&uLocal_1112, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_944) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_944))
				{
					func_423();
				}
			}
			switch (iLocal_1016)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (ENTITY::DOES_ENTITY_EXIST(iLocal_944) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_944, PLAYER::PLAYER_PED_ID(), 1))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1426, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1426, PLAYER::PLAYER_PED_ID(), 1))
							{
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_944, "move_lester_CaneUp", 1048576000);
							TASK::TASK_PLAY_ANIM(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1016 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_944), 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_944, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::FORCE_PED_MOTION_STATE(iLocal_944, -668482597, false, 0, 0);
							iLocal_1016 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_423()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_944))
	{
		PED::DELETE_PED(&iLocal_944);
	}
}

int func_424(int iParam0, float fParam1)
{
	if (func_426(iParam0, fParam1))
	{
		func_425(iParam0);
		return 1;
	}
	return 0;
}

void func_425(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_426(int iParam0, float fParam1)
{
	if (func_52(iParam0))
	{
		if (func_46(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_427()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_944))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_944, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_31(9);
		}
	}
}

void func_428()
{
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_STOP");
	if (!MISC::IS_BIT_SET(Global_93682.f_20, 13))
	{
		func_511();
	}
	func_429(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	iLocal_931 = 18;
	func_421(500);
}

void func_429(int iParam0, int iParam1, int iParam2)
{
	if (func_518() && func_431())
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
		func_430(0);
	}
}

void func_430(int iParam0)
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

bool func_431()
{
	return MISC::IS_BIT_SET(Global_93682.f_20, 13);
}

void func_432()
{
	while (iLocal_1025 < 2)
	{
		func_419();
		SYSTEM::WAIT(0);
	}
	func_402();
	func_375(0);
	if (!MISC::IS_BIT_SET(Global_93682.f_20, 13))
	{
		func_511();
	}
	iLocal_985 = 0;
	iLocal_1009 = 0;
	MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_RESTART1");
	while (!func_413())
	{
		SYSTEM::WAIT(0);
	}
	func_429(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	iLocal_931 = 9;
	func_421(500);
}

void func_433()
{
	func_429(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	func_421(500);
	iLocal_931 = 7;
}

void func_434()
{
	iLocal_1069[0] = VEHICLE::CREATE_VEHICLE(iLocal_1077, -1270.045f, -251.4953f, 41.4459f, 214.63f, true, true, false);
	iLocal_1069[1] = VEHICLE::CREATE_VEHICLE(iLocal_1077, -1265.199f, -218.4823f, 45.9981f, 127.85f, true, true, false);
}

void func_435()
{
	iLocal_1078 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	iLocal_1079 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_436()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_1074) && STREAMING::HAS_MODEL_LOADED(iLocal_1077)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "ASSOJva")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(107, "ASSOJva")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101a")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_104")) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@ASSASSINATE@GUARD")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_437()
{
	STREAMING::REQUEST_MODEL(iLocal_1074);
	STREAMING::REQUEST_MODEL(iLocal_1077);
	STREAMING::REQUEST_ANIM_DICT("ODDJOBS@ASSASSINATE@GUARD");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
	HUD::REQUEST_ADDITIONAL_TEXT("ASS_VA", 3);
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REQUEST_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_104");
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), false, 1);
		PATHFIND::SET_ROADS_IN_AREA(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, false, 1);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, true, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, true);
	}
}

void func_439()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { -1220.344f, -193.4014f, 38.1754f };
	vVar1 = { -1279.658f, -222.0533f, 41.446f };
	func_29(&uLocal_1112, 1, iLocal_938, "FRANKLIN", 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	PED::ADD_RELATIONSHIP_GROUP("Guards", &iLocal_1080);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1080);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1080, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1080, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1080);
	MISC::CLEAR_AREA(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, false);
	PED::SET_PED_NON_CREATION_AREA(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	iLocal_953 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar0 - Vector(15f, 15f, 15f), vVar0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	iLocal_954 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1 - Vector(45f, 35f, 35f), vVar1 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_440()
{
	StringCopy(&Local_919, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_919.f_6), {Global_56509}, 6);
	StringCopy(&(Local_919.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_919.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_919.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_919.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_919.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_54), "ASS_VA_COMP", 24);
}

void func_441()
{
	vLocal_1055 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1043 = 260.3612f;
	vLocal_1056 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1039 = 96.8755f;
	vLocal_1057 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1040 = 201.0763f;
	fLocal_1044 = 40f;
	Local_320.f_2 = 40f;
	vLocal_1052[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	vLocal_1052[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	vLocal_1052[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1045[0] = 157.3177f;
	fLocal_1045[1] = 58.3594f;
	fLocal_1045[2] = 65.6443f;
	vLocal_1054[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	vLocal_1054[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	vLocal_1054[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	vLocal_1054[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	vLocal_1054[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1041[0] = 160.0748f;
	fLocal_1041[1] = 58.3365f;
	fLocal_1041[2] = 58.0214f;
	fLocal_1041[3] = 97.6664f;
	fLocal_1041[4] = 225.8689f;
	iLocal_1017 = 0;
	while (iLocal_1017 <= 4)
	{
		fLocal_1042[iLocal_1017] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f);
		iLocal_1017++;
	}
	fLocal_327 = 7000f;
	fLocal_328 = 2000f;
	iLocal_937 = 0;
	iLocal_1005 = 0;
	bLocal_1006 = false;
	iLocal_991 = 0;
	bLocal_1014 = false;
	iLocal_1013 = 0;
}

void func_442()
{
	switch (iLocal_1018)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE("ASS_INT_2_ALT1", 8);
			STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leadin");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
			STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leadin")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@")) && STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
			{
				iLocal_1018++;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_400(56, 0, 1);
				func_403(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				MISC::CLEAR_AREA(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_1415, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1416);
				PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!CAM::DOES_CAM_EXIST(iLocal_1417))
				{
					iLocal_1417 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vLocal_1419, vLocal_1420, 42.2032f, 1, 2);
					CAM::SHAKE_CAM(iLocal_1417, "HAND_SHAKE", 0.3f);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_1418))
				{
					iLocal_1418 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vLocal_1421, vLocal_1422, 42.2032f, 0, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1418, iLocal_1417, 5000, 1, 1);
					CAM::SHAKE_CAM(iLocal_1417, "HAND_SHAKE", 0.3f);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				if (func_40(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1018++;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&iLocal_1423))
					{
						func_49(&iLocal_1423);
					}
				}
				if (func_52(&iLocal_1423))
				{
					if (func_46(&iLocal_1423) > 6f)
					{
						iLocal_1018++;
					}
				}
			}
			break;
		
		case 3:
			if (func_443())
			{
				iLocal_1018++;
			}
			break;
		
		case 4:
			func_381(1, 1, 1, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_944, "Lester", 2, joaat("ig_lestercrest"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			CUTSCENE::START_CUTSCENE(0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_1018++;
			break;
		
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				iLocal_1018++;
			}
			break;
		
		case 6:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_944))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
					{
						iLocal_944 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_945))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0)))
					{
						iLocal_945 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_944) && !PED::IS_PED_INJURED(iLocal_944))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_944, -1509.458f, -948.195f, 7.75f, 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_944, -11f);
						TASK::TASK_PLAY_ANIM(iLocal_944, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						PED::_0x2208438012482A1A(iLocal_944, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_944) && !PED::IS_PED_INJURED(iLocal_944))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_945, iLocal_944, PED::GET_PED_BONE_INDEX(iLocal_944, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_381(0, 1, 1, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_944))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_944, false, false, false, false, false, false, 0, false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_944, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_379(1, 1, 1);
				iLocal_1018++;
			}
			break;
		
		case 7:
			func_50(&iLocal_1105);
			func_256();
			iLocal_931 = 4;
			break;
	}
}

bool func_443()
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_71589)
	{
		if (!bVar0)
		{
			Global_71589 = 1;
		}
	}
	return bVar0;
}

void func_444()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1426))
	{
		iLocal_1426 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_445()
{
	int iVar0;
	
	if (iLocal_931 > 7)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if ((iVar0 != iLocal_1071[0] && iVar0 != iLocal_1071[1]) && iVar0 != iLocal_1071[2])
						{
							if (iLocal_1036 >= 2)
							{
								iLocal_1036 = -1;
							}
							iLocal_1071[iLocal_1036 + 1] = iVar0;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1071[iLocal_1036 + 1], true, 0);
							VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1071[iLocal_1036 + 1], 0);
							iLocal_1036++;
						}
					}
				}
			}
		}
	}
}

void func_446()
{
	int iVar0;
	
	if (iLocal_1003)
	{
		iVar0 = func_30(1116471296, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1112, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_447()
{
	int iVar0;
	vector3 vVar1;
	
	if (Local_1427.f_11)
	{
		if (!bLocal_994)
		{
			if (iLocal_931 < 10)
			{
				if (func_453())
				{
					iVar0 = func_30(1116471296, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
							vVar1 = { vVar1 };
							func_29(&uLocal_1112, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1112, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_452();
					bLocal_994 = true;
				}
				if (iLocal_959)
				{
					func_452();
					bLocal_994 = true;
				}
				else
				{
					func_451();
					func_448();
				}
			}
		}
	}
}

void func_448()
{
	if (bLocal_965)
	{
		if (IntToFloat(iLocal_1033) < (IntToFloat(iLocal_1030) - 5f))
		{
			func_450(Local_1427.f_8[0], 1);
			func_450(Local_1427.f_8[1], 1);
			func_450(Local_1427.f_5[0], 1);
			func_450(Local_1427.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1427.f_8[0], 0) < 1f || func_23(Local_1427.f_8[1], 0) < 1f) || iLocal_963)
			{
				func_449(Local_1427.f_8[0], 1);
				func_449(Local_1427.f_8[1], 1);
			}
			if (!iLocal_963)
			{
				func_449(Local_1427.f_5[0], 0);
				func_449(Local_1427.f_5[1], 0);
			}
			else
			{
				func_449(Local_1427.f_5[0], 1);
				func_449(Local_1427.f_5[1], 1);
			}
		}
	}
}

void func_449(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_450(iParam0, 1);
			}
		}
	}
}

void func_450(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((bParam1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1) || !bParam1)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
}

void func_451()
{
	int iVar0;
	
	switch (iLocal_1026)
	{
		case 0:
			if (((iLocal_979 || iLocal_963) || func_23(Local_1427[0], 0) < 1f) || func_23(Local_1427[1], 0) < 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1427[0], 0) && !ENTITY::IS_ENTITY_DEAD(Local_1427[1], 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_1427[0], Local_1427[1], -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_1427[1], Local_1427[0], -1, 0, 2);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Local_1427[1]) && ENTITY::DOES_ENTITY_EXIST(Local_1427.f_4)) && !PED::IS_PED_INJURED(Local_1427[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1427.f_4, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_1427[1]);
					TASK::TASK_ENTER_VEHICLE(Local_1427[1], Local_1427.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&iLocal_1096))
				{
					func_49(&iLocal_1096);
				}
				iLocal_1026++;
			}
			break;
		
		case 1:
			if (!iLocal_999)
			{
				if (func_52(&iLocal_1096))
				{
					if (func_46(&iLocal_1096) > 3f)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1427[0]) && ENTITY::DOES_ENTITY_EXIST(Local_1427.f_4)) && !PED::IS_PED_INJURED(Local_1427[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1427.f_4, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1427[0], -1794415470) != 1)
							{
								TASK::CLEAR_PED_TASKS(Local_1427[0]);
								TASK::TASK_ENTER_VEHICLE(Local_1427[0], Local_1427.f_4, 20000, 1, 1f, 1, 0);
								iLocal_999 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&iLocal_1096);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1427[0]) && !PED::IS_PED_INJURED(Local_1427[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_1427[0], Local_1427.f_4, 0) && PED::IS_PED_IN_VEHICLE(Local_1427[1], Local_1427.f_4, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1427.f_3, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_4, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_1427.f_3);
						func_50(&iLocal_1096);
					}
					iLocal_1026++;
				}
			}
			break;
		
		case 2:
			if (func_52(&iLocal_1096))
			{
				if (func_46(&iLocal_1096) > 3f)
				{
					if (!PED::IS_PED_INJURED(Local_1427.f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1427.f_4, 0))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1427.f_3, Local_1427.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1026++;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_1427.f_3, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_4, 0))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1427.f_4) || iLocal_1002)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1427.f_3, Local_1427.f_4, 10f, 786603);
					iLocal_1026++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1002)
			{
				if (!PED::IS_PED_INJURED(iLocal_942[0]))
				{
					iVar0 = iLocal_942[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1112, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&iLocal_1096);
				iLocal_1026++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_452()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_3, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1427[0], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1427[0], 2, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1427[1], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1427[1], 2, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427.f_8[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_8[0], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427.f_8[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427.f_8[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_8[1], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427.f_8[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427.f_5[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_5[0], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427.f_5[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1427.f_5[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_5[1], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1427.f_5[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
}

int func_453()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1427.f_3, 0))
	{
		if (PED::IS_PED_BEING_JACKED(Local_1427.f_3))
		{
			if (PED::GET_PEDS_JACKER(Local_1427.f_3) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_1427.f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1427.f_4, 0))
		{
			return 1;
		}
	}
	if (func_113(Local_1427[0], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1427[1], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1427.f_8[0], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1427.f_8[1], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1427.f_5[0], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1427.f_5[1], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1427.f_4))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_454()
{
	func_519();
}

int func_455()
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

void func_456(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_518())
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
		func_430(1);
	}
}

int func_457(vector3 vParam0, float fParam1)
{
	return func_458(&(Global_100114.f_2890), vParam0, fParam1, 0);
}

int func_458(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_507(uParam0))
	{
		if (func_44(vParam1, 0f, 0f, 0f, 0))
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
		if (func_506(uParam0))
		{
			MISC::CLEAR_AREA(vParam1, 5f, 1, 0, 0, false);
			func_505(vParam1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, vParam1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, vParam1, 0, 0, 1);
				}
				func_489(iVar0, &(uParam0->f_12), 0, 1);
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
							func_488(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_488(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_487(iVar0, uParam0->f_11);
				}
				else if ((!func_484(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_483(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_478(iVar4);
					}
				}
				if (((Global_93682 != 13 && Global_93682 != 10) && Global_93682 != 11) && Global_93682 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_93682.f_3)) == Global_71397)
					{
						if (uParam0->f_12.f_66 == Global_106565.f_32743.f_69[21 /*78*/].f_66)
						{
							func_475(24, 0);
							func_478(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_459(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_460(iParam0))
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
	func_298(iParam0, &(Global_106565.f_32743.f_5510));
}

int func_460(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_309(iParam0, 0, 0)) || func_309(iParam0, 1, 0)) || func_309(iParam0, 2, 0)) || func_294(iParam0) != 145) || func_474(iParam0)) || func_473(iParam0)) || func_472(iParam0)) || func_471(iParam0)) || !func_461(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_473(iParam0))
		{
		}
		if (func_473(iParam0))
		{
		}
		if (func_309(iParam0, 0, 0))
		{
		}
		if (func_309(iParam0, 1, 0))
		{
		}
		if (func_309(iParam0, 2, 0))
		{
		}
		if (func_294(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_461(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_462(iParam0, 0))
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

int func_462(int iParam0, bool bParam1)
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
		if (!func_470())
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
		if ((((!func_469() && !func_468()) && !func_467()) && !func_466()) && !func_470())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_467())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_465(iParam0))
		{
			return 0;
		}
	}
	if (!func_463(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_463(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_464())
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

int func_464()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_465(int iParam0)
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

int func_466()
{
	return 0;
}

int func_467()
{
	return 1;
}

int func_468()
{
	return 1;
}

int func_469()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_470()
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

int func_471(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_462(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0)
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

int func_473(int iParam0)
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

int func_474(int iParam0)
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

void func_475(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_477(iParam0, 0))
		{
			func_476(iParam0, 1, 0);
			func_476(iParam0, 2, 0);
			func_476(iParam0, 3, 0);
			func_476(iParam0, 4, 0);
			func_476(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_476(iParam0, 0, 0);
	}
}

void func_476(int iParam0, int iParam1, bool bParam2)
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

bool func_477(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_106565.f_32743[iParam0], iParam1);
}

void func_478(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_482(&(Global_70409.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_477(iParam0, 0)) && Global_71318.f_66 == 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] != 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] > 3) && (!func_480(0, Global_70409.f_555[0 /*21*/].f_12) || !func_480(1, Global_70409.f_555[0 /*21*/].f_12)))
			{
				func_479(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), &Global_71318);
				Global_71396 = Global_106565.f_32743.f_5591;
			}
			func_475(iParam0, 0);
		}
	}
}

void func_479(var uParam0, var uParam1)
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

int func_480(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_481(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_462(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_481(var uParam0)
{
	return *uParam0;
}

int func_482(var uParam0, int iParam1)
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
			uParam0->f_4 = func_296(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_296(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_296(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_296(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_296(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_296(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_296(2, 1);
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
			if (func_470())
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
			if (func_470())
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
		if (!func_44(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_44(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_44(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_483(int iParam0)
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

int func_484(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_486(iParam0, Global_70409.f_139[38], 0))
			{
				func_478(38);
				return 1;
			}
			break;
		
		case joaat("FIRETRUK"):
			if (func_486(iParam0, Global_70409.f_139[43], 1))
			{
				func_478(43);
				return 1;
			}
			break;
		
		case joaat("CUBAN800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_486(iParam0, uVar1[iVar3], 1) && func_485(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_44(vParam1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), true) < 10f)
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
					func_478(14);
					return 1;
				}
			}
			break;
		
		case joaat("SWIFT2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70409.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_70409.f_484[20]) == joaat("SWIFT2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_70409.f_484[20]))
				{
					func_478(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_485(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_486(int iParam0, int iParam1, bool bParam2)
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

void func_487(int iParam0, int iParam1)
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

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			if (iParam0 == 145 || Global_91053[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_91043[iVar0]) == func_296(iParam0, iParam1))
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

void func_489(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!func_498(iParam0))
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
			if (MISC::IS_BIT_SET(uParam1->f_77, func_299(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_299(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_299(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_299(iVar1 + 1));
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
		if (((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_497(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_496())
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
		if (uParam1->f_65 == -1 && !func_301(uParam1->f_66))
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
						func_495(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_495(iParam0, uParam1->f_69);
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
			func_490(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_299(iVar2 + 1)))
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

int func_490(int iParam0, var uParam1, var uParam2)
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
	if (func_494(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_493(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_493(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_492(iParam0);
	if (func_491(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_491(int iParam0)
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

void func_492(var uParam0)
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

int func_493(int iParam0, int iParam1)
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

int func_494(int iParam0, int iParam1)
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

void func_495(int iParam0, int iParam1)
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

bool func_496()
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_497(int iParam0)
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

int func_498(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_504(PLAYER::PLAYER_ID(), -1))
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
	if (func_500(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_499(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_499(int iParam0)
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

int func_500(int iParam0)
{
	if (func_503(iParam0) == 233)
	{
		return func_501(iParam0);
	}
	return -1;
}

int func_501(int iParam0)
{
	if (func_502(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_502(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_503(int iParam0)
{
	if (func_502(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_504(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_67(iParam0, 1, 1))
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

void func_505(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_482(&(Global_70409.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_70409.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_478(iVar0);
			}
		}
		iVar0++;
	}
}

int func_506(var uParam0)
{
	if (func_507(uParam0))
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

int func_507(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_462(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_485(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_508()
{
	return func_506(&(Global_100114.f_2890));
}

void func_509()
{
	func_510(&(Global_100114.f_2890));
}

void func_510(var uParam0)
{
	if (func_507(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

void func_511()
{
	if (STREAMING::_0x07C313F94746702C(iLocal_955))
	{
		STREAMING::_0x1EE7D8DF4425F053(iLocal_955);
	}
}

int func_512()
{
	if (!Global_93682 == 10 && !Global_93682 == 9)
	{
		return 0;
	}
	return Global_93682.f_2;
}

struct<39> func_513(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_514(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_514(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_514(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_514(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_514(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_515()
{
	bool bVar0;
	
	bVar0 = func_119(Global_106565.f_19957.f_1, 4096);
	Global_106565.f_19957.f_1 = 0;
	if (bVar0)
	{
		func_526(&(Global_106565.f_19957.f_1), 4096);
	}
}

void func_516()
{
}

bool func_517()
{
	return func_507(&(Global_100114.f_2890));
}

int func_518()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

void func_519()
{
	if (func_52(&iLocal_1084))
	{
		Global_106565.f_19957.f_5 = func_46(&iLocal_1084);
	}
	if (!iLocal_1001)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI");
	func_265();
	func_248();
	func_253();
	func_254(1);
	func_412();
	func_523();
	func_438(0);
	func_3();
	if (ENTITY::DOES_ENTITY_EXIST(Global_90209.f_28[0]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_90209.f_28[0], true, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_90209.f_28[0]));
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_953, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_954, 0);
	func_511();
	func_87(&uLocal_1277, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_521(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1075, false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1076, false);
	func_520();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_520()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_274(vLocal_1052[iVar0 /*3*/], 1) < 5f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1223.185f, -185.4723f, 38.1753f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_521(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!func_522(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_93719 > 0)
	{
		Global_100114.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_97130.f_21[iParam1] = iVar0;
	}
}

int func_522(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_93719 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_100114.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_100114.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_100114.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_100114.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_97130.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_97130.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_97130.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_97130.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_523()
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_104");
}

void func_524()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_40(0))
	{
		if (!func_525())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_525()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_526(var uParam0, int iParam1)
{
	func_527(uParam0, iParam1);
}

void func_527(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

