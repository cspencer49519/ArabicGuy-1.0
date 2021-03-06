#pragma once

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long int size_t;

typedef void* Void;
typedef int Any;
typedef unsigned int uint;
typedef int Hash;
typedef int BOOL;
typedef int Entity;
typedef int Player;
typedef int FireId;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int CarGenerator;
typedef int Group;
typedef int Train;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Interior;
typedef int Blip;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int Camera;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Sphere;
typedef int ScrHandle;

typedef struct {
	float x, y;
} Vector2;

typedef struct {
	float x, _padX, y, _padY, z, _padZ;
} Vector3;

typedef struct {
	float x, y, z, w;
} Vector4;

typedef struct {
	int r, g, b, a;
} Color;

enum Exp
{
GRENADE = 0,
GRENADELAUNCHER = 1,
STICKYBOMB = 2,
MOLOTOV = 3,
ROCKET = 4,
TANKSHELL = 5,
HI_OCTANE = 6,
CAR = 7,
PLANE = 8,
PETROL_PUMP = 9,
BIKE = 10,
DIR_STEAM = 11,
DIR_FLAME = 12,
DIR_WATER_HYDRANT = 13,
DIR_GAS_CANISTER = 14,
BOAT = 15,
SHIP_DESTROY = 16,
TRUCK = 17,
BULLET = 18,
SMOKEGRENADELAUNCHER = 19,
SMOKEGRENADE = 20,
BZGAS = 21,
FLARE = 22,
GAS_CANISTER = 23,
EXTINGUISHER = 24,
PROGRAMMABLEAR = 25,
TRAIN = 26,
BARREL = 27,
PROPANE = 28,
BLIMP = 29,
DIR_FLAME_EXPLODE = 30,
TANKER = 31,
PLANE_ROCKET = 32,
VEHICLE_BULLET = 33,
GAS_TANK = 34,
FIREWORK = 35,
SNOWBALL = 36,
PROXMINE = 37,
VALKYRIE_CANNON = 38,
};

enum WeaponHash
{
	#pragma region BaseGame
	WEAPON_UNARMED = 0xA2719263,
	WEAPON_ANIMAL = 0xF9FBAEBE,
	WEAPON_COUGAR = 0x08D4BE52,
	WEAPON_KNIFE = 0x99B507EA,
	WEAPON_NIGHTSTICK = 0x678B81B1,
	WEAPON_HAMMER = 0x4E875F73,
	WEAPON_BAT = 0x958A4A8F,
	WEAPON_GOLFCLUB = 0x440E4788,
	WEAPON_CROWBAR = 0x84BD7BFD,
	WEAPON_PISTOL = 0x1B06D571,
	WEAPON_COMBATPISTOL = 0x5EF9FEC4,
	WEAPON_APPISTOL = 0x22D8FE39,
	WEAPON_PISTOL50 = 0x99AEEB3B,
	WEAPON_MICROSMG = 0x13532244,
	WEAPON_SMG = 0x2BE6766B,
	WEAPON_ASSAULTSMG = 0xEFE7E2DF,
	WEAPON_ASSAULTRIFLE = 0xBFEFFF6D,
	WEAPON_CARBINERIFLE = 0x83BF0278,
	WEAPON_ADVANCEDRIFLE = 0xAF113F99,
	WEAPON_MG = 0x9D07F764,
	WEAPON_COMBATMG = 0x7FD62962,
	WEAPON_PUMPSHOTGUN = 0x1D073A89,
	WEAPON_SAWNOFFSHOTGUN = 0x7846A318,
	WEAPON_ASSAULTSHOTGUN = 0xE284C527,
	WEAPON_BULLPUPSHOTGUN = 0x9D61E50F,
	WEAPON_STUNGUN = 0x3656C8C1,
	WEAPON_SNIPERRIFLE = 0x05FC3C11,
	WEAPON_HEAVYSNIPER = 0x0C472FE2,
	WEAPON_REMOTESNIPER = 0x33058E22,
	WEAPON_GRENADELAUNCHER = 0xA284510B,
	WEAPON_GRENADELAUNCHER_SMOKE = 0x4DD2DC56,
	WEAPON_RPG = 0xB1CA77B1,
	WEAPON_PASSENGER_ROCKET = 0x166218FF,
	WEAPON_AIRSTRIKE_ROCKET = 0x13579279,
	WEAPON_STINGER = 0x687652CE,
	WEAPON_MINIGUN = 0x42BF8A85,
	WEAPON_GRENADE = 0x93E220BD,
	WEAPON_STICKYBOMB = 0x2C3731D9,
	WEAPON_SMOKEGRENADE = 0xFDBC8A50,
	WEAPON_BZGAS = 0xA0973D5E,
	WEAPON_MOLOTOV = 0x24B17070,
	WEAPON_FIREEXTINGUISHER = 0x060EC506,
	WEAPON_PETROLCAN = 0x34A67B97,
	WEAPON_DIGISCANNER = 0xFDBADCED,
	WEAPON_BRIEFCASE = 0x88C78EB7,
	WEAPON_BRIEFCASE_02 = 0x01B79F17,
	WEAPON_BALL = 0x23C9F95C,
	WEAPON_FLARE = 0x497FACC3,
	WEAPON_VEHICLE_ROCKET = 0xBEFDC581,
	WEAPON_BARBED_WIRE = 0x48E7B178,
	WEAPON_DROWNING = 0xFF58C4FB,
	WEAPON_DROWNING_IN_VEHICLE = 0x736F5990,
	WEAPON_BLEEDING = 0x8B7333FB,
	WEAPON_ELECTRIC_FENCE = 0x92BD4EBB,
	WEAPON_EXPLOSION = 0x2024F4E8,
	WEAPON_FALL = 0xCDC174B0,
	WEAPON_EXHAUSTION = 0x364A29EC,
	WEAPON_HIT_BY_WATER_CANNON = 0xCC34325E,
	WEAPON_RAMMED_BY_CAR = 0x07FC7D7A,
	WEAPON_RUN_OVER_BY_CAR = 0xA36D413E,
	WEAPON_HELI_CRASH = 0x145F1012,
	WEAPON_FIRE = 0xDF8E89EB,
	#pragma endregion

	#pragma region Beach Bum Update
	WEAPON_SNSPISTOL = 0xBFD21232,
	WEAPON_BOTTLE = 0xF9E6AA4B,
	#pragma endregion

	#pragma region Valentines Day Massacre Special
	WEAPON_GUSENBERG = 0x61012683,
	#pragma endregion

	#pragma region Business Update
	WEAPON_SPECIALCARBINE = 0xC0A3098D,
	WEAPON_HEAVYPISTOL = 0xD205520E,
	#pragma endregion

	#pragma region High Life Update
	WEAPON_BULLPUPRIFLE = 0x7F229F94,
	#pragma endregion

	#pragma region "I'm Not a Hipster" Update
	WEAPON_DAGGER = 0x92A27487,
	WEAPON_VINTAGEPISTOL = 0x083839C4,
	#pragma endregion

	#pragma region Independence Day Special
	WEAPON_FIREWORK = 0x7F7497E5,
	WEAPON_MUSKET = 0xA89CB99E,
	#pragma endregion

	#pragma region Last Team Standing Update
	WEAPON_HEAVYSHOTGUN = 0x3AABBBAA,
	WEAPON_MARKSMANRIFLE = 0xC734385A,
	#pragma endregion

	#pragma region Festive Surprise
	WEAPON_HOMINGLAUNCHER = 0x63AB0442,
	WEAPON_PROXMINE = 0xAB564B93,
	WEAPON_SNOWBALL = 0x787F0BB,
	#pragma endregion

	#pragma region Heists Update
	WEAPON_FLAREGUN = 0x47757124,
	WEAPON_GARBAGEBAG = 0xE232C28C,
	WEAPON_HANDCUFFS = 0xD04C944D,
	#pragma endregion

	#pragma region Ill-Gotten Gains Part 1
	WEAPON_COMBATPDW = 0x0A3D4D34,
	#pragma endregion

	#pragma region Ill-Gotten Gains Part 2
	WEAPON_MARKSMANPISTOL = 0xDC4DB296,
	WEAPON_KNUCKLE = 0xD8DF3C3C,
	#pragma endregion

	#pragma region Enhanced edition
	WEAPON_HATCHET = 0xF9DCBF2D,
	WEAPON_RAILGUN = 0x6D544C99,
	#pragma endregion

	#pragma region Lowriders
	WEAPON_MACHETE = 0xDD5DF8D9,
	WEAPON_MACHINEPISTOL = 0xDB1AA450,
	#pragma endregion

	#pragma region Executives and Other Criminals
	WEAPON_AIR_DEFENCE_GUN = 0x2C082D7D,
	WEAPON_SWITCHBLADE = 0xDFE37640,
	WEAPON_REVOLVER = 0xC1B3C3D1,
	#pragma endregion

	#pragma region Lowriders: Custom Classics
	WEAPON_DBSHOTGUN = 0xEF951FBB,
	WEAPON_COMPACTRIFLE = 0x624FE830,
	#pragma endregion

	#pragma region Bikers
	WEAPON_AUTOSHOTGUN = 0x12E82D3D,
	WEAPON_BATTLEAXE = 0xCD274149,
	WEAPON_COMPACTLAUNCHER = 0x0781FE4A,
	WEAPON_MINISMG = 0xBD248B55,
	WEAPON_PIPEBOMB = 0xBA45E8B8,
	WEAPON_POOLCUE = 0x94117305,
	WEAPON_WRENCH = 0x19044EE0,
	#pragma endregion

};


enum Input
{
	INPUT_NEXT_CAMERA = 0,
	INPUT_LOOK_LR = 1,
	INPUT_LOOK_UD = 2,
	INPUT_LOOK_UP_ONLY = 3,
	INPUT_LOOK_DOWN_ONLY = 4,
	INPUT_LOOK_LEFT_ONLY = 5,
	INPUT_LOOK_RIGHT_ONLY = 6,
	INPUT_CINEMATIC_SLOWMO = 7,
	INPUT_SCRIPTED_FLY_UD = 8,
	INPUT_SCRIPTED_FLY_LR = 9,
	INPUT_SCRIPTED_FLY_ZUP = 10,
	INPUT_SCRIPTED_FLY_ZDOWN = 11,
	INPUT_WEAPON_WHEEL_UD = 12,
	INPUT_WEAPON_WHEEL_LR = 13,
	INPUT_WEAPON_WHEEL_NEXT = 14,
	INPUT_WEAPON_WHEEL_PREV = 15,
	INPUT_SELECT_NEXT_WEAPON = 16,
	INPUT_SELECT_PREV_WEAPON = 17,
	INPUT_SKIP_CUTSCENE = 18,
	INPUT_CHARACTER_WHEEL = 19,
	INPUT_MULTIPLAYER_INFO = 20,
	INPUT_SPRINT = 21,
	INPUT_JUMP = 22,
	INPUT_ENTER = 23,
	INPUT_ATTACK = 24,
	INPUT_AIM = 25,
	INPUT_LOOK_BEHIND = 26,
	INPUT_PHONE = 27,
	INPUT_SPECIAL_ABILITY = 28,
	INPUT_SPECIAL_ABILITY_SECONDARY = 29,
	INPUT_MOVE_LR = 30,
	INPUT_MOVE_UD = 31,
	INPUT_MOVE_UP_ONLY = 32,
	INPUT_MOVE_DOWN_ONLY = 33,
	INPUT_MOVE_LEFT_ONLY = 34,
	INPUT_MOVE_RIGHT_ONLY = 35,
	INPUT_DUCK = 36,
	INPUT_SELECT_WEAPON = 37,
	INPUT_PICKUP = 38,
	INPUT_SNIPER_ZOOM = 39,
	INPUT_SNIPER_ZOOM_IN_ONLY = 40,
	INPUT_SNIPER_ZOOM_OUT_ONLY = 41,
	INPUT_SNIPER_ZOOM_IN_SECONDARY = 42,
	INPUT_SNIPER_ZOOM_OUT_SECONDARY = 43,
	INPUT_COVER = 44,
	INPUT_RELOAD = 45,
	INPUT_TALK = 46,
	INPUT_DETONATE = 47,
	INPUT_HUD_SPECIAL = 48,
	INPUT_ARREST = 49,
	INPUT_ACCURATE_AIM = 50,
	INPUT_CONTEXT = 51,
	INPUT_CONTEXT_SECONDARY = 52,
	INPUT_WEAPON_SPECIAL = 53,
	INPUT_WEAPON_SPECIAL_TWO = 54,
	INPUT_DIVE = 55,
	INPUT_DROP_WEAPON = 56,
	INPUT_DROP_AMMO = 57,
	INPUT_THROW_GRENADE = 58,
	INPUT_VEH_MOVE_LR = 59,
	INPUT_VEH_MOVE_UD = 60,
	INPUT_VEH_MOVE_UP_ONLY = 61,
	INPUT_VEH_MOVE_DOWN_ONLY = 62,
	INPUT_VEH_MOVE_LEFT_ONLY = 63,
	INPUT_VEH_MOVE_RIGHT_ONLY = 64,
	INPUT_VEH_SPECIAL = 65,
	INPUT_VEH_GUN_LR = 66,
	INPUT_VEH_GUN_UD = 67,
	INPUT_VEH_AIM = 68,
	INPUT_VEH_ATTACK = 69,
	INPUT_VEH_ATTACK2 = 70,
	INPUT_VEH_ACCELERATE = 71,
	INPUT_VEH_BRAKE = 72,
	INPUT_VEH_DUCK = 73,
	INPUT_VEH_HEADLIGHT = 74,
	INPUT_VEH_EXIT = 75,
	INPUT_VEH_HANDBRAKE = 76,
	INPUT_VEH_HOTWIRE_LEFT = 77,
	INPUT_VEH_HOTWIRE_RIGHT = 78,
	INPUT_VEH_LOOK_BEHIND = 79,
	INPUT_VEH_CIN_CAM = 80,
	INPUT_VEH_NEXT_RADIO = 81,
	INPUT_VEH_PREV_RADIO = 82,
	INPUT_VEH_NEXT_RADIO_TRACK = 83,
	INPUT_VEH_PREV_RADIO_TRACK = 84,
	INPUT_VEH_RADIO_WHEEL = 85,
	INPUT_VEH_HORN = 86,
	INPUT_VEH_FLY_THROTTLE_UP = 87,
	INPUT_VEH_FLY_THROTTLE_DOWN = 88,
	INPUT_VEH_FLY_YAW_LEFT = 89,
	INPUT_VEH_FLY_YAW_RIGHT = 90,
	INPUT_VEH_PASSENGER_AIM = 91,
	INPUT_VEH_PASSENGER_ATTACK = 92,
	INPUT_VEH_SPECIAL_ABILITY_FRANKLIN = 93,
	INPUT_VEH_STUNT_UD = 94,
	INPUT_VEH_CINEMATIC_UD = 95,
	INPUT_VEH_CINEMATIC_UP_ONLY = 96,
	INPUT_VEH_CINEMATIC_DOWN_ONLY = 97,
	INPUT_VEH_CINEMATIC_LR = 98,
	INPUT_VEH_SELECT_NEXT_WEAPON = 99,
	INPUT_VEH_SELECT_PREV_WEAPON = 100,
	INPUT_VEH_ROOF = 101,
	INPUT_VEH_JUMP = 102,
	INPUT_VEH_GRAPPLING_HOOK = 103,
	INPUT_VEH_SHUFFLE = 104,
	INPUT_VEH_DROP_PROJECTILE = 105,
	INPUT_VEH_MOUSE_CONTROL_OVERRIDE = 106,
	INPUT_VEH_FLY_ROLL_LR = 107,
	INPUT_VEH_FLY_ROLL_LEFT_ONLY = 108,
	INPUT_VEH_FLY_ROLL_RIGHT_ONLY = 109,
	INPUT_VEH_FLY_PITCH_UD = 110,
	INPUT_VEH_FLY_PITCH_UP_ONLY = 111,
	INPUT_VEH_FLY_PITCH_DOWN_ONLY = 112,
	INPUT_VEH_FLY_UNDERCARRIAGE = 113,
	INPUT_VEH_FLY_ATTACK = 114,
	INPUT_VEH_FLY_SELECT_NEXT_WEAPON = 115,
	INPUT_VEH_FLY_SELECT_PREV_WEAPON = 116,
	INPUT_VEH_FLY_SELECT_TARGET_LEFT = 117,
	INPUT_VEH_FLY_SELECT_TARGET_RIGHT = 118,
	INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE = 119,
	INPUT_VEH_FLY_DUCK = 120,
	INPUT_VEH_FLY_ATTACK_CAMERA = 121,
	INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE = 122,
	INPUT_VEH_SUB_TURN_LR = 123,
	INPUT_VEH_SUB_TURN_LEFT_ONLY = 124,
	INPUT_VEH_SUB_TURN_RIGHT_ONLY = 125,
	INPUT_VEH_SUB_PITCH_UD = 126,
	INPUT_VEH_SUB_PITCH_UP_ONLY = 127,
	INPUT_VEH_SUB_PITCH_DOWN_ONLY = 128,
	INPUT_VEH_SUB_THROTTLE_UP = 129,
	INPUT_VEH_SUB_THROTTLE_DOWN = 130,
	INPUT_VEH_SUB_ASCEND = 131,
	INPUT_VEH_SUB_DESCEND = 132,
	INPUT_VEH_SUB_TURN_HARD_LEFT = 133,
	INPUT_VEH_SUB_TURN_HARD_RIGHT = 134,
	INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE = 135,
	INPUT_VEH_PUSHBIKE_PEDAL = 136,
	INPUT_VEH_PUSHBIKE_SPRINT = 137,
	INPUT_VEH_PUSHBIKE_FRONT_BRAKE = 138,
	INPUT_VEH_PUSHBIKE_REAR_BRAKE = 139,
	INPUT_MELEE_ATTACK_LIGHT = 140,
	INPUT_MELEE_ATTACK_HEAVY = 141,
	INPUT_MELEE_ATTACK_ALTERNATE = 142,
	INPUT_MELEE_BLOCK = 143,
	INPUT_PARACHUTE_DEPLOY = 144,
	INPUT_PARACHUTE_DETACH = 145,
	INPUT_PARACHUTE_TURN_LR = 146,
	INPUT_PARACHUTE_TURN_LEFT_ONLY = 147,
	INPUT_PARACHUTE_TURN_RIGHT_ONLY = 148,
	INPUT_PARACHUTE_PITCH_UD = 149,
	INPUT_PARACHUTE_PITCH_UP_ONLY = 150,
	INPUT_PARACHUTE_PITCH_DOWN_ONLY = 151,
	INPUT_PARACHUTE_BRAKE_LEFT = 152,
	INPUT_PARACHUTE_BRAKE_RIGHT = 153,
	INPUT_PARACHUTE_SMOKE = 154,
	INPUT_PARACHUTE_PRECISION_LANDING = 155,
	INPUT_MAP = 156,
	INPUT_SELECT_WEAPON_UNARMED = 157,
	INPUT_SELECT_WEAPON_MELEE = 158,
	INPUT_SELECT_WEAPON_HANDGUN = 159,
	INPUT_SELECT_WEAPON_SHOTGUN = 160,
	INPUT_SELECT_WEAPON_SMG = 161,
	INPUT_SELECT_WEAPON_AUTO_RIFLE = 162,
	INPUT_SELECT_WEAPON_SNIPER = 163,
	INPUT_SELECT_WEAPON_HEAVY = 164,
	INPUT_SELECT_WEAPON_SPECIAL = 165,
	INPUT_SELECT_CHARACTER_MICHAEL = 166,
	INPUT_SELECT_CHARACTER_FRANKLIN = 167,
	INPUT_SELECT_CHARACTER_TREVOR = 168,
	INPUT_SELECT_CHARACTER_MULTIPLAYER = 169,
	INPUT_SAVE_REPLAY_CLIP = 170,
	INPUT_SPECIAL_ABILITY_PC = 171,
	INPUT_CELLPHONE_UP = 172,
	INPUT_CELLPHONE_DOWN = 173,
	INPUT_CELLPHONE_LEFT = 174,
	INPUT_CELLPHONE_RIGHT = 175,
	INPUT_CELLPHONE_SELECT = 176,
	INPUT_CELLPHONE_CANCEL = 177,
	INPUT_CELLPHONE_OPTION = 178,
	INPUT_CELLPHONE_EXTRA_OPTION = 179,
	INPUT_CELLPHONE_SCROLL_FORWARD = 180,
	INPUT_CELLPHONE_SCROLL_BACKWARD = 181,
	INPUT_CELLPHONE_CAMERA_FOCUS_LOCK = 182,
	INPUT_CELLPHONE_CAMERA_GRID = 183,
	INPUT_CELLPHONE_CAMERA_SELFIE = 184,
	INPUT_CELLPHONE_CAMERA_DOF = 185,
	INPUT_CELLPHONE_CAMERA_EXPRESSION = 186,
	INPUT_FRONTEND_DOWN = 187,
	INPUT_FRONTEND_UP = 188,
	INPUT_FRONTEND_LEFT = 189,
	INPUT_FRONTEND_RIGHT = 190, //Dpad Right
	INPUT_FRONTEND_RDOWN = 191,
	INPUT_FRONTEND_RUP = 192,
	INPUT_FRONTEND_RLEFT = 193,
	INPUT_FRONTEND_RRIGHT = 194,
	INPUT_FRONTEND_AXIS_X = 195,
	INPUT_FRONTEND_AXIS_Y = 196,
	INPUT_FRONTEND_RIGHT_AXIS_X = 197,
	INPUT_FRONTEND_RIGHT_AXIS_Y = 198,
	INPUT_FRONTEND_PAUSE = 199,
	INPUT_FRONTEND_PAUSE_ALTERNATE = 200,
	INPUT_FRONTEND_ACCEPT = 201,
	INPUT_FRONTEND_CANCEL = 202,
	INPUT_FRONTEND_X = 203,
	INPUT_FRONTEND_Y = 204,
	INPUT_FRONTEND_LB = 205,
	INPUT_FRONTEND_RB = 206,
	INPUT_FRONTEND_LT = 207,
	INPUT_FRONTEND_RT = 208,
	INPUT_FRONTEND_LS = 209,
	INPUT_FRONTEND_RS = 210,
	INPUT_FRONTEND_LEADERBOARD = 211,
	INPUT_FRONTEND_SOCIAL_CLUB = 212,
	INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY = 213,
	INPUT_FRONTEND_DELETE = 214,
	INPUT_FRONTEND_ENDSCREEN_ACCEPT = 215,
	INPUT_FRONTEND_ENDSCREEN_EXPAND = 216,
	INPUT_FRONTEND_SELECT = 217,
	INPUT_SCRIPT_LEFT_AXIS_X = 218,
	INPUT_SCRIPT_LEFT_AXIS_Y = 219,
	INPUT_SCRIPT_RIGHT_AXIS_X = 220,
	INPUT_SCRIPT_RIGHT_AXIS_Y = 221,
	INPUT_SCRIPT_RUP = 222,
	INPUT_SCRIPT_RDOWN = 223,
	INPUT_SCRIPT_RLEFT = 224,
	INPUT_SCRIPT_RRIGHT = 225,
	INPUT_SCRIPT_LB = 226,
	INPUT_SCRIPT_RB = 227,
	INPUT_SCRIPT_LT = 228,
	INPUT_SCRIPT_RT = 229,
	INPUT_SCRIPT_LS = 230,
	INPUT_SCRIPT_RS = 231,
	INPUT_SCRIPT_PAD_UP = 232,
	INPUT_SCRIPT_PAD_DOWN = 233,
	INPUT_SCRIPT_PAD_LEFT = 234,
	INPUT_SCRIPT_PAD_RIGHT = 235,
	INPUT_SCRIPT_SELECT = 236,
	INPUT_CURSOR_ACCEPT = 237,
	INPUT_CURSOR_CANCEL = 238,
	INPUT_CURSOR_X = 239,
	INPUT_CURSOR_Y = 240,
	INPUT_CURSOR_SCROLL_UP = 241,
	INPUT_CURSOR_SCROLL_DOWN = 242,
	INPUT_ENTER_CHEAT_CODE = 243,
	INPUT_INTERACTION_MENU = 244,
	INPUT_MP_TEXT_CHAT_ALL = 245,
	INPUT_MP_TEXT_CHAT_TEAM = 246,
	INPUT_MP_TEXT_CHAT_FRIENDS = 247,
	INPUT_MP_TEXT_CHAT_CREW = 248,
	INPUT_PUSH_TO_TALK = 249,
	INPUT_CREATOR_LS = 250,
	INPUT_CREATOR_RS = 251,
	INPUT_CREATOR_LT = 252,
	INPUT_CREATOR_RT = 253,
	INPUT_CREATOR_MENU_TOGGLE = 254,
	INPUT_CREATOR_ACCEPT = 255,
	INPUT_CREATOR_DELETE = 256,
	INPUT_ATTACK2 = 257,
	INPUT_RAPPEL_JUMP = 258,
	INPUT_RAPPEL_LONG_JUMP = 259,
	INPUT_RAPPEL_SMASH_WINDOW = 260,
	INPUT_PREV_WEAPON = 261,
	INPUT_NEXT_WEAPON = 262,
	INPUT_MELEE_ATTACK1 = 263,
	INPUT_MELEE_ATTACK2 = 264,
	INPUT_WHISTLE = 265,
	INPUT_MOVE_LEFT = 266,
	INPUT_MOVE_RIGHT = 267,
	INPUT_MOVE_UP = 268,
	INPUT_MOVE_DOWN = 269,
	INPUT_LOOK_LEFT = 270,
	INPUT_LOOK_RIGHT = 271,
	INPUT_LOOK_UP = 272,
	INPUT_LOOK_DOWN = 273,
	INPUT_SNIPER_ZOOM_IN = 274,
	INPUT_SNIPER_ZOOM_OUT = 275,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE = 276,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE = 277,
	INPUT_VEH_MOVE_LEFT = 278,
	INPUT_VEH_MOVE_RIGHT = 279,
	INPUT_VEH_MOVE_UP = 280,
	INPUT_VEH_MOVE_DOWN = 281,
	INPUT_VEH_GUN_LEFT = 282,
	INPUT_VEH_GUN_RIGHT = 283,
	INPUT_VEH_GUN_UP = 284,
	INPUT_VEH_GUN_DOWN = 285,
	INPUT_VEH_LOOK_LEFT = 286,
	INPUT_VEH_LOOK_RIGHT = 287,
	INPUT_REPLAY_START_STOP_RECORDING = 288,
	INPUT_REPLAY_START_STOP_RECORDING_SECONDARY = 289,
	INPUT_SCALED_LOOK_LR = 290,
	INPUT_SCALED_LOOK_UD = 291,
	INPUT_SCALED_LOOK_UP_ONLY = 292,
	INPUT_SCALED_LOOK_DOWN_ONLY = 293,
	INPUT_SCALED_LOOK_LEFT_ONLY = 294,
	INPUT_SCALED_LOOK_RIGHT_ONLY = 295,
	INPUT_REPLAY_MARKER_DELETE = 296,
	INPUT_REPLAY_CLIP_DELETE = 297,
	INPUT_REPLAY_PAUSE = 298,
	INPUT_REPLAY_REWIND = 299,
	INPUT_REPLAY_FFWD = 300,
	INPUT_REPLAY_NEWMARKER = 301,
	INPUT_REPLAY_RECORD = 302,
	INPUT_REPLAY_SCREENSHOT = 303,
	INPUT_REPLAY_HIDEHUD = 304,
	INPUT_REPLAY_STARTPOINT = 305,
	INPUT_REPLAY_ENDPOINT = 306,
	INPUT_REPLAY_ADVANCE = 307,
	INPUT_REPLAY_BACK = 308,
	INPUT_REPLAY_TOOLS = 309,
	INPUT_REPLAY_RESTART = 310,
	INPUT_REPLAY_SHOWHOTKEY = 311,
	INPUT_REPLAY_CYCLEMARKERLEFT = 312,
	INPUT_REPLAY_CYCLEMARKERRIGHT = 313,
	INPUT_REPLAY_FOVINCREASE = 314,
	INPUT_REPLAY_FOVDECREASE = 315,
	INPUT_REPLAY_CAMERAUP = 316,
	INPUT_REPLAY_CAMERADOWN = 317,
	INPUT_REPLAY_SAVE = 318,
	INPUT_REPLAY_TOGGLETIME = 319,
	INPUT_REPLAY_TOGGLETIPS = 320,
	INPUT_REPLAY_PREVIEW = 321,
	INPUT_REPLAY_TOGGLE_TIMELINE = 322,
	INPUT_REPLAY_TIMELINE_PICKUP_CLIP = 323,
	INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP = 324,
	INPUT_REPLAY_TIMELINE_PLACE_CLIP = 325,
	INPUT_REPLAY_CTRL = 326,
	INPUT_REPLAY_TIMELINE_SAVE = 327,
	INPUT_REPLAY_PREVIEW_AUDIO = 328,
	INPUT_VEH_DRIVE_LOOK = 329,
	INPUT_VEH_DRIVE_LOOK2 = 330,
	INPUT_VEH_FLY_ATTACK2 = 331,
	INPUT_RADIO_WHEEL_UD = 332,
	INPUT_RADIO_WHEEL_LR = 333,
	INPUT_VEH_SLOWMO_UD = 334,
	INPUT_VEH_SLOWMO_UP_ONLY = 335,
	INPUT_VEH_SLOWMO_DOWN_ONLY = 336,
	INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE = 337,
	INPUT_VEH_HYDRAULICS_CONTROL_LEFT = 338,
	INPUT_VEH_HYDRAULICS_CONTROL_RIGHT = 339,
	INPUT_VEH_HYDRAULICS_CONTROL_UP = 340,
	INPUT_VEH_HYDRAULICS_CONTROL_DOWN = 341,
	INPUT_VEH_HYDRAULICS_CONTROL_LR = 342,
	INPUT_VEH_HYDRAULICS_CONTROL_UD = 343,
	INPUT_SWITCH_VISOR = 344,
	INPUT_VEH_MELEE_HOLD = 345,
	INPUT_VEH_MELEE_LEFT = 346,
	INPUT_VEH_MELEE_RIGHT = 347,
	INPUT_MAP_POI = 348,
	INPUT_REPLAY_SNAPMATIC_PHOTO = 349,
	INPUT_VEH_CAR_JUMP = 350,
	INPUT_VEH_ROCKET_BOOST = 351,
	INPUT_VEH_FLY_BOOST = 352,
	INPUT_VEH_PARACHUTE = 353,
	INPUT_VEH_BIKE_WINGS = 354,
	INPUT_VEH_FLY_BOMB_BAY = 355,
	INPUT_VEH_FLY_COUNTER = 356,
	INPUT_VEH_TRANSFORM = 357,
};

typedef enum VehicleWeaponHash
{
	#pragma region BaseGame
	VEHICLE_WEAPON_ROTORS = 0xB1205A4E,
	VEHICLE_WEAPON_TANK = 0x73F7C04B,
	VEHICLE_WEAPON_SPACE_ROCKET = 0xF8A3939F,
	VEHICLE_WEAPON_PLANE_ROCKET = 0xCF0896E0,
	VEHICLE_WEAPON_PLAYER_LAZER = 0xE2822A29,
	VEHICLE_WEAPON_PLAYER_LASER = 0xEFFD014B,
	VEHICLE_WEAPON_PLAYER_BULLET = 0x4B139B2D,
	VEHICLE_WEAPON_PLAYER_BUZZARD = 0x46B89C8E,
	VEHICLE_WEAPON_PLAYER_HUNTER = 0x9F1A91DE,
	VEHICLE_WEAPON_ENEMY_LASER = 0x5D6660AB,
	VEHICLE_WEAPON_SEARCHLIGHT = 0xCDAC517D,
	VEHICLE_WEAPON_RADAR = 0xD276317E,
	VEHICLE_WEAPON_WATER_CANNON = 0x67D18297,
	#pragma endregion

	#pragma region Heists Update
	VEHICLE_WEAPON_TURRET_INSURGENT = 0x44DB5498,
	VEHICLE_WEAPON_TURRET_TECHNICAL = 0x7FD2EA0B,
	VEHICLE_WEAPON_NOSE_TURRET_VALKYRIE = 0x4170E491,
	VEHICLE_WEAPON_PLAYER_SAVAGE = 0x61A31349,
	#pragma endregion

	#pragma region Executives and Other Criminals
	VEHICLE_WEAPON_TURRET_LIMO    = 0x2B796481,
	#pragma endregion

	#pragma region Import / Export
	VEHICLE_WEAPON_CANNON_BLAZER = 0xEBF9FF3E,
	VEHICLE_WEAPON_TURRET_BOXVILLE = 0xB54F4918,
	VEHICLE_WEAPON_RUINER_BULLET = 0x02FCC0F9,
	#pragma endregion

} VehicleWeaponHash;

enum Buttons {
	//Menu Stuff
	Button_X = 18,//Select
	Button_Circle = 263,//Back / Close
	Button_Dpad_Up = 27, //Scroll Up
	Button_Dpad_Down = 19,//Scroll Down
	Button_Dpad_Right = 190,//Part of Open
	Button_Square = 22,//Other Part of Open
	Button_Dpad_Left = 174
	// Button_Tpad = 0,
	// Button_Tpad_X = 13,
	// Button_Tpad_Y = 12,
	// Button_X = 18,
	// Button_Circle = 79,
	// Button_Cirlce_2 = 56,
	// Button_Triangle = 23,
	// Button_Square = 22,
	// Button_R1 = 44,
	// Button_R2 = 11,
	// Button_R3_X = 189,
	// Button_R3_Y = 14,
	// Button_R3_Right = 1,
	// Button_R3_Down = 2,
	// Button_R3_Left = 5,
	// Button_R3_Up = 3,
	// Button_R3_Push = 29,
	// Button_L1 = 37,
	// Button_L2 = 10,
	// Button_L3_X = 187,
	// Button_L3_Y = 188,
	// Button_L3_Right = 9,
	// Button_L3_Down = 8,
	// Button_L3_Left = 34,
	// Button_L3_Up = 32,
	// Button_L3_Push = 36,
	// Button_Dpad_Up = 27,
	// Button_Dpad_Down = 19,
	// Button_Dpad_Left = 15,
	// Button_Dpad_Left_2 = 181,
	// Button_Dpad_Right = 190,
	// Button_Dpad_Right_2 = 182,
	// Button_Options = 191
};