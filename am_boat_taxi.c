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
	struct<22> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_96[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 12;
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
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
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
	var uLocal_370 = 0;
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
	var uLocal_790 = 1065353216;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	vector3 vLocal_793 = { 0f, 0f, 0f };
	float fLocal_794 = 0f;
	var uLocal_795 = 16;
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
	var uLocal_831 = 0;
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
	var uLocal_845 = 0;
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
	var uLocal_859 = 0;
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
	var uLocal_873 = 0;
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
	var uLocal_919 = 0;
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
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	bool bLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	int iLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	float fLocal_966 = 0f;
	float fLocal_967 = 0f;
	float fLocal_968 = 0f;
	float fLocal_969 = 0f;
	struct<21> Local_970 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_963 = 15000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_148(ScriptParam_970))
		{
			func_143();
		}
	}
	while (true)
	{
		func_142();
		if (func_131())
		{
			func_143();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_960)
		{
			func_143();
		}
		switch (func_130(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_129() == 1)
				{
					func_128();
					func_127();
					vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_129() == 4)
				{
					vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_100();
				if (func_129() == 1)
				{
					func_74();
				}
				else if (func_129() == 4)
				{
					vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (func_72(Local_95.f_2))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_95.f_2), true), 200f, 200f, 200f, false, true, 0))
					{
						vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_71(&(Local_95.f_18));
				if (func_70(&(Local_95.f_18)))
				{
					vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_143();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_129())
			{
				case 0:
					if (func_68(&(Local_95.f_16), 10000, 0))
					{
						if (!MISC::IS_BIT_SET(Local_95, 12))
						{
							Local_95.f_4 = PLAYER::PLAYER_ID();
							Local_95.f_5 = func_67();
							Local_95.f_10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(0f, 5f, 0f) };
							Local_95.f_7 = { func_65(Local_95.f_5) };
							MISC::SET_BIT(&Local_95, 12);
						}
						if (func_38())
						{
							func_128();
							Local_95.f_1 = 1;
						}
					}
					func_34();
					break;
				
				case 1:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_95.f_1 = 4;
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
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	var uVar0;
	var uVar1;
	
	if (func_29())
	{
		if (Local_95.f_21 >= 0 || Local_95.f_21 <= 3)
		{
			func_6(func_23(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_95.f_21 >= 0 || Local_95.f_21 <= 3)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
		{
			if (!func_72(Local_95.f_2))
			{
				if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_95.f_2, &uVar0) == PLAYER::PLAYER_ID())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_3))
		{
			if (func_4(Local_95.f_3))
			{
				if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_95.f_3, &uVar1) == PLAYER::PLAYER_ID())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_5(int iParam0, int iParam1)
{
	if (Global_2437364.f_3876[iParam0] < iParam1)
	{
		Global_2437364.f_3876[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2437364.f_3875), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_22(iParam1), 16);
	StringCopy(&Var1, func_21(iParam2), 32);
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
	if (func_20())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263509[iVar3 /*84*/].f_13.f_40 = { Var0 };
		Global_4263509[iVar3 /*84*/].f_13.f_44 = { Var1 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_20())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_20())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_14(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_11(var uParam0)
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
	func_12(&(uParam0->f_13));
	func_12(&(uParam0->f_13.f_13));
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

void func_12(var uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_20())
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
				func_16(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_16(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_18(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_17();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_17()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_18(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_19()
{
	return Global_1312745;
}

int func_20()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

char* func_21(int iParam0)
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

char* func_22(int iParam0)
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

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_28(iParam0) >= 0)
	{
		iVar0 = func_28(iParam0);
	}
	else
	{
		iVar0 = func_24(iParam0);
	}
	return iVar0;
}

int func_24(int iParam0)
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
			if (func_25())
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

bool func_25()
{
	return MISC::IS_BIT_SET(func_26(6424, -1, 0), 19);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_27(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

int func_28(int iParam0)
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
			if (func_25())
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

bool func_29()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196 != 0;
}

void func_30()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Local_95.f_20 != 7)
	{
		if (func_4(Local_95.f_3) || !func_72(Local_95.f_2))
		{
			Local_95.f_20 = 7;
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_95.f_3), NETWORK::NET_TO_VEH(Local_95.f_2), 0))
		{
			Local_95.f_20 = 7;
		}
	}
	if (!func_4(Local_95.f_3) && func_72(Local_95.f_2))
	{
		if (Local_95.f_20 != 1)
		{
			if (ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_95.f_2)) <= 600 || ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_95.f_3)) <= 150)
			{
				Local_95.f_20 = 1;
			}
		}
		switch (Local_95.f_20)
		{
			case 2:
				if (Local_95.f_21 == 3)
				{
					Local_95.f_20 = 4;
				}
				else if (Local_95.f_21 == 5)
				{
					Local_95.f_20 = 7;
				}
				else if (!MISC::IS_BIT_SET(Local_95, 7) && ENTITY::IS_ENTITY_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_20 = 3;
				}
				break;
			
			case 4:
				MISC::SET_BIT(&iLocal_97, 8);
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) <= 0)
				{
					Local_95.f_20 = 3;
					MISC::CLEAR_BIT(&iLocal_97, 8);
				}
				else if (!MISC::IS_BIT_SET(Local_95, 7) && ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_95.f_3), Local_95.f_7, 10f, 10f, 10f, false, true, 0))
				{
					Local_95.f_20 = 5;
				}
				break;
			
			case 5:
				if ((VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) <= 0 && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2))) && func_31(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_20 = 6;
				}
				break;
			
			case 3:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) >= 1)
				{
					Local_95.f_20 = 4;
				}
				break;
			
			case 6:
				if ((VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) <= 0 && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2))) && func_31(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 1) >= 10f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), 242628503) == 1)
					{
						Local_95.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), 242628503) == 1 && func_31(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_95.f_3), 1) >= 10f)
				{
					Local_95.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_31(int iParam0, int iParam1, bool bParam2)
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

void func_32()
{
	switch (Local_95.f_21)
	{
		case 0:
			if (MISC::IS_BIT_SET(Local_95, 8) || VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) > 0)
			{
				Local_95.f_21 = 1;
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) > 0)
				{
					Local_95.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) > 0)
			{
				Local_95.f_21 = 3;
			}
			else if (MISC::IS_BIT_SET(Local_95, 10))
			{
				Local_95.f_21 = 4;
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) <= 0)
				{
					Local_95.f_21 = 1;
				}
				else if (MISC::IS_BIT_SET(Local_95, 10))
				{
					Local_95.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
			{
				if ((VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_95.f_2)) <= 0 && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2))) && func_31(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	MISC::CLEAR_BIT(&Local_95, 9);
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_72(Local_95.f_2))
				{
					if (!MISC::IS_BIT_SET(Local_95, 8))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_95.f_2), Local_95.f_10, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), false, true, 0))
						{
							MISC::SET_BIT(&Local_95, 8);
						}
					}
					if (!MISC::IS_BIT_SET(Local_95, 7) || MISC::IS_BIT_SET(Local_95, 11))
					{
						if (!MISC::IS_BIT_SET(Local_95, 10))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_95.f_2), Local_95.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), false, true, 0))
							{
								MISC::SET_BIT(&Local_95, 10);
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_95, 9))
					{
						if (MISC::IS_BIT_SET(vLocal_96[iVar0 /*3*/].f_1, 6))
						{
							MISC::SET_BIT(&Local_95, 9);
							MISC::CLEAR_BIT(&(vLocal_96[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_95.f_20 != 3)
					{
						if (MISC::IS_BIT_SET(vLocal_96[iVar0 /*3*/].f_1, 5))
						{
							Local_95.f_20 = 3;
							MISC::CLEAR_BIT(&(vLocal_96[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_34()
{
	vector3 vVar0;
	var uVar1;
	
	if ((Local_95.f_21 <= 2 || Local_95.f_20 == 2) || Local_95.f_20 == 3)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if ((!WATER::GET_WATER_HEIGHT_NO_WAVES(vVar0, &uVar1) || func_36()) || func_35())
		{
			Local_95.f_1 = 4;
		}
	}
}

int func_35()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_37(iVar0), 50f, 50f, 50f, false, true, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		
		case 1:
			return 1551.805f, 6686.052f, 0f;
		
		case 2:
			return 3260.507f, 5309.454f, 0f;
		
		case 3:
			return 3788.334f, 3812.693f, 0f;
		
		case 4:
			return 2945.665f, 1773.192f, 0f;
		
		case 5:
			return 2866.816f, -658.5848f, 0f;
		
		case 6:
			return 2342.881f, -2167.953f, 0f;
		
		case 7:
			return 1215.167f, -2728.054f, 0f;
		
		case 8:
			return 1305.229f, -3364.572f, 0f;
		
		case 9:
			return 293.8953f, -3361.616f, 0f;
		
		case 10:
			return -484.948f, -2940.643f, 0f;
		
		case 11:
			return -1387.61f, -1704.374f, 0f;
		
		case 12:
			return -1566.04f, -1312.232f, 0f;
		
		case 13:
			return -1920.23f, -849.6466f, 0f;
		
		case 14:
			return -2876.76f, -74.3269f, 0f;
		
		case 15:
			return -3133.45f, 604.7179f, 0f;
		
		case 16:
			return -3286.57f, 1285.372f, 0f;
		
		case 17:
			return -3205.53f, 3285.199f, 0f;
		
		case 18:
			return -2520.42f, 4240.671f, 0f;
		
		case 19:
			return -909.632f, 5830.909f, 0f;
		
		case 20:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_38()
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (func_64(joaat("dinghy2")) && func_64(joaat("s_m_y_blackops_01")))
		{
			if (func_41() && func_39())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_39()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_3) && func_64(joaat("s_m_y_blackops_01"))) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
	{
		if (func_72(Local_95.f_2))
		{
			if (func_40(&(Local_95.f_3), Local_95.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_95.f_3), 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_95.f_3), 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_95.f_3), 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_95.f_3), 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_95.f_3), 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_95.f_3), 9, 0, 0, 0);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 0)
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_95.f_3), Global_1574987);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_95.f_3), Global_1574670[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_95.f_3), true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_95.f_3), true);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_95.f_3), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_95.f_3), 0);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_3), 255, true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_41()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
	{
		if (func_64(joaat("dinghy2")))
		{
			if (!MISC::IS_BIT_SET(iLocal_97, 10))
			{
				func_61(&vLocal_793, &fLocal_794);
				if (WATER::TEST_PROBE_AGAINST_WATER(vLocal_793 + Vector(2f, 0f, 0f), vLocal_793 - Vector(10f, 0f, 0f), &vLocal_793))
				{
					if (func_45(vLocal_793, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar2 = { vLocal_793 + Vector(12f, 0f, 0f) };
						iLocal_791 = SHAPETEST::START_SHAPE_TEST_BOX(vVar2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_791 == 0)
						{
							return 0;
						}
						else
						{
							MISC::SET_BIT(&iLocal_97, 10);
						}
					}
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_791 = 0;
				if (iLocal_792 == 0)
				{
					if (func_42(&(Local_95.f_2), joaat("dinghy2"), vLocal_793, fLocal_794, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_95.f_2), 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_95.f_2), true, true, 0);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_95.f_2), 12f);
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_95.f_2), 1);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_95.f_2), false);
					}
				}
				else
				{
					iLocal_792 = 0;
					MISC::CLEAR_BIT(&iLocal_97, 10);
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_791 = 0;
				MISC::CLEAR_BIT(&iLocal_97, 10);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy2"));
	return 1;
}

int func_42(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_43(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_43(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_44(PLAYER::PLAYER_ID(), vParam0, iParam2) > -1)
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

int func_44(int iParam0, vector3 vParam1, int iParam2)
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

int func_45(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_54(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_46(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_46(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_50(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_3(iVar1, 1, 1))
		{
			if (!func_48(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_47(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_50(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_50(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_47(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_49(-1, 0) == 8;
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

int func_49(int iParam0, bool bParam1)
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

Vector3 func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1589819[iVar0 /*818*/].f_789) && !func_52(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_51(iParam0);
}

Vector3 func_51(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_52(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_53()
{
	return Global_2448756.f_16;
}

int func_54(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_47(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_55(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_51(iVar1), vParam0, true) < fParam1)
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

int func_55(int iParam0)
{
	if (func_60(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_59(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_56(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_57();
}

struct<13> func_59(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2505680 = { func_59(iParam0) };
		Global_2505693 = { func_59(iParam1) };
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

void func_61(var uParam0, var uParam1)
{
	*uParam0 = { func_62(Local_95.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_95.f_10 - *uParam0), (Local_95.f_10.f_1 - uParam0->f_1));
}

Vector3 func_62(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_63(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) };
	vVar0.z = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_63(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_95.f_10, func_37(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_13 = { Local_95.f_10, 8000f, 0f };
			return vVar2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_95.f_10, func_37(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_13 = { 5000f, Local_95.f_10.f_1, 0f };
			return vVar2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_95.f_10, func_37(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_13 = { Local_95.f_10, -5000f, 0f };
			return vVar2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_95.f_10, func_37(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_6 = func_66(iVar1);
			Local_95.f_13 = { -5000f, Local_95.f_10.f_1, 0f };
			return vVar2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		
		case 1:
			return 186.4808f;
		
		case 2:
			return 65.4787f;
		
		case 3:
			return 56.421f;
		
		case 4:
			return 76.4749f;
		
		case 5:
			return 79.1503f;
		
		case 6:
			return 24.8224f;
		
		case 7:
			return 27.7851f;
		
		case 8:
			return 32.1401f;
		
		case 9:
			return 329.6803f;
		
		case 10:
			return 328.7837f;
		
		case 11:
			return 283.9666f;
		
		case 12:
			return 295.5786f;
		
		case 13:
			return 314.4354f;
		
		case 14:
			return 0.4088f;
		
		case 15:
			return 287.0804f;
		
		case 16:
			return 249.5385f;
		
		case 17:
			return 270.7522f;
		
		case 18:
			return 260.8947f;
		
		case 19:
			return 248.4225f;
		
		case 20:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_67()
{
	vector3 vVar0;
	
	vVar0 = { func_51(PLAYER::PLAYER_ID()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

int func_68(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_69(uParam0, bParam2, 0);
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

void func_69(var uParam0, bool bParam1, bool bParam2)
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

int func_70(var uParam0)
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

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_69(uParam0, 0, 0);
		}
	}
}

int func_72(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_73(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_73(int iParam0)
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

void func_74()
{
	if (func_3(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Local_95.f_21 == 5)
		{
			vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
		}
		switch (vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
		{
			case 0:
				func_97();
				if (Local_95.f_21 > 0)
				{
					vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_72(Local_95.f_2))
				{
					func_127();
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 0))
					{
						func_96();
						vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_72(Local_95.f_2))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 0))
					{
						vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
						MISC::CLEAR_BIT(&(vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
						MISC::SET_BIT(&(vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 6);
						if (Local_95.f_21 >= 4)
						{
							vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_72(Local_95.f_2))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 0))
					{
						if (Local_95.f_21 >= 4)
						{
							vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
						}
						func_95();
					}
					else
					{
						vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_72(Local_95.f_2))
				{
					if (!MISC::IS_BIT_SET(iLocal_97, 3))
					{
						if (ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_95.f_2)) < 3f)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							MISC::SET_BIT(&iLocal_97, 3);
						}
					}
					if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 0) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2))) && func_31(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 1) >= 10f)
					{
						vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_143();
				break;
		}
		func_75();
	}
}

void func_75()
{
	int iVar0;
	struct<9> Var1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_103))
	{
		if (func_90(1, 1))
		{
			if (((vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 1 || vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 2) || vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 3) || vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_89() };
				func_87(&uLocal_104);
				if (vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 1)
				{
					if (func_72(Local_95.f_2))
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 10f, 10f, 3f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_86(NETWORK::NET_TO_VEH(Local_95.f_2), 0))
						{
							func_85(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 23, true), "BTX_ENTER", &uLocal_104, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_95();
					func_84(1);
					func_76(&iLocal_103, &Var1, &uLocal_104, func_83(&uLocal_104));
				}
			}
		}
	}
	else
	{
		iLocal_103 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("instructional_buttons");
	}
}

void func_76(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_82(uParam2);
	}
	if (Global_1315706 < 2)
	{
		func_81(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (MISC::IS_BIT_SET(uParam2->f_676, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_80(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 359)
						{
							func_80(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_80(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (MISC::IS_BIT_SET(uParam2->f_674, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_675, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_79(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_678, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_80(&(uParam2->f_1[iVar0 /*56*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_80(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_674, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_675, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_79(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_686);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_78(*iParam0, uParam1);
	}
	func_77();
}

void func_77()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_78(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_79(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_80(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_81(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_82(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_83(var uParam0)
{
	return uParam0->f_679;
}

void func_84(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_85(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

int func_86(int iParam0, bool bParam1)
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
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
				if (PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_87(var uParam0)
{
	func_88(uParam0);
	uParam0->f_679 = 1;
}

void func_88(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 359;
		uParam0->f_1[iVar0 /*56*/].f_55 = 359;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

struct<9> func_89()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_90(int iParam0, int iParam1)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_94())
		{
			return 0;
		}
	}
	if (func_29())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_93(0))
		{
			return 0;
		}
	}
	if (func_92(8, -1))
	{
		return 0;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_91())
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (Global_1312791)
	{
		return 0;
	}
	if (Global_1574181)
	{
		return 0;
	}
	return 1;
}

bool func_91()
{
	return Global_1312867;
}

bool func_92(int iParam0, int iParam1)
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

int func_93(int iParam0)
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

bool func_94()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

void func_95()
{
	Global_2539215.f_258 = 1;
}

void func_96()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_99))
	{
		HUD::REMOVE_BLIP(&iLocal_99);
	}
}

void func_97()
{
	int iVar0;
	
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iVar0 = func_26(1190, -1, 0);
		if (!MISC::IS_BIT_SET(iVar0, 15))
		{
			func_99("BTX_HELP1", -1);
			MISC::SET_BIT(&iVar0, 15);
			func_98(1190, iVar0, -1, 1, 0);
		}
	}
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_99(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_100()
{
	if (!func_4(Local_95.f_3) && func_72(Local_95.f_2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_95.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			func_125();
			func_104();
			if (func_103(Local_95.f_3))
			{
				PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_95.f_3), 323, true);
			}
			switch (Local_95.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), -1273030092) != 0)
					{
						TASK::TASK_BOAT_MISSION(NETWORK::NET_TO_PED(Local_95.f_3), NETWORK::NET_TO_VEH(Local_95.f_2), 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_102(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_95.f_2), false), Local_95.f_7);
					PATHFIND::_0x07FB139B592FA687(fLocal_966, fLocal_968, fLocal_967, fLocal_969);
					if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(fLocal_966, fLocal_968, fLocal_967, fLocal_969))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), 242628503) != 0)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_95.f_3), iLocal_102);
						}
					}
					break;
				
				case 5:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), -1273030092) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_95.f_3), NETWORK::NET_TO_VEH(Local_95.f_2), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_95.f_2), true), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), -1273030092) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_95.f_3), NETWORK::NET_TO_VEH(Local_95.f_2), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_95.f_2), true), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!MISC::IS_BIT_SET(vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 7))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), 0) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2)))
						{
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_95.f_3), 0);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_95.f_3), 0);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_3), 2, false);
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_95.f_3), iLocal_100);
						}
						else
						{
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_95.f_3), 0);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_95.f_3), 0);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_3), 2, true);
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_95.f_3), iLocal_101);
						}
						MISC::SET_BIT(&(vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_95.f_3), 242628503) != 0)
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_95.f_3), iLocal_101);
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
					{
						func_101(&(Local_95.f_2));
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_3))
					{
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_95.f_3), true);
						func_101(&(Local_95.f_3));
					}
					break;
				}
			}
	}
}

void func_101(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_102(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	if (Param0 < Param2)
	{
		fLocal_966 = (Param0 - 25f);
		fLocal_967 = (Param2 + 25f);
	}
	else if (Param0 > Param2)
	{
		fLocal_966 = (Param2 - 25f);
		fLocal_967 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_968 = (Param0.f_1 - 25f);
		fLocal_969 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_968 = (Param2.f_1 - 25f);
		fLocal_969 = (Param0.f_1 + 25f);
	}
}

int func_103(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_104()
{
	int iVar0;
	struct<2> Var1;
	
	if (!MISC::IS_BIT_SET(iLocal_97, 4))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_95.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_795, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&iLocal_97, 4);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_97, 6))
	{
		if (Local_95.f_20 == 4)
		{
			func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_795, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&iLocal_97, 6);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_97, 5))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_95.f_7, (10f * 2f), (10f * 2f), (10f * 2f), false, true, 0))
		{
			func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_795, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&iLocal_97, 5);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_97, 7))
	{
		if (Local_95.f_20 == 5)
		{
			func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_795, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&iLocal_97, 7);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_97, 8))
	{
		func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_108(&uLocal_795, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
			MISC::SET_BIT(&iLocal_97, 8);
		}
	}
	if (Local_95.f_20 == 3)
	{
		if (func_68(&uLocal_961, 30000, 0))
		{
			func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_795, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				func_107(&uLocal_961, 0, 0);
			}
		}
	}
	if (Local_95.f_20 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
		{
			if (func_68(&uLocal_964, iLocal_963, 0))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 17);
				StringCopy(&Var1, "", 16);
				if (!MISC::IS_BIT_SET(iLocal_98, iVar0))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
					{
						func_124(&uLocal_795, 8, NETWORK::NET_TO_PED(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_108(&uLocal_795, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_107(&uLocal_964, 0, 0);
							MISC::SET_BIT(&iLocal_98, iVar0);
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
							iLocal_963 = (MISC::GET_RANDOM_INT_IN_RANGE(20000, 30001) + iVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_95.f_3))
	{
		if (func_72(Local_95.f_2))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(NETWORK::NET_TO_PED(Local_95.f_3)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(NETWORK::NET_TO_PED(Local_95.f_3)))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_95.f_2), PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3), PLAYER::PLAYER_PED_ID(), 1))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
					{
						case 0:
							func_105(NETWORK::NET_TO_PED(Local_95.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_105(NETWORK::NET_TO_PED(Local_95.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_105(NETWORK::NET_TO_PED(Local_95.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_105(NETWORK::NET_TO_PED(Local_95.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_105(NETWORK::NET_TO_PED(Local_95.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_105(NETWORK::NET_TO_PED(Local_95.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_95.f_2));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3));
				}
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_95.f_2));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_PED(Local_95.f_3));
			}
		}
	}
}

void func_105(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_106(iParam2), 1);
}

int func_106(int iParam0)
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

void func_107(var uParam0, bool bParam1, bool bParam2)
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

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_122();
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
		if (func_92(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_121();
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
				func_114();
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
				if (func_113())
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
			if (func_112())
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
			func_111();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_110();
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
		func_122();
	}
	return 0;
}

void func_110()
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

void func_111()
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

int func_112()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_113()
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

void func_114()
{
	if (func_120(14))
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
		Global_14553 = func_115();
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

var func_115()
{
	func_116();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_116()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_119(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_118(PLAYER::PLAYER_PED_ID());
			if (func_117(iVar0) && (!func_120(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_117(Global_106565.f_2357.f_539.f_4321))
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

bool func_117(int iParam0)
{
	return iParam0 < 3;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_119(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_119(int iParam0)
{
	if (func_117(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_120(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_121()
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

void func_122()
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

void func_123(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_124(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_125()
{
	AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
	if (func_3(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2)) && !func_126(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), -1))
		{
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 1);
		}
	}
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127()
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_99))
	{
		if (func_72(Local_95.f_2))
		{
			iLocal_99 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_95.f_2));
			HUD::SET_BLIP_SPRITE(iLocal_99, 356);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_99, "BTX_BLIP");
			HUD::SET_BLIP_FLASHES(iLocal_99, true);
			HUD::SET_BLIP_CATEGORY(iLocal_99, 6);
		}
	}
}

void func_128()
{
	if (func_72(Local_95.f_2))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
		TASK::TASK_BOAT_MISSION(0, NETWORK::NET_TO_VEH(Local_95.f_2), 0, 0, Local_95.f_7, 4, 12f, 786469, 10f, 1071);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_101);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_95.f_2), Local_95.f_13, 4, 12f, 786469, 0f, 0f, 1);
		TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_95.f_2), 12f, 786469);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_101);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_100);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_100);
	}
}

int func_129()
{
	return Local_95.f_1;
}

int func_130(int iParam0)
{
	return vLocal_96[iParam0 /*3*/];
}

int func_131()
{
	var uVar0;
	
	func_139(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_138())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_137())
	{
		return 1;
	}
	if (func_136(157))
	{
		if (!func_135())
		{
			return 1;
		}
	}
	if (func_136(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_132() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_132()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	switch (func_134())
	{
		case 0:
			return func_133();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_133()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_134()
{
	return Global_25765;
}

bool func_135()
{
	return Global_2448756.f_586;
}

int func_136(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_2458613;
}

bool func_138()
{
	return Global_2448756.f_581;
}

void func_139(var uParam0)
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
					func_140(iVar0);
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

void func_140(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_141(iVar2, &bVar3))
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

int func_141(int iParam0, var uParam1)
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

void func_142()
{
	SYSTEM::WAIT(0);
}

void func_143()
{
	func_96();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Local_95.f_20 == 7)
		{
			if (func_72(Local_95.f_2) && !func_4(Local_95.f_3))
			{
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_95.f_3), iLocal_101);
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_2))
				{
					func_101(&(Local_95.f_2));
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_3))
				{
					func_101(&(Local_95.f_3));
				}
			}
		}
	}
	func_146(func_147(1, 1), 9, func_57());
	func_145();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_103);
	func_144();
}

void func_144()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_145()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_100);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
}

void func_146(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -418126478;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_147(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_48(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_148(struct<21> Param0)
{
	func_152(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_150(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_95, 22);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_96, 97);
	if (!func_149())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_95.f_4 = PLAYER::PLAYER_ID();
		Local_95.f_5 = func_67();
		Local_95.f_10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(0f, 5f, 0f) };
		Local_95.f_7 = { func_65(Local_95.f_5) };
	}
	MISC::SET_BIT(&iLocal_97, 8);
	bLocal_960 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	vLocal_96[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_149()
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
		if (func_138())
		{
			return 0;
		}
		if (func_136(155))
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

int func_150(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_144();
			}
			else
			{
				return 0;
			}
		}
		if (!func_151())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_144();
					}
					else
					{
						return 0;
					}
				}
				if (func_138())
				{
					if (!bParam2)
					{
						func_144();
					}
					else
					{
						return 0;
					}
				}
				if (func_136(155))
				{
					if (!bParam2)
					{
						func_144();
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
					func_144();
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
				func_144();
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
			func_144();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_151()
{
	return Global_1312844;
}

void func_152(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_144();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

