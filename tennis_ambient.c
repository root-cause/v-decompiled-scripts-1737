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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 17;
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
	var uLocal_88 = 17;
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
	var uLocal_113 = 10;
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
	var uLocal_124 = 2;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 8;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 8;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	float fLocal_145 = 0f;
	var uLocal_146 = 12;
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
	var uLocal_159 = 12;
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
	var uLocal_172 = 12;
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
	var uLocal_185 = 9;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 9;
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
	var uLocal_219 = 56;
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
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	vector3 vLocal_307 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_309 = { 0f, 0f, 0f };
	vector3 vLocal_310 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_312 = { 0f, 0f, 0f };
	vector3 vLocal_313 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_315 = { 0f, 0f, 0f };
	vector3 vLocal_316 = { 0f, 0f, 0f };
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_321 = 0;
	var uLocal_322 = 3;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
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
	var uLocal_370 = 4;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
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
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
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
	var uLocal_413 = 0;
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
	var uLocal_435 = 2;
	var uLocal_436 = 0;
	var uLocal_437 = 4;
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
	var uLocal_503 = 4;
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
	var uLocal_574 = 12;
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
	var uLocal_622 = 0;
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
	var uLocal_755 = 3;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	vector3 vLocal_761 = { 0f, 0f, 0f };
	var uLocal_762 = 0;
#endregion

void __EntryFunction__()
{
	struct<1584> Var0;
	struct<29> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
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
	fLocal_145 = ((0.05f + 0.275f) - 0.01f);
	iLocal_305 = -1;
	vLocal_307 = { 0.034f, 0.002f, -0.007f };
	vLocal_308 = { 70.56f, 72.36f, 67.68f };
	vLocal_309 = { 2f, -0.04f, 0.6f };
	vLocal_310 = { 3.2f, -0.04f, 0.6f };
	vLocal_311 = { 3.2f, -0.04f, -0.6f };
	vLocal_312 = { 2f, -0.04f, -0.6f };
	vLocal_313 = { -3.2f, -0.04f, 0.6f };
	vLocal_314 = { -2f, -0.04f, 0.6f };
	vLocal_315 = { -2f, -0.04f, -0.6f };
	vLocal_316 = { -3.2f, -0.04f, -0.6f };
	if (((func_335(10) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) == 0) || Global_90640) && !vScriptParam_761.y)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_325();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Var0 = 2;
	Var0.f_1.f_4.f_6 = 4;
	Var0.f_1.f_35 = 4;
	Var0.f_1.f_59 = 2;
	Var0.f_1.f_62 = 1056964608;
	Var0.f_1.f_66 = 1065353216;
	Var0.f_1.f_67 = 1065353216;
	Var0.f_1.f_94.f_4.f_6 = 4;
	Var0.f_1.f_94.f_35 = 4;
	Var0.f_1.f_94.f_59 = 2;
	Var0.f_1.f_94.f_62 = 1056964608;
	Var0.f_1.f_94.f_66 = 1065353216;
	Var0.f_1.f_94.f_67 = 1065353216;
	Var0.f_189.f_3 = 4;
	Var0.f_189.f_16 = 4;
	Var0.f_189.f_32 = 2;
	Var0.f_189.f_39 = 3;
	Var0.f_282 = 10;
	Var0.f_303 = 77;
	Var0.f_535 = 77;
	Var0.f_535.f_1 = -1082130432;
	Var0.f_535.f_1.f_1 = -1082130432;
	Var0.f_535.f_1.f_2 = -1082130432;
	Var0.f_535.f_1.f_3 = -1;
	Var0.f_535.f_1.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_1460 = 10;
	Var0.f_1460.f_1 = 10;
	Var0.f_1460.f_1.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1571 = 11;
	Var0.f_1583 = 24;
	Var1.f_3 = 1;
	Var1.f_7 = 2;
	Var1.f_7.f_1.f_1 = 5;
	Var1.f_7.f_1.f_8.f_1 = 5;
	Var1.f_28 = 1;
	fVar2 = func_324(vScriptParam_761.y, vScriptParam_761.z, 150f);
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = (1 - iVar4);
	func_308(&Var0, &Var1, 1, iVar4, iVar5, &vScriptParam_761, joaat("a_f_y_tennis_01"), joaat("a_m_m_tennis_01"));
	while (true)
	{
		func_307(&Var0);
		if (Global_90640)
		{
			func_303(&Var0);
		}
		if (func_302(&Var1) > 4 && func_300(&Var0, iVar4, &iVar3))
		{
			func_303(&Var0);
		}
		if (NETWORK::NETWORK_IS_IN_SESSION() && !vScriptParam_761.y)
		{
			func_303(&Var0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0.f_189.f_55) < 5625f || vScriptParam_761.y)
			{
				func_2(&Var0, &Var1, &iVar3, iVar4, iVar5, &uVar6, vScriptParam_761.y);
			}
		}
		func_1(&(Var0.f_281));
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0.f_189.f_55) > (fVar2 * fVar2))
			{
				func_303(&Var0);
			}
		}
		if ((func_335(10) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) == 0) && !vScriptParam_761.y)
		{
			func_303(&Var0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	*uParam0++;
}

void func_2(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	var uVar17;
	char* sVar18;
	float fVar19;
	vector3 vVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	vVar1 = { 0f, 0f, 0f };
	bVar7 = (uParam0->f_1657 == 1 && func_302(uParam1) == 20);
	func_288(uParam0, func_302(uParam1), *iParam2, iParam3, iParam4, bVar7);
	if (uParam0->f_1657 == 1 && !bParam6)
	{
		func_287(uParam0);
	}
	if (func_286(&(uParam0->f_247), 16))
	{
		func_285(&(uParam0->f_247), 16);
	}
	iVar8 = func_284(&(uParam0->f_247));
	if (func_282(uParam0, iVar8, *iParam2, func_302(uParam1)))
	{
		bVar9 = (func_302(uParam1) != 8 && func_302(uParam1) < 16);
		vVar6 = { func_281(&(uParam0->f_247)) };
		iVar10 = func_277(&(uParam0->f_189), &vVar6, &(uParam0->f_247.f_10), &(uParam0->f_1658), &(uParam0->f_247.f_4), &(uParam0->f_247.f_22), &(uParam0->f_247.f_5), &iVar8, bVar9, -1f, func_286(&(uParam0->f_247), 32), 0, 0);
		if (iVar10 == 1)
		{
			func_276(&(uParam0->f_247), 16);
		}
		else if (iVar10 == 3 || iVar10 == 2)
		{
			func_275(uParam0[0 /*94*/], 32768);
			func_275(uParam0[1 /*94*/], 32768);
		}
		func_274(&(uParam0->f_247), vVar6);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_247, func_281(&(uParam0->f_247)), 1, false, 0, 0);
		ENTITY::SET_ENTITY_VELOCITY(uParam0->f_247, uParam0->f_247.f_10);
		vVar6 = { func_281(&(uParam0->f_247)) };
	}
	else if (func_302(uParam1) > 5)
	{
		if (func_273(&(uParam0->f_247)))
		{
			func_272(&(uParam0->f_247));
		}
	}
	func_271(uParam0, uParam1, &iVar11, &iVar12);
	switch (func_302(uParam1))
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::CLEAR_PRINTS();
				ENTITY::SET_ENTITY_COORDS((uParam0[iParam3 /*94*/])->f_32, func_268(&(uParam0->f_189), func_270(uParam1), uParam0->f_1661, uParam0->f_1658, iParam3 == func_269(uParam1), iParam3), 1, true, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), MISC::GET_HEADING_FROM_VECTOR_2D((uParam0[iParam3 /*94*/])->f_40, (uParam0[iParam3 /*94*/])->f_40.f_1));
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_189.f_29, 50f, 0);
				func_267(uParam1, 1);
			}
			break;
		
		case 1:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				CAM::DO_SCREEN_FADE_IN(250);
				if (uParam0->f_1657 != 1)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				}
				func_267(uParam1, 4);
			}
			break;
		
		case 4:
			if (func_266(uParam0))
			{
				if (uParam0->f_1657 == 1)
				{
					func_265(uParam0, 1);
					vVar13 = { func_268(&(uParam0->f_189), 1, uParam0->f_1661, uParam0->f_1658, 1, (uParam0[iParam3 /*94*/])->f_1) };
					func_264(uParam0[iParam3 /*94*/], PED::CREATE_PED(1, uParam0->f_1669, vVar13, MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_1658, uParam0->f_1658.f_1), 0, false));
					TASK::TASK_STAND_STILL((uParam0[iParam3 /*94*/])->f_32, -1);
					ENTITY::SET_ENTITY_HEADING(func_263(uParam0[iParam3 /*94*/]), (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_1658, uParam0->f_1658.f_1) + 180f));
					vVar1 = { func_268(&(uParam0->f_189), func_270(uParam1), uParam0->f_1661, uParam0->f_1658, iParam4 == func_269(uParam1), iParam4) };
					func_264(uParam0[iParam4 /*94*/], PED::CREATE_PED(1, uParam0->f_1668, vVar1, MISC::GET_HEADING_FROM_VECTOR_2D(-uParam0->f_1658, -uParam0->f_1658.f_1), 0, false));
					TASK::TASK_STAND_STILL((uParam0[iParam4 /*94*/])->f_32, -1);
					ENTITY::SET_ENTITY_HEADING(func_263(uParam0[iParam4 /*94*/]), MISC::GET_HEADING_FROM_VECTOR_2D(-uParam0->f_1658, -uParam0->f_1658.f_1));
					vVar1 = { 0f, 0f, 0f };
					func_267(uParam1, 8);
					func_262(uParam1, 0);
					func_261(uParam1, iParam3);
					(uParam0[iParam3 /*94*/])->f_33 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[3 /*3*/], false, false, false);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, false, 0);
					(uParam0[iParam4 /*94*/])->f_33 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[2 /*3*/], false, false, false);
					func_260(uParam0, iParam3, iParam4, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, false, 0);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, true, 0);
					OBJECT::_0xB2D0BDE54F0E8E5A((uParam0[iParam3 /*94*/])->f_33, true);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, true, 0);
					OBJECT::_0xB2D0BDE54F0E8E5A((uParam0[iParam4 /*94*/])->f_33, true);
					func_259(func_263(uParam0[iParam3 /*94*/]), 1);
					func_259(func_263(uParam0[iParam4 /*94*/]), 1);
					if (uParam0->f_189 == 0)
					{
						func_257(uParam0);
						PED::SET_PED_COMPONENT_VARIATION(func_263(uParam0[iParam4 /*94*/]), 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_263(uParam0[iParam4 /*94*/]), 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_263(uParam0[iParam4 /*94*/]), 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_263(uParam0[iParam4 /*94*/]), 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_263(uParam0[iParam4 /*94*/]), 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_263(uParam0[iParam4 /*94*/]), 7, 0, 0, 0);
					}
				}
			}
			break;
		
		case 8:
			func_256(&(uParam0->f_247));
			if (func_255(*iParam2, 1))
			{
				func_260(uParam0, iParam3, iParam4, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, true, 0);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, true, 0);
				func_253(iParam2, 1);
			}
			bVar14 = (MISC::GET_GAME_TIMER() > func_252(uParam0[iParam3 /*94*/]) && MISC::GET_GAME_TIMER() > func_252(uParam0[iParam4 /*94*/]));
			if ((((uParam0->f_1657 != 1 && !func_255(*iParam2, 4194304)) && bVar14) || ((uParam0->f_1657 == 1 && func_251(uParam0) > func_250(uParam0, iParam3, iParam4)) && !bParam6)) || (uParam0->f_1657 == 1 && bParam6))
			{
				func_234(uParam0[iParam3 /*94*/], uParam0, func_270(uParam1), iParam3, 0, 0);
				func_234(uParam0[iParam4 /*94*/], uParam0, func_270(uParam1), iParam4, 0, 0);
				func_233(&((uParam0[iParam3 /*94*/])->f_4), 0);
				func_233(&((uParam0[iParam4 /*94*/])->f_4), 0);
				func_232(uParam0[iParam3 /*94*/], 75);
				func_232(uParam0[iParam4 /*94*/], 75);
				func_231(uParam0[iParam3 /*94*/]);
				func_231(uParam0[iParam4 /*94*/]);
				func_285(&(uParam0->f_247), 32);
				func_275(uParam0[iParam3 /*94*/], 1024);
				func_275(uParam0[iParam4 /*94*/], 1024);
				func_275(uParam0[iParam3 /*94*/], 8192);
				func_275(uParam0[iParam4 /*94*/], 8192);
				func_230(uParam0->f_1657, 1);
				func_253(iParam2, 268435456);
				func_253(iParam2, 1024);
				func_253(iParam2, 64);
				func_253(iParam2, 32);
				func_253(iParam2, 512);
				func_253(iParam2, 256);
				func_253(iParam2, 8);
				func_229(uParam0, 2);
				func_229(uParam0, 32);
				func_285(&(uParam0->f_247), 64);
				if (uParam1->f_5 != 10)
				{
					func_262(uParam1, 0);
				}
				func_228(uParam0[iParam3 /*94*/], 0);
				func_228(uParam0[iParam4 /*94*/], 0);
				if (uParam0->f_1657 != 1 && !func_227(uParam0, 1))
				{
					func_265(uParam0, 1);
				}
				bVar15 = (uParam0->f_1657 == 1 || func_227(uParam0, 1));
				if (!func_226(&((uParam0[func_269(uParam1) /*94*/])->f_4), 256))
				{
					func_225(uParam0[func_269(uParam1) /*94*/], uParam0, func_270(uParam1), func_269(uParam1), uParam0->f_1657 != 1, func_255(*iParam2, 1), (uParam0->f_1657 != 1 && !func_227(uParam0, 1)), bVar15, 0, 0);
				}
				if (!func_226(&((uParam0[(1 - func_269(uParam1)) /*94*/])->f_4), 256))
				{
					func_216(uParam0[(1 - func_269(uParam1)) /*94*/], uParam0, func_270(uParam1), (1 - func_269(uParam1)), uParam0->f_1657 != 1, bVar15, 0, !func_226(&((uParam0[(1 - func_269(uParam1)) /*94*/])->f_4), 16), 0);
				}
				func_229(uParam0, 8);
				func_267(uParam1, 20);
				func_215(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_215(&((uParam0[iParam4 /*94*/])->f_4), 256);
				func_214(&(uParam0->f_247));
				func_213(uParam0, 0);
				func_230(uParam0->f_1657, 0);
			}
			else
			{
				func_230(uParam0->f_1657, 0);
			}
			break;
		
		case 9:
			func_212(uParam0, iParam4, func_269(uParam1), uParam0->f_1657, func_226(&((uParam0[iParam4 /*94*/])->f_4), 256));
			if (func_227(uParam0, 4))
			{
				func_229(uParam0, 4);
			}
			if (!func_255(*iParam2, 4194304))
			{
				func_234(uParam0[func_269(uParam1) /*94*/], uParam0, func_270(uParam1), func_269(uParam1), 1, 0);
				func_234(uParam0[(1 - func_269(uParam1)) /*94*/], uParam0, func_270(uParam1), (1 - func_269(uParam1)), 0, 0);
			}
			func_211(uParam0[(1 - func_269(uParam1)) /*94*/], &(uParam0->f_247));
			if ((uParam0[func_269(uParam1) /*94*/])->f_31 != 4)
			{
				if (func_197(uParam0[func_269(uParam1) /*94*/], uParam0, func_270(uParam1), &uVar17, 0))
				{
					bVar16 = true;
				}
			}
			else
			{
				sVar18 = func_193(func_194(uParam0[func_269(uParam1) /*94*/]), "mini@tennis", "mini@tennis@female");
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_263(uParam0[func_269(uParam1) /*94*/]), sVar18, "serve", 3))
				{
					if (uParam0->f_1657 == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
					{
						fVar19 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(func_263(uParam0[func_269(uParam1) /*94*/]), sVar18, "serve");
						if (fVar19 > 0.015f && fVar19 < (0.015f * 10f))
						{
							func_192(uParam0[func_269(uParam1) /*94*/], &(uParam0->f_247));
						}
					}
				}
				if (!func_191(1))
				{
					func_190(1);
				}
				if (func_180(uParam0, uParam1, uParam0[func_269(uParam1) /*94*/], bParam6))
				{
					bVar16 = true;
				}
			}
			if (bVar16)
			{
				func_178(iParam2, 128);
				func_267(uParam1, 11);
				func_177(uParam1, func_269(uParam1));
				func_176(uParam0[iParam3 /*94*/], &(uParam0->f_247), 1);
				func_176(uParam0[iParam4 /*94*/], &(uParam0->f_247), 1);
			}
			break;
		
		case 10:
			func_234(uParam0[func_269(uParam1) /*94*/], uParam0, func_270(uParam1), func_269(uParam1), 0, 0);
			func_234(uParam0[(1 - func_269(uParam1)) /*94*/], uParam0, func_270(uParam1), (1 - func_269(uParam1)), 0, 0);
			func_211(uParam0[func_269(uParam1) /*94*/], &(uParam0->f_247));
			if (func_105(uParam0[(1 - func_269(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_175(uParam1), (1 - func_269(uParam1)), func_269(uParam1), func_270(uParam1), func_174(uParam1)))
			{
				func_177(uParam1, (1 - func_269(uParam1)));
				func_253(iParam2, 128);
			}
			if (MISC::GET_FRAME_COUNT() > func_104(&(uParam0->f_247)) && func_103(uParam0[(1 - func_269(uParam1)) /*94*/], 256))
			{
				func_102(uParam1, func_175(uParam1));
				func_267(uParam1, 14);
				func_101(iParam2);
				func_253(iParam2, 128);
			}
			if (func_96(&(uParam0->f_247), func_100(uParam0), &(uParam0->f_189.f_29)))
			{
				if (func_95(&(uParam0->f_189), uParam0, (uParam0[func_269(uParam1) /*94*/])->f_1, func_270(uParam1)))
				{
					func_94(&(uParam0->f_247));
					func_267(uParam1, 12);
				}
				else
				{
					func_101(iParam2);
					if (func_93(uParam1) == 0)
					{
						if (iParam3 == func_269(uParam1))
						{
							func_92(iParam2, 134217728);
						}
						else
						{
							func_92(iParam2, 33554432);
						}
						func_262(uParam1, 1);
						func_267(uParam1, 8);
						func_178(iParam2, 8192);
						func_178(iParam2, 32);
					}
					else
					{
						func_262(uParam1, 2);
						func_102(uParam1, (1 - func_269(uParam1)));
						func_267(uParam1, 14);
					}
				}
			}
			else if (func_175(uParam1) != func_269(uParam1))
			{
				if (iParam3 == func_269(uParam1))
				{
					func_92(iParam2, 67108864);
				}
				else
				{
					func_92(iParam2, 16777216);
				}
				func_102(uParam1, func_269(uParam1));
				func_267(uParam1, 14);
				func_101(iParam2);
			}
			vVar6 = { func_281(&(uParam0->f_247)) };
			if (vVar6.z < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_189.f_29, func_281(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				func_102(uParam1, (1 - func_269(uParam1)));
				func_267(uParam1, 14);
			}
			break;
		
		case 11:
			iVar4 = (1 - func_269(uParam1));
			func_275(uParam0[iVar4 /*94*/], 32768);
			vVar3 = { func_88(&(uParam0->f_189), func_281(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247)), func_89(&(uParam0->f_247))) };
			func_87(uParam0[iVar4 /*94*/], &vVar3);
			vVar2 = { func_86((uParam0[iVar4 /*94*/])->f_37, &(uParam0->f_189), func_281(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247)), func_89(&(uParam0->f_247)), &fVar5) };
			func_80(&((uParam0[iVar4 /*94*/])->f_4), func_81(uParam0[iVar4 /*94*/], &(uParam0->f_303), vVar2, uParam0->f_189.f_29.f_2, fVar5));
			if (!func_226(&((uParam0[iVar4 /*94*/])->f_4), 64))
			{
				func_79(&((uParam0[iVar4 /*94*/])->f_4), 64);
			}
			if (bParam6)
			{
				func_78(&((uParam0[iVar4 /*94*/])->f_4), 0f);
			}
			else
			{
				func_77(&((uParam0[iVar4 /*94*/])->f_4));
				if ((!func_226(&((uParam0[iVar4 /*94*/])->f_4), 32) && func_284(&(uParam0->f_247)) < 1) && !func_75(vVar3, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_76(&(uParam0->f_189))))
				{
					if (func_74(uParam0[iVar4 /*94*/]) == 75)
					{
						func_79(&((uParam0[iVar4 /*94*/])->f_4), 32);
					}
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_31 == 4)
			{
				func_233(&((uParam0[iVar4 /*94*/])->f_4), 6);
			}
			else
			{
				func_233(&((uParam0[iVar4 /*94*/])->f_4), 1);
			}
			func_233(&((uParam0[func_269(uParam1) /*94*/])->f_4), 5);
			func_267(uParam1, 10);
			if ((uParam0[iVar4 /*94*/])->f_31 != 4)
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				func_178(iParam2, 536870912);
			}
			if ((uParam0[(1 - func_175(uParam1)) /*94*/])->f_1 == 0)
			{
				iVar0 = 0;
			}
			else if ((uParam0[(1 - func_175(uParam1)) /*94*/])->f_1 == 1)
			{
				iVar0 = 2;
			}
			func_70(uParam0[(1 - func_175(uParam1)) /*94*/], uParam0->f_189.f_3[iVar0 /*3*/], uParam0->f_189.f_16[iVar0 /*3*/]);
			func_65(uParam0[(1 - func_175(uParam1)) /*94*/], func_270(uParam1));
			break;
		
		case 12:
			vVar6 = { func_281(&(uParam0->f_247)) };
			if (!func_63(uParam0, func_175(uParam1)))
			{
				if (func_284(&(uParam0->f_247)) > 1)
				{
					func_102(uParam1, func_175(uParam1));
					func_101(iParam2);
				}
				else
				{
					func_102(uParam1, (1 - func_175(uParam1)));
					func_101(iParam2);
					if (func_62(uParam1) != iParam3 && uParam0->f_1657 == 1)
					{
						Global_106565.f_20015.f_10++;
						func_59(10, 1);
					}
					if (func_58(uParam0->f_247.f_13, &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
					{
						func_57(uParam0[(1 - func_175(uParam1)) /*94*/], 2);
					}
				}
				func_267(uParam1, 14);
			}
			else if (vVar6.z < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_189.f_29, func_281(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				func_102(uParam1, (1 - func_175(uParam1)));
				func_267(uParam1, 14);
				if (func_62(uParam1) != iParam3 && uParam0->f_1657 != 1)
				{
					Global_106565.f_20015.f_10++;
					func_59(10, 1);
				}
			}
			func_211(uParam0[func_175(uParam1) /*94*/], &(uParam0->f_247));
			if (func_105(uParam0[(1 - func_175(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_175(uParam1), (1 - func_175(uParam1)), func_269(uParam1), func_270(uParam1), func_174(uParam1)))
			{
				func_256(&(uParam0->f_247));
				func_177(uParam1, (1 - func_175(uParam1)));
				if ((uParam0[func_175(uParam1) /*94*/])->f_31 == 4)
				{
					func_233(&((uParam0[func_175(uParam1) /*94*/])->f_4), 5);
					func_56(uParam0[func_175(uParam1) /*94*/], &(uParam0->f_189), uParam0->f_1661);
				}
				else
				{
					func_253(iParam2, 536870912);
				}
				func_253(iParam2, 128);
				func_267(uParam1, 13);
				func_55(uParam0[iParam3 /*94*/]);
				func_55(uParam0[iParam4 /*94*/]);
			}
			else if (MISC::GET_FRAME_COUNT() > func_104(&(uParam0->f_247)) && func_103(uParam0[(1 - func_175(uParam1)) /*94*/], 256))
			{
				func_102(uParam1, func_175(uParam1));
				func_267(uParam1, 14);
				func_101(iParam2);
				func_253(iParam2, 128);
			}
			func_234(uParam0[iParam3 /*94*/], uParam0, func_270(uParam1), iParam3, 0, 0);
			func_234(uParam0[iParam4 /*94*/], uParam0, func_270(uParam1), iParam4, 0, 0);
			if (uParam0->f_1657 != 1)
			{
				func_52(uParam0[iParam3 /*94*/], &(uParam0->f_189));
			}
			if ((func_226(&((uParam0[iParam3 /*94*/])->f_4), 16) && !func_226(&((uParam0[iParam4 /*94*/])->f_4), 16)) && !func_226(&((uParam0[iParam4 /*94*/])->f_4), 256))
			{
				TASK::TASK_STAND_STILL(func_263(uParam0[iParam4 /*94*/]), -1);
			}
			break;
		
		case 13:
			iVar4 = (1 - func_175(uParam1));
			func_275(uParam0[iVar4 /*94*/], 32768);
			vVar20 = { func_88(&(uParam0->f_189), func_281(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247)), func_89(&(uParam0->f_247))) };
			func_87(uParam0[iVar4 /*94*/], &vVar20);
			if (!func_226(&((uParam0[iVar4 /*94*/])->f_4), 64))
			{
				func_79(&((uParam0[iVar4 /*94*/])->f_4), 64);
			}
			if (func_51(uParam0[func_175(uParam1) /*94*/]) == 2)
			{
				func_80(&((uParam0[iVar4 /*94*/])->f_4), vVar20);
			}
			else
			{
				vVar2 = { func_86((uParam0[iVar4 /*94*/])->f_37, &(uParam0->f_189), func_281(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247)), func_89(&(uParam0->f_247)), &fVar5) };
				func_80(&((uParam0[iVar4 /*94*/])->f_4), func_81(uParam0[iVar4 /*94*/], &(uParam0->f_303), vVar2, uParam0->f_189.f_29.f_2, fVar5));
			}
			if ((!func_226(&((uParam0[iVar4 /*94*/])->f_4), 32) && func_284(&(uParam0->f_247)) < 1) && !func_75(vVar20, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_76(&(uParam0->f_189))))
			{
				if (func_74(uParam0[iVar4 /*94*/]) == 75)
				{
					func_79(&((uParam0[iVar4 /*94*/])->f_4), 32);
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_31 == 4)
			{
				if ((uParam0[iVar4 /*94*/])->f_1 == 0)
				{
					iVar0 = 0;
				}
				else if ((uParam0[iVar4 /*94*/])->f_1 == 1)
				{
					iVar0 = 2;
				}
				func_70(uParam0[iVar4 /*94*/], uParam0->f_189.f_3[iVar0 /*3*/], uParam0->f_189.f_16[iVar0 /*3*/]);
			}
			else
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				func_178(iParam2, 536870912);
			}
			func_215(&((uParam0[iVar4 /*94*/])->f_4), 4);
			func_233(&((uParam0[iVar4 /*94*/])->f_4), 1);
			func_267(uParam1, 12);
			break;
		
		case 14:
			func_176(uParam0[iParam3 /*94*/], &(uParam0->f_247), 0);
			func_176(uParam0[iParam4 /*94*/], &(uParam0->f_247), 0);
			func_233(&((uParam0[iParam3 /*94*/])->f_4), 0);
			func_233(&((uParam0[iParam4 /*94*/])->f_4), 0);
			func_50(&(uParam1->f_7[func_62(uParam1) /*8*/]), iParam2);
			if (uParam1->f_7[func_62(uParam1) /*8*/] >= func_49(func_174(uParam1), 7, 4) && (uParam1->f_7[func_62(uParam1) /*8*/] - uParam1->f_7[(1 - func_62(uParam1)) /*8*/]) >= 2)
			{
				func_47(&(uParam1->f_7), func_48(uParam1), func_62(uParam1), (1 - func_62(uParam1)), iParam2, func_174(uParam1));
				func_267(uParam1, 18);
				func_178(iParam2, 8388608);
				func_46(uParam1, 0);
				if (uParam0->f_1657 == 1)
				{
					func_213(uParam0, 0);
				}
				if (func_62(uParam1) == iParam3)
				{
					func_178(iParam2, 1048576);
					func_92(iParam2, 67108864);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						func_34(2, 3);
						func_178(iParam2, 256);
					}
					if (func_33(&((uParam0[iParam4 /*94*/])->f_4)) == 2)
					{
						func_32(&((uParam0[iParam4 /*94*/])->f_4));
					}
				}
				else
				{
					func_178(iParam2, 2097152);
					func_92(iParam2, 16777216);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						func_178(iParam2, 512);
					}
				}
			}
			else
			{
				iVar23 = func_62(uParam1);
				iVar24 = (1 - iVar23);
				iVar22 = func_48(uParam1);
				iVar21 = func_49(func_174(uParam1), 6, 3);
				if (func_174(uParam1))
				{
					func_31(uParam0, MISC::GET_GAME_TIMER() + 1500);
				}
				if (uParam1->f_7[iVar23 /*8*/] >= iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/])
				{
					func_178(iParam2, 65536);
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] > iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/] + 1)
				{
					if (((((func_29(uParam1) == 0 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 5) && (uParam1->f_7[iVar23 /*8*/].f_1[iVar22] + 1 - uParam1->f_7[iVar24 /*8*/].f_1[iVar22]) >= 2) || func_29(uParam1) == 1) || (func_29(uParam1) == 2 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 1)) || (func_29(uParam1) == 3 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 2))
					{
						func_178(iParam2, 32768);
					}
					else
					{
						func_178(iParam2, 131072);
					}
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] == iVar21 && uParam1->f_7[iVar24 /*8*/] < iVar21)
				{
					func_178(iParam2, 32768);
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_5 == 10)
				{
					if (uParam1->f_2 != func_269(uParam1))
					{
						func_178(iParam2, 8192);
						func_178(iParam2, 32);
						if (func_62(uParam1) == iParam3)
						{
							func_92(iParam2, 33554432);
						}
						else
						{
							func_92(iParam2, 134217728);
						}
					}
					else if (iVar23 == iParam3)
					{
						func_92(iParam2, 67108864);
						func_178(iParam2, 262144);
						func_178(iParam2, 64);
					}
					else
					{
						func_92(iParam2, 16777216);
						func_178(iParam2, 1024);
						func_178(iParam2, 524288);
					}
				}
				else if (uParam1->f_5 == 12)
				{
					if (iVar23 == iParam3)
					{
						func_178(iParam2, 262144);
					}
					else
					{
						func_178(iParam2, 524288);
					}
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				if (uParam1->f_5 == 10 && uParam1->f_2 != func_269(uParam1))
				{
					func_253(iParam2, 128);
					if (!func_255(*iParam2, 8192))
					{
					}
				}
				if (func_174(uParam1))
				{
					if (MISC::IS_BIT_SET((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]), 0))
					{
						func_267(uParam1, 18);
					}
					else if (((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]) % 6) == 0)
					{
						func_267(uParam1, 17);
					}
					else
					{
						func_28(uParam1, (1 - func_270(uParam1)));
						func_267(uParam1, 8);
					}
				}
				else
				{
					func_28(uParam1, (1 - func_270(uParam1)));
					func_267(uParam1, 8);
					if (uParam0->f_1657 == 1)
					{
						func_213(uParam0, 0);
					}
				}
			}
			if (func_226(&((uParam0[iParam3 /*94*/])->f_4), 16) || func_226(&((uParam0[iParam4 /*94*/])->f_4), 16))
			{
				func_178(iParam2, 268435456);
			}
			func_231(uParam0[iParam3 /*94*/]);
			func_231(uParam0[iParam4 /*94*/]);
			break;
		
		case 20:
			if (func_25(uParam0, iParam3, iParam4, func_269(uParam1), uParam0->f_1657, func_227(uParam0, 1), iVar12))
			{
				func_230(uParam0->f_1657, 1);
				func_267(uParam1, 9);
				func_24(&((uParam0[iParam3 /*94*/])->f_4));
				func_24(&((uParam0[iParam4 /*94*/])->f_4));
				if (func_227(uParam0, 1))
				{
					func_229(uParam0, 1);
				}
				if (func_227(uParam0, 256))
				{
					func_229(uParam0, 256);
				}
			}
			if ((func_227(uParam0, 1) && !func_227(uParam0, 4)) && iVar11 >= 2)
			{
				func_23(uParam0, 4);
				func_22(uParam0, MISC::GET_GAME_TIMER() + 580);
			}
			else if (((MISC::GET_GAME_TIMER() > func_21(uParam0) && func_227(uParam0, 4)) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_247)) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_247))
			{
				func_265(uParam0, 1);
				func_192(uParam0[func_269(uParam1) /*94*/], &(uParam0->f_247));
				func_285(&(uParam0->f_247), 4);
			}
			if (func_269(uParam1) != iParam3 && TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0[iParam3 /*94*/]), 242628503) == 7)
			{
				func_230(uParam0->f_1657, 1);
				func_234(uParam0[iParam3 /*94*/], uParam0, func_270(uParam1), iParam3, 0, 0);
				func_20(20, uParam0[iParam3 /*94*/], *iParam2, 1);
				func_211(uParam0[iParam3 /*94*/], &(uParam0->f_247));
			}
			break;
		
		case 18:
			if (!func_174(uParam1))
			{
				if (uParam0->f_1657 != 1 && (((((uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] > 5 && (uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] - uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)]) >= 2) && uParam1->f_7[iParam3 /*8*/] >= 3) || ((uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] > 5 && (uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] - uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)]) >= 2) && uParam1->f_7[iParam4 /*8*/] >= 3)) || uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] == 7) || uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] == 7))
				{
					if (func_19(uParam1) > 1)
					{
						func_18(&(uParam1->f_7), &(uParam1->f_30), iParam2, func_19(uParam1));
					}
				}
				else if ((uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] == 6 && uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] == 6) && uParam0->f_1657 != 1)
				{
					func_46(uParam1, 1);
					func_178(iParam2, 4);
					func_31(uParam0, MISC::GET_GAME_TIMER() + 1500);
				}
				if ((uParam0->f_1657 != 1 && !func_174(uParam1)) && ((((((((func_29(uParam1) == 0 && uParam1->f_7[iParam3 /*8*/].f_7 > (func_19(uParam1) / 2)) || (func_29(uParam1) == 0 && uParam1->f_7[iParam4 /*8*/].f_7 > (func_19(uParam1) / 2))) || (func_29(uParam1) == 1 && uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] >= 1)) || (func_29(uParam1) == 1 && uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] >= 1)) || (func_29(uParam1) == 2 && uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] >= 2)) || (func_29(uParam1) == 2 && uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] >= 2)) || (func_29(uParam1) == 3 && uParam1->f_7[iParam3 /*8*/].f_1[func_48(uParam1)] >= 3)) || (func_29(uParam1) == 3 && uParam1->f_7[iParam4 /*8*/].f_1[func_48(uParam1)] >= 3)))
				{
					if (func_19(uParam1) > 1)
					{
						uParam1->f_30 = (uParam1->f_30 - 1);
					}
					func_259(PLAYER::PLAYER_PED_ID(), 0);
					func_267(uParam1, 22);
					func_178(iParam2, 2);
				}
				else
				{
					func_17(&(uParam1->f_7), iParam2);
					if (func_269(uParam1) == iParam3)
					{
						func_261(uParam1, iParam4);
					}
					else if (func_269(uParam1) == iParam4)
					{
						func_261(uParam1, iParam3);
					}
					func_267(uParam1, 8);
					func_28(uParam1, 1);
					if (func_16(&(uParam1->f_7), func_48(uParam1)) && uParam0->f_1657 != 1)
					{
						func_267(uParam1, 17);
					}
				}
			}
			else if (func_174(uParam1))
			{
				if (func_269(uParam1) == iParam3)
				{
					func_261(uParam1, iParam4);
				}
				else if (func_269(uParam1) == iParam4)
				{
					func_261(uParam1, iParam3);
				}
				func_267(uParam1, 8);
				func_28(uParam1, 1);
			}
			break;
		
		case 16:
			func_234(uParam0[iParam4 /*94*/], uParam0, func_270(uParam1), iParam4, 0, 0);
			func_234(uParam0[iParam3 /*94*/], uParam0, func_270(uParam1), iParam3, 0, 0);
			if ((uParam0->f_1657 != 1 && !func_255(*iParam2, 4194304)) || uParam0->f_1657 == 1)
			{
				func_267(uParam1, 8);
			}
			break;
		
		case 28:
			break;
	}
	if ((!func_255(*iParam2, 4194304) && func_302(uParam1) > 6) && func_302(uParam1) < 21)
	{
		func_4(uParam0[iParam3 /*94*/], &(uParam0->f_535), uParam0->f_1657);
		func_4(uParam0[iParam4 /*94*/], &(uParam0->f_535), uParam0->f_1657);
	}
	func_3(uParam0);
}

void func_3(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		(uParam0[0 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[0 /*94*/])->f_33, true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		(uParam0[1 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[1 /*94*/])->f_33, true) };
	}
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	char* sVar7;
	
	iVar0 = func_263(uParam0);
	iVar6 = func_74(uParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		sVar7 = func_193(func_194(uParam0), "mini@tennis", "mini@tennis@female");
		if (iVar6 == 75)
		{
			if (func_103(uParam0, 32))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar7, "idle", 3))
				{
					TASK::STOP_ANIM_TASK(iVar0, sVar7, "idle", -8f);
				}
				func_275(uParam0, 32);
			}
			if (!func_103(uParam0, 128) && !func_226(&(uParam0->f_4), 4))
			{
				if (!MISC::IS_TENNIS_MODE(func_263(uParam0)))
				{
					func_259(func_263(uParam0), 1);
				}
				func_57(uParam0, 128);
			}
		}
		else if (iVar6 == 74)
		{
			fVar1 = 0f;
			fVar4 = 0.567f;
			fVar2 = 0.72f;
			fVar3 = 0.855f;
			sVar5 = "serve";
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar7, sVar5, 3))
			{
				TASK::TASK_PLAY_ANIM(iVar0, sVar7, sVar5, 8f, -8f, -1, 0, fVar1, 0, 0, 0);
				func_228(uParam0, 7);
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sVar7, sVar5) > fVar3)
			{
				TASK::STOP_ANIM_TASK(iVar0, sVar7, sVar5, -8f);
				func_232(uParam0, 75);
				if (func_103(uParam0, 4))
				{
					func_275(uParam0, 4);
				}
				if (!func_103(uParam0, 128))
				{
					func_259(func_263(uParam0), 1);
					func_57(uParam0, 128);
				}
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sVar7, sVar5) >= fVar2)
			{
				if (!func_103(uParam0, 4))
				{
					func_57(uParam0, 4);
					func_228(uParam0, 6);
				}
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sVar7, sVar5) > fVar4)
			{
				if (func_103(uParam0, 4))
				{
					func_275(uParam0, 4);
				}
			}
		}
		else
		{
			func_5(uParam0, iVar0, uParam1[iVar6 /*12*/], func_15(uParam0), uParam2);
		}
	}
}

void func_5(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	bool bVar0;
	char* sVar1;
	struct<8> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	bVar0 = func_194(uParam0);
	sVar1 = func_193(bVar0, "mini@tennis", "mini@tennis@female");
	Var2 = { uParam2->f_4 };
	iVar3 = func_14(uParam2->f_3);
	fVar4 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(iVar3));
	fVar5 = *uParam2;
	if (func_13(func_74(uParam0), iParam3))
	{
		fVar5 = (*uParam2 + fVar4);
		func_12(uParam0, 1f);
	}
	else
	{
		fVar6 = (uParam2->f_1 - fVar4);
		fVar7 = (uParam2->f_1 / fVar6);
		fVar7 = func_11(fVar7, 0.5f, 1.5f);
		func_12(uParam0, fVar7);
	}
	if (fVar5 > uParam2->f_1)
	{
		fVar5 = uParam2->f_1;
	}
	if (!func_103(uParam0, 1024))
	{
		if (!MISC::IS_TENNIS_MODE(func_263(uParam0)))
		{
			return;
		}
		TASK::CLEAR_PED_TASKS(iParam1);
		if (func_74(uParam0) == 72 || func_74(uParam0) == 73)
		{
			if (func_10(uParam0) != 0)
			{
				if (func_74(uParam0) == 72)
				{
					iVar8 = 0;
				}
				else if (func_74(uParam0) == 73)
				{
					iVar8 = 1;
				}
				MISC::_0x8FA9C42FC5D7C64B(iParam1, iVar8, func_9(uParam0), func_8(uParam0), 1065353216, 0);
				func_7(uParam0, MISC::GET_GAME_TIMER() + 2871);
			}
		}
		else
		{
			MISC::_0xE266ED23311F24D4(iParam1, sVar1, &Var2, fVar5, func_6(uParam0), 0);
		}
		func_57(uParam0, 1024);
		if (uParam0->f_31 != 4)
		{
			Global_106565.f_20015.f_12++;
		}
	}
	else if (MISC::_0x19BFED045C647C49(iParam1) || MISC::_0x17DF68D720AA77F8(iParam1))
	{
		func_275(uParam0, 1024);
		TASK::CLEAR_PED_TASKS(iParam1);
		func_232(uParam0, 75);
		func_12(uParam0, 1f);
		if (func_103(uParam0, 65536))
		{
			func_275(uParam0, 65536);
		}
	}
}

var func_6(var uParam0)
{
	return uParam0->f_67;
}

void func_7(var uParam0, var uParam1)
{
	uParam0->f_77 = uParam1;
}

var func_8(var uParam0)
{
	return uParam0->f_70;
}

var func_9(var uParam0)
{
	return uParam0->f_71;
}

int func_10(var uParam0)
{
	return uParam0->f_52;
}

float func_11(float fParam0, float fParam1, float fParam2)
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

void func_12(var uParam0, float fParam1)
{
	uParam0->f_67 = fParam1;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 == 54)
	{
		return 0;
	}
	if (iParam0 == 56)
	{
		return 0;
	}
	if (iParam0 == 55)
	{
		return 0;
	}
	if (iParam0 == 57)
	{
		return 0;
	}
	if (iParam0 == 59)
	{
		return 0;
	}
	if (iParam0 == 58)
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) * 0.03333334f);
	fVar1 = (fVar0 / MISC::GET_FRAME_TIME());
	return SYSTEM::ROUND(fVar1);
}

int func_15(var uParam0)
{
	return uParam0->f_53;
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		iVar0 = (iVar0 + (uParam0[0 /*8*/])->f_1[iVar1]);
		iVar0 = (iVar0 + (uParam0[1 /*8*/])->f_1[iVar1]);
		iVar1++;
	}
	if ((iVar0 % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_17(var uParam0, var uParam1)
{
	(*uParam0)[0 /*8*/] = 0;
	(*uParam0)[1 /*8*/] = 0;
	func_178(uParam1, 2);
}

void func_18(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam1 + 1 < iParam3)
	{
		*uParam1++;
		(*uParam0)[0 /*8*/] = 0;
		(*uParam0)[1 /*8*/] = 0;
		(uParam0[0 /*8*/])->f_1[*uParam1] = 0;
		(uParam0[1 /*8*/])->f_1[*uParam1] = 0;
	}
	func_178(uParam2, 2);
}

int func_19(var uParam0)
{
	return uParam0->f_28;
}

void func_20(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if ((((iParam0 > 6 && iParam0 < 22) && !func_255(uParam2, 4194304)) && iParam0 != 16) || iParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_263(uParam1)))
		{
			if (MISC::IS_TENNIS_MODE(func_263(uParam1)))
			{
				PED::SET_PED_RESET_FLAG(func_263(uParam1), 69, true);
			}
			PED::SET_PED_RESET_FLAG(func_263(uParam1), 102, true);
		}
	}
}

int func_21(var uParam0)
{
	return uParam0->f_1674;
}

void func_22(var uParam0, var uParam1)
{
	uParam0->f_1674 = uParam1;
}

void func_23(var uParam0, int iParam1)
{
	uParam0->f_1673 = (uParam0->f_1673 || iParam1);
}

void func_24(var uParam0)
{
	uParam0->f_25 = 0;
}

int func_25(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 1;
	iVar1 = func_263(uParam0[iParam1 /*94*/]);
	iVar2 = func_263(uParam0[iParam2 /*94*/]);
	if (!PED::IS_PED_INJURED(iVar1) && TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503) != 7)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, "mini@tennis", "idle_2_serve", 3))
		{
		}
		iVar0 = 0;
		if (MISC::IS_TENNIS_MODE(iVar1))
		{
			func_57(uParam0[iParam1 /*94*/], 16384);
		}
	}
	else if ((!PED::IS_PED_INJURED(iVar1) && (bParam5 || iParam4 == 1)) && !func_103(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam3)
		{
			func_27(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_259(iVar1, 1);
		PED::_0x2208438012482A1A(iVar1, 0, 0);
		func_57(uParam0[iParam1 /*94*/], 8192);
	}
	else if (func_103(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam3)
	{
		if (!PED::IS_PED_INJURED(iVar1) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar1), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar1, "running");
			}
		}
	}
	bVar3 = (((iParam2 != iParam3 && iParam6 >= (func_26(uParam0[iParam2 /*94*/]) - 1)) && iVar0) && 1);
	if (!PED::IS_PED_INJURED(iVar2) && (TASK::GET_SCRIPT_TASK_STATUS(iVar2, 242628503) != 7 && !bVar3))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar2, "mini@tennis", "idle_2_serve", 3))
		{
		}
		if (MISC::IS_TENNIS_MODE(iVar2))
		{
			func_57(uParam0[iParam2 /*94*/], 16384);
		}
		iVar0 = 0;
	}
	else if (((!PED::IS_PED_INJURED(iVar2) && ((bParam5 || iParam4 == 4) || iParam4 == 1)) && !func_103(uParam0[iParam2 /*94*/], 8192)) && TASK::GET_SCRIPT_TASK_STATUS(iVar2, 242628503) == 7)
	{
		if (iParam2 == iParam3)
		{
			func_27(uParam0[iParam2 /*94*/], "TennisServeSet", 0f);
		}
		func_259(iVar2, 1);
		PED::_0x2208438012482A1A(iVar2, 0, 0);
		func_57(uParam0[iParam2 /*94*/], 8192);
	}
	else if (func_103(uParam0[iParam2 /*94*/], 8192) && iParam2 == iParam3)
	{
		if (!PED::IS_PED_INJURED(iVar2) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar2))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar2), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar2))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar2, "running");
			}
		}
	}
	return iVar0;
}

int func_26(var uParam0)
{
	return uParam0->f_55;
}

void func_27(var uParam0, char* sParam1, float fParam2)
{
	if (!((!PED::IS_PED_INJURED(func_263(uParam0)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(func_263(uParam0))) && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(func_263(uParam0)), "running")))
	{
		TASK::TASK_MOVE_NETWORK_BY_NAME(func_263(uParam0), sParam1, fParam2, 0, "mini@tennis", 4);
	}
}

void func_28(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_29(var uParam0)
{
	return uParam0->f_24;
}

void func_30(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam0 == iParam1)
	{
		if (func_226(&((uParam2[iParam1 /*94*/])->f_4), 16))
		{
			func_92(uParam3, 33554432);
			func_178(uParam3, 32);
		}
		else
		{
			func_92(uParam3, 67108864);
			func_178(uParam3, 64);
		}
	}
	else if (iParam0 != iParam1)
	{
		if (func_103(uParam2[iParam1 /*94*/], 2) || func_226(&((uParam2[iParam0 /*94*/])->f_4), 16))
		{
			func_92(uParam3, 134217728);
		}
		else if (!func_103(uParam2[iParam1 /*94*/], 2))
		{
			func_92(uParam3, 16777216);
		}
		func_178(uParam3, 1024);
	}
}

void func_31(var uParam0, var uParam1)
{
	uParam0->f_1678 = uParam1;
}

void func_32(var uParam0)
{
	uParam0->f_23 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
}

int func_33(var uParam0)
{
	return uParam0->f_20;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_40();
	func_35(iVar0, iParam0, iParam1);
}

void func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 10383;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 10383)
			{
				iVar0 = func_39(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_36(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_37(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312745;
}

int func_39(int iParam0, int iParam1, int iParam2)
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

int func_40()
{
	func_41();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_41()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_45(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_44(PLAYER::PLAYER_PED_ID());
			if (func_43(iVar0) && (!func_42(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_43(Global_106565.f_2357.f_539.f_4321))
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

bool func_42(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_46(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

void func_47(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	if ((uParam0[iParam2 /*8*/])->f_1[iParam1] == -1)
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1] = 1;
	}
	else
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1]++;
	}
	if (((((uParam0[iParam2 /*8*/])->f_1[iParam1] > 5 && ((uParam0[iParam2 /*8*/])->f_1[iParam1] - (uParam0[iParam3 /*8*/])->f_1[iParam1]) >= 2) && (*uParam0)[iParam2 /*8*/] >= 3) && !bParam5) || bParam5)
	{
		(uParam0[iParam2 /*8*/])->f_7++;
	}
	func_178(uParam4, 2);
}

int func_48(var uParam0)
{
	return uParam0->f_30;
}

int func_49(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_50(var uParam0, var uParam1)
{
	*uParam0++;
	func_178(uParam1, 2);
}

int func_51(var uParam0)
{
	return uParam0->f_34;
}

void func_52(var uParam0, var uParam1)
{
	vector3 vVar0;
	
	if (!func_103(uParam0, 2048) && func_54(uParam0->f_37, uParam1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0), 242628503) != 1)
		{
			vVar0 = { uParam0->f_37 - uParam1->f_29 * Vector(0.93f, 0.93f, 0.93f) };
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_263(uParam0), uParam1->f_29 + vVar0, 2f, 20000, 1048576000, 0, 1193033728);
			func_57(uParam0, 2048);
			func_53("FAR_FROM_COURT", -1);
		}
	}
	else if (func_103(uParam0, 2048) && TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0), 713668775) != 1)
	{
		func_275(uParam0, 2048);
	}
}

void func_53(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_54(vector3 vParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	switch (*uParam1)
	{
		case 7:
			fVar0 = 2.031f;
			fVar1 = 2.16f;
			break;
		
		case 1:
			fVar0 = 6.955f;
			fVar1 = 1.6f;
			break;
		
		case 4:
			fVar0 = 6.715f;
			fVar1 = 2.043f;
			break;
		
		case 0:
			fVar0 = 4.8f;
			fVar1 = 2.433f;
			break;
		
		case 3:
			fVar0 = 6.1f;
			fVar1 = 2.395f;
			break;
		
		case 5:
			fVar0 = 2.9f;
			fVar1 = 2.005f;
			break;
		
		case 2:
			fVar0 = 7f;
			fVar1 = 2.533f;
			break;
		
		case 6:
			fVar0 = 7.7f;
			fVar1 = 2.775f;
			break;
		
		default:
			fVar0 = 10f;
			fVar1 = 3f;
			break;
	}
	vVar2 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { uParam1->f_3[0 /*3*/] + vVar2 - uParam1->f_49 * Vector(fVar0, fVar0, fVar0) };
	vVar4 = { uParam1->f_3[3 /*3*/] + vVar2 + uParam1->f_49 * Vector(fVar0, fVar0, fVar0) };
	return !func_75(vParam0, vVar3, vVar4, (func_76(uParam1) * fVar1));
}

void func_55(var uParam0)
{
	uParam0->f_60 = 0f;
}

void func_56(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (uParam0->f_4.f_20 == 2)
	{
		iVar0 = func_49(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f, 0, 3);
		func_80(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
	else if (uParam0->f_4.f_20 == 0)
	{
		vVar1 = { uParam1->f_3[0 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		vVar2 = { uParam1->f_3[3 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		if (!func_75(uParam0->f_37, vVar1, vVar2, func_76(uParam1)))
		{
			vVar1 = { uParam1->f_29 - uParam0->f_40 * Vector(6f, 6f, 6f) };
			func_80(&(uParam0->f_4), vVar1);
		}
		else
		{
			func_80(&(uParam0->f_4), uParam0->f_37);
		}
	}
	else
	{
		func_80(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
}

void func_57(var uParam0, int iParam1)
{
	func_178(&(uParam0->f_2), iParam1);
}

bool func_58(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar4;
	
	vVar0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	bVar2 = func_75(vParam0, vVar0, vVar1, uParam1->f_1);
	vVar3 = { *uParam2 * Vector(0.018f, 0.018f, 0.018f) };
	fVar4 = (uParam1->f_1 * 1.038f);
	vVar0 = { vVar0 - vVar3 };
	vVar1 = { vVar1 + vVar3 };
	return (!bVar2 && func_75(vParam0, vVar0, vVar1, fVar4));
}

void func_59(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_60(iParam0, (func_61(iParam0) + iParam1));
	}
	else
	{
		func_60(iParam0, iParam1);
	}
}

void func_60(int iParam0, int iParam1)
{
	uLocal_320[iParam0] = iParam1;
}

int func_61(int iParam0)
{
	return uLocal_320[iParam0];
}

int func_62(var uParam0)
{
	return uParam0->f_2;
}

int func_63(var uParam0, int iParam1)
{
	if (func_96(&(uParam0->f_247), func_100(uParam0), &(uParam0->f_189.f_29)))
	{
		if (func_64(iParam1, uParam0, 1, 1))
		{
			func_94(&(uParam0->f_247));
			if (func_284(&(uParam0->f_247)) > 1)
			{
				return 0;
			}
		}
		else
		{
			func_94(&(uParam0->f_247));
			return 0;
		}
	}
	return 1;
}

int func_64(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { uParam1->f_247.f_13 };
	if (!bParam2)
	{
		vVar0 = { func_281(&(uParam1->f_247)) };
	}
	if (bParam3)
	{
	}
	if ((uParam1[iParam0 /*94*/])->f_1 == 1)
	{
		if (bParam3)
		{
		}
		return func_75(vVar0, uParam1->f_189.f_3[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_76(&(uParam1->f_189)));
	}
	else
	{
		if (bParam3)
		{
		}
		return func_75(vVar0, uParam1->f_189.f_3[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_76(&(uParam1->f_189)));
	}
	return 0;
}

void func_65(var uParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_68(uParam0->f_43, func_69(&(uParam0->f_4)) - uParam0->f_37);
	if (fVar0 > 0f && iParam1 == 1)
	{
		func_67(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 1)
	{
		func_66(&(uParam0->f_4));
	}
	else if (fVar0 > 0f && iParam1 == 0)
	{
		func_66(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 0)
	{
		func_67(&(uParam0->f_4));
	}
}

void func_66(var uParam0)
{
	uParam0->f_23 = (uParam0->f_23 - 0.5f);
	uParam0->f_23 = func_11(uParam0->f_23, -1.5f, 1.5f);
}

void func_67(var uParam0)
{
	uParam0->f_23 = (uParam0->f_23 + 0.5f);
	uParam0->f_23 = func_11(uParam0->f_23, -1.5f, 1.5f);
}

float func_68(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_69(var uParam0)
{
	return *uParam0;
}

void func_70(var uParam0, vector3 vParam1, vector3 vParam2)
{
	if (func_68(uParam0->f_43, func_69(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		func_73(&(uParam0->f_4));
	}
	else
	{
		func_72(&(uParam0->f_4));
	}
	if (func_68(uParam0->f_40, func_69(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		func_71(&(uParam0->f_4), 0);
	}
	else
	{
		func_71(&(uParam0->f_4), 1);
	}
	uParam0->f_4.f_6[0 /*3*/] = { vParam1 + uParam0->f_40 * Vector(1f, 1f, 1f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[1 /*3*/] = { vParam1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(2.165f, 2.165f, 2.165f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[2 /*3*/] = { vParam1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(6f, 6f, 6f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[3 /*3*/] = { vParam2 + uParam0->f_40 * Vector(0.5f, 0.5f, 0.5f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
}

void func_71(var uParam0, bool bParam1)
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		
		case 1:
			fVar0 = 0.1f;
			break;
		
		case 2:
			fVar0 = 0.1f;
			break;
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	uParam0->f_22 = (uParam0->f_22 + fVar0);
	uParam0->f_22 = func_11(uParam0->f_22, -2f, 2f);
}

void func_72(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		
		case 1:
			fVar0 = 0.25f;
			break;
		
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 - fVar0);
	uParam0->f_21 = func_11(uParam0->f_21, -2f, 2f);
}

void func_73(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		
		case 1:
			fVar0 = 0.25f;
			break;
		
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 + fVar0);
	uParam0->f_21 = func_11(uParam0->f_21, -2f, 2f);
}

int func_74(var uParam0)
{
	return uParam0->f_36;
}

bool func_75(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vParam1.z = (vParam1.z + 30f);
	vParam2.z = (vParam2.z - 5f);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vParam2, fParam3, 0, true);
}

float func_76(var uParam0)
{
	return uParam0->f_1;
}

void func_77(var uParam0)
{
	if (uParam0->f_20 == 0)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.4f);
	}
	else if (uParam0->f_20 == 1)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.2f);
	}
	else if (uParam0->f_20 == 2)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.01f);
	}
}

void func_78(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_79(var uParam0, int iParam1)
{
	func_178(&(uParam0->f_25), iParam1);
}

void func_80(var uParam0, vector3 vParam1)
{
	*uParam0 = { vParam1 };
}

Vector3 func_81(var uParam0, var uParam1, vector3 vParam2, var uParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	
	iVar0 = 0;
	fVar4 = 100f;
	vVar6 = { func_85(uParam0, vParam2) };
	fVar7 = func_68(vParam2 - uParam0->f_37, uParam0->f_43);
	bVar8 = fVar7 > 0f;
	while (iVar0 < 75)
	{
		bVar9 = (*uParam1)[iVar0 /*3*/] > 0f;
		if (bVar8 == bVar9)
		{
			vVar1 = { func_84(uParam0, *(uParam1[iVar0 /*3*/])) };
			fVar5 = MISC::ABSF(((vVar1.z + vVar6.z) - vParam2.z));
			if (fVar5 < 0.15f)
			{
				fVar5 = 0f;
			}
			fVar5 = (fVar5 + func_83(iVar0));
			vVar10 = { vParam2 - vVar1 };
			fVar11 = 0f;
			fVar12 = func_82(uParam0, vVar10, fParam4, &fVar11);
			if (fVar12 < fVar11)
			{
				fVar5 = (fVar5 + (fVar11 - fVar12));
			}
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				vVar3 = { vVar1 };
			}
		}
		iVar0++;
	}
	vVar2 = { vParam2 - vVar3 };
	vVar2.z = uParam3;
	return vVar2;
}

float func_82(var uParam0, vector3 vParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { vParam1 - uParam0->f_37 };
	*fParam3 = SYSTEM::VMAG(vVar0);
	if (*fParam3 > 5f)
	{
		vVar0 = { vVar0 * FtoV((5f / *fParam3)) };
	}
	vVar1 = { ENTITY::GET_ENTITY_VELOCITY(uParam0->f_32) };
	fVar2 = ((SYSTEM::VDIST(vVar0, vVar1) * 2f) / 5f);
	fVar3 = ((fParam2 * 5f) - fVar2);
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	return fVar3;
}

float func_83(int iParam0)
{
	switch (iParam0)
	{
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
			return 0.05f;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.05f;
		
		case 72:
		case 73:
			return 0.4f;
		
		default:
	}
	return 0f;
}

Vector3 func_84(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { Vector(vParam1.x, vParam1.x, vParam1.x) * uParam0->f_43 };
	vVar0 = { vVar0 + Vector(vParam1.y, vParam1.y, vParam1.y) * uParam0->f_40 };
	vVar0.z = (vVar0.z + vParam1.z);
	return vVar0;
}

Vector3 func_85(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { vParam1 - uParam0->f_37 };
	fVar1 = func_68(vVar0, uParam0->f_40);
	vVar2 = { uParam0->f_40 * Vector(fVar1, fVar1, fVar1) };
	return uParam0->f_37 + vVar2;
}

Vector3 func_86(vector3 vParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, var uParam9, float fParam10)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 180 && iVar1 < 2)
	{
		vVar0 = { vParam2 };
		func_277(uParam1, &vParam2, &vParam3, &uParam4, &uParam7, &iParam8, &uParam9, &iVar1, 0, -1082130432, 0, 0, 0);
		if (SYSTEM::VDIST(vParam0, vVar0) < SYSTEM::VDIST(vParam0, vParam2))
		{
			*fParam10 = (IntToFloat(iVar2) * MISC::GET_FRAME_TIME());
			return vParam2;
		}
		if (iVar1 > 0 && vParam3.z < 0f)
		{
			*fParam10 = (IntToFloat(iVar2) * MISC::GET_FRAME_TIME());
			return vVar0;
		}
		iVar2++;
	}
	*fParam10 = (IntToFloat(iVar2) * MISC::GET_FRAME_TIME());
	return vParam2;
}

void func_87(var uParam0, var uParam1)
{
	uParam0->f_49 = { *uParam1 };
}

Vector3 func_88(var uParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 180)
	{
		func_277(uParam0, &vParam1, &uParam2, &uParam5, &uParam8, &iParam9, &uParam10, &iVar0, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar0 > 0)
		{
			return vParam1;
		}
		iVar1++;
	}
	return vParam1;
}

var func_89(var uParam0)
{
	return uParam0->f_5;
}

int func_90(var uParam0)
{
	return uParam0->f_22;
}

var func_91(var uParam0)
{
	return uParam0->f_4;
}

void func_92(var uParam0, int iParam1)
{
	func_253(uParam0, 67108864);
	func_253(uParam0, 134217728);
	func_253(uParam0, 16777216);
	func_253(uParam0, 33554432);
	func_178(uParam0, iParam1);
}

int func_93(var uParam0)
{
	return uParam0->f_29;
}

void func_94(var uParam0)
{
	uParam0->f_1++;
}

int func_95(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { func_281(&(uParam1->f_247)) };
	if (MISC::ABSF((vVar0.z - uParam0->f_3[0 /*3*/].f_2)) <= 0.6f)
	{
		vVar1 = { uParam1->f_247.f_13 };
		if (iParam2 == 0)
		{
			if (iParam3 == 1)
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				vVar3 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
			else
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				vVar3 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 1)
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				vVar3 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
			else
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				vVar3 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
		}
		return func_75(vVar1, vVar2, vVar3, 4.153f);
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_96(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(*uParam0) || func_286(uParam0, 16))
	{
		iVar0 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(*uParam0);
		if (iVar0 == 122789469)
		{
		}
		if ((((((((((((((((((((iVar0 == 1907048430 || iVar0 == 1187676648) || iVar0 == 282940568) || iVar0 == 435688960) || iVar0 == 762193613) || iVar0 == -145735917) || iVar0 == 233925547) || iVar0 == -2098049209) || iVar0 == 450003561) || iVar0 == 1394765188) || iVar0 == 125958708) || iVar0 == -1625995479) || iVar0 == -365631240) || iVar0 == -642658848) || iVar0 == 592446772) || iVar0 == 669292054) || iVar0 == 1144315879) || iVar0 == -1286696947) || iVar0 == 1849540536) && (iParam1 - uParam0->f_2) > 4) && iVar0 != 0)
		{
			func_99(uParam0, iParam1);
			uParam0->f_13 = { func_281(uParam0) };
			func_285(uParam0, 32);
			func_285(uParam0, 16);
			return 1;
		}
		if (func_286(uParam0, 16) && (iParam1 - uParam0->f_2) > 4)
		{
			func_285(uParam0, 16);
			func_99(uParam0, iParam1);
			uParam0->f_13 = { func_281(uParam0) };
			func_285(uParam0, 32);
			return 1;
		}
		if (SYSTEM::VDIST2(*uParam2, func_281(uParam0)) > (26.75f * 26.75f))
		{
			return 1;
		}
	}
	if (func_98(uParam0) > 5f)
	{
		func_97(uParam0);
		func_276(uParam0, 128);
		return 1;
	}
	return 0;
}

void func_97(var uParam0)
{
	uParam0->f_6 = 0f;
}

float func_98(var uParam0)
{
	return uParam0->f_6;
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_100(var uParam0)
{
	return uParam0->f_281;
}

void func_101(var uParam0)
{
	func_178(uParam0, 2048);
	func_178(uParam0, 16384);
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_103(var uParam0, int iParam1)
{
	return func_255(uParam0->f_2, iParam1);
}

int func_104(var uParam0)
{
	return uParam0->f_3;
}

int func_105(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	int iVar28;
	
	bVar6 = (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && !ENTITY::IS_ENTITY_ATTACHED(uParam1->f_247));
	uVar7 = func_91(&(uParam1->f_247));
	uVar8 = func_89(&(uParam1->f_247));
	iVar9 = func_284(&(uParam1->f_247));
	uVar10 = func_90(&(uParam1->f_247));
	vVar11 = { func_281(&(uParam1->f_247)) };
	vVar12 = { uParam1->f_247.f_10 };
	if (bVar6 && iParam3 != iParam4)
	{
		if (!func_103(uParam0, 32768))
		{
			func_173(uParam0, uParam1, &vVar11, &vVar12, &uVar7, &uVar10, &uVar8, &iVar9);
		}
		else if (func_103(uParam0, 32768))
		{
			func_168(uParam0, uParam1, &vVar11, &vVar12, &uVar7, &uVar10, &uVar8, &iVar9);
		}
	}
	if (func_226(&(uParam0->f_4), 32))
	{
		func_167(uParam0);
		if (func_166(uParam0) >= func_165(uParam0))
		{
			func_164(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_281(&(uParam1->f_247)), bParam7);
			func_215(&(uParam0->f_4), 32);
			func_215(&(uParam0->f_4), 8);
			func_163(uParam0);
		}
	}
	if (uParam0->f_31 != 4 && MISC::GET_GAME_TIMER() > func_162(uParam0))
	{
		bVar0 = PAD::IS_CONTROL_PRESSED(0, 223);
		bVar2 = PAD::IS_CONTROL_PRESSED(0, 224);
		bVar3 = PAD::IS_CONTROL_PRESSED(0, 225);
		bVar1 = PAD::IS_CONTROL_PRESSED(0, 222);
		if (((PAD::IS_CONTROL_JUST_PRESSED(0, 223) || PAD::IS_CONTROL_JUST_PRESSED(0, 224)) || PAD::IS_CONTROL_JUST_PRESSED(0, 225)) || PAD::IS_CONTROL_JUST_PRESSED(0, 222))
		{
			if (func_161(uParam0))
			{
				func_57(uParam0, 1);
			}
			if (func_160(uParam1, uParam0, bVar6))
			{
				func_57(uParam0, 8);
			}
			vVar13 = { vVar12 };
			vVar13.z = 0f;
			vVar14 = { uParam0->f_40 };
			vVar14.z = 0f;
			if (func_68(vVar13, vVar14) < 0f)
			{
				func_57(uParam0, 16);
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() > func_162(uParam0))
	{
		if (SYSTEM::VDIST2(func_281(&(uParam1->f_247)), uParam0->f_37) > (0f * 0f))
		{
			func_159(uParam0, uParam1, &bVar0, &bVar1);
		}
	}
	if (((uParam0->f_31 != 4 && func_103(uParam0, 512)) && func_158(uParam0) > 0.95f) && func_74(uParam0) == 75)
	{
		func_275(uParam0, 512);
		func_157(uParam0);
	}
	else if (func_103(uParam0, 512))
	{
		func_156(uParam0);
		if ((bVar0 || bVar2) || bVar3)
		{
			func_155(uParam0);
		}
		else
		{
			func_55(uParam0);
		}
	}
	if (((bVar0 || bVar1) || bVar2) || bVar3)
	{
		if ((func_74(uParam0) == 75 && !func_103(uParam0, 512)) && !func_103(uParam0, 4096))
		{
			func_57(uParam0, 512);
			if (bVar0)
			{
				func_228(uParam0, 0);
			}
			else if (bVar1)
			{
				func_228(uParam0, 2);
			}
			else if (bVar2)
			{
				func_228(uParam0, 3);
			}
			else if (bVar3)
			{
				func_228(uParam0, 1);
			}
			if (uParam0->f_31 != 4)
			{
				vVar16 = { func_86(uParam0->f_37, &(uParam1->f_189), func_281(&(uParam1->f_247)), uParam1->f_247.f_10, uParam1->f_1658, func_91(&(uParam1->f_247)), func_90(&(uParam1->f_247)), func_89(&(uParam1->f_247)), &fVar15) };
				func_80(&(uParam0->f_4), func_81(uParam0, &(uParam1->f_303), vVar16, uParam1->f_189.f_29.f_2, fVar15));
			}
		}
		if (uParam0->f_31 != 4 && bVar0)
		{
			if (func_103(uParam0, 1))
			{
				func_154(uParam0);
			}
		}
		else if (!bVar0)
		{
			func_153(uParam0);
		}
		if (func_152(uParam0))
		{
			PAD::SET_PAD_SHAKE(0, 50, 85);
		}
	}
	else
	{
		if (func_103(uParam0, 4096) && MISC::GET_GAME_TIMER() > func_162(uParam0))
		{
			func_275(uParam0, 4096);
		}
		func_153(uParam0);
	}
	if (iParam3 != iParam4 && ((func_103(uParam0, 512) && uParam0->f_31 != 4) || uParam0->f_31 == 4))
	{
		if (func_151(uParam0, vVar11, bVar6))
		{
			vVar17 = { func_69(&(uParam0->f_4)) };
			iVar4 = func_149(uParam0, uParam1, &(uParam1->f_303), &(uParam1->f_535), &(uParam1->f_1583), &vVar17, &iVar19, &uVar18);
			if ((iVar4 != 75 && iVar4 != 76) && (uParam0->f_31 == 4 || (uParam0->f_31 != 4 && func_103(uParam0, 512))))
			{
				if (!func_226(&(uParam0->f_4), 8) && !func_226(&(uParam0->f_4), 1))
				{
					func_148(&(uParam0->f_4));
					func_232(uParam0, iVar4);
					func_147(uParam0, iVar19);
					func_79(&(uParam0->f_4), 1);
					func_146(uParam0, MISC::GET_FRAME_COUNT() + 2);
					if (uParam0->f_31 == 4)
					{
						func_144(uParam0, &(uParam1->f_189), uParam1[iParam3 /*94*/]);
						func_57(uParam0, 512);
					}
				}
			}
			else if (iVar4 == 75 && func_143(uParam0, uParam1[iParam3 /*94*/], &(uParam1->f_247), uParam1->f_189.f_29, &fVar5))
			{
				vVar11 = { func_281(&(uParam1->f_247)) };
				if (fVar5 > 0f)
				{
					iVar4 = func_138(uParam0, &(uParam1->f_303), &(uParam1->f_535), &vVar11, &uVar18);
					func_232(uParam0, iVar4);
				}
				func_137(uParam0, MISC::GET_GAME_TIMER() + 1000);
				if (iVar4 == 75 || fVar5 <= 0f)
				{
					TASK::CLEAR_PED_TASKS(func_263(uParam0));
					func_136(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, vVar11, bParam7);
					func_275(uParam0, 512);
				}
				if (fVar5 < 5f)
				{
					iVar20 = 0;
					fVar21 = func_68(uParam1->f_1583[iVar20 /*3*/] - uParam0->f_37, uParam0->f_40);
					while (iVar20 < 23 && fVar21 > 0f)
					{
						iVar20++;
						fVar21 = func_68(uParam1->f_1583[iVar20 /*3*/] - uParam0->f_37, uParam0->f_40);
					}
					fVar22 = SYSTEM::TO_FLOAT(func_14(uParam1->f_535[iVar4 /*12*/].f_3));
					iVar23 = (SYSTEM::FLOOR((uParam1->f_535[iVar4 /*12*/].f_1 * fVar22)) - iVar20);
					func_147(uParam0, iVar23);
					func_79(&(uParam0->f_4), 1);
				}
			}
			func_80(&(uParam0->f_4), vVar17);
		}
		else if (uParam0->f_31 != 4 && func_166(uParam0) >= (func_165(uParam0) / 2f))
		{
			if (func_103(uParam0, 512))
			{
				func_164(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_281(&(uParam1->f_247)), bParam7);
			}
		}
	}
	if (func_132(uParam0, &(uParam1->f_247), uParam1->f_189.f_29, bVar6))
	{
		iVar28 = (1 - iParam4);
		vVar11 = { func_281(&(uParam1->f_247)) };
		if (func_51(uParam0) == 2)
		{
			func_214(&(uParam1->f_247));
			if (func_131(uParam1[iVar28 /*94*/], &(uParam1->f_189), uParam1->f_1661))
			{
				bVar24 = true;
			}
			else
			{
				bVar25 = true;
				func_228(uParam0, 5);
			}
		}
		else if ((uParam0->f_31 != 4 && func_152(uParam0)) && func_161(uParam0))
		{
			func_130(uParam0);
			func_275(uParam0, 1);
			func_153(uParam0);
			bVar27 = true;
		}
		else if (func_129(uParam0, &(uParam1->f_189), &(uParam1->f_1661), vVar11.z, func_284(&(uParam1->f_247))))
		{
			bVar26 = true;
		}
		if (func_128(&(uParam1->f_247), &(uParam1->f_189), uParam0, uParam1[iVar28 /*94*/]))
		{
			func_276(&(uParam1->f_247), 32);
		}
		func_106(uParam0, uParam1, iParam4, bVar26, bVar27, bVar24, bVar25);
		return 1;
	}
	return 0;
}

void func_106(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	func_127(&iVar0, &iVar1, &iVar2, &iVar2, 1, 1);
	if (uParam0->f_31 != 4)
	{
		if (func_51(uParam0) == 1)
		{
			func_126(&(uParam1->f_247), 1);
		}
		else if (func_51(uParam0) == 3)
		{
			func_126(&(uParam1->f_247), 2);
		}
		else
		{
			func_214(&(uParam1->f_247));
		}
	}
	else if ((func_51(uParam0) != 2 && func_51(uParam0) != 5) && !bParam3)
	{
		func_126(&(uParam1->f_247), func_125(uParam0->f_4.f_20));
	}
	vVar3 = { func_119(uParam0, uParam1, iVar0, iParam2, func_281(&(uParam1->f_247)), bParam3, bParam4, bParam5, bParam6) };
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && ENTITY::IS_ENTITY_ATTACHED(uParam1->f_247))
	{
		ENTITY::DETACH_ENTITY(uParam1->f_247, 1, true);
	}
	func_112(uParam1, vVar3);
	func_231(uParam0);
	func_215(&(uParam0->f_4), 4);
	func_57(uParam0, 4096);
	func_157(uParam0);
	func_107(uParam0, &(uParam1->f_247), bParam3, bParam4, bParam5, bParam6);
	iVar2 = (1 - iParam2);
	func_215(&((uParam1[iVar2 /*94*/])->f_4), 2);
	func_215(&((uParam1[iVar2 /*94*/])->f_4), 1);
	func_228(uParam1[iVar2 /*94*/], 0);
	func_147(uParam0, 0);
}

void func_107(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_44(func_263(uParam0)) == 17 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
	{
		func_108(uParam0, "TENNIS_EXHERT", func_111(uParam0), 9);
	}
	bVar1 = (bParam5 || bParam4);
	if (bParam2 || bParam3)
	{
		if (func_90(uParam1) == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_263(uParam0), 0, false, 0);
		}
		else if (func_90(uParam1) == 2)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_BACKSLICE_MASTER", "TENNIS_NPC_SMASH_BACKSLICE_MASTER"), func_263(uParam0), 0, false, 0);
		}
		else if (func_90(uParam1) == 1)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_263(uParam0), 0, false, 0);
		}
		iVar0 = 100;
	}
	else if (bVar1)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_LOB_MASTER", "TENNIS_NPC_LOB_MASTER"), func_263(uParam0), 0, false, 0);
		iVar0 = 60;
	}
	else
	{
		if (func_90(uParam1) == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_FOREARM_MASTER", "TENNIS_NPC_FOREARM_MASTER"), func_263(uParam0), 0, false, 0);
		}
		else if (func_90(uParam1) == 2)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_BACKSLICE_MASTER", "TENNIS_NPC_BACKSLICE_MASTER"), func_263(uParam0), 0, false, 0);
		}
		else if (func_90(uParam1) == 1)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_31 != 4, "TENNIS_PLYR_TOPSPIN_MASTER", "TENNIS_NPC_TOPSPIN_MASTER"), func_263(uParam0), 0, false, 0);
		}
		iVar0 = 80;
	}
	if (uParam0->f_31 != 4)
	{
		PAD::SET_PAD_SHAKE(0, iVar0, 256);
	}
}

void func_108(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (!PED::IS_PED_INJURED(func_263(uParam0)))
	{
		func_109(func_263(uParam0), sParam1, &sParam2, iParam10);
	}
}

void func_109(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_110(iParam3), 0);
}

int func_110(int iParam0)
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

struct<8> func_111(var uParam0)
{
	return uParam0->f_86;
}

void func_112(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !func_273(&(uParam0->f_247)))
		{
			func_272(&(uParam0->f_247));
			func_118(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { vParam1 };
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_247, true) };
		if (vVar0.z < uParam0->f_189.f_29.f_2)
		{
			vVar0.z = uParam0->f_189.f_29.f_2;
		}
		func_274(&(uParam0->f_247), vVar0);
		uParam0->f_247.f_16 = { func_281(&(uParam0->f_247)) };
		func_117(&(uParam0->f_247), MISC::GET_FRAME_COUNT() + 5);
		func_116(&(uParam0->f_247));
		func_114(&(uParam0->f_247), 1);
		func_99(&(uParam0->f_247), func_100(uParam0));
		func_113(uParam0->f_247, 1);
	}
	func_285(&(uParam0->f_247), 4);
	func_285(&(uParam0->f_247), 16);
}

void func_113(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((ENTITY::IS_ENTITY_VISIBLE(iParam0) && !bParam1) || (!ENTITY::IS_ENTITY_VISIBLE(iParam0) && bParam1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, 0);
			OBJECT::_0xB2D0BDE54F0E8E5A(iParam0, bParam1);
		}
	}
}

void func_114(var uParam0, bool bParam1)
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		vVar0 = { func_115(bParam1, func_281(uParam0), ENTITY::GET_ENTITY_COORDS(*uParam0, true)) };
	}
	uParam0->f_27 = { vVar0 };
	uParam0->f_30 = { vVar0 };
	uParam0->f_25 = 0f;
	uParam0->f_26 = 0f;
}

Vector3 func_115(bool bParam0, vector3 vParam1, vector3 vParam2)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_116(var uParam0)
{
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	func_97(uParam0);
}

void func_117(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_118(var uParam0)
{
	func_276(uParam0, 1);
}

Vector3 func_119(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	
	fVar1 = 8f;
	fVar2 = 7.2f;
	fVar3 = 5.5f;
	fVar4 = -1.5f;
	fVar5 = 0.9f;
	fVar6 = (30f * func_124(uParam0));
	fVar7 = fVar6;
	vVar8 = { vParam4 };
	vVar9 = { MISC::_0x21C235BC64831E5A(vVar8, uParam1->f_189.f_32[0 /*3*/], uParam1->f_189.f_32[1 /*3*/], 0) };
	fVar10 = SYSTEM::VDIST(vVar8, vVar9);
	fVar11 = (SYSTEM::VMAG(uParam1->f_189.f_3[3 /*3*/] - uParam1->f_189.f_3[0 /*3*/]) / 2f);
	fVar12 = (fVar10 / fVar11);
	if (func_286(&(uParam1->f_247), 64))
	{
		bParam5 = false;
		bParam6 = false;
		bParam7 = true;
		func_228(uParam0, 2);
	}
	if (bParam5)
	{
		fVar6 = 45f;
		fVar1 = 15f;
		fVar2 = 0f;
		fVar3 = 7.5f;
		fVar4 = -2f;
	}
	else if (bParam6)
	{
		fVar6 = (fVar6 + 10f);
	}
	else if (bParam7)
	{
		fVar2 = 15f;
		fVar3 = 12.5f;
		fVar4 = 1.38f;
		fVar5 = func_123(8f, 15f, fVar12);
		fVar7 = 14.35f;
		fVar1 = 12.325f;
		fVar6 = func_123(15f, 30f, fVar12);
	}
	else if (bParam8)
	{
		fVar6 = 27.55f;
		fVar7 = 7f;
		fVar4 = 0f;
		fVar1 = 3f;
		fVar5 = 1.58f;
	}
	fVar13 = (vVar8.z - uParam1->f_189.f_29.f_2);
	fVar14 = (fVar13 / 2f);
	fVar15 = func_123(fVar6, fVar7, fVar14);
	fVar16 = func_123(fVar15, fVar6, fVar12);
	fVar17 = func_123(fVar1, fVar16, fVar12);
	fVar18 = func_123(fVar17, fVar16, fVar14);
	if (uParam0->f_31 != 4)
	{
		vVar0 = { func_122(uParam0, &(uParam1->f_189), vVar8, iParam2) };
	}
	else
	{
		iVar19 = (1 - iParam3);
		vVar0 = { func_120(uParam0, uParam1, &(uParam1->f_247.f_16), &((uParam1[iVar19 /*94*/])->f_37), iParam3) };
	}
	fVar20 = func_123(fVar2, fVar3, fVar12);
	fVar21 = func_123(fVar4, fVar5, fVar12);
	vVar0.z = func_123(fVar20, fVar21, fVar14);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fVar18, fVar18, fVar18) };
	return vVar0;
}

Vector3 func_120(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = func_49(uParam0->f_1 == 0, 3, 1);
	iVar1 = func_49(uParam0->f_1 == 0, 2, 0);
	iVar2 = (1 - iParam4);
	if (uParam0->f_4.f_20 == 0 || func_286(&(uParam1->f_247), 64))
	{
		vVar4 = { FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) * uParam0->f_43 };
		vVar3 = { *uParam2 + vVar4 - uParam0->f_37 };
		if (func_286(&(uParam1->f_247), 64))
		{
			func_285(&(uParam1->f_247), 64);
		}
	}
	else if (uParam0->f_4.f_20 == 1)
	{
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 1.15f);
		vVar8 = { uParam1->f_189.f_3[iVar1 /*3*/] - uParam1->f_189.f_3[iVar0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		if (SYSTEM::VDIST2(*uParam3, uParam1->f_189.f_3[iVar0 /*3*/]) > SYSTEM::VDIST2(*uParam3, uParam1->f_189.f_3[iVar1 /*3*/]))
		{
			vVar6 = { uParam1->f_189.f_3[iVar0 /*3*/] };
			vVar7 = { vVar6 + vVar8 };
		}
		else
		{
			vVar6 = { uParam1->f_189.f_3[iVar0 /*3*/] + vVar8 };
			vVar7 = { uParam1->f_189.f_3[iVar1 /*3*/] };
		}
		vVar9 = { func_121(vVar6, vVar7, fVar5) };
		vVar3 = { vVar9 - func_281(&(uParam1->f_247)) };
	}
	else if (uParam0->f_4.f_20 == 2)
	{
		bVar12 = false;
		fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], *uParam3);
		fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], *uParam3);
		fVar15 = MISC::ABSF((fVar13 - fVar14));
		fVar16 = func_123(0.75f, 0.05f, (fVar15 / 90f));
		fVar17 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		switch (func_51(uParam0))
		{
			case 0:
				vVar11 = { uParam0->f_40 * Vector(-1f, -1f, -1f) };
				break;
			
			case 1:
				vVar11 = { uParam0->f_40 * Vector(-2f, -2f, -2f) };
				break;
			
			case 3:
				vVar11 = { uParam0->f_40 * Vector(0f, 0f, 0f) };
				break;
		}
		if (fVar17 < fVar16 && func_226(&(uParam0->f_4), 128))
		{
			bVar12 = true;
			func_127(&iVar18, &iVar19, &iVar19, &iVar19, 1, 1);
			if (iVar18 > 15)
			{
				iVar19 = func_49(uParam0->f_1 == 0, 2, 0);
				vVar10 = { uParam1->f_189.f_3[iVar19 /*3*/] + vVar11 };
			}
			else if (iVar18 < -15)
			{
				iVar19 = func_49(uParam0->f_1 == 0, 3, 1);
				vVar10 = { uParam1->f_189.f_3[iVar19 /*3*/] + vVar11 };
			}
			else
			{
				bVar12 = false;
			}
		}
		if (fVar13 > fVar14 && !bVar12)
		{
			if (uParam0->f_1 == 0)
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				if (func_64(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[3 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[3 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[3 /*3*/] + vVar11 };
				}
			}
			else
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				if (func_64(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[0 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[0 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[0 /*3*/] + vVar11 };
				}
			}
		}
		else if (!bVar12)
		{
			if (uParam0->f_1 == 0)
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				if (func_64(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[2 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[2 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[2 /*3*/] + vVar11 };
				}
			}
			else
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				if (func_64(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[1 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[1 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[1 /*3*/] + vVar11 };
				}
			}
		}
		vVar3 = { vVar10 - func_281(&(uParam1->f_247)) };
	}
	else
	{
		vVar3 = { *uParam2 - uParam0->f_37 };
	}
	return vVar3;
}

Vector3 func_121(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return FtoV((1f - fParam2)) * vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1;
}

Vector3 func_122(var uParam0, var uParam1, vector3 vParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	vector3 vVar9;
	
	vVar1 = { 0f, 0f, 0f };
	vVar2 = { 0f, 0f, 0f };
	iVar3 = func_49(uParam0->f_1 == 0, 3, 1);
	iVar4 = func_49(uParam0->f_1 == 0, 2, 0);
	vVar5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	if (!func_75(vParam2, uParam1->f_3[0 /*3*/] + vVar5, uParam1->f_3[3 /*3*/] + vVar5, func_76(uParam1)))
	{
		fVar6 = func_123(0.4f, 1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
		if (func_68(uParam0->f_43, uParam0->f_37 - uParam1->f_3[0 /*3*/]) < 0f)
		{
			vVar1 = { uParam0->f_43 * Vector(fVar6, fVar6, fVar6) };
		}
		if (func_68(uParam0->f_43, uParam0->f_37 - uParam1->f_3[1 /*3*/]) >= 0f)
		{
			vVar2 = { uParam0->f_43 * Vector(fVar6, fVar6, fVar6) * Vector(-1f, -1f, -1f) };
		}
	}
	vVar7 = { MISC::_0x21C235BC64831E5A(uParam0->f_37, uParam1->f_3[iVar3 /*3*/], uParam1->f_3[iVar4 /*3*/], 1) };
	if (MISC::ABSI(iParam3) > 15)
	{
		if (iParam3 > 0)
		{
			fVar8 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(128));
			vVar9 = { func_121(vVar7, uParam1->f_3[iVar4 /*3*/] + vVar2, fVar8) };
		}
		else
		{
			fVar8 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(-128));
			vVar9 = { func_121(vVar7, uParam1->f_3[iVar3 /*3*/] + vVar1, fVar8) };
		}
		vVar0 = { vVar9 - vParam2 };
	}
	else
	{
		vVar0 = { vVar7 - vParam2 };
	}
	return vVar0;
}

float func_123(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_124(var uParam0)
{
	return uParam0->f_66;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.2f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.6f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_126(var uParam0, int iParam1)
{
	uParam0->f_22 = iParam1;
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_CONTROL_NORMAL(0, 221);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 218);
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 219);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 220);
		fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 221);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 218);
		fVar1 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 219);
		fVar2 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 220);
		fVar3 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 221);
	}
	*iParam0 = SYSTEM::ROUND((128f * fVar0));
	*iParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

int func_128(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam2->f_31 == 4)
	{
		return 0;
	}
	if (func_51(uParam3) != 2)
	{
		return 0;
	}
	if (func_51(uParam2) == 2)
	{
		return 0;
	}
	if (func_284(uParam0) >= 1)
	{
		return 0;
	}
	vVar0 = { func_281(uParam0) };
	fVar1 = (vVar0.z - uParam1->f_29.f_2);
	if (fVar1 < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_129(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_74(uParam0) == 72 || func_74(uParam0) == 73)
	{
		return 0;
	}
	fVar0 = (fParam3 - uParam1->f_3[0 /*3*/].f_2);
	bVar1 = (uParam0->f_31 != 4 || uParam0->f_4.f_20 > 0);
	bVar2 = iParam4 < 1;
	if (!bVar1)
	{
		return 0;
	}
	if (!bVar2)
	{
		return 0;
	}
	if (!func_131(uParam0, uParam1, *uParam2))
	{
		return 0;
	}
	if (fVar0 < 0.8f)
	{
		return 0;
	}
	return 1;
}

void func_130(var uParam0)
{
	uParam0->f_63 = 0f;
}

bool func_131(var uParam0, var uParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar0 = { uParam1->f_16[0 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_16[3 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	uVar2 = func_75(uParam0->f_37, vVar0, vVar1, func_76(uParam1));
	return uVar2;
}

int func_132(var uParam0, var uParam1, vector3 vParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	
	if (!bParam3)
	{
		return 0;
	}
	if (func_74(uParam0) == 75)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(func_263(uParam0)) && MISC::_0xE95B0C7D5BA3B96B(func_263(uParam0)))
	{
		return 0;
	}
	if (func_135(uParam0) > MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_103(uParam0, 1024))
	{
		return 0;
	}
	if (!func_103(uParam0, 512))
	{
		return 0;
	}
	if (func_103(uParam0, 8))
	{
		return 0;
	}
	if (func_226(&(uParam0->f_4), 16))
	{
		return 0;
	}
	vVar0 = { func_281(uParam1) };
	if (func_68(uParam0->f_40, vVar0 - vParam2) > 0f)
	{
		return 0;
	}
	fVar1 = 2f;
	if (func_74(uParam0) == 72 || func_74(uParam0) == 73)
	{
		fVar1 = 0.45f;
	}
	else if (func_15(uParam0) > 5)
	{
		fVar1 = 1.5f;
	}
	fVar2 = SYSTEM::VDIST2(vVar0, func_134(uParam0));
	if (fVar2 > (fVar1 * fVar1))
	{
		return 0;
	}
	vVar3 = { func_134(uParam0) };
	vVar4 = { vVar0 - vVar3 };
	fVar5 = func_68(uParam0->f_43, vVar4);
	fVar6 = func_68(uParam0->f_40, vVar4);
	fVar7 = func_68(0f, 0f, 1f, vVar4);
	vVar8 = { PED::GET_PED_BONE_COORDS(func_263(uParam0), 60309, 0f, 0f, 0f) };
	vVar9 = { vVar0 - vVar8 };
	fVar10 = func_68(uParam0->f_43, vVar9);
	fVar11 = (MISC::ABSF(fVar5) - MISC::ABSF(fVar10));
	fVar11 = (fVar11 * 0.3f);
	if (!func_133(uParam0->f_33, &vVar8, &(uParam0->f_40), &vVar0, &(uParam1->f_10)))
	{
		return 0;
	}
	if (MISC::ABSF(fVar5) > (0.65f + fVar11))
	{
		return 0;
	}
	if (fVar6 < -0.9f)
	{
		return 0;
	}
	if (fVar7 > 0.9f)
	{
		return 0;
	}
	func_274(uParam1, vVar0);
	ENTITY::SET_ENTITY_COORDS(*uParam1, vVar0, 1, false, 0, 1);
	return 1;
}

int func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar2, &uVar1, &vVar3, &vVar0);
		vVar0 = { vVar0 + vVar3 * Vector(0.4f, 0.4f, 0.4f) };
		fVar4 = MISC::GET_FRAME_TIME();
		*uParam3 = { *uParam3 + *uParam4 * Vector(fVar4, fVar4, fVar4) };
		vVar5 = { *uParam1 };
		fVar6 = func_68(*uParam3 - vVar5, *uParam2);
		bVar7 = fVar6 < 0.35f;
		if (bVar7)
		{
			fVar8 = func_68(*uParam4, *uParam2);
			if (fVar8 < 0f)
			{
				fVar9 = (fVar6 / fVar8);
				fVar9 = func_11(fVar9, 0f, fVar4);
				*uParam3 = { *uParam3 - *uParam4 * Vector(fVar9, fVar9, fVar9) };
				fVar10 = func_68(*uParam3 - vVar0, *uParam2);
				if (fVar10 < -0.1f)
				{
					*uParam3 = { *uParam3 - *uParam2 * Vector(fVar10, fVar10, fVar10) };
				}
			}
			else
			{
				*uParam3 = { *uParam3 - *uParam2 * Vector(fVar6, fVar6, fVar6) };
			}
		}
		return bVar7;
	}
	return 0;
}

Vector3 func_134(var uParam0)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uParam0->f_33);
		ENTITY::GET_ENTITY_MATRIX(uParam0->f_33, &uVar2, &uVar1, &vVar3, &vVar0);
		vVar0 = { vVar0 + vVar3 * Vector(0.4f, 0.4f, 0.4f) };
	}
	return vVar0;
}

int func_135(var uParam0)
{
	return uParam0->f_56;
}

void func_136(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam7)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;
	
	if (!func_103(uParam1, 1024))
	{
		fVar0 = func_68(uParam1->f_43, vParam6 - uParam1->f_37);
		iVar1 = func_263(uParam1);
		sVar2 = "mini@tennis";
		sVar3 = func_193(fVar0 > 0f, "react_ball_out", "react_ball_out_lt");
		bVar4 = false;
		TASK::CLEAR_PED_TASKS(iVar1);
		MISC::_0xE266ED23311F24D4(iVar1, sVar2, sVar3, 0f, 1f, 1);
		func_57(uParam1, 1024);
		func_79(&(uParam1->f_4), 16);
		func_7(uParam1, MISC::GET_GAME_TIMER() + 2442);
		if ((1 && !func_226(&((uParam0[iParam3 /*94*/])->f_4), 256)) && MISC::GET_GAME_TIMER() > func_252(uParam0[iParam3 /*94*/]))
		{
			iParam5 = (1 - iParam5);
			if (bParam7)
			{
				bVar4 = (((*uParam2)[0 /*8*/] + (*uParam2)[1 /*8*/]) + 1 % 6) == false;
				if (MISC::IS_BIT_SET(((*uParam2)[0 /*8*/] + (*uParam2)[1 /*8*/]) + 1, 0) || bVar4)
				{
					iParam5 = 1;
					iParam4 = (1 - iParam4);
				}
			}
			else if (uParam0->f_1657 == 1)
			{
				if (((*uParam2)[0 /*8*/] >= 4 && ((*uParam2)[0 /*8*/] - (*uParam2)[1 /*8*/]) >= 2) || ((*uParam2)[1 /*8*/] >= 4 && ((*uParam2)[1 /*8*/] - (*uParam2)[0 /*8*/]) >= 2))
				{
					iParam4 = (1 - iParam4);
				}
			}
			if (iParam3 == iParam4)
			{
				func_79(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_225(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0, 0, 0, 1, bVar4, 0);
			}
			else
			{
				func_79(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_216(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0, 1, bVar4, 0, 0);
			}
		}
	}
}

void func_137(var uParam0, var uParam1)
{
	uParam0->f_65 = uParam1;
}

int func_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	var uVar14;
	float fVar15;
	float fVar16;
	
	iVar0 = 75;
	fVar1 = 1000f;
	MISC::_0xF56DFB7B61BE7276(*uParam3, *uParam4, uParam0->f_37, uParam0->f_40, &fVar2);
	fVar5 = func_324(uParam0->f_31 != 4, 0.5f, 1.2f);
	if (fVar2 <= fVar5)
	{
		return 75;
	}
	vVar6 = { *uParam4 - *uParam3 * Vector(fVar2, fVar2, fVar2) };
	vVar7 = { *uParam3 + vVar6 };
	vVar7.z = uParam3->f_2;
	fVar8 = (vVar7.z - uParam0->f_37.f_2);
	if (fVar8 > 2f)
	{
		return 75;
	}
	iVar9 = 0;
	while (iVar9 < (77 - 1))
	{
		if (((uParam2[iVar9 /*12*/])->f_1 >= 0f && iVar9 != 72) && iVar9 != 73)
		{
			vVar3 = { func_84(uParam0, *(uParam1[iVar9 /*3*/])) };
			vVar4 = { uParam0->f_37 + vVar3 };
			fVar10 = SYSTEM::VDIST2(vVar4, vVar7);
			if (fVar10 < fVar1)
			{
				fVar1 = fVar10;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	vVar12 = { vVar7 + uParam0->f_40 };
	vVar13 = { vVar7 - uParam0->f_40 };
	if (iVar0 == 72)
	{
		iVar11 = func_142(uParam0, &vVar12, &vVar13, &vLocal_313, &vLocal_315, &vLocal_316, 0, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0)
		{
			func_141(uParam0, 0.5f);
			func_140(uParam0, 1f);
			func_139(uParam0, 2);
		}
		else
		{
			func_141(uParam0, fVar15);
			func_140(uParam0, fVar16);
			func_139(uParam0, iVar11);
			iVar0 = 75;
		}
	}
	else if (iVar0 == 73)
	{
		iVar11 = func_142(uParam0, &vVar12, &vVar13, &vLocal_309, &vLocal_311, &vLocal_312, 1, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0)
		{
			func_141(uParam0, 0.5f);
			func_140(uParam0, 1f);
			func_139(uParam0, 2);
		}
		else
		{
			func_141(uParam0, fVar15);
			func_140(uParam0, fVar16);
			func_139(uParam0, iVar11);
			iVar0 = 75;
		}
	}
	return iVar0;
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_52 = iParam1;
}

void func_140(var uParam0, float fParam1)
{
	uParam0->f_71 = fParam1;
}

void func_141(var uParam0, float fParam1)
{
	uParam0->f_70 = fParam1;
}

int func_142(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	
	fVar0 = 0f;
	MISC::_0xF56DFB7B61BE7276(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
	if (fVar0 < 0f || fVar0 > 1f)
	{
		return 0;
	}
	vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
	vVar2 = { vVar1 - uParam0->f_37 };
	fVar3 = func_68(vVar2, uParam0->f_43);
	if (MISC::ABSF(fVar3) < 2.85f)
	{
		return 0;
	}
	uVar4 = vVar2.z;
	vVar5 = { fVar3, 0f, uVar4 };
	*fParam7 = MISC::_0x7F8F6405F4777AF6(vVar5, *uParam5, *uParam3, 0);
	*fParam8 = MISC::_0x7F8F6405F4777AF6(vVar5, func_115(bParam6, *uParam5, *uParam4), func_115(bParam6, *uParam4, *uParam5), 0);
	if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
	{
		return 0;
	}
	*uParam9 = { vVar1 };
	return 2;
}

int func_143(var uParam0, var uParam1, var uParam2, vector3 vParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	if (ENTITY::IS_ENTITY_ATTACHED(*uParam2))
	{
		return 0;
	}
	if (func_51(uParam1) == 2 && func_284(uParam2) <= 1)
	{
		return 0;
	}
	if (uParam0->f_31 != 4)
	{
		if (!func_103(uParam0, 512))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(uParam0->f_37, func_281(uParam2)) > (20f * 20f))
		{
			return 0;
		}
		if (func_226(&(uParam0->f_4), 1))
		{
			return 0;
		}
		*uParam4 = 0f;
		*uParam4 = func_68(uParam0->f_40, func_281(uParam2) - uParam0->f_37);
		vVar0 = { uParam2->f_10 };
		vVar1 = { func_281(uParam2) };
		vVar0.z = 0f;
		vVar1.z = vParam3.z;
		vVar2 = { vParam3 - vVar1 };
		fVar3 = func_68(vVar0, vVar2);
		if (*uParam4 > 2f && fVar3 < 0f)
		{
			return 0;
		}
		if (*uParam4 > 2f && *uParam4 < 7.6f)
		{
			return 0;
		}
		if (*uParam4 < 0.5f)
		{
			return 1;
		}
		if (((!PAD::IS_CONTROL_JUST_RELEASED(0, 223) && !PAD::IS_CONTROL_JUST_RELEASED(0, 224)) && !PAD::IS_CONTROL_JUST_RELEASED(0, 225)) && !PAD::IS_CONTROL_JUST_RELEASED(0, 222))
		{
			return 0;
		}
	}
	else
	{
		if (!func_226(&(uParam0->f_4), 64))
		{
			return 0;
		}
		if (func_226(&(uParam0->f_4), 1))
		{
			return 0;
		}
		if (func_226(&(uParam0->f_4), 16))
		{
			return 0;
		}
		fVar4 = func_68(uParam0->f_40, func_281(uParam2) - uParam0->f_37);
		if (fVar4 > 1.2f)
		{
			return 0;
		}
	}
	return 1;
}

void func_144(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	if (func_33(&(uParam0->f_4)) != 2)
	{
		if (func_145(&(uParam0->f_4)) == 3)
		{
			func_228(uParam0, 0);
		}
		else if (func_145(&(uParam0->f_4)) == 4)
		{
			func_228(uParam0, 2);
		}
		else
		{
			func_228(uParam0, 0);
		}
	}
	else
	{
		vVar5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		vVar6 = { uParam1->f_3[0 /*3*/] + vVar5 };
		vVar7 = { uParam1->f_3[3 /*3*/] + vVar5 };
		fVar0 = SYSTEM::VDIST(vVar6, uParam2->f_37);
		fVar1 = SYSTEM::VDIST(vVar7, uParam2->f_37);
		fVar2 = MISC::ABSF((fVar0 - fVar1));
		fVar3 = func_123(0.15f, 0.5f, (fVar2 / 570f));
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar4 < fVar3)
		{
			func_228(uParam0, 2);
		}
		else
		{
			func_228(uParam0, 0);
		}
	}
}

int func_145(var uParam0)
{
	return uParam0->f_19;
}

void func_146(var uParam0, var uParam1)
{
	uParam0->f_56 = uParam1;
}

void func_147(var uParam0, int iParam1)
{
	uParam0->f_53 = iParam1;
}

void func_148(var uParam0)
{
	float fVar0;
	float fVar1;
	
	switch (func_145(uParam0))
	{
		case 3:
		case 4:
			break;
		
		default:
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			fVar1 = func_324(uParam0->f_20 == 2, 0.6f, 0.75f);
			if (fVar0 < fVar1)
			{
				func_233(uParam0, 3);
			}
			else
			{
				func_233(uParam0, 4);
			}
			break;
	}
}

int func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	vector3 vVar28;
	vector3 vVar29;
	vector3 vVar30;
	float fVar31;
	float fVar32;
	int iVar33;
	float fVar34;
	vector3 vVar35;
	float fVar36;
	float fVar37;
	
	iVar0 = 75;
	fVar1 = 0.75f;
	fVar2 = 100f;
	MISC::_0xF56DFB7B61BE7276(*(uParam4[0 /*3*/]), *(uParam4[1 /*3*/]), uParam0->f_37, uParam0->f_40, &fVar6);
	vVar7 = { *(uParam4[1 /*3*/]) - *(uParam4[0 /*3*/]) * Vector(fVar6, fVar6, fVar6) };
	vVar8 = { *(uParam4[0 /*3*/]) + vVar7 };
	vVar9 = { vVar8 - uParam0->f_37 };
	fVar10 = func_68(vVar9, uParam0->f_43);
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 < 10)
	{
		if (iVar11 == -1 && (fVar10 - 0.2f) <= uParam1->f_1571[iVar13 + 1])
		{
			iVar11 = iVar13;
		}
		if (iVar12 == -1 && (fVar10 + 0.2f) <= uParam1->f_1571[iVar13 + 1])
		{
			iVar12 = iVar13;
		}
		iVar13++;
	}
	if (iVar11 == -1)
	{
		iVar11 = func_49(fVar10 > 0f, 9, 0);
	}
	if (iVar12 == -1)
	{
		iVar12 = func_49(fVar10 > 0f, 9, 0);
	}
	vVar15 = { uParam0->f_37 };
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		iVar13 = iVar11;
		while (iVar13 <= iVar12)
		{
			iVar17 = 0;
			while (iVar17 < 10)
			{
				iVar18 = uParam1->f_1460[iVar13 /*11*/][iVar17];
				iVar17++;
				if ((uParam3[iVar18 /*12*/])->f_1 >= 0f)
				{
					fVar19 = ((((uParam3[iVar18 /*12*/])->f_1 - (*uParam3)[iVar18 /*12*/]) * IntToFloat((uParam3[iVar18 /*12*/])->f_3)) * 0.03333334f);
					fVar20 = ((fVar19 - uParam1->f_247.f_33) / 0.03333334f);
					iVar21 = SYSTEM::FLOOR(fVar20);
					fVar22 = (fVar20 - SYSTEM::TO_FLOAT(iVar21));
					iVar3 = (iVar14 + iVar21) - 2;
					if (iVar3 < (*uParam4 - 2) && iVar3 >= 0)
					{
						if (iVar14 == 0 && (iVar18 == 72 || iVar18 == 73))
						{
							fVar24 = -1f;
							fVar25 = -1f;
							if (iVar18 == 72)
							{
								iVar23 = func_142(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &vLocal_313, &vLocal_315, &vLocal_316, 0, &fVar24, &fVar25, &vVar16);
							}
							else
							{
								iVar23 = func_142(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &vLocal_309, &vLocal_311, &vLocal_312, 1, &fVar24, &fVar25, &vVar16);
							}
							if (iVar23 != 0)
							{
								fVar26 = func_83(iVar18);
								if (fVar26 < fVar1)
								{
									fVar1 = fVar26;
									iVar0 = iVar18;
									func_141(uParam0, fVar24);
									func_140(uParam0, fVar25);
									func_139(uParam0, iVar23);
									vVar5 = { vVar16 };
								}
							}
						}
						else if (iVar18 != 72 && iVar18 != 73)
						{
							vVar4 = { func_84(uParam0, *(uParam2[iVar18 /*3*/])) };
							vVar27 = { vVar15 + vVar4 };
							vVar28 = { func_121(*(uParam4[iVar3 /*3*/]), *(uParam4[iVar3 + 1 /*3*/]), fVar22) };
							vVar29 = { vVar28 - vVar4 };
							vVar29.z = uParam0->f_37.f_2;
							vVar30 = { vVar27 - vVar28 };
							fVar31 = func_68(vVar30, uParam0->f_40);
							fVar32 = func_68(uParam0->f_40, func_281(&(uParam1->f_247)) - uParam0->f_37);
							iVar33 = 0;
							while (((fVar31 > 0f && (iVar3 - iVar33) > 2) && func_150(uParam0)) && fVar32 > 0f)
							{
								iVar33++;
								vVar28 = { MISC::_0x21C235BC64831E5A(vVar27, *(uParam4[(iVar3 - iVar33) /*3*/]), *(uParam4[((iVar3 - iVar33) - 1) /*3*/]), 1) };
								vVar30 = { vVar27 - vVar28 };
								fVar31 = func_68(vVar30, uParam0->f_40);
							}
							if (MISC::ABSF(fVar31) > 0.3f)
							{
								fVar31 = (fVar31 * (0.3f / MISC::ABSF(fVar31)));
							}
							vVar30 = { vVar30 - uParam0->f_40 * Vector(fVar31, fVar31, fVar31) };
							fVar34 = SYSTEM::VMAG(vVar30);
							if (fVar34 < 0.15f)
							{
								fVar34 = 0f;
							}
							fVar34 = (fVar34 + func_83(iVar18));
							if (fVar34 < fVar1)
							{
								vVar35 = { uParam0->f_37 - vVar28 };
								fVar36 = func_68(vVar30, vVar35);
								if (fVar36 > 0f)
								{
									if (fVar34 > 0.25f)
									{
										fVar37 = (2.5f * (fVar34 - 0.25f));
										fVar34 = (fVar34 + fVar37);
									}
								}
							}
							if (fVar34 < fVar2)
							{
								fVar2 = fVar34;
								vVar5 = { vVar28 };
							}
							if (fVar34 < fVar1)
							{
								if (iVar14 > 0)
								{
								}
								fVar1 = fVar34;
								iVar0 = iVar18;
								*uParam5 = { vVar29 };
								*uParam6 = (iVar33 - iVar14);
								vVar5 = { vVar28 };
							}
						}
					}
				}
			}
			iVar13++;
		}
		*uParam7 = { vVar5 };
		if (fVar1 <= 0.4f)
		{
			return iVar0;
		}
		if (iVar0 != 75)
		{
			return iVar0;
		}
		if (uParam0->f_31 == 4)
		{
			return 75;
		}
		iVar14++;
	}
	return iVar0;
}

int func_150(var uParam0)
{
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	return 1;
}

int func_151(var uParam0, vector3 vParam1, bool bParam2)
{
	if (!bParam2)
	{
		return 0;
	}
	if (func_74(uParam0) != 75)
	{
		return 0;
	}
	if (SYSTEM::VDIST(uParam0->f_37, vParam1) > 100f)
	{
		return 0;
	}
	if (func_226(&(uParam0->f_4), 32))
	{
		return 0;
	}
	return 1;
}

bool func_152(var uParam0)
{
	return uParam0->f_64 > 0.5f;
}

void func_153(var uParam0)
{
	uParam0->f_64 = 0f;
}

void func_154(var uParam0)
{
	uParam0->f_64 = (uParam0->f_64 + MISC::GET_FRAME_TIME());
}

void func_155(var uParam0)
{
	uParam0->f_60 = (uParam0->f_60 + MISC::GET_FRAME_TIME());
}

void func_156(var uParam0)
{
	uParam0->f_61 = (uParam0->f_61 + MISC::GET_FRAME_TIME());
}

void func_157(var uParam0)
{
	uParam0->f_61 = 0f;
}

float func_158(var uParam0)
{
	return uParam0->f_61;
}

void func_159(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	
	*bParam2 = 0;
	*bParam3 = 0;
	switch (func_145(&(uParam0->f_4)))
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && func_284(&(uParam1->f_247)) > 0)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				fVar1 = func_324(uParam0->f_4.f_20 == 2, 0.6f, 0.75f);
				if (fVar0 < fVar1)
				{
					if (!func_226(&(uParam0->f_4), 2))
					{
						*bParam2 = 1;
						func_79(&(uParam0->f_4), 2);
					}
					func_233(&(uParam0->f_4), 3);
				}
				else
				{
					if (!func_226(&(uParam0->f_4), 2))
					{
						*bParam3 = 1;
						func_79(&(uParam0->f_4), 2);
					}
					func_233(&(uParam0->f_4), 4);
				}
			}
			break;
		
		case 3:
			*bParam2 = 1;
			break;
		
		case 4:
			*bParam3 = 1;
			break;
	}
}

int func_160(var uParam0, var uParam1, bool bParam2)
{
	if (func_68(uParam1->f_40, uParam0->f_247.f_10) > 0f)
	{
		return 0;
	}
	if (func_68(uParam1->f_40, uParam0->f_1583[1 /*3*/] - uParam1->f_37) > 0f)
	{
		return 0;
	}
	if (func_74(uParam1) != 75)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

bool func_161(var uParam0)
{
	return uParam0->f_63 > 3f;
}

int func_162(var uParam0)
{
	return uParam0->f_65;
}

void func_163(var uParam0)
{
	uParam0->f_68 = 0f;
}

int func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam7)
{
	if (!func_226(&(uParam1->f_4), 32))
	{
		return 0;
	}
	if (func_226(&(uParam1->f_4), 8))
	{
		return 0;
	}
	if (func_74(uParam1) != 75)
	{
		return 0;
	}
	func_136(uParam0, uParam1, uParam2, iParam3, iParam4, iParam5, vParam6, bParam7);
	func_233(&(uParam1->f_4), 5);
	func_79(&(uParam1->f_4), 8);
	func_215(&(uParam1->f_4), 32);
	return 1;
}

float func_165(var uParam0)
{
	return uParam0->f_69;
}

float func_166(var uParam0)
{
	return uParam0->f_68;
}

void func_167(var uParam0)
{
	uParam0->f_68 = (uParam0->f_68 + MISC::GET_FRAME_TIME());
}

void func_168(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	uParam1->f_247.f_33 = (uParam1->f_247.f_33 - MISC::GET_FRAME_TIME());
	while (uParam1->f_247.f_33 <= 0f)
	{
		uParam1->f_247.f_33 = (uParam1->f_247.f_33 + 0.03333334f);
		iVar0 = 0;
		while (iVar0 <= 22)
		{
			uParam1->f_1583[iVar0 /*3*/] = { uParam1->f_1583[iVar0 + 1 /*3*/] };
			iVar0++;
		}
		*uParam2 = { uParam1->f_1583[iVar0 /*3*/] };
		func_172(uParam0, uParam3, uParam4, uParam5, uParam6, iParam7);
		iVar1 = func_277(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (func_226(&(uParam0->f_4), 32) && func_166(uParam0) == 0f)
			{
				func_163(uParam0);
				func_171(uParam0, (SYSTEM::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()));
			}
		}
		if (!func_170(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { func_281(&(uParam1->f_247)) };
		}
		func_169(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	}
}

void func_169(var uParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	uParam0->f_78 = { vParam1 };
	uParam0->f_81 = uParam2;
	uParam0->f_82 = uParam3;
	uParam0->f_83 = uParam4;
	uParam0->f_84 = uParam5;
}

int func_170(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_171(var uParam0, float fParam1)
{
	uParam0->f_69 = fParam1;
}

void func_172(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { uParam0->f_78 };
	*uParam2 = uParam0->f_81;
	*uParam3 = uParam0->f_82;
	*uParam4 = uParam0->f_83;
	*uParam5 = uParam0->f_84;
}

void func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		iVar1 = func_277(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (func_226(&(uParam0->f_4), 32) && func_166(uParam0) == 0f)
			{
				func_163(uParam0);
				func_171(uParam0, (SYSTEM::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()));
			}
		}
		if (!func_170(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { func_281(&(uParam1->f_247)) };
		}
		iVar0++;
	}
	func_169(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	if (!func_103(uParam0, 32768))
	{
		func_57(uParam0, 32768);
		uParam1->f_247.f_33 = 0.03333334f;
	}
}

bool func_174(var uParam0)
{
	return uParam0->f_26;
}

int func_175(var uParam0)
{
	return uParam0->f_1;
}

void func_176(var uParam0, var uParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(func_263(uParam0)))
			{
				TASK::TASK_LOOK_AT_ENTITY(func_263(uParam0), *uParam1, -1, 6, 2);
			}
		}
		else if (!PED::IS_PED_INJURED(func_263(uParam0)))
		{
			TASK::TASK_CLEAR_LOOK_AT(func_263(uParam0));
		}
	}
}

void func_177(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_178(var uParam0, int iParam1)
{
	func_179(uParam0, iParam1);
}

void func_179(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_180(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (!bParam3)
	{
		if (((func_251(uParam0) > func_189(uParam1) && func_74(uParam2) == 75) && uParam0->f_1657 != 1) || (((func_251(uParam0) > func_189(uParam1) && func_74(uParam2) == 75) && uParam0->f_1657 == 1) && CAM::IS_SCREEN_FADED_IN()))
		{
			func_232(uParam2, 74);
			func_213(uParam0, 0);
		}
	}
	else if (func_191(2))
	{
		func_232(uParam2, 74);
		func_213(uParam0, 0);
	}
	if (func_103(uParam2, 4))
	{
		if (func_270(uParam1) == 1)
		{
			if (uParam2->f_1 == 0)
			{
				vVar5 = { uParam0->f_189.f_3[3 /*3*/] + uParam2->f_43 };
				vVar6 = { uParam0->f_189.f_3[3 /*3*/] };
			}
			else
			{
				vVar5 = { uParam0->f_189.f_3[1 /*3*/] + uParam2->f_43 };
				vVar6 = { uParam0->f_189.f_3[1 /*3*/] };
			}
		}
		else if (uParam2->f_1 == 0)
		{
			vVar5 = { uParam0->f_189.f_3[2 /*3*/] - uParam2->f_43 };
			vVar6 = { uParam0->f_189.f_3[2 /*3*/] };
		}
		else
		{
			vVar5 = { uParam0->f_189.f_3[0 /*3*/] - uParam2->f_43 };
			vVar6 = { uParam0->f_189.f_3[0 /*3*/] };
		}
		if (uParam0->f_1657 == 1)
		{
			iVar0 = 2;
		}
		else if (uParam2->f_4.f_20 == 0)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(2, 6);
			iVar0 = func_49(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.2f, 6, iVar7);
		}
		else if (uParam2->f_4.f_20 == 1)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			iVar0 = func_49(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f, 6, iVar7);
		}
		else if (uParam2->f_4.f_20 == 2)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		}
		vVar5 = { func_121(vVar6, vVar5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f)) };
		fVar2 = func_188(uParam2->f_37, vVar5);
		fVar3 = func_188(uParam2->f_37, uParam2->f_37 + uParam2->f_40);
		fVar4 = (fVar2 - fVar3);
		if (bParam3)
		{
			iVar0 = 2;
		}
		Var1 = { uParam0->f_282[iVar0 /*2*/] };
		*uParam2 = fVar4;
		func_228(uParam2, 6);
		if (iVar0 == 1 || iVar0 == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_1657 == 1, "TENNIS_AMB_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_263(uParam2), 0, false, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_193(uParam0->f_1657 == 1, "TENNIS_AMB_SERVE_MASTER", "TENNIS_NPC_SERVE_MASTER"), func_263(uParam2), 0, false, 0);
		}
		ENTITY::DETACH_ENTITY(uParam0->f_247, 0, true);
		func_181(uParam0, uParam2, &Var1);
		func_275(uParam2, 4);
		return 1;
	}
	return 0;
}

void func_181(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = *uParam1;
	vVar1 = { func_182(SYSTEM::TO_FLOAT(*uParam2), SYSTEM::TO_FLOAT(uParam2->f_1), fVar0, &(uParam1->f_40), &(uParam1->f_43)) };
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !func_273(&(uParam0->f_247)))
		{
			func_272(&(uParam0->f_247));
			func_118(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { vVar1 };
		func_274(&(uParam0->f_247), ENTITY::GET_ENTITY_COORDS(uParam0->f_247, true));
		uParam0->f_247.f_16 = { func_281(&(uParam0->f_247)) };
		func_117(&(uParam0->f_247), MISC::GET_FRAME_COUNT() + 5);
		func_116(&(uParam0->f_247));
		func_114(&(uParam0->f_247), 1);
		func_113(uParam0->f_247, 1);
	}
	func_285(&(uParam0->f_247), 4);
}

Vector3 func_182(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_187(*uParam3) };
	func_183(&vVar0, fParam2, 0f, 0f, 1f);
	vVar1 = { func_187(*uParam4) };
	func_183(&vVar0, fParam1, vVar1);
	vVar0 = { vVar0 * Vector(fParam0, fParam0, fParam0) };
	return vVar0;
}

void func_183(var uParam0, float fParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	
	vParam2 = { func_187(vParam2) };
	fVar0 = SYSTEM::COS(fParam1);
	fVar1 = SYSTEM::SIN(fParam1);
	*uParam0 = { func_186(*uParam0, vParam2) * Vector(fVar0, fVar0, fVar0) + func_185(vParam2, *uParam0) * Vector(fVar1, fVar1, fVar1) + func_184(*uParam0, vParam2) };
}

Vector3 func_184(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 * FtoV(func_68(vParam0, vParam1)) };
	return vVar0;
}

Vector3 func_185(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_186(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 - func_184(vParam0, vParam1) };
	return vVar0;
}

Vector3 func_187(vector3 vParam0)
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

float func_188(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_189(var uParam0)
{
	return uParam0->f_27;
}

void func_190(int iParam0)
{
	Global_105651 = (Global_105651 || iParam0);
}

bool func_191(int iParam0)
{
	return (Global_105651 && iParam0) != 0;
}

void func_192(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_263(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
		func_113(*uParam1, 1);
	}
}

char* func_193(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_194(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_59 == 2)
	{
		iVar0 = func_263(uParam0);
		iVar1 = func_44(iVar0);
		if (iVar1 == 145)
		{
			iVar1 = func_195(iVar0);
		}
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 2) || iVar0 == iVar2)
		{
			uParam0->f_59 = 1;
		}
		else if (PED::IS_PED_MALE(iVar0) && iVar1 != 14)
		{
			uParam0->f_59 = 1;
		}
		else
		{
			uParam0->f_59 = 0;
		}
	}
	return uParam0->f_59 == 1;
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 3;
		while (iVar0 <= (161 - 1))
		{
			if (func_196(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_196(int iParam0)
{
	if (!func_43(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_197(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247))
	{
		func_156(uParam0);
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 223) && !bParam4) || (func_158(uParam0) > 30f && uParam1->f_1657 == 4))
		{
			if ((((func_74(uParam0) == 74 && func_210(&(uParam0->f_73))) && !func_209(&(uParam0->f_73))) && func_208(&(uParam0->f_73)) > (1.1f + 1.25f)) && !func_103(uParam0, 64))
			{
				func_57(uParam0, 64);
				func_127(&iVar0, &iVar1, &iVar1, &iVar1, 1, 1);
				if (PAD::_IS_INPUT_JUST_DISABLED(2))
				{
					iVar0 = (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(2, 239) * 256f)) - 128);
				}
				func_207(uParam0, iVar0);
			}
			func_232(uParam0, 74);
			if (!func_210(&(uParam0->f_73)))
			{
				func_205(&(uParam0->f_73));
			}
			if (func_209(&(uParam0->f_73)))
			{
				func_205(&(uParam0->f_73));
				func_204(&(uParam0->f_73));
			}
		}
		if (func_103(uParam0, 4))
		{
			if (func_103(uParam0, 64))
			{
				if (func_203(uParam0) > 0.965f)
				{
					*uParam3 = { uParam1->f_282[0 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SMASH_MASTER", func_263(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 450, 256);
					if (func_203(uParam0) >= 0.995f && 1)
					{
						func_276(&(uParam1->f_247), 32);
						func_276(&(uParam1->f_247), 64);
					}
				}
				else if (func_203(uParam0) > 0.9f)
				{
					*uParam3 = { uParam1->f_282[1 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SMASH_MASTER", func_263(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 250, 256);
				}
				else if (func_203(uParam0) > 0.7f)
				{
					*uParam3 = { uParam1->f_282[2 /*2*/] };
					PAD::SET_PAD_SHAKE(0, 200, 256);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_263(uParam0), 0, false, 0);
				}
				else if (func_203(uParam0) > 0.45f)
				{
					*uParam3 = { uParam1->f_282[3 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_263(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 150, 256);
				}
				else if (func_203(uParam0) > 0.2f)
				{
					*uParam3 = { uParam1->f_282[4 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_263(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 100, 256);
				}
				else if (func_203(uParam0) >= 0f)
				{
					*uParam3 = { uParam1->f_282[5 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_263(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 70, 256);
				}
			}
			else
			{
				*uParam3 = { uParam1->f_282[6 /*2*/] };
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_263(uParam0), 0, false, 0);
				PAD::SET_PAD_SHAKE(0, 50, 256);
			}
			if (!func_201(uParam0, uParam1, iParam2, func_202(uParam0)))
			{
				*uParam3 = { uParam1->f_282[7 /*2*/] };
			}
			ENTITY::DETACH_ENTITY(uParam1->f_247, 0, true);
			func_181(uParam1, uParam0, uParam3);
			func_198(&(uParam0->f_73));
			func_275(uParam0, 64);
			func_228(uParam0, 0);
			func_55(uParam0);
			func_157(uParam0);
			return 1;
		}
		if (func_158(uParam0) > 30f || (PAD::IS_CONTROL_JUST_PRESSED(0, 223) && !bParam4))
		{
			func_157(uParam0);
		}
	}
	return 0;
}

void func_198(int iParam0)
{
	func_199(iParam0);
}

void func_199(int iParam0)
{
	if (func_210(iParam0))
	{
		if (!func_209(iParam0))
		{
			iParam0->f_2 = (func_200(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

float func_200(bool bParam0)
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

int func_201(var uParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	
	vVar1 = { 0f, 0f, 0f };
	fVar8 = 1f;
	vVar6 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_247, true) };
	if (MISC::ABSI(iParam3) > 125)
	{
		fVar9 = 2.5f;
		fVar10 = 0.5f;
		fVar11 = 0.75f;
		iVar12 = 0;
	}
	else
	{
		fVar9 = 0.55f;
		fVar10 = 0f;
		fVar11 = 0f;
		iVar12 = 1;
	}
	vVar5 = { func_187(uParam1->f_1661) };
	fVar7 = ((SYSTEM::TO_FLOAT(iParam3) + 128f) / 256f);
	if (uParam0->f_1 == 0)
	{
		if (iParam2 == 1)
		{
			vVar3 = { uParam1->f_189.f_16[3 /*3*/] - vVar5 * Vector(fVar9, fVar9, fVar9) };
			vVar4 = { uParam1->f_189.f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + vVar5 * Vector(fVar10, fVar10, fVar10) };
			vVar1 = { func_121(vVar3, vVar4, fVar7) };
			if (func_68(uParam0->f_43, vVar1 - vVar6) > 0f)
			{
				fVar8 = -1f;
			}
		}
		else if (iParam2 == 0)
		{
			vVar4 = { uParam1->f_189.f_16[2 /*3*/] + vVar5 * Vector(fVar9, fVar9, fVar9) };
			vVar3 = { uParam1->f_189.f_16[2 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - vVar5 * Vector(fVar11, fVar11, fVar11) };
			vVar1 = { func_121(vVar3, vVar4, fVar7) };
			if (func_68(uParam0->f_43, vVar1 - vVar6) < 0f)
			{
				fVar8 = -1f;
			}
		}
	}
	else if (iParam2 == 1)
	{
		vVar3 = { uParam1->f_189.f_16[1 /*3*/] + vVar5 * Vector(fVar9, fVar9, fVar9) };
		vVar4 = { uParam1->f_189.f_16[1 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - vVar5 * Vector(fVar10, fVar10, fVar10) };
		vVar1 = { func_121(vVar3, vVar4, fVar7) };
		if (func_68(uParam0->f_43, vVar1 - vVar6) > 0f)
		{
			fVar8 = -1f;
		}
	}
	else if (iParam2 == 0)
	{
		vVar4 = { uParam1->f_189.f_16[0 /*3*/] - vVar5 * Vector(fVar9, fVar9, fVar9) };
		vVar3 = { uParam1->f_189.f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + vVar5 * Vector(fVar11, fVar11, fVar11) };
		vVar1 = { func_121(vVar3, vVar4, fVar7) };
		if (func_68(uParam0->f_43, vVar1 - vVar6) < 0f)
		{
			fVar8 = -1f;
		}
	}
	vVar1.z = uParam0->f_37.f_2;
	vVar2 = { func_187(vVar1 - vVar6) };
	fVar0 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(uParam0->f_40, uParam0->f_40.f_1, vVar2.x, vVar2.y);
	fVar0 = (fVar0 * fVar8);
	*uParam0 = fVar0;
	if (iParam2 == 0)
	{
		*uParam0 = (*uParam0 * -1f);
	}
	return iVar12;
}

int func_202(var uParam0)
{
	return uParam0->f_76;
}

float func_203(var uParam0)
{
	return uParam0->f_60;
}

void func_204(int iParam0)
{
	if (func_210(iParam0))
	{
		if (func_209(iParam0))
		{
			iParam0->f_1 = (func_200(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

void func_205(int iParam0)
{
	func_206(iParam0, 0f);
}

void func_206(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_200(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_207(var uParam0, int iParam1)
{
	uParam0->f_76 = iParam1;
}

float func_208(var uParam0)
{
	if (func_210(uParam0))
	{
		if (func_209(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_200(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_209(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_210(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_211(var uParam0, var uParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_31 != 4)
	{
		if (!func_226(&(uParam0->f_4), 256) && !func_226(&(uParam0->f_4), 16))
		{
			if (func_74(uParam0) == 75)
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 223) || PAD::IS_CONTROL_JUST_PRESSED(0, 224)) || PAD::IS_CONTROL_JUST_PRESSED(0, 225)) || PAD::IS_CONTROL_JUST_PRESSED(0, 222))
				{
					vVar0 = { func_281(uParam1) - uParam0->f_37 };
					fVar1 = func_68(uParam0->f_43, vVar0);
					if (fVar1 >= 0f)
					{
						func_232(uParam0, 13);
					}
					else
					{
						func_232(uParam0, 1);
					}
					func_147(uParam0, 0);
					func_57(uParam0, 65536);
				}
			}
		}
	}
}

int func_212(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!PED::IS_PED_INJURED(func_263(uParam0[iParam1 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0[iParam1 /*94*/]), 242628503) != 7)
	{
		return 0;
	}
	else if ((!PED::IS_PED_INJURED(func_263(uParam0[iParam1 /*94*/])) && ((bParam4 || iParam3 == 4) || iParam3 == 1)) && !func_103(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam2)
		{
			func_27(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_259(func_263(uParam0[iParam1 /*94*/]), 1);
		PED::_0x2208438012482A1A(func_263(uParam0[iParam1 /*94*/]), 0, 0);
		func_57(uParam0[iParam1 /*94*/], 8192);
	}
	else if (func_103(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam2)
	{
		if (!PED::IS_PED_INJURED(func_263(uParam0[iParam1 /*94*/])) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(func_263(uParam0[iParam1 /*94*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(func_263(uParam0[iParam1 /*94*/])), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(func_263(uParam0[iParam1 /*94*/])))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(func_263(uParam0[iParam1 /*94*/]), "running");
			}
		}
	}
	return 1;
}

void func_213(var uParam0, int iParam1)
{
	uParam0->f_1672 = iParam1;
}

void func_214(var uParam0)
{
	uParam0->f_22 = 0;
}

void func_215(var uParam0, int iParam1)
{
	func_253(&(uParam0->f_25), iParam1);
}

void func_216(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	char* sVar8;
	
	if ((uParam0->f_31 != 4 && !PED::IS_PED_INJURED(func_263(uParam0))) && !bParam5)
	{
		func_230(uParam1->f_1657, 1);
	}
	if (!bParam5)
	{
		func_275(uParam0, 128);
	}
	func_215(&(uParam0->f_4), 4);
	func_215(&(uParam0->f_4), 2);
	func_232(uParam0, 75);
	if ((uParam0->f_31 == 4 && !bParam5) && uParam1->f_1657 != 1)
	{
		func_233(&(uParam0->f_4), 0);
		func_259(func_263(uParam0), 1);
	}
	switch (iParam2)
	{
		case 0:
			if (uParam0->f_31 == 4)
			{
				if (uParam0->f_1 != 0)
				{
					func_80(&(uParam0->f_4), uParam1->f_189.f_3[2 /*3*/]);
				}
				else
				{
					func_80(&(uParam0->f_4), uParam1->f_189.f_3[0 /*3*/]);
				}
			}
			break;
		
		case 1:
			if (uParam0->f_31 == 4)
			{
				if (uParam0->f_1 != 0)
				{
					func_80(&(uParam0->f_4), uParam1->f_189.f_3[3 /*3*/]);
				}
				else
				{
					func_80(&(uParam0->f_4), uParam1->f_189.f_3[1 /*3*/]);
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_32) && uParam0->f_36 == 75)
	{
		vVar1 = { func_268(&(uParam1->f_189), iParam2, uParam1->f_1661, uParam1->f_1658, 0, uParam0->f_1) };
		if (uParam0->f_31 == 4)
		{
			vVar1 = { vVar1 + uParam0->f_43 * FtoV(func_224(&(uParam0->f_4))) * FtoV(func_324(iParam2 == 1, 1f, -1f)) };
		}
		if ((uParam1->f_1657 != 1 && !bParam5) && !func_222(PLAYER::PLAYER_ID(), 0))
		{
			func_221(uParam1, iParam3, 1);
			ENTITY::SET_ENTITY_COORDS(uParam0->f_32, vVar1, 1, false, 0, 1);
			fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(-uParam1->f_1658, -uParam1->f_1658.f_1);
			if (uParam0->f_1 == 0)
			{
				fVar0 = (fVar0 + 180f);
			}
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, fVar0);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, ENTITY::GET_ENTITY_HEADING(uParam0->f_32));
			func_57(uParam0, 16384);
			fVar2 = (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_40, uParam0->f_40.f_1) + func_324(bParam6, 180f, 0f));
			vVar3 = { uParam1->f_189.f_29 - ENTITY::GET_ENTITY_COORDS((uParam1[iParam3 /*94*/])->f_32, true) };
			bVar4 = func_68(vVar3, uParam0->f_40) < 0f;
			bVar5 = func_68(vVar3, uParam0->f_43) < 0f;
			iVar6 = 0;
			func_220(uParam0, 0);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_54));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_54));
			if (!bParam6 && bParam7)
			{
				func_220(uParam0, func_26(uParam0) + 1);
				iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1200);
				TASK::TASK_PLAY_ANIM(0, func_193(func_194(uParam0), "mini@tennis", "mini@tennis@female"), "idle", 1.5f, -8f, iVar6, 0, 0, 0, 0, 0);
			}
			if (!bParam8)
			{
				TASK::TASK_PLAY_ANIM(0, "mini@tennis", "ready_2_idle", 1.5f, -8f, -1, 0, 0, 0, 0, 0);
				func_220(uParam0, func_26(uParam0) + 1);
			}
			if ((bParam6 && !bVar4) || (!bParam6 && bVar4))
			{
				vVar7 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar5 && (!bParam6 && bVar4))
				{
					vVar7 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_218(uParam1, uParam0))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar7, 1f, 20000, 1193033728, 1056964608);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, 1f, 20000, 1048576000, 1, 1193033728);
				}
				func_220(uParam0, func_26(uParam0) + 1);
			}
			if (func_217(ENTITY::GET_ENTITY_COORDS(uParam0->f_32, true), vVar1, 0.1f))
			{
				TASK::TASK_ACHIEVE_HEADING(0, fVar2, 2500);
				func_220(uParam0, func_26(uParam0) + 1);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 1048576000, 0, fVar2);
				func_220(uParam0, func_26(uParam0) + 1);
			}
			sVar8 = func_193(func_194(uParam0), "mini@tennis", "mini@tennis@female");
			TASK::TASK_PLAY_ANIM(0, sVar8, "idle_2_ready", 8f, -8f, -1, 0, 0, 0, 0, 0);
			func_220(uParam0, func_26(uParam0) + 1);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_54);
			TASK::TASK_PERFORM_SEQUENCE(func_263(uParam0), uParam0->f_54);
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_263(uParam0), "weapons@tennis@male");
			func_79(&(uParam0->f_4), 4);
		}
	}
	if (bParam4 && ENTITY::DOES_ENTITY_EXIST(func_263(uParam0)))
	{
		PED::_0x2208438012482A1A(func_263(uParam0), 0, 0);
	}
}

int func_217(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, float fParam4)
{
	if (fParam4 < 0f)
	{
		fParam4 = 0f;
	}
	if (MISC::ABSF((Param0 - Param2)) <= fParam4)
	{
		if (MISC::ABSF((Param0.f_1 - Param2.f_1)) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_218(var uParam0, var uParam1)
{
	if (func_219(&(uParam0->f_189)) != 2)
	{
		return 0;
	}
	if (uParam1->f_1 != 1)
	{
		return 0;
	}
	return 1;
}

int func_219(var uParam0)
{
	return *uParam0;
}

void func_220(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

void func_221(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((uParam0[iParam1 /*94*/])->f_32);
	}
	else
	{
		TASK::CLEAR_PED_TASKS((uParam0[iParam1 /*94*/])->f_32);
	}
}

bool func_222(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_223(-1, 0) == 8;
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

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

float func_224(var uParam0)
{
	return uParam0->f_23;
}

void func_225(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar7;
	char* sVar8;
	
	if ((uParam0->f_31 != 4 && !PED::IS_PED_INJURED(func_263(uParam0))) && !bParam7)
	{
		func_230(uParam1->f_1657, 1);
	}
	func_232(uParam0, 75);
	if (func_103(uParam0, 4))
	{
		func_275(uParam0, 4);
	}
	func_215(&(uParam0->f_4), 4);
	if (bParam6)
	{
		func_192(uParam0, &(uParam1->f_247));
	}
	if (uParam0->f_31 == 4)
	{
		func_233(&(uParam0->f_4), 0);
		if (uParam0->f_1 != 0)
		{
			func_80(&(uParam0->f_4), uParam1->f_189.f_3[2 /*3*/] + uParam1->f_189.f_3[3 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
		else
		{
			func_80(&(uParam0->f_4), uParam1->f_189.f_3[0 /*3*/] + uParam1->f_189.f_3[1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
	}
	if (!PED::IS_PED_INJURED(uParam0->f_32) && uParam0->f_36 == 75)
	{
		vVar1 = { func_268(&(uParam1->f_189), iParam2, uParam1->f_1661, uParam1->f_1658, 1, uParam0->f_1) };
		if ((uParam1->f_1657 != 1 && !bParam7) && !func_222(PLAYER::PLAYER_ID(), 0))
		{
			if (!((!PED::IS_PED_INJURED(func_263(uParam0)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(func_263(uParam0))) && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(func_263(uParam0)), "running")))
			{
				func_221(uParam1, iParam3, 1);
			}
			ENTITY::SET_ENTITY_COORDS(uParam0->f_32, vVar1, 1, true, 0, 1);
			fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(-uParam1->f_1658, -uParam1->f_1658.f_1);
			if (uParam0->f_1 == 0)
			{
				fVar0 = (fVar0 + 180f);
			}
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, fVar0);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, ENTITY::GET_ENTITY_HEADING(uParam0->f_32));
			func_57(uParam0, 16384);
			fVar2 = (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_40, uParam0->f_40.f_1) + func_324(bParam8, 180f, 0f));
			vVar3 = { uParam1->f_189.f_29 - ENTITY::GET_ENTITY_COORDS((uParam1[iParam3 /*94*/])->f_32, true) };
			bVar4 = func_68(vVar3, uParam0->f_40) < 0f;
			bVar5 = func_68(vVar3, uParam0->f_43) < 0f;
			func_220(uParam0, 0);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_54));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_54));
			if (!bParam9)
			{
				TASK::TASK_PLAY_ANIM(0, "mini@tennis", "ready_2_idle", 1.5f, -8f, -1, 0, 0, 0, 0, 0);
				func_220(uParam0, func_26(uParam0) + 1);
			}
			if ((bParam8 && !bVar4) || (!bParam8 && bVar4))
			{
				vVar6 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar5 && (!bParam8 && bVar4))
				{
					vVar6 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_218(uParam1, uParam0))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar6, 1f, 20000, 1193033728, 1056964608);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1f, 20000, 1048576000, 1, 1193033728);
				}
				func_220(uParam0, func_26(uParam0) + 1);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 1048576000, 0, fVar2);
			func_220(uParam0, func_26(uParam0) + 1);
			TASK::TASK_PLAY_ANIM(0, "mini@tennis", "idle_2_serve", 8f, -8f, -1, 0, 0, 0, 0, 0);
			func_220(uParam0, func_26(uParam0) + 1);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_54);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_32, uParam0->f_54);
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(uParam0->f_32, "weapons@tennis@male");
			func_79(&(uParam0->f_4), 4);
		}
	}
	if (!bParam7 && uParam1->f_1657 != 1)
	{
		if (!func_226(&(uParam0->f_4), 4))
		{
			bVar7 = (uParam1->f_1657 != 1 && !bParam7);
			sVar8 = func_193(bVar7, "TennisServeSet", "TennisServeSetWithIntro");
			func_27(uParam0, sVar8, 0f);
			bParam5 = bParam5;
		}
		else
		{
			func_259(func_263(uParam0), 1);
		}
	}
	if (bParam4 && ENTITY::DOES_ENTITY_EXIST(func_263(uParam0)))
	{
		PED::_0x2208438012482A1A(func_263(uParam0), 0, 0);
	}
	uParam0->f_37 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_32, false) };
}

bool func_226(var uParam0, int iParam1)
{
	return func_255(uParam0->f_25, iParam1);
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0->f_1673 && iParam1) != 0;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_34 = iParam1;
}

void func_229(var uParam0, int iParam1)
{
	uParam0->f_1673 = (uParam0->f_1673 - (uParam0->f_1673 && iParam1));
}

void func_230(int iParam0, bool bParam1)
{
	if (iParam0 != 1)
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
		}
	}
}

void func_231(var uParam0)
{
	func_215(&(uParam0->f_4), 2);
	func_215(&(uParam0->f_4), 32);
	func_215(&(uParam0->f_4), 64);
	func_215(&(uParam0->f_4), 8);
	func_215(&(uParam0->f_4), 128);
	func_215(&(uParam0->f_4), 1);
	func_215(&(uParam0->f_4), 512);
	func_275(uParam0, 16);
	func_275(uParam0, 256);
	func_275(uParam0, 8);
	func_275(uParam0, 128);
	func_275(uParam0, 2);
	func_275(uParam0, 512);
	func_275(uParam0, 4);
}

void func_232(var uParam0, int iParam1)
{
	if (uParam0->f_36 == 75 && iParam1 != 75)
	{
		uParam0->f_36 = iParam1;
		func_275(uParam0, 128);
	}
	else if (uParam0->f_36 != 75 && iParam1 == 75)
	{
		uParam0->f_36 = iParam1;
	}
}

void func_233(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

void func_234(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	if (((uParam0->f_31 != 3 && !bParam4) && !PED::IS_PED_INJURED(func_263(uParam0))) && !PED::IS_PED_RAGDOLL(func_263(uParam0)))
	{
		if ((MISC::IS_TENNIS_MODE(func_263(uParam0)) && !func_194(uParam0)) && !func_103(uParam0, 16384))
		{
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_263(uParam0), "TENNIS_LOCOMOTION_FEMALE");
		}
		func_127(&iVar0, &iVar1, &uVar2, &uVar2, 1, 1);
		fVar3 = MISC::ABSF(SYSTEM::TO_FLOAT(iVar0));
		if ((fVar3 > 0f || MISC::ABSF(SYSTEM::TO_FLOAT(iVar1)) > 0f) && uParam0->f_31 != 4)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_263(uParam0), 2f);
		}
		if ((func_74(uParam0) != 74 && uParam0->f_31 != 4) && fVar3 > 15f)
		{
			func_248(uParam0, (func_249(uParam0) + MISC::GET_FRAME_TIME()));
		}
		else
		{
			func_248(uParam0, 0f);
		}
		if (!func_161(uParam0))
		{
			func_247(uParam0);
		}
		bVar4 = func_246(uParam0, uParam1);
		if (uParam0->f_31 != 4 && !bVar4)
		{
			func_127(&iVar0, &iVar1, &uVar2, &uVar2, 1, 1);
			func_230(uParam1->f_1657, 1);
		}
		else if (!func_103(uParam0, 32))
		{
			func_237(uParam0, &iVar0, &iVar1, uParam1[(1 - iParam3) /*94*/], &(uParam1->f_247));
			if (func_226(&(uParam0->f_4), 4) && func_226(&(uParam0->f_4), 2))
			{
				func_232(uParam0, 75);
			}
		}
		if (uParam1->f_1657 != 1)
		{
			func_236(uParam0, iVar0, iVar1);
		}
		fVar5 = func_68(uParam0->f_40, uParam1->f_247.f_10);
		if (MISC::IS_TENNIS_MODE(func_263(uParam0)) && fVar5 < 0f)
		{
			fVar6 = func_68(uParam0->f_43, func_281(&(uParam1->f_247)) - uParam0->f_37);
			MISC::_0x54F157E0336A3822(func_263(uParam0), "ForcedStopDirection", fVar6);
		}
	}
	else if (uParam0->f_31 != 3)
	{
		if (uParam0->f_31 != 4)
		{
			func_235(&fVar8, &uVar7, &uVar7, &uVar7, 1);
		}
		else
		{
			func_237(uParam0, &iVar9, &iVar10, uParam1[(1 - iParam3) /*94*/], &(uParam1->f_247));
		}
		if (!PED::IS_PED_INJURED(func_263(uParam0)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(func_263(uParam0)))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(func_263(uParam0)), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(func_263(uParam0)))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(func_263(uParam0), "running");
			}
			if (uParam0->f_1 == 0 && iParam2 == 1)
			{
				vVar11 = { uParam1->f_189.f_3[1 /*3*/] };
				fVar12 = (4.425f - 1f);
				fVar13 = 1.3f;
			}
			else if (uParam0->f_1 == 0 && iParam2 == 0)
			{
				vVar11 = { uParam1->f_189.f_3[1 /*3*/] };
				fVar12 = 7.783f;
				fVar13 = (4.425f + 0.7f);
			}
			else if (uParam0->f_1 != 0 && iParam2 == 1)
			{
				vVar11 = { uParam1->f_189.f_3[3 /*3*/] };
				fVar12 = (4.425f - 1f);
				fVar13 = 1.3f;
			}
			else if (uParam0->f_1 != 0 && iParam2 == 0)
			{
				vVar11 = { uParam1->f_189.f_3[3 /*3*/] };
				fVar12 = 7.783f;
				fVar13 = (4.425f + 0.7f);
			}
			if ((fVar8 > 0.75f && SYSTEM::VDIST2(uParam0->f_37, vVar11) > (fVar13 * fVar13)) || (fVar8 < 0.25f && SYSTEM::VDIST2(uParam0->f_37, vVar11) < (fVar12 * fVar12)))
			{
				uParam0->f_62 = fVar8;
			}
			else if ((((fVar8 >= 0.25f && fVar8 <= 0.75f) || (fVar8 > 0.75f && SYSTEM::VDIST2(uParam0->f_37, vVar11) < (fVar13 * fVar13))) || (fVar8 < 0.25f && SYSTEM::VDIST2(uParam0->f_37, vVar11) > (fVar12 * fVar12))) || iParam5)
			{
				uParam0->f_62 = 0.5f;
			}
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(func_263(uParam0), "IdleStarted"))
			{
				fVar14 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				StringCopy(&(uParam1->f_1670), func_193(fVar14 < 0.33f, "Idle3", func_193(fVar14 < 0.66f, "Idle4", "Idle1")), 8);
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(func_263(uParam0), &(uParam1->f_1670), 1);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(func_263(uParam0), "Speed", uParam0->f_62);
		}
	}
	if (((func_74(uParam0) == 75 && ENTITY::DOES_ENTITY_EXIST(uParam1->f_247)) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam1->f_247)) && SYSTEM::VDIST2(uParam0->f_37, func_281(&(uParam1->f_247))) < (0.88f * 0.88f))
	{
		func_57(uParam0, 256);
		func_276(&(uParam1->f_247), 4);
	}
}

void func_235(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(0, 30);
		fVar1 = PAD::GET_CONTROL_NORMAL(0, 31);
		fVar2 = PAD::GET_CONTROL_NORMAL(0, 1);
		fVar3 = PAD::GET_CONTROL_NORMAL(0, 2);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 30);
		fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 31);
		fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 1);
		fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 2);
	}
	*uParam0 = ((fVar0 + 1f) / 2f);
	*uParam1 = ((fVar1 + 1f) / 2f);
	*uParam2 = ((fVar2 + 1f) / 2f);
	*uParam3 = ((fVar3 + 1f) / 2f);
}

void func_236(var uParam0, int iParam1, int iParam2)
{
	if ((MISC::GET_RAIN_LEVEL() <= 0f && MISC::GET_SNOW_LEVEL() <= 0f) && func_74(uParam0) == 75)
	{
		if (MISC::ABSF(SYSTEM::TO_FLOAT(iParam1)) >= MISC::ABSF(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam1 > 15)
			{
				if (uParam0->f_35 != 3 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 3;
			}
			else if (iParam1 < -15)
			{
				if (uParam0->f_35 != 2 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 2;
			}
			else
			{
				if (uParam0->f_35 != 4 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
		else if (MISC::ABSF(SYSTEM::TO_FLOAT(iParam1)) < MISC::ABSF(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam2 > 15)
			{
				if (uParam0->f_35 != 1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 1;
			}
			else if (iParam2 < -15)
			{
				if (uParam0->f_35 != 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 0;
			}
			else
			{
				if (uParam0->f_35 != 4 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_263(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
	}
}

void func_237(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	
	vVar1 = { func_69(&(uParam0->f_4)) };
	if (func_249(uParam3) > 0.5f && !func_226(&(uParam0->f_4), 128))
	{
		func_79(&(uParam0->f_4), 128);
	}
	else if (func_226(&(uParam0->f_4), 128))
	{
		func_215(&(uParam0->f_4), 128);
	}
	switch (func_145(&(uParam0->f_4)))
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			if (func_33(&(uParam0->f_4)) == 2)
			{
				func_243(uParam0, uParam3);
			}
			break;
		
		case 5:
			if (func_74(uParam0) == 75)
			{
				vVar2 = { 0.1f, 0.1f, 0.5f };
				if (func_241(uParam0, &vVar1, &vVar2))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(func_263(uParam0), vVar1, 2f, -1, 1193033728, 1056964608);
					func_240(&(uParam0->f_4), vVar1);
					func_79(&(uParam0->f_4), 4);
					vVar0 = { vVar1 - uParam0->f_37 };
					vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
					*iParam1 = SYSTEM::ROUND((vVar0.x * 128f));
					*iParam2 = SYSTEM::ROUND((vVar0.y * 128f));
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_32, func_69(&(uParam0->f_4)), vVar2, false, true, 0) || TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0), 2106541073) == 7) && !func_226(&(uParam0->f_4), 256))
				{
					func_233(&(uParam0->f_4), 0);
					func_215(&(uParam0->f_4), 4);
				}
				else if (uParam0->f_4.f_20 == 0 && !func_226(&(uParam0->f_4), 256))
				{
					func_233(&(uParam0->f_4), 0);
					func_215(&(uParam0->f_4), 4);
				}
				if (func_33(&(uParam0->f_4)) == 2)
				{
					func_243(uParam0, uParam3);
				}
			}
			break;
		
		case 6:
			if (func_239(&(uParam0->f_4)) <= 0f)
			{
				func_215(&(uParam0->f_4), 4);
				func_233(&(uParam0->f_4), 1);
			}
			func_238(&(uParam0->f_4));
			break;
		
		case 1:
			if (func_74(uParam0) == 75)
			{
				MISC::_0xF56DFB7B61BE7276(func_281(uParam4), func_281(uParam4) + uParam4->f_10, uParam0->f_37, uParam0->f_40, &fVar3);
				vVar7 = { func_281(uParam4) - func_281(uParam4) + uParam4->f_10 * Vector(fVar3, fVar3, fVar3) };
				vVar6 = { func_281(uParam4) + vVar7 };
				vVar4 = { vVar1 - uParam0->f_37 };
				fVar8 = func_68(vVar4, uParam0->f_40);
				if (!func_226(&(uParam0->f_4), 4))
				{
					if (func_51(uParam3) != 2)
					{
						if (fVar8 < 0f)
						{
							vVar9 = { uParam0->f_37 - vVar6 };
							vVar10 = { vVar6 + vVar9 * Vector(0.15f, 0.15f, 0.15f) };
							func_80(&(uParam0->f_4), vVar10);
							func_240(&(uParam0->f_4), vVar10);
							fVar8 = 0f;
						}
					}
				}
				if (func_51(uParam3) != 2)
				{
					vVar5 = { vVar6 - uParam0->f_37 };
					fVar11 = func_68(vVar4, uParam0->f_43);
					fVar12 = func_68(vVar5, uParam0->f_43);
					bVar13 = fVar11 > 0f;
					bVar14 = fVar12 > 0f;
					if ((SYSTEM::VDIST2(uParam0->f_37, vVar1) < 50f && bVar13 != bVar14) && fVar8 < 0f)
					{
						TASK::CLEAR_PED_TASKS(func_263(uParam0));
						func_79(&(uParam0->f_4), 4);
					}
				}
				if (((!PED::IS_PED_INJURED(func_263(uParam0)) && !SYSTEM::VDIST2(uParam0->f_37, vVar1) <= (0f * 0f)) && !func_226(&(uParam0->f_4), 4)) && !func_103(uParam0, 1024))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_32, func_69(&(uParam0->f_4)), 2f, -1, 1193033728, 1056964608);
					vVar1 = { func_69(&(uParam0->f_4)) };
					func_240(&(uParam0->f_4), vVar1);
					func_79(&(uParam0->f_4), 4);
					vVar0 = { func_69(&(uParam0->f_4)) - uParam0->f_37 };
					vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
					*iParam1 = SYSTEM::ROUND((vVar0.x * 128f));
					*iParam2 = SYSTEM::ROUND((vVar0.y * 128f));
				}
				else if (SYSTEM::VDIST2(uParam0->f_37, vVar1) <= (0f * 0f) || TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0), 2106541073) == 7)
				{
					func_233(&(uParam0->f_4), 2);
					func_215(&(uParam0->f_4), 4);
				}
			}
			break;
		
		case 2:
			*iParam1 = 0;
			*iParam2 = 0;
			break;
	}
}

void func_238(var uParam0)
{
	uParam0->f_24 = (uParam0->f_24 - MISC::GET_FRAME_TIME());
}

float func_239(var uParam0)
{
	return uParam0->f_24;
}

void func_240(var uParam0, vector3 vParam1)
{
	uParam0->f_3 = { vParam1 };
}

int func_241(var uParam0, var uParam1, var uParam2)
{
	if (func_103(uParam0, 1024))
	{
		return 0;
	}
	if (func_226(&(uParam0->f_4), 256))
	{
		return 0;
	}
	if (func_226(&(uParam0->f_4), 4))
	{
		return 0;
	}
	if (func_226(&(uParam0->f_4), 16))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(func_263(uParam0)))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_32, *uParam1, *uParam2, false, true, 0))
	{
		return 0;
	}
	if (!func_242(&(uParam0->f_4)))
	{
		return 0;
	}
	return 1;
}

int func_242(var uParam0)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST(*uParam0, uParam0->f_3);
	if (fVar0 > 0.1f)
	{
		return 1;
	}
	return 0;
}

void func_243(var uParam0, var uParam1)
{
	int iVar0;
	
	if (MISC::GET_GAME_TIMER() > func_245(&(uParam0->f_4)))
	{
		iVar0 = func_51(uParam1);
		if (iVar0 == 3 || iVar0 == 4)
		{
			func_80(&(uParam0->f_4), uParam0->f_4.f_6[0 /*3*/]);
			func_233(&(uParam0->f_4), 5);
			func_215(&(uParam0->f_4), 4);
		}
		func_244(&(uParam0->f_4), MISC::GET_GAME_TIMER() + 500);
	}
}

void func_244(var uParam0, var uParam1)
{
	uParam0->f_26 = uParam1;
}

int func_245(var uParam0)
{
	return uParam0->f_26;
}

int func_246(var uParam0, var uParam1)
{
	float fVar0;
	
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	if (!func_103(uParam0, 512))
	{
		return 0;
	}
	if (func_103(uParam0, 1024))
	{
		return 0;
	}
	if (!func_103(uParam0, 16))
	{
		return 0;
	}
	if (SYSTEM::VDIST2(func_69(&(uParam0->f_4)) + Vector(1f, 0f, 0f), uParam0->f_37) > (4f * 4f))
	{
		return 0;
	}
	fVar0 = func_68(uParam0->f_40, func_281(&(uParam1->f_247)) - uParam0->f_37);
	if (fVar0 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_247(var uParam0)
{
	uParam0->f_63 = (uParam0->f_63 + MISC::GET_FRAME_TIME());
}

void func_248(var uParam0, float fParam1)
{
	uParam0->f_72 = fParam1;
}

float func_249(var uParam0)
{
	return uParam0->f_72;
}

int func_250(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_103(uParam0[iParam1 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (func_74(uParam0[iParam1 /*94*/]) == 72 || func_74(uParam0[iParam1 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	if (func_103(uParam0[iParam2 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (func_74(uParam0[iParam2 /*94*/]) == 72 || func_74(uParam0[iParam2 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	return iVar0;
}

int func_251(var uParam0)
{
	return uParam0->f_1672;
}

int func_252(var uParam0)
{
	return uParam0->f_77;
}

void func_253(var uParam0, int iParam1)
{
	func_254(uParam0, iParam1);
}

void func_254(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_255(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_256(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_257(var uParam0)
{
	func_258(&((uParam0[0 /*94*/])->f_32), 1862763509);
	func_258(&((uParam0[1 /*94*/])->f_32), 1862763509);
}

void func_258(var uParam0, int iParam1)
{
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 20, true);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 16);
	if (iParam1 != -86095805)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam1);
	}
}

void func_259(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_44(iParam0);
		if (iVar0 == 145)
		{
			iVar0 = func_195(iParam0);
		}
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iParam0 == iVar2)
		{
			iVar1 = 0;
		}
		else if (PED::IS_PED_MALE(iParam0) && iVar0 != 14)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		MISC::ENABLE_TENNIS_MODE(iParam0, iParam1, iVar1);
	}
}

void func_260(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!PED::IS_PED_INJURED(func_263(uParam0[iParam1 /*94*/])) && !PED::IS_PED_INJURED(func_263(uParam0[iParam2 /*94*/])))
	{
		if (!bParam3)
		{
			if (!bParam4)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam1 /*94*/])->f_33, func_263(uParam0[iParam1 /*94*/]), PED::GET_PED_BONE_INDEX(func_263(uParam0[iParam1 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam2 /*94*/])->f_33, func_263(uParam0[iParam2 /*94*/]), PED::GET_PED_BONE_INDEX(func_263(uParam0[iParam2 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			if (!bParam4)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam1 /*94*/])->f_33, func_263(uParam0[iParam1 /*94*/]), PED::GET_PED_BONE_INDEX(func_263(uParam0[iParam1 /*94*/]), 28422), vLocal_307, vLocal_308, 0, 0, 0, 0, 2, 1);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam2 /*94*/])->f_33, func_263(uParam0[iParam2 /*94*/]), PED::GET_PED_BONE_INDEX(func_263(uParam0[iParam2 /*94*/]), 28422), vLocal_307, vLocal_308, 0, 0, 0, 0, 2, 1);
		}
	}
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_262(var uParam0, int iParam1)
{
	uParam0->f_29 = iParam1;
}

int func_263(var uParam0)
{
	return uParam0->f_32;
}

void func_264(var uParam0, int iParam1)
{
	uParam0->f_32 = iParam1;
}

void func_265(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (iParam1 || !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_247))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_247));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_247));
		}
	}
	vVar0 = { uParam0->f_189.f_29 };
	uParam0->f_247 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_ball"), vVar0, false, false, false);
	OBJECT::_0xB2D0BDE54F0E8E5A(uParam0->f_247, true);
	ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam0->f_247, 1);
	func_113(uParam0->f_247, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_247, false);
	func_274(&(uParam0->f_247), uParam0->f_189.f_29);
	if (func_273(&(uParam0->f_247)))
	{
		func_272(&(uParam0->f_247));
	}
}

int func_266(var uParam0)
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Tennis", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TENNIS_VER2_A", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_ball")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1668))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_1669))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_rack_01b")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis"))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis@female"))
		{
			if (uParam0->f_1657 != 1)
			{
			}
			return 0;
		}
	}
	if (uParam0->f_1657 != 1)
	{
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_MODEL_LOADED(joaat("prop_vb_34_tencrt_lighting")))
		{
			return 0;
		}
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_ANIM_DICT_LOADED("mini@triathlon"))
		{
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("weapons@tennis@male"))
	{
		return 0;
	}
	return 1;
}

void func_267(var uParam0, int iParam1)
{
	if (iParam1 == 21 || func_302(uParam0) == 21)
	{
	}
	else if (func_302(uParam0) != iParam1)
	{
		uParam0->f_5 = func_302(uParam0);
		uParam0->f_4 = iParam1;
	}
}

Vector3 func_268(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar4 = iParam5;
	if ((bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = -0.025f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = -0.025f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0.025f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0.025f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	vVar0 = { vVar1 + vParam2 * Vector(fVar2, fVar2, fVar2) + vParam3 * Vector(fVar3, fVar3, fVar3) };
	return vVar0;
}

int func_269(var uParam0)
{
	return *uParam0;
}

int func_270(var uParam0)
{
	return uParam0->f_3;
}

void func_271(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_269(uParam1);
	iVar1 = (1 - iVar0);
	if (!PED::IS_PED_INJURED(func_263(uParam0[iVar0 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0[iVar0 /*94*/]), 242628503) == 1)
	{
		*uParam2 = TASK::GET_SEQUENCE_PROGRESS(func_263(uParam0[iVar0 /*94*/]));
	}
	if (!PED::IS_PED_INJURED(func_263(uParam0[iVar1 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(func_263(uParam0[iVar1 /*94*/]), 242628503) == 1)
	{
		*uParam3 = TASK::GET_SEQUENCE_PROGRESS(func_263(uParam0[iVar1 /*94*/]));
	}
	if (func_103(uParam0[iVar0 /*94*/], 16384) && *uParam2 > 0)
	{
		func_275(uParam0[iVar0 /*94*/], 16384);
		func_259(func_263(uParam0[iVar0 /*94*/]), 0);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_263(uParam0[iVar0 /*94*/]), "weapons@tennis@male");
	}
	if (func_103(uParam0[iVar1 /*94*/], 16384) && *uParam3 > 0)
	{
		func_275(uParam0[iVar1 /*94*/], 16384);
		func_259(func_263(uParam0[iVar1 /*94*/]), 0);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_263(uParam0[iVar1 /*94*/]), "weapons@tennis@male");
	}
}

void func_272(var uParam0)
{
	if (func_273(uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_23, 1);
		func_285(uParam0, 1);
	}
}

bool func_273(var uParam0)
{
	return GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_23);
}

void func_274(var uParam0, vector3 vParam1)
{
	uParam0->f_7 = { vParam1 };
}

void func_275(var uParam0, int iParam1)
{
	func_253(&(uParam0->f_2), iParam1);
}

void func_276(var uParam0, int iParam1)
{
	func_178(&(uParam0->f_24), iParam1);
}

int func_277(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11, bool bParam12)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	float fVar14;
	vector3 vVar15;
	
	vVar0 = { 0f, 0f, 1f };
	fVar1 = func_324(fParam9 == -1f, MISC::GET_FRAME_TIME(), fParam9);
	iVar2 = 0;
	fVar3 = (fVar1 / 0.03333334f);
	vVar0 = { vVar0 * Vector(fVar3, fVar3, fVar3) };
	if (bParam10)
	{
		fVar1 = (fVar1 + (fVar1 * 0.75f));
		vVar0 = { vVar0 + vVar0 * Vector(0.75f, 0.75f, 0.75f) };
	}
	if ((*uParam5 == 1 && *uParam4 > 0.455f) && *uParam6 < 0.1f)
	{
		vVar0 = { vVar0 * Vector(-1f, -1f, -1f) };
		*uParam6 = (*uParam6 + fVar1);
		*uParam2 = { *uParam2 + vVar0 };
	}
	else if (*uParam5 == 2)
	{
		if (*uParam4 > 0.05f && *iParam7 < 1)
		{
			vVar0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(0.015f, 0.015f, 0.015f) };
			vVar0.z = 0f;
			*uParam2 = { *uParam2 + vVar0 };
		}
		else if (*iParam7 >= 1)
		{
			vVar0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(-0.1f, -0.1f, -0.1f) };
			*uParam2 = { *uParam2 + vVar0 };
			*uParam5 = 0;
		}
	}
	*uParam4 = (*uParam4 + fVar1);
	vVar4 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
	GRAPHICS::DRAW_DEBUG_LINE(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(1f, 0f, 0f) + vVar4, 0, 0, 255, 255);
	GRAPHICS::DRAW_DEBUG_LINE(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(2f, 0f, 0f), 0, 255, 0, 255);
	vVar5 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	iVar2 = func_280(uParam0, uParam1, &vVar5, uParam3, &vVar7, &vVar6, fParam11);
	if (iVar2 == 2)
	{
		if (bParam8)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_NET_BALL_MEDIUM_MASTER", *uParam1, 0, 0, 0, 1);
			vVar8 = { *uParam1 + *uParam2 };
			PHYSICS::APPLY_IMPULSE_TO_CLOTH(*uParam1, vVar8, 2f);
		}
		vVar9 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
		fVar10 = func_68(vVar9, *uParam2);
		vVar11 = { vVar9 * Vector(fVar10, fVar10, fVar10) };
		*uParam2 = { *uParam2 - vVar11 * Vector(1.4f, 1.4f, 1.4f) };
		uParam2->f_2 = (uParam2->f_2 * 0.4f);
	}
	else if (iVar2 == 3 && !bParam12)
	{
		if (bParam8)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_NET_BALL_SKIM_MASTER", *uParam1, 0, 0, 0, 1);
			vVar12 = { *uParam1 + *uParam2 };
			PHYSICS::APPLY_IMPULSE_TO_CLOTH(*uParam1, vVar12, 2f);
		}
		*uParam1 = { vVar7 };
		*uParam2 = { *uParam2 - vVar6 * FtoV(func_68(vVar6, *uParam2)) * Vector(1.4f, 1.4f, 1.4f) };
	}
	vVar13 = { *uParam1 };
	*uParam1 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	if (uParam1->f_2 < uParam0->f_29.f_2)
	{
		MISC::_0xF56DFB7B61BE7276(vVar13, *uParam1, uParam0->f_29, 0f, 0f, 1f, &fVar14);
		vVar15 = { *uParam2 * Vector(fVar1, fVar1, fVar1) * Vector(fVar14, fVar14, fVar14) };
		*uParam1 = { vVar13 + vVar15 };
		uParam1->f_2 = (uParam1->f_2 + 0.05f);
		*uParam2 = { func_279(*uParam2) };
		*iParam7++;
		iVar2 = 1;
		if (bParam8 && *iParam7 == 1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_CLS_BALL_HARD_MASTER", *uParam1, 0, 0, 0, 1);
		}
		else if ((bParam8 && *iParam7 > 1) && *iParam7 < 4)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_CLS_BALL_MASTER", *uParam1, 0, 0, 0, 1);
		}
	}
	*uParam2 = { *uParam2 + func_278(*uParam2, fVar1) };
	GRAPHICS::DRAW_DEBUG_TEXT("ScriptedMotion", *uParam1, 0, 0, 255, 255);
	return iVar2;
}

Vector3 func_278(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { 0f, 0f, -9.8f };
	fVar1 = SYSTEM::VMAG(vParam0);
	vVar2 = { -vParam0 * FtoV((fVar1 * 0.065f)) };
	vVar2 = { vVar2 + vVar0 };
	vVar2 = { vVar2 * Vector(fParam1, fParam1, fParam1) };
	return vVar2;
}

Vector3 func_279(vector3 vParam0)
{
	vParam0 = { vParam0 * Vector(1f, 1f, 1f) };
	vParam0.z = -vParam0.z;
	if (vParam0.z < 0.01f)
	{
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_280(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar7;
	
	MISC::_0xF56DFB7B61BE7276(*uParam1, *uParam2, uParam0->f_29, *uParam3, &fVar0);
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
		fVar3 = MISC::_0x7F8F6405F4777AF6(vVar1, uParam0->f_39[0 /*3*/], uParam0->f_39[1 /*3*/], 0);
		fVar4 = MISC::_0x7F8F6405F4777AF6(vVar1, uParam0->f_39[1 /*3*/], uParam0->f_39[2 /*3*/], 0);
		if (fVar3 > 0f && fVar3 < 1f)
		{
			vVar2 = { uParam0->f_39[0 /*3*/] + uParam0->f_39[1 /*3*/] - uParam0->f_39[0 /*3*/] * Vector(fVar3, fVar3, fVar3) };
		}
		else if ((fVar4 > 0f && fVar4 < 1f) && fVar3 > 0f)
		{
			vVar2 = { uParam0->f_39[1 /*3*/] + uParam0->f_39[2 /*3*/] - uParam0->f_39[1 /*3*/] * Vector(fVar4, fVar4, fVar4) };
		}
		fVar5 = (vVar1.z - vVar2.z);
		if (fVar5 <= func_11((0.025f - fParam6), -1f, 0f))
		{
			return 2;
		}
		else if (fVar5 > 0f && fVar5 <= (0.025f - fParam6))
		{
			vVar6 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
			if (func_68(*uParam2 - *uParam1, vVar6) > 0f)
			{
				vVar6 = { vVar6 * Vector(-1f, -1f, -1f) };
			}
			fVar7 = SYSTEM::SQRT(((0.025f * 0.025f) - (fVar5 * fVar5)));
			*uParam4 = { vVar1 + vVar6 * Vector(fVar7, fVar7, fVar7) };
			*uParam5 = { *uParam4 - vVar2 };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) };
			return 3;
		}
	}
	return 0;
}

Vector3 func_281(var uParam0)
{
	return uParam0->f_7;
}

int func_282(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (iParam3 < 8)
	{
		return 0;
	}
	if (func_227(uParam0, 1))
	{
		return 0;
	}
	if (iParam1 >= 2)
	{
		return 0;
	}
	if (func_255(uParam2, 4194304))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_247))
	{
		return 0;
	}
	if (!func_283(&(uParam0->f_247), &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
	{
		if (!func_286(&(uParam0->f_247), 16))
		{
			func_276(&(uParam0->f_247), 16);
		}
		return 0;
	}
	if (func_286(&(uParam0->f_247), 2))
	{
		return 0;
	}
	if (func_286(&(uParam0->f_247), 4))
	{
		return 0;
	}
	return 1;
}

bool func_283(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar2 = { *uParam2 * Vector(0.191f, 0.191f, 0.191f) };
	fVar3 = (uParam1->f_1 * 1.8f);
	vVar0 = { vVar0 - vVar2 };
	vVar1 = { vVar1 + vVar2 };
	return func_75(func_281(uParam0), vVar0, vVar1, fVar3);
}

int func_284(var uParam0)
{
	return uParam0->f_1;
}

void func_285(var uParam0, int iParam1)
{
	func_253(&(uParam0->f_24), iParam1);
}

bool func_286(var uParam0, int iParam1)
{
	return func_255(uParam0->f_24, iParam1);
}

void func_287(var uParam0)
{
	uParam0->f_1667 = !uParam0->f_1667;
}

void func_288(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	PAD::_0x7F4724035FDCA1DD(0);
	if (iParam1 >= 12 && iParam1 < 14)
	{
		func_299(&(uParam0->f_247));
	}
	if (uParam0->f_1657 != 1)
	{
		func_290();
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	func_289(&(uParam0->f_247), func_281(&(uParam0->f_247)));
	if (!func_227(uParam0, 1))
	{
		bVar0 = !PED::IS_PED_INJURED(func_263(uParam0[iParam3 /*94*/]));
		if (((bVar0 && !bParam5) && !func_226(&((uParam0[iParam3 /*94*/])->f_4), 256)) || ((bVar0 && func_103(uParam0[iParam3 /*94*/], 8192)) && uParam0->f_1657 == 1))
		{
			(uParam0[iParam3 /*94*/])->f_37 = { ENTITY::GET_ENTITY_COORDS(func_263(uParam0[iParam3 /*94*/]), true) };
			func_20(iParam1, uParam0[iParam3 /*94*/], uParam2, func_103(uParam0[iParam3 /*94*/], 8192));
		}
		bVar0 = (!PED::IS_PED_INJURED(func_263(uParam0[iParam4 /*94*/])) && ENTITY::DOES_ENTITY_EXIST(func_263(uParam0[iParam4 /*94*/])));
		if (((bVar0 && !bParam5) && !func_226(&((uParam0[iParam4 /*94*/])->f_4), 256)) || ((bVar0 && func_103(uParam0[iParam4 /*94*/], 8192)) && uParam0->f_1657 == 1))
		{
			(uParam0[iParam4 /*94*/])->f_37 = { ENTITY::GET_ENTITY_COORDS(func_263(uParam0[iParam4 /*94*/]), true) };
			func_20(iParam1, uParam0[iParam4 /*94*/], uParam2, func_103(uParam0[iParam4 /*94*/], 8192));
		}
	}
}

void func_289(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_286(uParam0, 1))
	{
		if (!func_273(uParam0))
		{
			uParam0->f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_tennis_ball_trail", vParam1, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1);
			HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_23, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), 0);
			uVar3 = uVar3;
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(uParam0->f_23, vParam1, 0f, 0f, 0f);
	}
}

void func_290()
{
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 20, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	if (!func_298())
	{
		func_291(1);
	}
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		func_297();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_296(0))
		{
			func_292(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_292(int iParam0)
{
	if (func_295())
	{
		return;
	}
	if (Global_14725)
	{
		func_294(0, 0);
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
	if (!func_293())
	{
		Global_14553.f_1 = 3;
	}
}

int func_293()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_294(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_296(0))
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

bool func_295()
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

int func_296(int iParam0)
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

void func_297()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

int func_298()
{
	if (Global_14553.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0)
{
	uParam0->f_6 = (uParam0->f_6 + MISC::GET_FRAME_TIME());
}

int func_300(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_263(uParam0[iParam1 /*94*/]);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			TASK::TASK_SEEK_COVER_FROM_PED(iVar0, PLAYER::PLAYER_PED_ID(), -1, 0);
		}
		if (!PED::IS_PED_INJURED(func_263(uParam0[(1 - iParam1) /*94*/])))
		{
			TASK::TASK_SEEK_COVER_FROM_PED(func_263(uParam0[(1 - iParam1) /*94*/]), PLAYER::PLAYER_PED_ID(), -1, 0);
		}
		return 1;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(iVar0))
	{
		return 1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (uParam0->f_1657 != 1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_301("TENN_WANTED", 7500, 0);
		func_178(iParam2, 1073741824);
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return 1;
	}
	iVar2 = (1 - iParam1);
	iVar1 = func_263(uParam0[iVar2 /*94*/]);
	if (PED::IS_PED_INJURED(iVar1))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar1))
	{
		return 1;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(iVar1))
	{
		return 1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar1, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iVar1))
	{
		return 1;
	}
	if (uParam0->f_1657 == 1 && (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar1)))
	{
		return 1;
	}
	return 0;
}

void func_301(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_302(var uParam0)
{
	return uParam0->f_4;
}

void func_303(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		ENTITY::DETACH_ENTITY((uParam0[0 /*94*/])->f_33, 1, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[0 /*94*/])->f_33));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_247, 1, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_247));
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		ENTITY::DETACH_ENTITY((uParam0[1 /*94*/])->f_33, 1, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[1 /*94*/])->f_33));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_ball"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1668);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1669);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_rack_01b"));
	STREAMING::REMOVE_ANIM_DICT("mini@tennis");
	STREAMING::REMOVE_ANIM_DICT("mini@tennis@female");
	if (func_191(1))
	{
		func_306(1);
	}
	if (func_191(2))
	{
		func_306(2);
	}
	if (!func_304(-1))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0[0 /*94*/])->f_32, 0) && !PED::IS_PED_BEING_STEALTH_KILLED((uParam0[0 /*94*/])->f_32))
	{
		func_221(uParam0, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0[1 /*94*/])->f_32, 0) && !PED::IS_PED_BEING_STEALTH_KILLED((uParam0[1 /*94*/])->f_32))
	{
		func_221(uParam0, 1, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	}
	if (func_222(iVar0, 0))
	{
		return 1;
	}
	if (func_305(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_305(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_39.f_18, 14);
}

void func_306(int iParam0)
{
	Global_105651 = (Global_105651 - (Global_105651 && iParam0));
}

void func_307(var uParam0)
{
	uParam0->f_1672 = (uParam0->f_1672 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
}

void func_308(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	uParam0->f_1657 = iParam2;
	func_318(&(uParam0->f_189), uParam0, *uParam5);
	if (iParam3 == 0)
	{
		vVar0 = { uParam0->f_1658 };
		vVar1 = { uParam0->f_1661 };
	}
	else if (iParam3 == 1)
	{
		vVar0 = { -uParam0->f_1658 };
		vVar1 = { -uParam0->f_1661 };
	}
	StringCopy(&(uParam0->f_1670), "Idle1", 8);
	func_315(uParam0[iParam3 /*94*/], iParam3, 4, vVar0, vVar1);
	func_315(uParam0[iParam4 /*94*/], iParam4, 4, -vVar0, -vVar1);
	func_314(&(uParam0->f_247));
	func_313(uParam0);
	func_312(uParam0);
	func_311(uParam0);
	func_310(&((uParam0[iParam3 /*94*/])->f_4), uParam0->f_189.f_3[0 /*3*/], (uParam0[iParam3 /*94*/])->f_40, (uParam0[iParam3 /*94*/])->f_43, uParam0->f_189.f_16[0 /*3*/]);
	func_310(&((uParam0[iParam4 /*94*/])->f_4), uParam0->f_189.f_3[2 /*3*/], (uParam0[iParam4 /*94*/])->f_40, (uParam0[iParam4 /*94*/])->f_43, uParam0->f_189.f_16[2 /*3*/]);
	func_309(uParam1, func_49(uParam5->f_1, uParam5->f_3, MISC::GET_RANDOM_INT_IN_RANGE(500, 3000)));
	func_267(uParam1, 4);
	uParam0->f_1668 = iParam6;
	uParam0->f_1669 = iParam7;
	if (uParam5->f_1)
	{
		iVar2 = 0;
		uParam0->f_1667 = 1;
	}
	else
	{
		iVar2 = 1;
	}
	(uParam0[iParam3 /*94*/])->f_4.f_20 = iVar2;
	(uParam0[iParam4 /*94*/])->f_4.f_20 = iVar2;
	STREAMING::REQUEST_MODEL(joaat("prop_tennis_ball"));
	STREAMING::REQUEST_MODEL(iParam6);
	STREAMING::REQUEST_MODEL(iParam7);
	STREAMING::REQUEST_MODEL(joaat("prop_tennis_rack_01b"));
	STREAMING::REQUEST_ANIM_DICT("mini@tennis");
	STREAMING::REQUEST_ANIM_DICT("mini@tennis@female");
	STREAMING::REQUEST_ANIM_DICT("weapons@tennis@male");
}

void func_309(var uParam0, var uParam1)
{
	uParam0->f_27 = uParam1;
}

void func_310(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)
{
	uParam0->f_6[0 /*3*/] = { vParam1 + vParam2 * Vector(1f, 1f, 1f) + vParam3 * Vector(4f, 4f, 4f) };
	uParam0->f_6[1 /*3*/] = { vParam1 + vParam2 * Vector(8f, 8f, 8f) + vParam3 * Vector(2.165f, 2.165f, 2.165f) };
	uParam0->f_6[2 /*3*/] = { vParam1 + vParam2 * Vector(8f, 8f, 8f) + vParam3 * Vector(6f, 6f, 6f) };
	uParam0->f_6[3 /*3*/] = { vParam4 + vParam2 * Vector(0.5f, 0.5f, 0.5f) + vParam3 * Vector(4f, 4f, 4f) };
}

void func_311(var uParam0)
{
	uParam0->f_535[3 /*12*/] = 0f;
	uParam0->f_535[3 /*12*/].f_1 = 0.167f;
	uParam0->f_535[3 /*12*/].f_2 = 0.633f;
	uParam0->f_535[3 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[3 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[5 /*12*/] = 0f;
	uParam0->f_535[5 /*12*/].f_1 = 0.143f;
	uParam0->f_535[5 /*12*/].f_2 = 0.633f;
	uParam0->f_535[5 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[5 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[4 /*12*/] = 0f;
	uParam0->f_535[4 /*12*/].f_1 = 0.15f;
	uParam0->f_535[4 /*12*/].f_2 = 0.633f;
	uParam0->f_535[4 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[4 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[0 /*12*/] = 0f;
	uParam0->f_535[0 /*12*/].f_1 = 0.14f;
	uParam0->f_535[0 /*12*/].f_2 = 0.53f;
	uParam0->f_535[0 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[0 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[2 /*12*/] = 0f;
	uParam0->f_535[2 /*12*/].f_1 = 0.15f;
	uParam0->f_535[2 /*12*/].f_2 = 0.535f;
	uParam0->f_535[2 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[2 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[1 /*12*/] = 0f;
	uParam0->f_535[1 /*12*/].f_1 = 0.17f;
	uParam0->f_535[1 /*12*/].f_2 = 0.665f;
	uParam0->f_535[1 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[1 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[9 /*12*/] = 0.125f;
	uParam0->f_535[9 /*12*/].f_1 = 0.167f;
	uParam0->f_535[9 /*12*/].f_2 = 0.633f;
	uParam0->f_535[9 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[9 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[11 /*12*/] = 0.089f;
	uParam0->f_535[11 /*12*/].f_1 = 0.143f;
	uParam0->f_535[11 /*12*/].f_2 = 0.633f;
	uParam0->f_535[11 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[11 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[10 /*12*/] = 0.108f;
	uParam0->f_535[10 /*12*/].f_1 = 0.15f;
	uParam0->f_535[10 /*12*/].f_2 = 0.633f;
	uParam0->f_535[10 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[10 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[6 /*12*/] = 0.086f;
	uParam0->f_535[6 /*12*/].f_1 = 0.12f;
	uParam0->f_535[6 /*12*/].f_2 = 0.53f;
	uParam0->f_535[6 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[6 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[8 /*12*/] = 0.0925f;
	uParam0->f_535[8 /*12*/].f_1 = 0.15f;
	uParam0->f_535[8 /*12*/].f_2 = 0.535f;
	uParam0->f_535[8 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[8 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[7 /*12*/] = 0.108f;
	uParam0->f_535[7 /*12*/].f_1 = 0.16f;
	uParam0->f_535[7 /*12*/].f_2 = 0.665f;
	uParam0->f_535[7 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[7 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[35 /*12*/] = 0f;
	uParam0->f_535[35 /*12*/].f_1 = 0.3f;
	uParam0->f_535[35 /*12*/].f_2 = 0.58f;
	uParam0->f_535[35 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[35 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[34 /*12*/] = 0f;
	uParam0->f_535[34 /*12*/].f_1 = 0.3f;
	uParam0->f_535[34 /*12*/].f_2 = 0.585f;
	uParam0->f_535[34 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[34 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[33 /*12*/] = 0f;
	uParam0->f_535[33 /*12*/].f_1 = 0.29f;
	uParam0->f_535[33 /*12*/].f_2 = 0.63f;
	uParam0->f_535[33 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[33 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[32 /*12*/] = 0f;
	uParam0->f_535[32 /*12*/].f_1 = 0.28f;
	uParam0->f_535[32 /*12*/].f_2 = 0.708f;
	uParam0->f_535[32 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[32 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[31 /*12*/] = 0f;
	uParam0->f_535[31 /*12*/].f_1 = 0.26f;
	uParam0->f_535[31 /*12*/].f_2 = 0.71f;
	uParam0->f_535[31 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[31 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[30 /*12*/] = 0f;
	uParam0->f_535[30 /*12*/].f_1 = 0.26f;
	uParam0->f_535[30 /*12*/].f_2 = 0.643f;
	uParam0->f_535[30 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[30 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[47 /*12*/] = 0.174f;
	uParam0->f_535[47 /*12*/].f_1 = uParam0->f_535[35 /*12*/].f_1;
	uParam0->f_535[47 /*12*/].f_2 = uParam0->f_535[35 /*12*/].f_2;
	uParam0->f_535[47 /*12*/].f_3 = uParam0->f_535[35 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[47 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[46 /*12*/] = 0.217f;
	uParam0->f_535[46 /*12*/].f_1 = uParam0->f_535[34 /*12*/].f_1;
	uParam0->f_535[46 /*12*/].f_2 = uParam0->f_535[34 /*12*/].f_2;
	uParam0->f_535[46 /*12*/].f_3 = uParam0->f_535[34 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[46 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[45 /*12*/] = 0.208f;
	uParam0->f_535[45 /*12*/].f_1 = uParam0->f_535[33 /*12*/].f_1;
	uParam0->f_535[45 /*12*/].f_2 = uParam0->f_535[33 /*12*/].f_2;
	uParam0->f_535[45 /*12*/].f_3 = uParam0->f_535[33 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[45 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[44 /*12*/] = 0.12f;
	uParam0->f_535[44 /*12*/].f_1 = uParam0->f_535[32 /*12*/].f_1;
	uParam0->f_535[44 /*12*/].f_2 = uParam0->f_535[32 /*12*/].f_2;
	uParam0->f_535[44 /*12*/].f_3 = uParam0->f_535[32 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[44 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[43 /*12*/] = 0.148f;
	uParam0->f_535[43 /*12*/].f_1 = uParam0->f_535[31 /*12*/].f_1;
	uParam0->f_535[43 /*12*/].f_2 = uParam0->f_535[31 /*12*/].f_2;
	uParam0->f_535[43 /*12*/].f_3 = uParam0->f_535[31 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[43 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[42 /*12*/] = 0.09f;
	uParam0->f_535[42 /*12*/].f_1 = uParam0->f_535[30 /*12*/].f_1;
	uParam0->f_535[42 /*12*/].f_2 = uParam0->f_535[30 /*12*/].f_2;
	uParam0->f_535[42 /*12*/].f_3 = uParam0->f_535[30 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[42 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[41 /*12*/] = 0f;
	uParam0->f_535[41 /*12*/].f_1 = 0.27f;
	uParam0->f_535[41 /*12*/].f_2 = 0.613f;
	uParam0->f_535[41 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[41 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[40 /*12*/] = 0f;
	uParam0->f_535[40 /*12*/].f_1 = 0.27f;
	uParam0->f_535[40 /*12*/].f_2 = 0.533f;
	uParam0->f_535[40 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[40 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[39 /*12*/] = 0f;
	uParam0->f_535[39 /*12*/].f_1 = 0.28f;
	uParam0->f_535[39 /*12*/].f_2 = 0.69f;
	uParam0->f_535[39 /*12*/].f_3 = 53;
	StringCopy(&(uParam0->f_535[39 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[38 /*12*/] = 0f;
	uParam0->f_535[38 /*12*/].f_1 = 0.26f;
	uParam0->f_535[38 /*12*/].f_2 = 0.665f;
	uParam0->f_535[38 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[38 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[37 /*12*/] = 0f;
	uParam0->f_535[37 /*12*/].f_1 = 0.28f;
	uParam0->f_535[37 /*12*/].f_2 = 0.782f;
	uParam0->f_535[37 /*12*/].f_3 = 55;
	StringCopy(&(uParam0->f_535[37 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[36 /*12*/] = 0f;
	uParam0->f_535[36 /*12*/].f_1 = 0.24f;
	uParam0->f_535[36 /*12*/].f_2 = 0.698f;
	uParam0->f_535[36 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[36 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[53 /*12*/] = 0.135f;
	uParam0->f_535[53 /*12*/].f_1 = uParam0->f_535[41 /*12*/].f_1;
	uParam0->f_535[53 /*12*/].f_2 = uParam0->f_535[41 /*12*/].f_2;
	uParam0->f_535[53 /*12*/].f_3 = uParam0->f_535[41 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[53 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[52 /*12*/] = 0.173f;
	uParam0->f_535[52 /*12*/].f_1 = uParam0->f_535[40 /*12*/].f_1;
	uParam0->f_535[52 /*12*/].f_2 = uParam0->f_535[40 /*12*/].f_2;
	uParam0->f_535[52 /*12*/].f_3 = uParam0->f_535[40 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[52 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[51 /*12*/] = 0.12f;
	uParam0->f_535[51 /*12*/].f_1 = uParam0->f_535[39 /*12*/].f_1;
	uParam0->f_535[51 /*12*/].f_2 = uParam0->f_535[39 /*12*/].f_2;
	uParam0->f_535[51 /*12*/].f_3 = uParam0->f_535[39 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[51 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[50 /*12*/] = 0.148f;
	uParam0->f_535[50 /*12*/].f_1 = uParam0->f_535[38 /*12*/].f_1;
	uParam0->f_535[50 /*12*/].f_2 = uParam0->f_535[38 /*12*/].f_2;
	uParam0->f_535[50 /*12*/].f_3 = uParam0->f_535[38 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[50 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[49 /*12*/] = 0.16f;
	uParam0->f_535[49 /*12*/].f_1 = uParam0->f_535[37 /*12*/].f_1;
	uParam0->f_535[49 /*12*/].f_2 = uParam0->f_535[37 /*12*/].f_2;
	uParam0->f_535[49 /*12*/].f_3 = uParam0->f_535[37 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[49 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[48 /*12*/] = 0.155f;
	uParam0->f_535[48 /*12*/].f_1 = uParam0->f_535[36 /*12*/].f_1;
	uParam0->f_535[48 /*12*/].f_2 = uParam0->f_535[36 /*12*/].f_2;
	uParam0->f_535[48 /*12*/].f_3 = uParam0->f_535[36 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[48 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[15 /*12*/] = 0f;
	uParam0->f_535[15 /*12*/].f_1 = 0.21f;
	uParam0->f_535[15 /*12*/].f_2 = 0.7f;
	uParam0->f_535[15 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[15 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[17 /*12*/] = 0f;
	uParam0->f_535[17 /*12*/].f_1 = 0.16f;
	uParam0->f_535[17 /*12*/].f_2 = 0.67f;
	uParam0->f_535[17 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[17 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[16 /*12*/] = 0f;
	uParam0->f_535[16 /*12*/].f_1 = 0.18f;
	uParam0->f_535[16 /*12*/].f_2 = 0.6f;
	uParam0->f_535[16 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[16 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[24 /*12*/] = 0.136f;
	uParam0->f_535[24 /*12*/].f_1 = 0.21f;
	uParam0->f_535[24 /*12*/].f_2 = 0.7f;
	uParam0->f_535[24 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[24 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[26 /*12*/] = 0.108f;
	uParam0->f_535[26 /*12*/].f_1 = 0.16f;
	uParam0->f_535[26 /*12*/].f_2 = 0.67f;
	uParam0->f_535[26 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[26 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[25 /*12*/] = 0.108f;
	uParam0->f_535[25 /*12*/].f_1 = 0.18f;
	uParam0->f_535[25 /*12*/].f_2 = 0.6f;
	uParam0->f_535[25 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[25 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[18 /*12*/] = 0f;
	uParam0->f_535[18 /*12*/].f_1 = 0.17f;
	uParam0->f_535[18 /*12*/].f_2 = 0.722f;
	uParam0->f_535[18 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[18 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[19 /*12*/] = 0f;
	uParam0->f_535[19 /*12*/].f_1 = 0.17f;
	uParam0->f_535[19 /*12*/].f_2 = 0.614f;
	uParam0->f_535[19 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[19 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[20 /*12*/] = 0f;
	uParam0->f_535[20 /*12*/].f_1 = 0.17f;
	uParam0->f_535[20 /*12*/].f_2 = 0.7f;
	uParam0->f_535[20 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[20 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[27 /*12*/] = 0.108f;
	uParam0->f_535[27 /*12*/].f_1 = 0.17f;
	uParam0->f_535[27 /*12*/].f_2 = 0.722f;
	uParam0->f_535[27 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[27 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[28 /*12*/] = 0.108f;
	uParam0->f_535[28 /*12*/].f_1 = 0.17f;
	uParam0->f_535[28 /*12*/].f_2 = 0.614f;
	uParam0->f_535[28 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[28 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[29 /*12*/] = 0.108f;
	uParam0->f_535[29 /*12*/].f_1 = 0.17f;
	uParam0->f_535[29 /*12*/].f_2 = 0.7f;
	uParam0->f_535[29 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[29 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[12 /*12*/] = 0f;
	uParam0->f_535[12 /*12*/].f_1 = 0.14f;
	uParam0->f_535[12 /*12*/].f_2 = 0.615f;
	uParam0->f_535[12 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[12 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[14 /*12*/] = 0f;
	uParam0->f_535[14 /*12*/].f_1 = 0.16f;
	uParam0->f_535[14 /*12*/].f_2 = 0.643f;
	uParam0->f_535[14 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[14 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[13 /*12*/] = 0f;
	uParam0->f_535[13 /*12*/].f_1 = 0.18f;
	uParam0->f_535[13 /*12*/].f_2 = 0.779f;
	uParam0->f_535[13 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[13 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[21 /*12*/] = 0.08f;
	uParam0->f_535[21 /*12*/].f_1 = 0.14f;
	uParam0->f_535[21 /*12*/].f_2 = 0.615f;
	uParam0->f_535[21 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[21 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[23 /*12*/] = 0.094f;
	uParam0->f_535[23 /*12*/].f_1 = 0.16f;
	uParam0->f_535[23 /*12*/].f_2 = 0.643f;
	uParam0->f_535[23 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[23 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[22 /*12*/] = 0.108f;
	uParam0->f_535[22 /*12*/].f_1 = 0.18f;
	uParam0->f_535[22 /*12*/].f_2 = 0.779f;
	uParam0->f_535[22 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[22 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[54 /*12*/] = 0.28f;
	uParam0->f_535[54 /*12*/].f_1 = 0.37f;
	uParam0->f_535[54 /*12*/].f_2 = 0.708f;
	uParam0->f_535[54 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[54 /*12*/].f_4), "lunge_bh_hi", 32);
	uParam0->f_535[56 /*12*/] = 0.275f;
	uParam0->f_535[56 /*12*/].f_1 = 0.37f;
	uParam0->f_535[56 /*12*/].f_2 = 0.695f;
	uParam0->f_535[56 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[56 /*12*/].f_4), "lunge_bh_lo", 32);
	uParam0->f_535[55 /*12*/] = 0.27f;
	uParam0->f_535[55 /*12*/].f_1 = 0.37f;
	uParam0->f_535[55 /*12*/].f_2 = 0.688f;
	uParam0->f_535[55 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[55 /*12*/].f_4), "lunge_bh_mid", 32);
	uParam0->f_535[57 /*12*/] = 0.26f;
	uParam0->f_535[57 /*12*/].f_1 = 0.41f;
	uParam0->f_535[57 /*12*/].f_2 = 0.705f;
	uParam0->f_535[57 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[57 /*12*/].f_4), "lunge_fh_hi", 32);
	uParam0->f_535[59 /*12*/] = 0.26f;
	uParam0->f_535[59 /*12*/].f_1 = 0.42f;
	uParam0->f_535[59 /*12*/].f_2 = 0.738f;
	uParam0->f_535[59 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[59 /*12*/].f_4), "lunge_fh_lo", 32);
	uParam0->f_535[58 /*12*/] = 0.263f;
	uParam0->f_535[58 /*12*/].f_1 = 0.43f;
	uParam0->f_535[58 /*12*/].f_2 = 0.695f;
	uParam0->f_535[58 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[58 /*12*/].f_4), "lunge_fh_mid", 32);
	uParam0->f_535[72 /*12*/] = 0.073f;
	uParam0->f_535[72 /*12*/].f_1 = 0.17f;
	uParam0->f_535[72 /*12*/].f_2 = 0.77f;
	uParam0->f_535[72 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[72 /*12*/].f_4), "dive_bh", 32);
	uParam0->f_535[73 /*12*/] = 0.053f;
	uParam0->f_535[73 /*12*/].f_1 = 0.17f;
	uParam0->f_535[73 /*12*/].f_2 = 0.781f;
	uParam0->f_535[73 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[73 /*12*/].f_4), "dive_fh", 32);
	uParam0->f_535[60 /*12*/] = 0f;
	uParam0->f_535[60 /*12*/].f_1 = 0.15f;
	uParam0->f_535[60 /*12*/].f_2 = 0.95f;
	uParam0->f_535[60 /*12*/].f_3 = 65;
	StringCopy(&(uParam0->f_535[60 /*12*/].f_4), "forehand_ts_lo_far", 32);
	uParam0->f_535[61 /*12*/] = 0f;
	uParam0->f_535[61 /*12*/].f_1 = 0.17f;
	uParam0->f_535[61 /*12*/].f_2 = 0.95f;
	uParam0->f_535[61 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[61 /*12*/].f_4), "forehand_ts_md_far", 32);
	uParam0->f_535[62 /*12*/] = 0f;
	uParam0->f_535[62 /*12*/].f_1 = 0.13f;
	uParam0->f_535[62 /*12*/].f_2 = 0.95f;
	uParam0->f_535[62 /*12*/].f_3 = 74;
	StringCopy(&(uParam0->f_535[62 /*12*/].f_4), "forehand_ts_hi_far", 32);
	uParam0->f_535[63 /*12*/] = 0f;
	uParam0->f_535[63 /*12*/].f_1 = 0.2f;
	uParam0->f_535[63 /*12*/].f_2 = 0.95f;
	uParam0->f_535[63 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[63 /*12*/].f_4), "close_bh_lo", 32);
	uParam0->f_535[64 /*12*/] = 0f;
	uParam0->f_535[64 /*12*/].f_1 = 0.2f;
	uParam0->f_535[64 /*12*/].f_2 = 0.95f;
	uParam0->f_535[64 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[64 /*12*/].f_4), "close_bh_md", 32);
	uParam0->f_535[65 /*12*/] = 0f;
	uParam0->f_535[65 /*12*/].f_1 = 0.2f;
	uParam0->f_535[65 /*12*/].f_2 = 0.95f;
	uParam0->f_535[65 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[65 /*12*/].f_4), "close_bh_hi", 32);
	uParam0->f_535[66 /*12*/] = 0f;
	uParam0->f_535[66 /*12*/].f_1 = 0.174f;
	uParam0->f_535[66 /*12*/].f_2 = 0.95f;
	uParam0->f_535[66 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[66 /*12*/].f_4), "close_fh_lo", 32);
	uParam0->f_535[67 /*12*/] = 0f;
	uParam0->f_535[67 /*12*/].f_1 = 0.174f;
	uParam0->f_535[67 /*12*/].f_2 = 0.95f;
	uParam0->f_535[67 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[67 /*12*/].f_4), "close_fh_md", 32);
	uParam0->f_535[68 /*12*/] = 0f;
	uParam0->f_535[68 /*12*/].f_1 = 0.174f;
	uParam0->f_535[68 /*12*/].f_2 = 0.95f;
	uParam0->f_535[68 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[68 /*12*/].f_4), "close_fh_hi", 32);
	uParam0->f_535[69 /*12*/] = 0f;
	uParam0->f_535[69 /*12*/].f_1 = 0.25f;
	uParam0->f_535[69 /*12*/].f_2 = 0.95f;
	uParam0->f_535[69 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[69 /*12*/].f_4), "mid_bh_lo", 32);
	uParam0->f_535[70 /*12*/] = 0f;
	uParam0->f_535[70 /*12*/].f_1 = 0.231f;
	uParam0->f_535[70 /*12*/].f_2 = 0.95f;
	uParam0->f_535[70 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[70 /*12*/].f_4), "mid_bh_md", 32);
	uParam0->f_535[71 /*12*/] = 0f;
	uParam0->f_535[71 /*12*/].f_1 = 0.231f;
	uParam0->f_535[71 /*12*/].f_2 = 0.95f;
	uParam0->f_535[71 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[71 /*12*/].f_4), "mid_bh_hi", 32);
}

void func_312(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_303[5 /*3*/] = { -0.8036f, 0.6726f, -0.6097f };
	uParam0->f_303[4 /*3*/] = { -0.8147f, 0.6746f, -0.0154f };
	uParam0->f_303[3 /*3*/] = { -0.8298f, 0.6483f, 0.615f };
	uParam0->f_303[2 /*3*/] = { -0.8254f, 0.6648f, -0.6352f };
	uParam0->f_303[1 /*3*/] = { -0.8217f, 0.6774f, -0.012f };
	uParam0->f_303[0 /*3*/] = { -0.8072f, 0.6576f, 0.5741f };
	uParam0->f_303[17 /*3*/] = { 0.813f, 0.6795f, -0.5939f };
	uParam0->f_303[16 /*3*/] = { 0.8651f, 0.6928f, 0.0177f };
	uParam0->f_303[15 /*3*/] = { 0.8592f, 0.6398f, 0.585f };
	uParam0->f_303[14 /*3*/] = { 0.8073f, 0.6708f, -0.5718f };
	uParam0->f_303[13 /*3*/] = { 0.831f, 0.6645f, 0.0059f };
	uParam0->f_303[12 /*3*/] = { 0.8462f, 0.6823f, 0.6137f };
	uParam0->f_303[18 /*3*/] = { 0.0038f, 0.571f, 1.4844f };
	uParam0->f_303[19 /*3*/] = { -0.6106f, 0.6003f, 1.4926f };
	uParam0->f_303[20 /*3*/] = { 0.5791f, 0.6003f, 1.4524f };
	uParam0->f_303[35 /*3*/] = { -0.1276f, 0.6496f, -0.6081f };
	uParam0->f_303[34 /*3*/] = { -0.1219f, 0.6858f, -0.0039f };
	uParam0->f_303[33 /*3*/] = { -0.158f, 0.6565f, 0.5989f };
	uParam0->f_303[32 /*3*/] = { -0.1302f, 0.6646f, -0.6002f };
	uParam0->f_303[31 /*3*/] = { -0.1243f, 0.6686f, 0.0104f };
	uParam0->f_303[30 /*3*/] = { -0.1614f, 0.6659f, 0.6349f };
	uParam0->f_303[41 /*3*/] = { 0.2654f, 0.7156f, -0.6474f };
	uParam0->f_303[40 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[39 /*3*/] = { 0.2755f, 0.6588f, 0.5959f };
	uParam0->f_303[38 /*3*/] = { 0.2617f, 0.701f, -0.6222f };
	uParam0->f_303[37 /*3*/] = { 0.2718f, 0.6637f, -0.0077f };
	uParam0->f_303[36 /*3*/] = { 0.269f, 0.6677f, 0.6025f };
	uParam0->f_303[11 /*3*/] = { -0.7118f, 0.5888f, -0.6097f };
	uParam0->f_303[10 /*3*/] = { -0.7944f, 0.5983f, -0.0154f };
	uParam0->f_303[9 /*3*/] = { -0.7291f, 0.5708f, 0.615f };
	uParam0->f_303[8 /*3*/] = { -0.6591f, 0.4535f, -0.6352f };
	uParam0->f_303[7 /*3*/] = { -0.7722f, 0.6042f, -0.012f };
	uParam0->f_303[6 /*3*/] = { -0.8057f, 0.6484f, 0.5741f };
	uParam0->f_303[26 /*3*/] = { 0.7679f, 0.5793f, -0.5939f };
	uParam0->f_303[25 /*3*/] = { 0.7837f, 0.616f, 0.0177f };
	uParam0->f_303[24 /*3*/] = { 0.6994f, 0.5786f, 0.585f };
	uParam0->f_303[23 /*3*/] = { 0.8024f, 0.5107f, -0.5718f };
	uParam0->f_303[22 /*3*/] = { 0.8475f, 0.4297f, 0.0059f };
	uParam0->f_303[21 /*3*/] = { 0.8012f, 0.6051f, 0.6137f };
	uParam0->f_303[27 /*3*/] = { -0.0045f, 0.4354f, 1.4844f };
	uParam0->f_303[28 /*3*/] = { -0.5737f, 0.4354f, 1.4926f };
	uParam0->f_303[29 /*3*/] = { 0.5691f, 0.4354f, 1.4524f };
	uParam0->f_303[47 /*3*/] = { -0.4511f, 0.4966f, -0.6081f };
	uParam0->f_303[46 /*3*/] = { -0.5103f, 0.51f, -0.0039f };
	uParam0->f_303[45 /*3*/] = { -0.4779f, 0.3857f, 0.5989f };
	uParam0->f_303[44 /*3*/] = { -0.3778f, 0.5049f, -0.6002f };
	uParam0->f_303[43 /*3*/] = { -0.3224f, 0.5942f, 0.0104f };
	uParam0->f_303[42 /*3*/] = { -0.3764f, 0.6902f, 0.6349f };
	uParam0->f_303[53 /*3*/] = { 0.4805f, 0.7156f, -0.6474f };
	uParam0->f_303[52 /*3*/] = { 0.7625f, 0.6532f, -0.0193f };
	uParam0->f_303[51 /*3*/] = { 0.6043f, 0.6588f, 0.5959f };
	uParam0->f_303[50 /*3*/] = { 0.473f, 0.6992f, -0.6222f };
	uParam0->f_303[49 /*3*/] = { 0.5413f, 0.6353f, -0.0077f };
	uParam0->f_303[48 /*3*/] = { 0.714f, 0.6593f, 0.6025f };
	uParam0->f_303[56 /*3*/] = { -1.3525f, 0.6005f, -0.7221f };
	uParam0->f_303[55 /*3*/] = { -1.5755f, 0.4699f, -0.0379f };
	uParam0->f_303[54 /*3*/] = { -1.318f, 0.4631f, 0.7024f };
	uParam0->f_303[59 /*3*/] = { 1.9622f, 0.2122f, -0.6432f };
	uParam0->f_303[58 /*3*/] = { 1.9598f, 0.5945f, -0.0585f };
	uParam0->f_303[57 /*3*/] = { 1.8166f, 0.3588f, 0.7322f };
	uParam0->f_303[73 /*3*/] = { 2.2269f, -0.0119f, 0.0417f };
	uParam0->f_303[72 /*3*/] = { -2.2644f, -0.1467f, 0.0997f };
	uParam0->f_303[60 /*3*/] = { 1.4174f, 0.6731f, -0.5824f };
	uParam0->f_303[61 /*3*/] = { 1.4134f, 0.6671f, 0.0059f };
	uParam0->f_303[62 /*3*/] = { 1.4031f, 0.6845f, 0.6133f };
	uParam0->f_303[63 /*3*/] = { -0.1726f, 0.6642f, -0.6095f };
	uParam0->f_303[64 /*3*/] = { -0.2261f, 0.7049f, 0.0018f };
	uParam0->f_303[65 /*3*/] = { -0.1558f, 0.6787f, 0.6703f };
	uParam0->f_303[66 /*3*/] = { 0.2443f, 0.6567f, -0.5885f };
	uParam0->f_303[67 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[68 /*3*/] = { 0.2594f, 0.6387f, 0.6221f };
	uParam0->f_303[69 /*3*/] = { -0.4975f, 0.6646f, -0.6002f };
	uParam0->f_303[70 /*3*/] = { -0.4998f, 0.6686f, 0.0104f };
	uParam0->f_303[71 /*3*/] = { -0.4952f, 0.6659f, 0.6349f };
	uParam0->f_303[74 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[76 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[75 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_1571[0] = -2.2644f;
	uParam0->f_1571[1] = -0.826f;
	uParam0->f_1571[2] = -0.6969f;
	uParam0->f_1571[3] = -0.4494f;
	uParam0->f_1571[4] = -0.2019f;
	uParam0->f_1571[5] = 0.0456f;
	uParam0->f_1571[6] = 0.2931f;
	uParam0->f_1571[7] = 0.5406f;
	uParam0->f_1571[8] = 0.7881f;
	uParam0->f_1571[9] = 1.0356f;
	uParam0->f_1571[10] = 2.6669f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_1460[iVar0 /*11*/][iVar1] = 75;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_1460[0 /*11*/][0] = 3;
	uParam0->f_1460[0 /*11*/][1] = 54;
	uParam0->f_1460[0 /*11*/][2] = 55;
	uParam0->f_1460[0 /*11*/][3] = 56;
	uParam0->f_1460[0 /*11*/][4] = 72;
	uParam0->f_1460[1 /*11*/][0] = 0;
	uParam0->f_1460[1 /*11*/][1] = 1;
	uParam0->f_1460[1 /*11*/][2] = 2;
	uParam0->f_1460[1 /*11*/][3] = 4;
	uParam0->f_1460[1 /*11*/][4] = 5;
	uParam0->f_1460[1 /*11*/][5] = 6;
	uParam0->f_1460[1 /*11*/][6] = 7;
	uParam0->f_1460[1 /*11*/][7] = 9;
	uParam0->f_1460[1 /*11*/][8] = 10;
	uParam0->f_1460[1 /*11*/][9] = 11;
	uParam0->f_1460[2 /*11*/][0] = 8;
	uParam0->f_1460[2 /*11*/][1] = 19;
	uParam0->f_1460[2 /*11*/][2] = 28;
	uParam0->f_1460[2 /*11*/][3] = 45;
	uParam0->f_1460[2 /*11*/][4] = 46;
	uParam0->f_1460[2 /*11*/][5] = 47;
	uParam0->f_1460[2 /*11*/][6] = 69;
	uParam0->f_1460[2 /*11*/][7] = 70;
	uParam0->f_1460[2 /*11*/][8] = 71;
	uParam0->f_1460[3 /*11*/][0] = 42;
	uParam0->f_1460[3 /*11*/][1] = 43;
	uParam0->f_1460[3 /*11*/][2] = 44;
	uParam0->f_1460[3 /*11*/][3] = 64;
	uParam0->f_1460[4 /*11*/][0] = 18;
	uParam0->f_1460[4 /*11*/][1] = 27;
	uParam0->f_1460[4 /*11*/][2] = 30;
	uParam0->f_1460[4 /*11*/][3] = 31;
	uParam0->f_1460[4 /*11*/][4] = 32;
	uParam0->f_1460[4 /*11*/][5] = 33;
	uParam0->f_1460[4 /*11*/][6] = 34;
	uParam0->f_1460[4 /*11*/][7] = 35;
	uParam0->f_1460[4 /*11*/][8] = 63;
	uParam0->f_1460[4 /*11*/][9] = 65;
	uParam0->f_1460[5 /*11*/][0] = 36;
	uParam0->f_1460[5 /*11*/][1] = 37;
	uParam0->f_1460[5 /*11*/][2] = 38;
	uParam0->f_1460[5 /*11*/][3] = 39;
	uParam0->f_1460[5 /*11*/][4] = 40;
	uParam0->f_1460[5 /*11*/][5] = 41;
	uParam0->f_1460[5 /*11*/][6] = 66;
	uParam0->f_1460[5 /*11*/][7] = 67;
	uParam0->f_1460[5 /*11*/][8] = 68;
	uParam0->f_1460[6 /*11*/][0] = 50;
	uParam0->f_1460[6 /*11*/][1] = 53;
	uParam0->f_1460[7 /*11*/][0] = 20;
	uParam0->f_1460[7 /*11*/][1] = 24;
	uParam0->f_1460[7 /*11*/][2] = 25;
	uParam0->f_1460[7 /*11*/][3] = 26;
	uParam0->f_1460[7 /*11*/][4] = 29;
	uParam0->f_1460[7 /*11*/][5] = 48;
	uParam0->f_1460[7 /*11*/][6] = 49;
	uParam0->f_1460[7 /*11*/][7] = 51;
	uParam0->f_1460[7 /*11*/][8] = 52;
	uParam0->f_1460[8 /*11*/][0] = 12;
	uParam0->f_1460[8 /*11*/][1] = 13;
	uParam0->f_1460[8 /*11*/][2] = 14;
	uParam0->f_1460[8 /*11*/][3] = 15;
	uParam0->f_1460[8 /*11*/][4] = 16;
	uParam0->f_1460[8 /*11*/][5] = 17;
	uParam0->f_1460[8 /*11*/][6] = 21;
	uParam0->f_1460[8 /*11*/][7] = 22;
	uParam0->f_1460[8 /*11*/][8] = 23;
	uParam0->f_1460[9 /*11*/][0] = 57;
	uParam0->f_1460[9 /*11*/][1] = 58;
	uParam0->f_1460[9 /*11*/][2] = 59;
	uParam0->f_1460[9 /*11*/][3] = 60;
	uParam0->f_1460[9 /*11*/][4] = 61;
	uParam0->f_1460[9 /*11*/][5] = 62;
	uParam0->f_1460[9 /*11*/][6] = 73;
}

void func_313(var uParam0)
{
	uParam0->f_282[0 /*2*/] = 45;
	uParam0->f_282[1 /*2*/] = 40;
	uParam0->f_282[2 /*2*/] = 35;
	uParam0->f_282[3 /*2*/] = 30;
	uParam0->f_282[4 /*2*/] = 25;
	uParam0->f_282[5 /*2*/] = 20;
	uParam0->f_282[6 /*2*/] = 30;
	uParam0->f_282[7 /*2*/] = 35;
	uParam0->f_282[8 /*2*/] = 24;
	uParam0->f_282[9 /*2*/] = 27;
	uParam0->f_282[0 /*2*/].f_1 = 355;
	uParam0->f_282[1 /*2*/].f_1 = 356;
	uParam0->f_282[2 /*2*/].f_1 = 358;
	uParam0->f_282[3 /*2*/].f_1 = 2;
	uParam0->f_282[4 /*2*/].f_1 = 5;
	uParam0->f_282[5 /*2*/].f_1 = 9;
	uParam0->f_282[6 /*2*/].f_1 = 354;
	uParam0->f_282[7 /*2*/].f_1 = 2;
	uParam0->f_282[8 /*2*/].f_1 = 15;
	uParam0->f_282[9 /*2*/].f_1 = 4;
}

void func_314(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_315(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)
{
	uParam0->f_36 = 75;
	uParam0->f_1 = iParam1;
	uParam0->f_40 = { vParam3 / FtoV(SYSTEM::VMAG(vParam3)) };
	uParam0->f_43 = { vParam4 / FtoV(SYSTEM::VMAG(vParam4)) };
	uParam0->f_63 = (3f + 1f);
	switch (iParam2)
	{
		case 0:
			uParam0->f_31 = iParam2;
			break;
		
		case 1:
			uParam0->f_31 = iParam2;
			break;
		
		case 2:
			uParam0->f_31 = iParam2;
			break;
		
		case 3:
			uParam0->f_31 = iParam2;
			break;
		
		case 4:
			func_316(&(uParam0->f_4));
			uParam0->f_31 = iParam2;
			break;
	}
}

void func_316(var uParam0)
{
	func_233(uParam0, 0);
	func_317(uParam0, 0);
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_318(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	func_323(&(uParam1->f_1656));
	fVar0 = 0.46f;
	fVar1 = 0.5f;
	if (uParam1->f_1656 == 16 && uParam1->f_1657 != 1)
	{
		uParam0->f_3[0 /*3*/] = { -768.966f, 165.352f, 66.474f };
		uParam0->f_3[1 /*3*/] = { -777.028f, 165.364f, 66.474f };
		uParam0->f_3[2 /*3*/] = { -777.045f, 141.573f, 66.474f };
		uParam0->f_3[3 /*3*/] = { -768.972f, 141.566f, 66.475f };
		fVar1 = 0.474f;
		uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
		uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
		uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
		func_322(uParam0, SYSTEM::VMAG(uParam1->f_1661));
		uParam0->f_49 = { uParam1->f_1658 / FtoV(SYSTEM::VMAG(uParam1->f_1658)) };
		uParam0->f_52 = { uParam1->f_1661 / FtoV(SYSTEM::VMAG(uParam1->f_1661)) };
		uParam0->f_16[0 /*3*/] = { -768.994f, 160.238f, 66.474f };
		uParam0->f_16[1 /*3*/] = { -777.009f, 160.23f, 66.474f };
		uParam0->f_16[2 /*3*/] = { -776.999f, 146.539f, 66.474f };
		uParam0->f_16[3 /*3*/] = { -768.988f, 146.552f, 66.474f };
		uParam0->f_29 = { -773.017f, 153.584f, 66.474f };
		uParam0->f_32[0 /*3*/] = { -768.981f, 153.584f, 66.474f };
		uParam0->f_32[1 /*3*/] = { -777.006f, 153.584f, 66.474f };
		uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(-0.834f, -0.834f, -0.834f) };
		uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + 1.148f);
		uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
		uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + 0.928f);
		uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(0.834f, 0.834f, 0.834f) };
		uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + 1.148f);
		func_321(uParam0, 0);
		func_320(uParam0, 0.43f);
		uParam0->f_55 = { -780.4614f, 156.5187f, 66.4744f };
	}
	else if (uParam1->f_1656 == 13 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
		uParam0->f_3[0 /*3*/] = { -1173.349f, -1604.72f, 3.3738f };
		uParam0->f_3[1 /*3*/] = { -1180.108f, -1609.459f, 3.3738f };
		uParam0->f_3[2 /*3*/] = { -1166.443f, -1628.969f, 3.3738f };
		uParam0->f_3[3 /*3*/] = { -1159.67f, -1624.238f, 3.3738f };
		func_319(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_321(uParam0, 1);
	}
	else if (uParam1->f_1656 == 19 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { 487.5186f, -217.7697f, 52.7864f };
		uParam0->f_3[0 /*3*/] = { 479.669f, -227.811f, 52.787f };
		uParam0->f_3[1 /*3*/] = { 487.252f, -230.572f, 52.787f };
		uParam0->f_3[2 /*3*/] = { 495.403f, -208.181f, 52.787f };
		uParam0->f_3[3 /*3*/] = { 487.807f, -205.4f, 52.787f };
		func_319(uParam0, uParam1, 0.5f, 0.428f, 0);
		func_321(uParam0, 2);
	}
	else if (uParam1->f_1656 == 23 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -49.912f, 942.5634f, 231.1741f };
		uParam0->f_3[0 /*3*/] = { -54.665f, 947.136f, 231.174f };
		uParam0->f_3[1 /*3*/] = { -55.353f, 939.187f, 231.174f };
		uParam0->f_3[2 /*3*/] = { -31.706f, 937.116f, 231.174f };
		uParam0->f_3[3 /*3*/] = { -31.008f, 945.056f, 231.174f };
		func_319(uParam0, uParam1, 0.5f, 0.428f, 0);
		func_321(uParam0, 8);
	}
	else if (uParam1->f_1656 == 17 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1225.454f, 344.8268f, 78.9859f };
		uParam0->f_3[0 /*3*/] = { -1223.264f, 351.306f, 78.9867f };
		uParam0->f_3[1 /*3*/] = { -1231.37f, 348.946f, 78.9867f };
		uParam0->f_3[2 /*3*/] = { -1224.658f, 325.996f, 78.9867f };
		uParam0->f_3[3 /*3*/] = { -1216.553f, 328.359f, 78.9867f };
		func_319(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_321(uParam0, 3);
	}
	else if (uParam1->f_1656 == 15 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1623.454f, 257.1566f, 58.5552f };
		uParam0->f_3[0 /*3*/] = { -1627.471f, 275.479f, 58.5552f };
		uParam0->f_3[1 /*3*/] = { -1634.971f, 271.977f, 58.5552f };
		uParam0->f_3[2 /*3*/] = { -1624.893f, 250.367f, 58.5552f };
		uParam0->f_3[3 /*3*/] = { -1617.398f, 253.864f, 58.5552f };
		func_319(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_321(uParam0, 4);
	}
	else if (uParam1->f_1656 == 18 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -939.6168f, -1255.732f, 6.9773f };
		uParam0->f_3[1 /*3*/] = { -945.684f, -1253.143f, 6.9773f };
		uParam0->f_3[2 /*3*/] = { -933.813f, -1273.726f, 6.9773f };
		uParam0->f_3[3 /*3*/] = { -926.823f, -1269.7f, 6.9773f };
		uParam0->f_3[0 /*3*/] = { -938.693f, -1249.116f, 6.9773f };
		func_319(uParam0, uParam1, 0.5f, 0.428f, 1);
		func_321(uParam0, 5);
	}
	else if (uParam1->f_1656 == 20 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1371.275f, -107.9437f, 49.7046f };
		uParam0->f_3[0 /*3*/] = { -1374.66f, -114.005f, 49.7046f };
		uParam0->f_3[1 /*3*/] = { -1366.627f, -113.082f, 49.7046f };
		uParam0->f_3[2 /*3*/] = { -1369.309f, -89.432f, 49.7046f };
		uParam0->f_3[3 /*3*/] = { -1377.338f, -90.342f, 49.7046f };
		func_319(uParam0, uParam1, 0.5f, 0.43f, 1);
		func_321(uParam0, 6);
	}
	else if (uParam1->f_1656 == 14 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -2869.991f, 9.2297f, 10.6083f };
		uParam0->f_3[0 /*3*/] = { -2875.503f, 5.33f, 10.6083f };
		uParam0->f_3[1 /*3*/] = { -2867.721f, 3.09f, 10.6083f };
		uParam0->f_3[2 /*3*/] = { -2861.163f, 25.966f, 10.6083f };
		uParam0->f_3[3 /*3*/] = { -2868.95f, 28.198f, 10.6083f };
		func_319(uParam0, uParam1, 0.5f, 0.458f, 1);
		func_321(uParam0, 7);
	}
	else if (uParam1->f_1657 == 1)
	{
		func_321(uParam0, 9);
	}
	switch (iParam2)
	{
		case 0:
			uParam0->f_3[0 /*3*/] = { -1173.374f, -1604.762f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1180.065f, -1609.454f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1166.428f, -1628.932f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1159.739f, -1624.236f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 1:
			uParam0->f_3[0 /*3*/] = { -1157.2f, -1627.22f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1163.84f, -1632.52f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1150.21f, -1652.12f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1143.55f, -1647.38f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 2:
			uParam0->f_3[0 /*3*/] = { -1186.49f, -1613.97f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1193.2f, -1618.66f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1179.52f, -1638.12f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1172.85f, -1633.42f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 3:
			uParam0->f_3[0 /*3*/] = { -1170.43f, -1637.13f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1177.05f, -1641.73f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1163.35f, -1661.24f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1156.67f, -1656.57f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 4:
			uParam0->f_3[0 /*3*/] = { -1199.63f, -1623.2f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1206.29f, -1627.84f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1192.65f, -1647.33f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1185.96f, -1642.67f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 5:
			uParam0->f_3[0 /*3*/] = { -1183.47f, -1646.29f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1190.16f, -1650.97f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1176.48f, -1670.47f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1169.79f, -1665.81f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 6:
			uParam0->f_3[0 /*3*/] = { -1196.58f, -1655.5f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1203.27f, -1660.14f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1189.58f, -1679.62f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1182.9f, -1674.99f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 7:
			uParam0->f_3[0 /*3*/] = { -1212.78f, -1632.34f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1219.5f, -1636.97f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1205.75f, -1656.57f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1199.12f, -1651.88f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 8:
			uParam0->f_3[0 /*3*/] = { -54.61f, 947f, 231.19f };
			uParam0->f_3[1 /*3*/] = { -55.26f, 939.3f, 231.19f };
			uParam0->f_3[2 /*3*/] = { -31.67f, 937.09f, 231.18f };
			uParam0->f_3[3 /*3*/] = { -31.11f, 945.09f, 231.19f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -43.02f, 942.03f, 232.19f };
			break;
		
		default:
			break;
	}
}

void func_319(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fParam2, fParam2, fParam2) };
	uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
	uParam1->f_1664 = { func_185(uParam1->f_1661, uParam1->f_1658) };
	uParam0->f_49 = { uParam1->f_1658 / FtoV(SYSTEM::VMAG(uParam1->f_1658)) };
	uParam0->f_52 = { uParam1->f_1661 / FtoV(SYSTEM::VMAG(uParam1->f_1661)) };
	uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
	uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
	func_322(uParam0, SYSTEM::VMAG(uParam1->f_1661));
	func_320(uParam0, fParam3);
	if (bParam4)
	{
		fVar0 = -0.694f;
		fVar1 = 0.693f;
		fVar2 = 1.075f;
		fVar3 = 0.87f;
	}
	else
	{
		fVar0 = -0.834f;
		fVar1 = 0.834f;
		fVar2 = 1.148f;
		fVar3 = 0.928f;
	}
	uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar0, fVar0, fVar0) };
	uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + fVar2);
	uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
	uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + fVar3);
	uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar1, fVar1, fVar1) };
	uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + fVar2);
}

void func_320(var uParam0, float fParam1)
{
	uParam0->f_2 = fParam1;
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_322(var uParam0, float fParam1)
{
	uParam0->f_1 = fParam1;
}

var func_323(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar3;
	
	fVar0 = 1E+08f;
	bVar3 = ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0);
	if (func_222(PLAYER::PLAYER_ID(), 0))
	{
		bVar3 = ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())), 0);
	}
	if (!bVar3)
	{
		if (func_222(PLAYER::PLAYER_ID(), 0))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())), true) };
		}
		else
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -769.058f, 165.294f, 66.474f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 16;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1171.28f, -1599.59f, 3.34f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 13;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, 487.5186f, -217.7697f, 52.7864f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 19;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -49.912f, 942.5634f, 231.1741f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 23;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1225.454f, 344.8268f, 78.9859f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 17;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1623.454f, 257.1566f, 58.5552f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 15;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -939.6168f, -1255.732f, 6.9773f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 18;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1371.275f, -107.9437f, 49.7046f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 20;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -2869.991f, 9.2297f, 10.6083f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 14;
		}
	}
	return *uParam0;
}

float func_324(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_325()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_334(0))
	{
		if (!func_333())
		{
			iVar0 = func_332();
			if (iVar0 != -1)
			{
				if (!func_327(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_326();
		}
	}
}

void func_326()
{
	Global_93717 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_40())
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
			switch (func_40())
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

int func_327(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_326();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_331(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_328(&(Global_106565.f_2357.f_539), iVar1);
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

void func_328(var uParam0, int iParam1)
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
			if (!func_330(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_329(&(uParam0->f_2296[iVar0]));
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

void func_329(var uParam0)
{
	*uParam0 = -15;
}

int func_330(int iParam0, var uParam1, float fParam2)
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
			return func_330(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_330(8, uParam1, fParam2);
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

void func_331(int iParam0, bool bParam1)
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

int func_332()
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

int func_333()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

bool func_334(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_335(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_336(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_336(int iParam0)
{
	return func_337(iParam0, Global_36425);
}

int func_337(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

