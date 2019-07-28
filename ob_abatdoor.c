#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_6))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iScriptParam_6, true);
		vLocal_4 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_6, true) };
		vLocal_5 = { ENTITY::GET_ENTITY_ROTATION(iScriptParam_6, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_6))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_6))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_3, vLocal_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_6))
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_6))
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								if (Global_90143)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
						{
							vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_3, true) };
							if (!func_2(vVar1, vVar0, 0.1f, 0))
							{
								vVar2 = { vVar0 - vVar1 };
								ENTITY::SET_ENTITY_COORDS(iLocal_3, vVar1 + func_1(vVar2) * FtoV(MISC::GET_FRAME_TIME()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_90144 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
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

int func_2(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

bool func_3(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_4()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

