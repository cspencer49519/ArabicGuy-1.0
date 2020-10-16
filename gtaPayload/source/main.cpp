#include "lib.h"
#include "natives.h"
#include "base.h"
#include "drawFunctions.h"
#include "Functions.h"



int frameCount = 0;
char* InfoText;

float
 CenterDraw = 0.26f,
 Menu_X = 0.758,
 Title_X = 0.6350,
 Cunt = 0.648,
 CuntStat = 0.853,
 Cunt2 = 0.633;


 char* CreditText = " ";
 int timer = 0;
 int TextTimer = 0,
 CreditTextTimer = 0,
 lastButtonPress = 0,
 buttonPressDelay = 200,
 NumMenu = 0,
 NumMenuLevel,
 lastNumMenu[20],
 lastOption[20],
 currentOption,
 optionCount,
 buttonID,
 maxOptions = 25,
 player_count =0;
 int BannerR = 1, BannerG = 50, BannerB = 67;//Color RGB



int gGlareHandle; // int
float gGlareDir;
float GlareX = 1.1449, GlareY = 0.4550, GlareXs = 1.1449, GlareYs = 0.8350;
bool
 PressX = false,
 rightPress = false,
 leftPress = false,
 fastRPress = false,
 fastLPress = false,
 WhiteColor,
 WhiteColor_toggle,
 SelectedItem,
 SelectedItem4;
 bool newTimerTick = true;
 int maxTimerCount;
 int SelClrR = 255;
int SelClrG = 255;
int SelClrB = 0;
int scalex_ = 0;
int scaley_ = 0;
int SRL_R = 255;
int SRL_G = 255;
int SRL_B = 255;
int BKG_R = 1;
int BKG_G = 50;
int BKG_B = 67;
int TITLE_R = 255;
int TITLE_G = 255;
int TITLE_B = 255;
int TitleColor = 1;
int BannersColor = 1;
int BackgroundColor =1;
int ScrollerColor =1;
int TitleFont = 6;
int OptionsFont = 0;
bool EnableMusic = true;
int objMap = 0;
bool AnimalAttack;
int PLevel;
bool GetNearbyPed = true;
int AddMoney = 1;
int HandleObject = 0;
bool GodModeG;
bool GodModeA;
bool TeleportWPLoop;
bool HashGun;
int ObjModel;
bool ContinueWP;
bool RequestModel;
int Girl_naked;
bool RapeSttr;
int  RequestModelHash;
char* RequestModelString;
int OtherPed = 1;
bool GodMode = true;
bool NeverWanted;
bool FullMap;
bool SuperRun;
bool SuperMan;
bool super_check;
bool CloneGun;
bool RapeNer;
bool NerGodMode;
bool InfiniteAmmo;
bool SuperJump;
bool FireAmmo;
bool WeaponRocket;
bool Forcefield;
bool TeleportGun;
int guard;
bool Invisibility;
float RotX, RotY, RotZ;
int VehicleRocketsDelay = 0;
char* WEATHER_[13] = {"Blizzard", "Clear", "Clearing", "Clouds", "ExtraSunny", "Foggy", "Neutral", "Overcast", "Rain", "Thunder", "Smog", "Snow", "Xmas"};
bool FreezePos;
int weather_h = 0;
bool ThunderLightning;
bool FreezeTime;
bool StartAnim;
bool ChangeModel;
int AnimTypeMe = 1;
char* ANIM_STRING;
char* ANIMID_STRING;
bool Movement;
char* MOVEMENT;
char* MODEL_STRING;
bool DeleteEntityGun;
bool UseComponent;
int StripperDances =1;
int NerStripperDances =1;
int AnimType;
Hash PLAYER_ZERO = 0xD7114C9;
Hash PLAYER_ONE = 0x9B22DBAF;
Hash PLAYER_TWO = 0x9B810FA2;

Hash SP0_TOTAL_CASH = 0x324C31D;
Hash SP1_TOTAL_CASH = 0x44BD6982;
Hash SP2_TOTAL_CASH = 0x8D75047D;
int AnimTypeAn;
int TapDanceing = 1;
int NerTapDanceing = 1;
int MiscAnimations = 1;
int NerMiscAnimations = 1;
int Workouts = 1;
int NerWorkouts = 1;
int AnimPed;
int SettingAnimations = 1;
int NerSettingAnimations = 1;
int LayDown= 1;
int NerLayDown= 1;
 int AnimsBgDance =  1;
 int AnimsBgStripper =  1;
 int AnimsBgWave =1;
 int AnimsBgWalk = 1;
int AnimationsWalk = 1;
int NerAnimationsWalk = 1;
bool GodModeVeh;
bool VehicleWeap;
char* Neons_[4] = {"Left", "Right", "Front", "Back"};
bool FlashNeon;
int NeonNum = 0;
bool NerFreeze;
bool VehSuperJump;
bool ExplosiveAmmo;
int AnimsCat = 1;
int AnimsChop = 1;
int AnimsMonkey = 1;
int AnimsPug = 1;
int AnimsRabbit = 1;
int modelObj;
float VehicleDensity = 1.0;
float ParkedVehicleDensity = 1.0;
float RandomVehicleDensity = 1.0;
float PedDensity = 1.0;
float ScenarioPedDensity =1.0;
bool NoTraffic;
bool CreateObj;
int MovePed;
bool RopeGun;
bool CreateGuard;
char* GuardModel;
bool RapeSpeech;
float objx, objy, objz, rotx, roty, rotz;
bool CreateVeh;
int modelVeh;
float Vehx, Vehy, Vehz;
 bool testbg;
 int CloudTypes = 1;
bool VehHydrolics;
bool RapeSttrGirl;
bool VehScorched;
bool VehFreeze;
bool EnableDogAttack;
bool CreateDog;
int BodyWeapon = 1;
bool BgAniamtions;
bool AnAniamtions;
int NextTime =0;
char* animdictbg;
char* animidbg;
char* animdictAn;
char* animidAn;
bool DogAttack;
bool ZombieMode;
bool Blackout;
typedef enum Subs
{
	Closed,
	Main_Menu,
	PlayerMenu,
	Animations,
	MovementChanger,
	Scenarios,
	ModelChanger,
	Animals,
	VehicleMenu,
        VehicleSpawner,
        Sports,
	Super,
	Coupes,
	Compacts,
	Sedans,
	SportsClassics,
	Muscle,
	SUVs,
	Vans,
	Neons,
        WeaponMenu,
		ObjectMenu,
		MoveLastObject,
        Containers,
        TeleportMenu,
	MapMods,
	Bodyguards,
	BodyguardsOptions,
	AnimsBg,
	WeaponBg,
       AnimalsG,
       AnimalsOptions,
       AnimsAn,
	World,
        NearbyPedController,
        NerAnimations,
        NerMovementChanger,
        NerWeapons,
		NerObjects,
		Speech,
        Misc,
	Credits,

} Subs;

bool RequestObject()
{
	if (ENTITY::DOES_ENTITY_EXIST(HandleObject) == true)
	{
		int Netid = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(HandleObject);
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(HandleObject);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(HandleObject))
		{
			return true;
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Netid))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Netid);
			return true;
		}
		else false;
	}
	return false;
}

void DRAW_TEXT_OPTION(char * text, int Font, float x, float y, float scalex, float scaley, int a, bool center, bool UseEdge, int RD, int GD, int BD)
{
	UI::SET_TEXT_FONT(Font);
	if(SelectedItem)
	{
	UI::SET_TEXT_SCALE(0.45, 0.45);
	UI::SET_TEXT_COLOUR(SelClrR, SelClrG, SelClrB, 255);
	}
    else
	{
		UI::SET_TEXT_SCALE(scalex, scaley);
		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
		UI::SET_TEXT_OUTLINE();
	}
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}
void DRAW_TEXT5(char * text, int Font, float x, float y, float scalex, float scaley, bool center, bool UseEdge , int RD, int GD, int BD)
{
	UI::SET_TEXT_FONT(Font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	if(WhiteColor_toggle == true)
	{
	UI::SET_TEXT_COLOUR(255, 255, 255, 255);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	}
	else if (WhiteColor_toggle == false)
	{
		UI::SET_TEXT_COLOUR(0, 0, 0, 255);
		UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	}
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}

void DRAW_TEXT3(char * text, int Font, float x, float y, float scalex, float scaley, bool center, bool UseEdge , int RD, int GD, int BD)
{
	UI::SET_TEXT_FONT(Font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	if(WhiteColor == true)
	{
	UI::SET_TEXT_COLOUR(255, 255, 255, 255);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	}
	else if (WhiteColor == false)
	{
		UI::SET_TEXT_COLOUR(0, 0, 0, 255);
		UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	}
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}


void DRAW_TEXT9(const char * text, int Font, float x, float y, float scalex, float scaley, int r, int g, int b, int a, bool center)
{
	UI::SET_TEXT_FONT(Font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}

void DRAW_TEXT(const char * text, int Font, float x, float y, float scalex, float scaley, int r, int g, int b, int a, bool center, bool UseEdge , int RD, int GD, int BD)
{
	UI::SET_TEXT_FONT(Font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}



void DRAW_TEXT2(char * text, int Font, float x, float y, float scalex, float scaley, int r, int g, int b, int a, bool center)
{
	UI::SET_TEXT_FONT(Font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}


void DRAW_TEXT4(char * text, int Font, float x, float y, float scalex, float scaley, int r, int g, int b, int a,  bool center, bool UseEdge , int RD, int GD, int BD)
{
	UI::SET_TEXT_FONT(Font);
	if(SelectedItem4)
	{
	UI::SET_TEXT_SCALE(0.45, 0.45);
	UI::SET_TEXT_COLOUR(SelClrR, SelClrG, SelClrB, 255);
	}
    else
	{
		UI::SET_TEXT_SCALE(scalex, scaley);
		UI::SET_TEXT_COLOUR(r, g, b, a);
		UI::SET_TEXT_OUTLINE();
	}
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}




void SPRITE(char* TextOne, char* TextTwo, float X, float Y, float Width, float Height, float Rotation, int R, int G, int B, int A)
{
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(TextOne))
		GRAPHICS::DRAW_SPRITE(TextOne, TextTwo, X, Y, Width, Height, Rotation, R, G, B, A);
}



void drawFloat(float Val, bool center, float x, float y, float scalex, float scaley, int r, int b, int g, int a)
{
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("NUMBER");
	UI::ADD_TEXT_COMPONENT_FLOAT(Val, 4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}
void DrawFloat(float val, int dp, int font, float x, float y, float scalex, float scaley, int r, int b, int g, int a, bool center)
{
	UI::SET_TEXT_FONT(font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("NUMBER");
	UI::ADD_TEXT_COMPONENT_FLOAT(val, 4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}

void drawNumber(int Val, int font,  float x, float y, float scalex, float scaley, int r, int b, int g, int a, int center)
{
	UI::SET_TEXT_FONT(font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("NUMBER");
	UI::ADD_TEXT_COMPONENT_INTEGER(Val);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}


void draw_item_count(float x, float y, float xs, float ys)
{
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(xs,  ys);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(255, 255, 255, 255);
	UI::SET_TEXT_WRAP(0, 1);
	UI::SET_TEXT_CENTRE(1);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("CM_ITEM_COUNT");
	UI::ADD_TEXT_COMPONENT_INTEGER(currentOption);
	UI::ADD_TEXT_COMPONENT_INTEGER(optionCount);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(x,y);
}

void SetupScroller()
{
		if (optionCount > maxOptions)
	{
		if (currentOption > maxOptions)
		{
			GRAPHICS::DRAW_RECT(0.8900, ((maxOptions *  0.030f) + 0.1410f), 0.0050, 0.0285, SRL_R, SRL_G, SRL_B, 189);
			//SPRITE("hunting", "huntingwindarrow_32", 0.6180, ((maxOptions *  0.030f) + 0.1413f), -0.0100, 0.0350, 269, SRL_R, SRL_G, SRL_B, 255);
		}
		else
		{
			GRAPHICS::DRAW_RECT(0.8900, ((currentOption *  0.030f) + 0.1410f), 0.0050, 0.0285, SRL_R, SRL_G, SRL_B, 189);
			//SPRITE("hunting", "huntingwindarrow_32", 0.6180, ((currentOption *  0.030f) + 0.1413f), -0.0100, 0.0350, 269,  SRL_R, SRL_G, SRL_B, 255);
		}
	}
	else
	{
		GRAPHICS::DRAW_RECT(0.8900, ((currentOption *  0.030f) + 0.1410f), 0.0050, 0.0285, SRL_R, SRL_G, SRL_B, 189);
	}
}

void ChangeMenu(int Menu)
{
	lastNumMenu[NumMenuLevel] = NumMenu;
	lastOption[NumMenuLevel] = currentOption;
	currentOption = 1;
	NumMenu = Menu;
	NumMenuLevel++;
}

int SR, SG, SB;
void AddTitle(char* Text)
{
	DRAW_TEXT2(Text, 1, Title_X, 0.0840, 0.9000, 0.9000, TITLE_R, TITLE_G , TITLE_B , 255, false);
}


void AddOption(char *option, char* spritedict, char* sprite, bool Normal, int color, char* Infox)
{
	optionCount++;
	if (currentOption == optionCount)
		InfoText = Infox;

	SelectedItem = false;
	SR = 255; SG = 255;  SB = 255;
	if (optionCount == currentOption)
	{
		SelectedItem = true;
		SR = 255; SG = 255;  SB = 255;
	}
	else
	UI::SET_TEXT_OUTLINE();
	if(Normal == true)
	{
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
		if(color == 0)
		{
		GRAPHICS::DRAW_RECT(Menu_X, (optionCount * 0.030f + 0.1410f), CenterDraw, 0.0285, BKG_R, BKG_G, BKG_B, 189);
		}
		if(color == 1)
		{
		GRAPHICS::DRAW_RECT(Menu_X, (optionCount * 0.030f + 0.1410f), CenterDraw, 0.0285, 0, 0, 0, 150);
		}
		DRAW_TEXT_OPTION(option, OptionsFont, Cunt - 0.015 , (optionCount * 0.030f + 0.127f), 0.35000000, 0.35000000, 255, false, false, 0, 0, 0);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		if(color == 0)
		{
		GRAPHICS::DRAW_RECT(Menu_X, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.1410f), CenterDraw, 0.0285, BKG_R, BKG_G, BKG_B, 189);
		}
		if(color == 1)
		{
		GRAPHICS::DRAW_RECT(Menu_X,  ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.1410f), CenterDraw, 0.0285,0, 0, 0, 150);
		}
		DRAW_TEXT_OPTION(option, OptionsFont, Cunt - 0.015, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.127f), 0.35000000, 0.35000000, 255, false, false, 0, 0, 0);
	}

	}
	else
	{
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
		if(color == 0)
		{
		GRAPHICS::DRAW_RECT(Menu_X, (optionCount * 0.030f + 0.1410f), CenterDraw, 0.0285, BKG_R, BKG_G, BKG_B, 189);
		}
		if(color == 1)
		{
		GRAPHICS::DRAW_RECT(Menu_X, (optionCount * 0.030f + 0.1410f), CenterDraw, 0.0285, 0, 0, 0, 150);
		}

		SPRITE(spritedict, sprite, 0.6395, (optionCount * 0.030f + 0.1413f), 0.018, 0.028, 0, SR, SG, SB, 255);
		DRAW_TEXT_OPTION(option, OptionsFont, Cunt, (optionCount * 0.030f + 0.127f), 0.35000000, 0.35000000, 255, false, false, 0, 0, 0);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		if(color == 0)
		{
		GRAPHICS::DRAW_RECT(Menu_X, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.1410f), CenterDraw, 0.0285, BKG_R, BKG_G, BKG_B, 189);
		}
		if(color == 1)
		{
		GRAPHICS::DRAW_RECT(Menu_X, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.1410f), CenterDraw, 0.0285, 0, 0, 0, 150);
		}
		DRAW_TEXT_OPTION(option, OptionsFont, Cunt, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.127f), 0.35000000, 0.35000000, 255, false, false, 0, 0, 0);
	}

	}

}

void addOption(char* option,  char* sprite, char* sprite2, int color, char* Infox)
{
	AddOption(option, sprite, sprite2, false, color, Infox);
}

void CheckBox(char *option, bool BOOL, char *spritedict, char* sprite, int color, char* Infox)
{
	if (BOOL){
		AddOption(option, spritedict, sprite, false, color, Infox);
		SPRITE("commonmenu", "common_medal", 0.8700, (optionCount * 0.030f + 0.1413f), 0.03, 0.04, 0,  0, 255, 0, 255);}
	else{
		AddOption(option, spritedict, sprite, false, color, Infox);
		SPRITE("commonmenu", "common_medal", 0.8700, (optionCount * 0.030f + 0.1413f), 0.03, 0.04, 0, 255, 0, 0, 255);}

}


void print(const char* str, int ms)
{
	UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(str);
	UI::END_TEXT_COMMAND_PRINT(ms, 1);
}

void IntOption(char *option, int *var, int min, int max, bool fast, char *spritedict, char* sprite, int color, char* Infox)
{
	AddOption(option, spritedict, sprite, false, color, Infox);
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawNumber(*var, 0, 0.868, (optionCount * 0.030f + 0.126f), 0.36f, 0.36f, 255, 255, 255, 255, 1);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
	drawNumber(*var, 0, 0.868, (maxOptions * 0.030f + 0.126f), 0.36f, 0.36f, 255, 255, 255, 255, 1);
	}
 	if (currentOption == optionCount)
	{
		 if(fast == false)

			{


				if (rightPress == true)
		{
			// PLAY_SOUND_FRONTEND( -1, "POLICE_COMPUTER_MENU_MOVE" );
			if (*var >= max)
			{
				*var = min;
			}
			else
			{
				*var = *var + 1;
			}
			rightPress = false;
		}
		else if (leftPress == true)
		{
			// PLAY_SOUND_FRONTEND( -1, "POLICE_COMPUTER_MENU_MOVE" );
			if (*var <= min)
			{
				*var = max;
			}
			else
			{
				*var = *var - 1;
			}
		leftPress = false;
		}
	  }
	}
}
void DrawIntOption(char *option, int *Value, char *spritedict, char* sprite, int color, char* Infox)
{
	AddOption(option, spritedict, sprite, false, color, Infox);
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawNumber(*Value, 0, 0.860, (optionCount * 0.030f + 0.126f), 0.36f, 0.36f, 255, 255, 255, 255, 1);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
	drawNumber(*Value, 0, 0.860, (maxOptions * 0.030f + 0.126f), 0.36f, 0.36f, 255, 255, 255, 255, 1);
	}
}
void addObject(char* option, char* model)
{
	AddOption(option, "commonmenutu", "custom_mission", true, 0, "");
	if (currentOption == optionCount && PressX)
	{
        STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(model));
       Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 5, 0);
        HandleObject = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY(model), coord.x, coord.y, coord.z,  false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(HandleObject, 1);
        RotX = 0; RotY = 0; RotZ = 0;
/*
		  //STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(object));
		  Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 10, 0);
        HandleObject = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY(object), coord.x, coord.y, coord.z,  false, false, true);
	 float  h = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_HEADING(HandleObject, -h);
						ENTITY::FREEZE_ENTITY_POSITION(HandleObject, true);
						ENTITY::SET_ENTITY_INVINCIBLE(HandleObject, true);
						ENTITY::SET_ENTITY_COLLISION(HandleObject, true, true);
						ENTITY::SET_ENTITY_LOD_DIST(HandleObject, 500);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(HandleObject, true);
						OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(HandleObject);
						ENTITY::SET_ENTITY_DYNAMIC(HandleObject, 0);
						ENTITY::SET_ENTITY_ROTATION(HandleObject, 0.0000, 0.0000, 0.0000, 2, 1);
						ENTITY::SET_ENTITY_PROOFS(HandleObject, true, true, true, true, true, true, true, true);

*/
		PressX = false;
	}
}

void EditCoordObj(char *option, bool xCoord, bool yCoord, bool zCoord, int color)
{
	Vector3 coord;
	if (ENTITY::DOES_ENTITY_EXIST(HandleObject))
	 coord = ENTITY::GET_ENTITY_COORDS(HandleObject, false);

	AddOption(option, "commonmenutu", "custom_mission", false, color, "");
	if (xCoord)
	{
		if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(coord.x, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(coord.x, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
		if (currentOption == optionCount)
		{
			if (rightPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				float X;
				if (PLevel == 0)
				{
					X = coord.x + 1.5000;
				}
				else if (PLevel == 1)
				{
					X = coord.x + 0.1;
				}
				else if (PLevel == 2)
				{
					X = coord.x + 0.01;
				}
				else if (PLevel == 3)
				{
					X = coord.x + 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_COORDS(HandleObject, X, coord.y, coord.z, 1, 0, 0, 1);
				}
				rightPress = false;
			}
			else if (leftPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				float X1;
				if (PLevel == 0)
				{
					X1 = coord.x - 1.5000;
				}
				else if (PLevel == 1)
				{
					X1 = coord.x - 0.1;
				}
				else if (PLevel == 2)
				{
					X1 = coord.x - 0.01;
				}
				else if (PLevel == 3)
				{
					X1 = coord.x - 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_COORDS(HandleObject, X1, coord.y, coord.z, 1, 0, 0, 1);
				}
				leftPress = false;
			}
		}
	}
	if (yCoord)
	{
		if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(coord.y, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(coord.y, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
		if (currentOption == optionCount)
		{
			if (rightPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				float Y;
				if (PLevel == 0)
				{
					Y = coord.y + 1.5000;
				}
				else if (PLevel == 1)
				{
					Y = coord.y + 0.1;
				}
				else if (PLevel == 2)
				{
					Y = coord.y + 0.01;
				}
				else if (PLevel == 3)
				{
					Y = coord.y + 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_COORDS(HandleObject, coord.x, Y, coord.z, 1, 0, 0, 1);
				}
				rightPress = false;
			}
			else if (leftPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				float Y1;
				if (PLevel == 0)
				{
					Y1 = coord.y - 1.5000;
				}
				else if (PLevel == 1)
				{
					Y1 = coord.y - 0.1;
				}
				else if (PLevel == 2)
				{
					Y1 = coord.y - 0.01;
				}
				else if (PLevel == 3)
				{
					Y1 = coord.y - 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_COORDS(HandleObject, coord.x, Y1, coord.z, 1, 0, 0, 1);
				}
				leftPress = false;
			}
		}
	}

	if (zCoord)
	{
		if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(coord.z, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(coord.z, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
		if (currentOption == optionCount)
		{
			if (rightPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				float Z;
				if (PLevel == 0)
				{
					Z = coord.z + 1.5000;
				}
				else if (PLevel == 1)
				{
					Z = coord.z + 0.1;
				}
				else if (PLevel == 2)
				{
					Z = coord.z + 0.01;
				}
				else if (PLevel == 3)
				{
					Z = coord.z + 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_COORDS(HandleObject, coord.x, coord.y, Z, 1, 0, 0, 1);
				}
				rightPress = false;
			}
			else if (leftPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				float Z1;
				if (PLevel == 0)
				{
					Z1 = coord.z - 1.5000;
				}
				else if (PLevel == 1)
				{
					Z1 = coord.z - 0.1;
				}
				else if (PLevel == 2)
				{
					Z1 = coord.z - 0.01;
				}
				else if (PLevel == 3)
				{
					Z1 = coord.z - 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_COORDS(HandleObject, coord.x, coord.y, Z1, 1, 0, 0, 1);
				}
				leftPress = false;
			}
		}
	}
}


void EditRotatObj(char *option, bool xRotat, bool yRotat, bool zRotat, int color)
{
	AddOption(option, "commonmenutu", "custom_mission", false, color, "");
	if (xRotat)
	{
		if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(RotX, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(RotX, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
		if (currentOption == optionCount)
		{
			if (rightPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				if (PLevel == 0)
				{
					RotX += 1.5000;
				}
				else if (PLevel == 1)
				{
					RotX += 0.1;
				}
				else if (PLevel == 2)
				{
					RotX += 0.01;
				}
				else if (PLevel == 3)
				{
					RotX += 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
				}
				rightPress = false;
			}
			else if (leftPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				if (PLevel == 0)
				{
					RotX -= 1.5000;
				}
				else if (PLevel == 1)
				{
					RotX -= 0.1;
				}
				else if (PLevel == 2)
				{
					RotX -=  0.01;
				}
				else if (PLevel == 3)
				{
					RotX -= 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
				}
				leftPress = false;
			}
		}
	}


	if (yRotat)
	{
		if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(RotY, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(RotY, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
		if (currentOption == optionCount)
		{
			if (rightPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				if (PLevel == 0)
				{
					RotY+= 1.5000;
				}
				else if (PLevel == 1)
				{
					RotY+= 0.1;
				}
				else if (PLevel == 2)
				{
					RotY+= 0.01;
				}
				else if (PLevel == 3)
				{
					RotY+= 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
				}
				rightPress = false;
			}
			else if (leftPress == true)
			{
				//PLAY_SOUND_FRONTEND(-1, "POLICE_COMPUTER_MENU_MOVE");
				if (PLevel == 0)
				{
					RotY-= 1.5000;
				}
				else if (PLevel == 1)
				{
					RotY-=  0.1;
				}
				else if (PLevel == 2)
				{
					RotY-=  0.01;
				}
				else if (PLevel == 3)
				{
					RotY-=  0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
				}
				leftPress = false;
			}
		}
	}

	if (zRotat)
	{
		if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(RotZ, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(RotZ, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
		if (currentOption == optionCount)
		{
			if (rightPress == true)
			{
				if (PLevel == 0)
				{
					RotZ+= 1.5000;
				}
				else if (PLevel == 1)
				{
					RotZ+= 0.1;
				}
				else if (PLevel == 2)
				{
					RotZ+= 0.01;
				}
				else if (PLevel == 3)
				{
					RotZ+= 0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
				}
				rightPress = false;
			}
			else if (leftPress == true)
			{
				if (PLevel == 0)
				{
					RotZ-= 1.5000;
				}
				else if (PLevel == 1)
				{
					RotZ-=  0.1;
				}
				else if (PLevel == 2)
				{
					RotZ-=  0.01;
				}
				else if (PLevel == 3)
				{
					RotZ-=  0.001;
				}
				if (RequestObject() == true)
				{
					ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
				}
				leftPress = false;
			}
		}
	}



}

void FloatOption(char *option, float *var, float min, float max, float Default, char *spritedict, char* sprite, int color, char* Infox )
{
	AddOption(option, spritedict, sprite, false, color, Infox);
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
	drawFloat(*var, true, 0.858, (optionCount  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		drawFloat(*var, true, 0.858, (maxOptions  * 0.030f + 0.1250f), 0.36f, 0.36f, 255, 255, 255, 255);
	}
 	if (currentOption == optionCount)
	{

				if (rightPress == true)
		{
			if (*var >= max)
			{
				*var = min;
			}
			else
			{
				*var = *var + 0.01f;
			}
			rightPress = false;
		}
		else if (leftPress == true)
		{
			if (*var <= min)
			{
				*var = max;
			}
			else
			{
				*var = *var - 0.01f;
			}
		leftPress = false;
		}
		else if(CONTROLS::IS_CONTROL_JUST_PRESSED(0, Button_Square))
		{
		*var = Default;
		}
	}
}


void FolderOption(char *option, int Menu, char *info,int color, char* Infox)
{
	AddOption(option, "commonmenutu", "custom_mission", false, color, Infox);
	if (currentOption == optionCount)
	{
		if (PressX == true)
		{
			ChangeMenu(Menu);
			PressX = false;

		}
	}
}
void AddTeleport(char* option,  float x, float y, float z)
{
	AddOption(option, "", "", true, 0, "");
	if (currentOption == optionCount)
	{
		if(PressX == true)
		{
			if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(veh, x, y, z, 1, 0,0, 1);
			}else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), x, y, z, 1, 0,0, 1);
			}
			PressX = false;
		}
	}
}
void AddScenario(char* option, char* Scenario, int color)
{
	AddOption(option, "commonmenutu", "custom_mission", false, color, "");
	if (currentOption == optionCount)
	{
		if(PressX == true)
		{
			AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), Scenario, 0, 0);
			PressX = false;
		}
	}
}
void addWeapon(char* option, int HashWeapon, int Ammo, int Ped)
{
	AddOption(option, "", "", true, 0, "");
	if (PressX == true && currentOption == optionCount)
	{
		WEAPON::GIVE_WEAPON_TO_PED(Ped, HashWeapon, Ammo, 1, 1);
	}

}
void AddVehicle(char* option, char* Vehicle, int color)
{
	AddOption(option, "", "", true, color, "");
	if (currentOption == optionCount)
	{
		if(PressX == true)
		{
			CreateVeh = true;
                        modelVeh = GAMEPLAY::GET_HASH_KEY(Vehicle);
			PressX = false;
		}
	}
}

void AddColor(char *option, int R, int G, int B, int color)
{
		AddOption(option, "commonmenutu", "custom_mission", true, color, "");
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
		GRAPHICS::DRAW_RECT(0.8700, (optionCount * 0.030f + 0.140f), 0.03, 0.02, R, G, B, 255);
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		GRAPHICS::DRAW_RECT(0.8700, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.140f), 0.03, 0.02, R, G, B, 255);
	}
		if (currentOption == optionCount)
	{
		if(PressX == true)
		{
			int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(veh, R, G, B);
			PressX = false;
		}
	}
}

void TextOption(char *option, char* Text, int *Num, int min, int max, bool SmallFont, bool withoutSprite, int color, char* Info)
{
	AddOption(option, "commonmenutu", "custom_mission", withoutSprite, color, Info);
	if (currentOption <= maxOptions && optionCount <= maxOptions)
	{
		if (SmallFont == false)
		{
			DRAW_TEXT(Text, 0, 0.857, (optionCount * 0.030f + 0.127f), 0.35000000f, 0.35000000f, 255, 255, 255, 255, true, false, 0, 0, 0);
		}
		else
		{
			DRAW_TEXT(Text, 0, 0.820, (optionCount * 0.030f + 0.127f), 0.26000000f, 0.26000000f, 255, 255, 255, 255, 1, false, 0, 0, 0);
		}
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption)
	{
		if (SmallFont == true)
		{
			DRAW_TEXT(Text, 0, 0.857, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.127f), 0.35000000f, 0.35000000f, 255, 255, 255, 255, false, false, 0, 0, 0);
		}
		else
		{
			DRAW_TEXT(Text, 0, 0.820, ((optionCount - (currentOption - maxOptions)) * 0.030f + 0.127f), 0.26000000f, 0.26000000f, 255, 255, 255, 255, 1, false, 0, 0, 0);
		}
	}
	if (currentOption == optionCount)
	{
		if (rightPress == true)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", false);
			if (*Num >= max)
			{
				*Num = min;
			}
			else
			{
				*Num = *Num + 1;
			}
			rightPress = false;
		}
		else if (leftPress == true)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", false);
			if (*Num <= min)
			{
				*Num = max;
			}
			else
			{
				*Num = *Num - 1;
			}
			leftPress = false;
		}
	}
}

int timerScrollSpeed;
bool fast;
bool check_button(int buttonID, bool checkSpeed)
{
	bool isPressed = false;
	if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, buttonID))
		return true;
	if (checkSpeed)
	{
		if(CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, buttonID))
		{
			timerScrollSpeed++;
			if (timerScrollSpeed > 7)
			{
				timerScrollSpeed = 6;
				fast = true;
				isPressed = true;
			}
		}
		if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, buttonID))
		{
			timerScrollSpeed = 0;
			fast = false;
		}
	}
	return isPressed;
}
bool delayed_key_press(int control)
{
	if (GAMEPLAY::GET_GAME_TIMER() - lastButtonPress < buttonPressDelay)
	{
		return false;
	}

	if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, control) == true)
	{
		lastButtonPress = GAMEPLAY::GET_GAME_TIMER();
		return true;
	}
	return false;
}


int GET()
{
	if (PressX == true)
	{
		return currentOption;
		PressX = false;
	}
	else return 0;
}


void SetupTimer(int tickTime)
{
	if (newTimerTick)
	{
		maxTimerCount = GAMEPLAY::GET_GAME_TIMER() + tickTime;
		newTimerTick = false;
	}
}
bool IsTimerReady()
{
	return GAMEPLAY::GET_GAME_TIMER() > maxTimerCount;
}
void ResetTimer()

{
	newTimerTick = true;
}

int Static_67  = 0;
float TimerGui = 0.0;
bool testT;
void SetupButtons()
{
	Static_67 = GAMEPLAY::GET_FRAME_COUNT();
 if ( !( GAMEPLAY::GET_FRAME_COUNT() - Static_67 >= 2 ) )
        {
             testT = true;
        } else testT = false;
        Static_67 = GAMEPLAY::GET_FRAME_COUNT();
	if (NumMenu == Closed)
	{
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Button_Square) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Button_Dpad_Right))
			{
				if(EnableMusic != 0)
				{
				AUDIO::TRIGGER_MUSIC_EVENT("MP_DM_START_ALL");
				}
				NumMenu = Main_Menu;
				NumMenuLevel = 0;
				currentOption = 1;
				lastButtonPress = GAMEPLAY::GET_GAME_TIMER();
			}
	}
	else
	{
		if(testT == true)
		{
			 if (check_button(INPUT_FRONTEND_CANCEL, 0))
			{
				if (NumMenu == Main_Menu)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("GLOBAL_KILL_MUSIC");
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_ACTION_HPREP");
					NumMenu = Closed;
				}
				else
				{
					NumMenu = lastNumMenu[NumMenuLevel - 1];
					currentOption = lastOption[NumMenuLevel - 1];
					NumMenuLevel--;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}

			else if (check_button(INPUT_FRONTEND_ACCEPT, 0))
			{
				PressX = true;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
			}
			else if (check_button(INPUT_FRONTEND_UP, 1))
			{
				currentOption--;
				if (currentOption < 1)
				 {
			     currentOption = optionCount;
				 }
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
			}
			else if (check_button(INPUT_FRONTEND_DOWN, 1))
			{
				currentOption++;
				if (currentOption > optionCount)
				{
					currentOption = 1;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
			}


			else if (check_button(INPUT_FRONTEND_RIGHT, 1))
			{
				rightPress = true;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
			}
			else if (check_button(INPUT_FRONTEND_LEFT, 1))
			{
				leftPress = true;
                                AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
			}
		}

	}
}


float conv360(float base, float min, float max) {
    // This is the function the script used. I just adapted it for C++.
    float fVar0;
    if (min == max) return min;
    fVar0 = max - min;
    base -= SYSTEM::ROUND(base - min / fVar0) * fVar0;
    if (base < min) base += fVar0;
    return base;
}

void drawGlare(float pX, float pY, float sX , float sY, int r, int g, int b) {
    // Request the scaleform
    gGlareHandle = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
    // Draw Scaleform
    GRAPHICS::DRAW_SCALEFORM_MOVIE(gGlareHandle, pX, pY, sX, sY, r, g, b, 255, 0); // Custom positioning & size
    // DRAW_SCALEFORM_MOVIE_FULLSCREEN(gGlareHandle, r, g, b, 255, 0); // Default positioning & size
}


void SetupActions()
{
	if(UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		NumMenu = Closed;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(2);
		CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
		NumMenu = Closed;
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 19, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 20, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 27, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 54, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 135, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 148, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 149, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 150, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 192, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 193, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 194, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 235, true);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 181);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 182);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 192);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 193);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 208);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 209);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 210);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 217);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 218);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 219);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 220);
	GRAPHICS::DRAW_RECT(Menu_X, 0.1177f, CenterDraw, 0.080f,BannerR, BannerG, BannerB, 150);
	drawGlare(GlareX, GlareY, GlareXs, GlareYs, 115, 255, 255);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
				//GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn"); //FocusOut
			}
	if (NumMenu != Closed)
		{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(InfoText))
		{
		if (optionCount > maxOptions)
		{

		DRAW_TEXT(InfoText, 0, 0.758 - 0.125, ((maxOptions + 2.2080) * 0.030f + 0.125f), 0.35f, 0.35f, 255, 255, 255, 255, false, false, 0, 0, 0);
		GRAPHICS::DRAW_RECT(Menu_X, (((maxOptions + 2.2080) * 0.030f) + 0.1415f), CenterDraw, 0.035f, BannerR, BannerG, BannerB, 150); //Info Box
		}
		else
		{
		DRAW_TEXT(InfoText, 0, 0.758- 0.125, ((optionCount + 2.2080) * 0.030f + 0.125f), 0.35f, 0.35f, 255, 255, 255, 255, false, false, 0, 0, 0);
		GRAPHICS::DRAW_RECT(Menu_X, (((optionCount + 2.2080) * 0.030f) + 0.1415f), CenterDraw, 0.035f, BannerR, BannerG, BannerB, 150); //Info Box
	    }
		}
		if (optionCount > maxOptions)
		{
		DRAW_TEXT("Ver: 1.0", 0, 0.758 - 0.125, ((maxOptions + 1) * 0.030f + 0.125f), 0.4f, 0.4f, 255, 255, 255, 255, false, false, 0, 0, 0);
		draw_item_count(0.758 + 0.102, ((maxOptions + 1) * 0.030f + 0.125f), 0.4f, 0.4f);
		GRAPHICS::DRAW_RECT(Menu_X, (((maxOptions + 1) * 0.030f) + 0.1415f), CenterDraw, 0.035f, BannerR, BannerG, BannerB, 150); //Info Box
		}
		else
		{
			DRAW_TEXT("Ver: 1.0", 0, 0.758- 0.125, ((optionCount + 1) * 0.030f + 0.125f), 0.4f, 0.4f, 255, 255, 255, 255, false, false, 0, 0, 0);
		draw_item_count(0.758 + 0.102, ((optionCount + 1) * 0.030f + 0.125f), 0.4f, 0.4f);
		GRAPHICS::DRAW_RECT(Menu_X, (((optionCount + 1) * 0.030f) + 0.1415f), CenterDraw, 0.035f, BannerR, BannerG, BannerB, 150); //Info Box
	    }
	}
}

void Setup_System()
{
	PressX = false;
	rightPress = false;
	leftPress = false;
}
int	vehicle;
int zombie = 0;
int Dog = 0;
float zz;
int OutEntity = 0;
int Bgroup;
int Agroup;
int GetHashModel;
int test;
int guards;
int test1;
int animal;
bool RapePlayer;
int Player_naked;
int RapeType = 1;
int gameped[7];
int animalped[7];
int Closest;
Vector3 GetCoordsInfrontOfCam(float Distance)
{
	Vector3 GameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(2);
	Vector3 GameplayCamCoord = CAM::GET_GAMEPLAY_CAM_COORD();

	float tan = (float)(SYSTEM::COS(GameplayCamRot.x) * Distance);
	float xPlane = (float)((SYSTEM::SIN(GameplayCamRot.z * -1.0f) * tan) + GameplayCamCoord.x);
	float yPlane = (float)((SYSTEM::COS(GameplayCamRot.z * -1.0f) * tan) + GameplayCamCoord.y);
	float zPlane = (float)((SYSTEM::SIN(GameplayCamRot.x) * Distance) + GameplayCamCoord.z);
	Vector3 Coords = { xPlane, yPlane, zPlane };
	return Coords;
}

void RequestModels(char* Model)
{
STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(Model));
}
int GetTexture0,GetTexture1,GetTexture2,GetTexture3,GetTexture4,GetTexture5,GetTexture6,GetTexture7,GetTexture8,GetTexture9,GetTexture10,GetTexture11,GetTexture12,GetTexture13;
int GetDrawable0, GetDrawable1, GetDrawable2,GetDrawable3,GetDrawable4,GetDrawable5,GetDrawable6,GetDrawable7,GetDrawable8,GetDrawable9,GetDrawable10,GetDrawable11,GetDrawable12,GetDrawable13;
int EntityAimed;
int WeaponID;
int Entityout;
int TimerSex;
int AimedEntity;
void Loop()
{
RequestModels("u_m_y_babyd");
RequestModels("s_m_y_swat_01");
RequestModels("a_m_y_acult_02");
RequestModels("u_m_y_justin");
RequestModels("u_m_y_pogo_01");
RequestModels("s_f_y_stripper_02");
RequestModels("s_m_y_clown_01");
RequestModels("a_c_chop");
RequestModels("a_c_husky");
RequestModels("a_c_mtlion");
RequestModels("a_c_retriever");
RequestModels("a_c_rottweiler");
RequestModels("a_c_chimp");
RequestModels("a_c_coyote");
RequestModels("a_c_pig");
RequestModels("a_c_rhesus");
RequestModels("A_C_Cat_01");
RequestModels("a_c_westy");
RequestModels("A_C_Pug");
RequestModels("A_C_Poodle");
RequestModels("a_c_rabbit_01");
RequestModels("A_C_Cormorant");
RequestModels("A_C_Crow");
RequestModels("A_C_Seagull");
RequestModels("A_C_Chickenhawk");
if(GodModeG)
{
for(int i = 0; i< 6; i++)
{
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(gameped[i], 0, 1);
ENTITY::SET_ENTITY_INVINCIBLE(gameped[i], 1);
}
}
if(GodModeA)
{
for(int i = 0; i< 6; i++)
{
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(animalped[i], 0, 1);
ENTITY::SET_ENTITY_INVINCIBLE(animalped[i], 1);
}
}
if(CloneGun)
	{
		if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &Entityout))
		{
			Vector3 coord= ENTITY::GET_ENTITY_COORDS(Entityout, 0);
			if(ENTITY::IS_ENTITY_A_PED(Entityout))
			{
				float Heading = ENTITY::GET_ENTITY_HEADING(Entityout);
				 int Ped = PED::CREATE_PED(26, ENTITY::GET_ENTITY_MODEL(Entityout), coord.x + 1, coord.y + 1, coord.z, 0, 1, 0);
				ENTITY::SET_ENTITY_HEADING(Ped, Heading);
			}
			else if(ENTITY::IS_ENTITY_A_VEHICLE(Entityout))
			{
				float Heading = ENTITY::GET_ENTITY_HEADING(Entityout);
				 int  Veh = VEHICLE::CREATE_VEHICLE(ENTITY::GET_ENTITY_MODEL(Entityout), coord.x + 3, coord.y + 3, coord.z, Heading, 1, 1);
				 int primaryColor, secondaryColor;
		VEHICLE::GET_VEHICLE_COLOURS(Entityout, &primaryColor, &secondaryColor);
		VEHICLE::SET_VEHICLE_COLOURS(Veh, primaryColor, secondaryColor);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Entityout)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Entityout)))
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(Veh, 0);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(Veh, VEHICLE::GET_VEHICLE_WHEEL_TYPE(Entityout));
			for (int i = 0; i <= 23; i++)
			{
				if (i > 16 && i < 23)
					VEHICLE::TOGGLE_VEHICLE_MOD(Veh, i, VEHICLE::IS_TOGGLE_MOD_ON(Entityout, i));
				else
					VEHICLE::SET_VEHICLE_MOD(Veh, i, VEHICLE::GET_VEHICLE_MOD(Entityout, i), VEHICLE::GET_VEHICLE_MOD_VARIATION(Entityout, i));
			}
			int tireSmokeColor[3], pearlescentColor, wheelColor;
			VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(Entityout, &tireSmokeColor[0], &tireSmokeColor[1], &tireSmokeColor[2]);
			VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(Veh, tireSmokeColor[0], tireSmokeColor[1], tireSmokeColor[2]);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Veh, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Entityout));
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Veh, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(Entityout));
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(Entityout, &pearlescentColor, &wheelColor);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Veh, pearlescentColor, wheelColor);
			int R_S, G_S, B_S;
			int R_P, G_P, B_P;
			VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Entityout, &R_S, &G_S, &B_S);
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Veh, R_S, G_S, B_S);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Entityout, &R_P, &G_P, &B_P);
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Veh, R_P, G_P, B_P);
			if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(Entityout, 0))
			{
				int convertableState = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(Entityout);
				if (convertableState == 0 || convertableState == 3 || convertableState == 5)
					VEHICLE::RAISE_CONVERTIBLE_ROOF(Veh, 1);
				else
					VEHICLE::LOWER_CONVERTIBLE_ROOF(Veh, 1);
			}
			for (int i = 0; i <= 11; i++)
			{
				if (VEHICLE::DOES_EXTRA_EXIST(Entityout, i))
					VEHICLE::SET_VEHICLE_EXTRA(Veh, i, !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Entityout, i));
			}
			if ((VEHICLE::GET_VEHICLE_LIVERY_COUNT(Entityout) > 1) && VEHICLE::GET_VEHICLE_LIVERY(Entityout) >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY(Veh, VEHICLE::GET_VEHICLE_LIVERY(Entityout));
			}
			VEHICLE::SET_VEHICLE_WINDOW_TINT(Veh, VEHICLE::GET_VEHICLE_WINDOW_TINT(Entityout));
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Veh, VEHICLE::GET_VEHICLE_DIRT_LEVEL(Entityout));
		}
			}
			else if(ENTITY::IS_ENTITY_AN_OBJECT(Entityout))
			{
				float Heading = ENTITY::GET_ENTITY_HEADING(Entityout);
				int Obj = OBJECT::CREATE_OBJECT(ENTITY::GET_ENTITY_MODEL(Entityout), coord.x + 1, coord.y + 1, coord.z, true, false, false);
				ENTITY::SET_ENTITY_HEADING(Obj, Heading);
			}
		}
	}
if(HashGun)
	{
		if(PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &AimedEntity))
		{
			drawNumber(ENTITY::GET_ENTITY_MODEL(AimedEntity), 0, 0.5, 0.5, 0.30f, 0.30f, 255, 255, 255, 255, true);
		}
	}
if(RopeGun)
		{
			if(PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityAimed) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), EntityAimed))
			{
				Vector3 coord = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
			Vector3 coord2 = ENTITY::GET_ENTITY_COORDS(EntityAimed, 0);
			 int rope = ROPE::ADD_ROPE(coord2.x, coord2.y, coord2.z,0,0,0, 8, 0, 10, 0.5f, 9.5f, 1, 1, 1, 6.0f, 1, 0);
			ROPE::ATTACH_ENTITIES_TO_ROPE(rope, PLAYER::PLAYER_PED_ID(), EntityAimed, coord.x, coord.y, coord.z, coord2.x, coord2.y, coord2.z, 8, 1, 0, 0, 0);
			}
			else
			{
				//DELETE_ROPE(&rope);
			}
		}
if(DeleteEntityGun)
		{
			if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				int Entity;
				if(PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &Entity))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Entity, 0, 1);
					ENTITY::DELETE_ENTITY(&Entity);
				}
			}
		}
if(VehSuperJump)
	{
			int pPlayer = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(pPlayer, 0))
		{
			if(CONTROLS::IS_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_RB))
			{
				int pveh = PED::GET_VEHICLE_PED_IS_USING(pPlayer);
				ENTITY::APPLY_FORCE_TO_ENTITY(pveh, true, 0, 0, 15, 0, 0, -15, true, true, true, true, 2, true);
			}
		}
	}
if(WeaponRocket)
{
if(CONTROLS::IS_CONTROL_PRESSED(0, INPUT_SCRIPT_RS))
{
Vector3 FromCoord = PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(),57005,0,0,0);
 Vector3   ToCoord = GetCoordsInfrontOfCam(75);
      WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID,&WeaponID,0);
      GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(FromCoord.x, FromCoord.y, FromCoord.z,ToCoord.x, ToCoord.y, ToCoord.z,250, 0, WeaponID, PLAYER::PLAYER_PED_ID(),1,0,1);
}
}

if(RapeSttrGirl)
{
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			if(STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(Girl_naked);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Girl_naked, -1, 0.0, -0.3, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 2, 1);
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(Girl_naked, 0);
                        AI::TASK_PLAY_ANIM(Girl_naked, "rcmpaparazzo_2", "shag_loop_poppy", 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "shag_loop_a", 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			RapeSttrGirl = false;
                        }
}


if(RapePlayer)
	{
		if(RapeType == 1)
		{
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			if(STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(Player_naked);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Player_naked, -1, 0.0, -0.3, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 2, 1);
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(Player_naked, 0);
                        AI::TASK_PLAY_ANIM(Player_naked, "rcmpaparazzo_2", "shag_loop_poppy", 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "shag_loop_a", 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			RapePlayer = false;
			}
		}
		else if(RapeType == 2)
		{

			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			if(STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(Player_naked);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Player_naked, -1, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 2, 1);
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(Player_naked, 0);
			AI::TASK_PLAY_ANIM(Player_naked, "rcmpaparazzo_2", "shag_loop_a", 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "shag_loop_poppy", 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			RapePlayer = false;
			}
		}
	}

Vector3 MyPos2 = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
PED::GET_CLOSEST_PED(MyPos2.x, MyPos2.y, MyPos2.z, 200, true, true, &Closest, false, true, -1);


if (ENTITY::DOES_ENTITY_EXIST(Closest))
{
if(NumMenu == NearbyPedController)
{
Vector3 coord = ENTITY::GET_ENTITY_COORDS(Closest, false);
GRAPHICS::DRAW_MARKER(2, coord.x, coord.y, coord.z + 1.70, 0.0f, 0.0f, 0.0f, 0.0f, 180.0f, 0.0f, 1.0f, 1.0f, 1.0f, BannerR, BannerG, BannerB, 255, 1, 0, 2, 1, 0, 0, 0);
GetHashModel = ENTITY::GET_ENTITY_MODEL(Closest);
}
}
if(ExplosiveAmmo)
{
GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
}
if(FireAmmo)
{
GAMEPLAY::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
}
	RequestObject();
if(NumMenu == Closed)
MOBILE::_DISABLE_PHONE_THIS_FRAME(true);


if(CreateObj)
{
STREAMING::REQUEST_MODEL(ObjModel);
if(STREAMING::HAS_MODEL_LOADED(ObjModel))
{
int Map = OBJECT::CREATE_OBJECT(ObjModel, objx, objy, objz,  true, true, false);
ENTITY::SET_ENTITY_ROTATION(Map,  rotx, roty, rotz, 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(Map, 1);
ENTITY::SET_ENTITY_LOD_DIST(Map, 9999);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), objx, objy, objz, 0, 0, 0, 0);
CreateObj = false;
}
}
	if(FreezeTime)
	{
		TIME::PAUSE_CLOCK(true);
	}
	if(ThunderLightning)
	{
		GAMEPLAY::FORCE_LIGHTNING_FLASH();
	}
	if(testbg)
	{
		for(int i = 0; i < 6; i++)
		{
			if(PED::IS_PED_SHOOTING(gameped[i]))
			{
			Vector3 coord;
			//WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(gameped[i], &coord);
			FIRE::ADD_EXPLOSION(coord.x, coord.y, coord.z, 25, 50, true, false, 0.0);
			}

		}
	}

		if(AnAniamtions == true)
				{
					for(int i = 0; i< 7; i++)
			{
				STREAMING::REQUEST_ANIM_DICT(animdictAn);
				if(STREAMING::HAS_ANIM_DICT_LOADED(animdictAn))
				{
				if(AnimTypeAn == 1)
				{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(animalped[i]);
				AI::TASK_PLAY_ANIM(animalped[i], animdictAn, animidAn, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
				AnAniamtions = false;
				}
				else if(AnimTypeAn == 2)
				{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(animalped[i]);
				AI::TASK_PLAY_ANIM(animalped[i], animdictAn, animidAn, 8.0f, 0.0f, -1, 48, 0, 0, 0, 0);
				AnAniamtions = false;
				}
				}
			}
				}
		if(BgAniamtions == true)
				{
					for(int i = 0; i< 7; i++)
			{
				STREAMING::REQUEST_ANIM_DICT(animdictbg);
				if(STREAMING::HAS_ANIM_DICT_LOADED(animdictbg))
				{
				if(AnimType == 1)
				{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(gameped[i]);
				AI::TASK_PLAY_ANIM(gameped[i], animdictbg, animidbg, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
				BgAniamtions = false;
				}
				else if(AnimType == 2)
				{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(gameped[i]);
				AI::TASK_PLAY_ANIM(gameped[i], animdictbg, animidbg, 8.0f, 0.0f, -1, 48, 0, 0, 0, 0);
				BgAniamtions = false;
				}
				}
			}
				}


	if(ZombieMode)
	{
		 if (!STREAMING::HAS_ANIM_SET_LOADED("move_m@drunk@verydrunk"))
        {
			STREAMING::REQUEST_ANIM_SET("move_m@drunk@verydrunk");
		}
		Vector3 coordMe1 = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
		for(int i = 0; i< 18; i++)
		{
		Vector3 coordMe2 = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(i), 0);
		 if(GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(coordMe1.x, coordMe1.y, coordMe1.z, coordMe2.x, coordMe2.y, coordMe2.z, 1) < 15)
		{
		PED::SET_PED_MOVEMENT_CLIPSET(zombie, "move_m@drunk@verydrunk", 0.25 );
		STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY("u_m_y_zombie_01"));
		Vector3 coordMe = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(i), 0);
		Vector3 coordZM = ENTITY::GET_ENTITY_COORDS(zombie, 0);
		float X = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(4, 10);
		float Y = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(4, 10);
		float X1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-4, -10);
		float Y1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-4, -10);
		float X2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-2, 5);
		float Y2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(2, 5);
		float X3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-2, -10);
		float Y3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-2, -10);
		GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(coordMe.x, coordMe.y, coordMe.z, &zz, 1);
		Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED(i), X, Y, 0);
		Vector3 coords1 = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED(i), X1, Y1, 0);
		Vector3 coords2 = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED(i), X2, Y2, 0);
		Vector3 coords3 = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED(i), X3, Y3, 0);
		if(!ENTITY::DOES_ENTITY_EXIST(zombie))
		{
		 zombie = PED::CREATE_PED(25, GAMEPLAY::GET_HASH_KEY("u_m_y_zombie_01"), coords.x, coords.y, zz, 0, 1, 1);
		 WEAPON::GIVE_WEAPON_TO_PED(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), -1, 1, 1);
		 AI::TASK_SMART_FLEE_PED(zombie, PLAYER::GET_PLAYER_PED(i), 100.0f, -1, 0, 0);
         PED::SET_PED_KEEP_TASK(zombie, 1);
		 ENTITY::SET_ENTITY_HEALTH(zombie, 200);
		 WEAPON::SET_CURRENT_PED_WEAPON(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), 1);
		 PED::SET_PED_CAN_COWER_IN_COVER(zombie, 0);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(zombie, 1);
		 AI::TASK_COMBAT_PED(zombie, PLAYER::GET_PLAYER_PED(i), 0, 16);
		 AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PLAYER::GET_PLAYER_PED(i), 200, 0);
		}
		if(ENTITY::DOES_ENTITY_EXIST(zombie) && ENTITY::IS_ENTITY_DEAD(zombie))
		{
		zombie = PED::CREATE_PED(25, GAMEPLAY::GET_HASH_KEY("u_m_y_zombie_01"), coords1.x, coords1.y, zz, 0, 1, 1);
         PED::SET_PED_MOVEMENT_CLIPSET(zombie, "move_m@drunk@verydrunk", 0.25 );
		 WEAPON::GIVE_WEAPON_TO_PED(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), -1, 1, 1);
		 AI::TASK_SMART_FLEE_PED(zombie, PLAYER::GET_PLAYER_PED(i), 100.0f, -1, 0, 0);
         PED::SET_PED_KEEP_TASK(zombie, 1);
		 ENTITY::SET_ENTITY_HEALTH(zombie, 200);
		 WEAPON::SET_CURRENT_PED_WEAPON(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), 1);
		 PED::SET_PED_CAN_COWER_IN_COVER(zombie, 0);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(zombie, 1);
		 AI::TASK_COMBAT_PED(zombie, PLAYER::GET_PLAYER_PED(i), 0, 16);
		 AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PLAYER::GET_PLAYER_PED(i), 200, 0);
		}
		if(ENTITY::DOES_ENTITY_EXIST(zombie) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(i, zombie))
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(zombie, "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE");
		zombie = PED::CREATE_PED(25, GAMEPLAY::GET_HASH_KEY("u_m_y_zombie_01"), coords2.x, coords2.y, zz, 0, 1, 1);
         PED::SET_PED_MOVEMENT_CLIPSET(zombie, "move_m@drunk@verydrunk", 0.25 );
		 WEAPON::GIVE_WEAPON_TO_PED(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), -1, 1, 1);
		 AI::TASK_SMART_FLEE_PED(zombie, PLAYER::GET_PLAYER_PED(i), 100.0f, -1, 0, 0);
         PED::SET_PED_KEEP_TASK(zombie, 1);
		 ENTITY::SET_ENTITY_HEALTH(zombie, 200);
		 WEAPON::SET_CURRENT_PED_WEAPON(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), 1);
		 PED::SET_PED_CAN_COWER_IN_COVER(zombie, 0);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(zombie, 1);
		 AI::TASK_COMBAT_PED(zombie, PLAYER::GET_PLAYER_PED(i), 0, 16);
		 AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PLAYER::GET_PLAYER_PED(i), 200, 0);
		}
		if(ENTITY::DOES_ENTITY_EXIST(zombie) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(zombie, PLAYER::GET_PLAYER_PED(i), 1))
		{
		AUDIO::_PLAY_AMBIENT_SPEECH1(zombie, "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE");
		zombie = PED::CREATE_PED(25, GAMEPLAY::GET_HASH_KEY("u_m_y_zombie_01"), coords3.x, coords3.y, zz, 0, 1, 1);
        PED::SET_PED_MOVEMENT_CLIPSET(zombie, "move_m@drunk@verydrunk", 0.25 );
		 WEAPON::GIVE_WEAPON_TO_PED(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), -1, 1, 1);
		 AI::TASK_SMART_FLEE_PED(zombie, PLAYER::GET_PLAYER_PED(i), 100.0f, -1, 0, 0);
         PED::SET_PED_KEEP_TASK(zombie, 1);
		 ENTITY::SET_ENTITY_HEALTH(zombie, 200);
		 WEAPON::SET_CURRENT_PED_WEAPON(zombie, GAMEPLAY::GET_HASH_KEY("weapon_knife"), 1);
		 PED::SET_PED_CAN_COWER_IN_COVER(zombie, 0);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(zombie, 1);
		 AI::TASK_COMBAT_PED(zombie, PLAYER::GET_PLAYER_PED(i), 0, 16);
		 AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PLAYER::GET_PLAYER_PED(i), 200, 0);
		}
		}

		}
	}
 if(CreateDog)
 {
	 STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY("a_c_chop"));
	 if(STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY("a_c_chop")))
	 {
		 Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 4, 0);
		 float H = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		 Dog = PED::CREATE_PED(26, GAMEPLAY::GET_HASH_KEY("a_c_chop"), coord.x, coord.y, coord.z, -H, true, false);
		 ENTITY::SET_ENTITY_INVINCIBLE(Dog, 1);
		int Group = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_AS_GROUP_LEADER(Dog, Group);
		PED::SET_PED_AS_GROUP_MEMBER(Dog, Group);
		PED::SET_GROUP_FORMATION(Group, 3);
		PED::SET_GROUP_FORMATION_SPACING(Group, 1.1000, 1.1000, 1.1000);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(Dog, false);
		PED::SET_PED_NEVER_LEAVES_GROUP(Dog, true);
			PED::SET_PED_ACCURACY(Dog, 100);
			PED::SET_PED_KEEP_TASK(Dog, true);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(Dog, true);
			PED::SET_PED_SHOOT_RATE(Dog, 100);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Dog, 0);
			PED::SET_PED_SEEING_RANGE(Dog, 9999);
			PED::SET_PED_CAN_COWER_IN_COVER(Dog, false);
			PED::SET_PED_FIRING_PATTERN(Dog, 0x7A845691);
			PED::SET_PED_CAN_BE_TARGETTED(Dog, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Dog, 0x84DCFAAD);
			ENTITY::SET_ENTITY_PROOFS(Dog, true, true, true, true, true, true, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Dog, true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Dog, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(Dog, false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Dog, false);
			AI::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Dog, true);
			AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(Dog, true);
                        AnimalAttack = true;
			EnableDogAttack = true;
			CreateDog = false;
	 }
 }
 if(CreateGuard)
 {
     int pPlayer = PLAYER::PLAYER_PED_ID();
      Bgroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
      if(PED::DOES_GROUP_EXIST(Bgroup)){
      PED::CREATE_GROUP(0);
      PED::SET_PED_AS_GROUP_LEADER(pPlayer, Bgroup);
      PED::SET_GROUP_FORMATION(Bgroup, 3);
      PED::SET_GROUP_FORMATION_SPACING(Bgroup, 1.1, 1.1, 1.1);
      }
      PED::GET_GROUP_SIZE(Bgroup, &test, &guards);
      if((guards >= 7) || (guards == 7) || (guards > 6)){
      print("Max guards (7) exceeded", 2000);
      CreateGuard = false; }
      for(int i = 0; i <= 1; i++){
      if(!ENTITY::DOES_ENTITY_EXIST(gameped[i])){

	 STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(GuardModel));
	 if(STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY(GuardModel)))
	 {
		 Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 4, 0);
		 float H = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		 gameped[i] = PED::CREATE_PED(26, GAMEPLAY::GET_HASH_KEY(GuardModel), coord.x, coord.y, coord.z, -H, true, false);
		 ENTITY::SET_ENTITY_INVINCIBLE(gameped[i], 1);
		int Group = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_AS_GROUP_LEADER(gameped[i], Group);
		PED::SET_PED_AS_GROUP_MEMBER(gameped[i], Group);
		PED::SET_GROUP_FORMATION(Group, 3);
		PED::SET_GROUP_FORMATION_SPACING(Group, 1.1000, 1.1000, 1.1000);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(gameped[i], false);
		PED::SET_PED_NEVER_LEAVES_GROUP(gameped[i], true);
			PED::SET_PED_ACCURACY(gameped[i], 100);
			PED::SET_PED_KEEP_TASK(gameped[i], true);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(gameped[i], true);
			PED::SET_PED_SHOOT_RATE(gameped[i], 100);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(gameped[i], 0);
			PED::SET_PED_SEEING_RANGE(gameped[i], 9999);
			PED::SET_PED_CAN_COWER_IN_COVER(gameped[i], false);
			PED::SET_PED_FIRING_PATTERN(gameped[i], 0x7A845691);
			PED::SET_PED_CAN_BE_TARGETTED(gameped[i], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(gameped[i], 0x84DCFAAD);
			ENTITY::SET_ENTITY_PROOFS(gameped[i], true, true, true, true, true, true, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(gameped[i], true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(gameped[i], true);
			PED::SET_PED_CAN_EVASIVE_DIVE(gameped[i], false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(gameped[i], false);
			AI::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(gameped[i], true);
			AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(gameped[i], true);
			CreateGuard = false;
                     }
                  }
	 }
 }
 if(EnableDogAttack)
 {
	 if(ENTITY::DOES_ENTITY_EXIST(Dog))
	 {
		 if(PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &OutEntity))
		 {
			 if(OutEntity != 0)
			 {
				 	int cur;
		           if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &cur, 1))
		          {
			       if(cur == WEAPON_PISTOL)
				   {
		                   AI::TASK_COMBAT_PED(Dog, OutEntity, 0, 16);
			           AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(OutEntity, 200, 0);
			           print("~r~Attacking..", 2000);
				   }
		           }
			 }
		 }
	 }
 }
if(VehHydrolics)
	{
		int pPlayer = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(pPlayer, 0))
		{
			int pveh = PED::GET_VEHICLE_PED_IS_USING(pPlayer);
			if(CONTROLS::IS_CONTROL_PRESSED(0,  INPUT_FRONTEND_X) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(pveh))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(pveh, 2, 0, 0, 80, 0, 0, -80 , 1, 1, 1, 1, 1, 1);
			}
		}
	}
if(AnimalAttack)
	{
		 STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_core@");
        STREAMING::REQUEST_ANIM_DICT("creatures@cougar@melee@streamed_core@");
		 STREAMING::REQUEST_ANIM_DICT("creatures@retriever@melee@streamed_core@");
		 STREAMING::REQUEST_ANIM_DICT("creatures@coyote@melee@streamed_core@");
		STREAMING::REQUEST_ANIM_DICT("creatures@pig@melee@streamed_core@");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@van");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@incar@");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@indication@");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@4x4");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@low_car");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@base");
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@swim@");
		STREAMING::REQUEST_ANIM_DICT("creatures@monkey@die");
		STREAMING::REQUEST_ANIM_DICT("creatures@monkey@move");
		STREAMING::REQUEST_ANIM_DICT("creatures@monkey@move");
        AnimalAttack = false;
	}

if (TeleportWPLoop)
    {
        Blip WaypointID = UI::GET_FIRST_BLIP_INFO_ID(8);
        Vector3 WaypointCoords = UI::GET_BLIP_COORDS(WaypointID);
        Vector3 coordos;
        int Entity;
        if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
        {
            Entity = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
// helicopters will bug here. Was lazy to fix that
        }
        else
        {
            Entity = PLAYER::PLAYER_PED_ID();
        }
        float ZAxis;


        if (WaypointCoords.x != 0 && WaypointCoords.y != 0)
        {
            ENTITY::SET_ENTITY_COORDS(Entity, WaypointCoords.x, WaypointCoords.y, WaypointCoords.z, true, true, true, true);
            ContinueWP = true;
        }
        if (ContinueWP)
        {
            coordos = ENTITY::GET_ENTITY_COORDS(Entity, true);
            ENTITY::SET_ENTITY_COORDS(Entity, coordos.x, coordos.y, coordos.z + 10.0f, true, true, true, true);

//the tricks is working here i keep teleporting my entity and thats where all the magic is going ... as when you teleport your entity to your entity coords it lifts you up and up till ground found

        }

        if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(coordos.x, coordos.y, coordos.z, &ZAxis, 0))
        {
            ENTITY::SET_ENTITY_COORDS(Entity, coordos.x, coordos.y, ZAxis + 1.0f, true, true, true, true);
            ZAxis = 0;
            TeleportWPLoop = false;
            ContinueWP = false;
        }


    }
      if(CreateVeh)
       {
		 STREAMING::REQUEST_MODEL(modelVeh);
		 if(STREAMING::HAS_MODEL_LOADED(modelVeh))
		 {
       int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
        VEHICLE::DELETE_VEHICLE(&veh);
	Vector3 coord = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
	float Heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
        vehicle = VEHICLE::CREATE_VEHICLE(modelVeh, coord.x, coord.y, coord.z, Heading, true, false);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, -1);
        CreateVeh = false;
		 }
       }
      if(NeverWanted)
       {
       PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
       PLAYER::SET_MAX_WANTED_LEVEL(0);
       }

	if(FlashNeon)
	{
		int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, NeonNum))
			{
				int R =NETWORK:: _NETWORK_GET_RANDOM_INT_IN_RANGE(100, 255);
				int G =NETWORK:: _NETWORK_GET_RANDOM_INT_IN_RANGE(90, 100);
				int B = NETWORK::_NETWORK_GET_RANDOM_INT_IN_RANGE(200, 255);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(veh, R, G, B);
			}
	}


	if(GodModeVeh)
	{
		int pPlayer = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(pPlayer, 0))
		{
			int pveh = PED::GET_VEHICLE_PED_IS_USING(pPlayer);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(pveh, false);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(pveh, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(pveh, false);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(pveh);
			ENTITY::SET_ENTITY_PROOFS(pveh, true, true, true, true, true, true, true, true);
		}
	}
	if(Movement)
	{
		STREAMING::REQUEST_ANIM_SET(MOVEMENT);
		if(STREAMING::HAS_ANIM_SET_LOADED(MOVEMENT))
		{
		PED::SET_PED_MOVEMENT_CLIPSET(MovePed, MOVEMENT, 0.25);
		Movement = false;
		}
	}
	if(StartAnim)
	{
		STREAMING::REQUEST_ANIM_DICT(ANIM_STRING);
		if(STREAMING::HAS_ANIM_DICT_LOADED(ANIM_STRING))
		{
			if(AnimTypeMe == 1)
			{
			AI::TASK_PLAY_ANIM(AnimPed, ANIM_STRING, ANIMID_STRING, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			}
			else if(AnimTypeMe == 2)
			{
			AI::TASK_PLAY_ANIM(AnimPed, ANIM_STRING, ANIMID_STRING, 4.0f, 0.0f, -1, 48, 0, 0, 0, 0);
			}
			StartAnim = false;
		}
	}
	if(ChangeModel)
	{
		STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(MODEL_STRING));
		if(STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY(MODEL_STRING)))
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), GAMEPLAY::GET_HASH_KEY(MODEL_STRING));
			if(UseComponent)
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), false);
			}
			ChangeModel = false;
		}
	}

	if(Invisibility)
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 0, true);
	}
	if(Forcefield)
	{
		Vector3 Coords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		FIRE::ADD_EXPLOSION(Coords.x, Coords.y, Coords.z , BLIMP, 20.0, false, true, 0.0f);
		FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z , 28, 50, true, false, 0.0f);
	}
	if(SuperJump)
	{
		Player player = PLAYER::PLAYER_ID();
		GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(player);
	}
	if(super_check)
	{
		if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 133, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), true, 0, 100, 100, 0, 0, 0, false, true, false, false, false, true);
	}
        }
	if(SuperRun)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(0, Button_X) && NumMenu == Closed)
		{
			ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), true, 0, 5, 0, 0, 0, 0, true, true, true, true, 2, true);
			ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), true, 0, 0, 0, 0, 0, 0, true, true, true, true, 2, true);
		}
	}
	if(GodMode)
	{
		 PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
        GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("hunting", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbars", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("mpleaderboard", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("mpinventory", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("mprankbadge", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("commonmenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("commonmenutu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("shopui_title_graphics_michael", false);
}
void teleportPlayer(float x, float y, float z)
{
	Entity teleportEntity = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(teleportEntity, false))
         {
		teleportEntity = PED::GET_VEHICLE_PED_IS_USING(teleportEntity);
	}

	ENTITY::SET_ENTITY_COORDS(teleportEntity, x, y, z, false, false, false, false);
}
int SuperMod()
	{
		if (!super_check)
		{
				float coord_z;
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 0xFBAB5776, 1, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), true, 0, 0, 40, 0, 0, 0, true, true, true, true, false, true);
				Vector3 coords_s = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				float heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(coords_s.x, coords_s.y, coords_s.z, &coord_z, 1);
				coord_z += 500.0f;
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), coords_s.x, coords_s.y, coord_z, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), heading);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				super_check = true;
		}
		else if (super_check)
		{
			super_check = false;
		}
		return 0;
	}
	bool IS_VISIBLE()
	{
		if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_VISIBLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
		{
			return true;
		}
		else return false;
	}

void GiveWeaponBg()
 {
	 if(BodyWeapon == 1)
			{
			for(int i = 0; i< 7; i++)
			{
			WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_KNIFE, 99999999, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_KNIFE, false);
			}
			}
			if(BodyWeapon == 2)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_NIGHTSTICK, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_NIGHTSTICK, true);
			}
			}
			if(BodyWeapon == 3)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_HAMMER, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_HAMMER, true);
			}
			}
			if(BodyWeapon == 4)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_BAT, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_BAT, true);
			}
			}
			if(BodyWeapon == 5)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_GOLFCLUB, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_GOLFCLUB, true);
			}
			}
			if(BodyWeapon == 6)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_CROWBAR, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_CROWBAR, true);
			}
			}
			if(BodyWeapon == 7)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_BOTTLE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_BOTTLE, true);
			}
			}
			if(BodyWeapon == 8)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_SNOWBALL, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_SNOWBALL, true);
			}
			}
			if(BodyWeapon == 9)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_KNUCKLE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_KNUCKLE, true);
			}
			}
			if(BodyWeapon == 10)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_PISTOL, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_PISTOL, true);
			}
			}
			if(BodyWeapon == 11)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_COMBATPISTOL, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_COMBATPISTOL, true);
			}
			}
			if(BodyWeapon == 12)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_PISTOL50, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_PISTOL50, true);
			}
			}
			if(BodyWeapon == 13)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_MICROSMG, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_MICROSMG, true);
			}
			}
			if(BodyWeapon == 14)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_SMG, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_SMG, true);
			}
			}
			if(BodyWeapon == 15)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_ASSAULTSMG, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_ASSAULTSMG, true);
			}
			}
			if(BodyWeapon == 16)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_ASSAULTRIFLE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_ASSAULTRIFLE, true);
			}
			}
			if(BodyWeapon == 17)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_CARBINERIFLE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_CARBINERIFLE, true);
			}
			}
			if(BodyWeapon == 18)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_ADVANCEDRIFLE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_ADVANCEDRIFLE, true);
			}
			}
			if(BodyWeapon == 19)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_MG, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_MG, true);
			}
			}
			if(BodyWeapon == 20)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_COMBATMG, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_COMBATMG, true);
			}
			}
			if(BodyWeapon == 21)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_PUMPSHOTGUN, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_PUMPSHOTGUN, true);
			}
			}
			if(BodyWeapon == 22)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_SAWNOFFSHOTGUN, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_SAWNOFFSHOTGUN, true);
			}
			}
			if(BodyWeapon == 23)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_ASSAULTSHOTGUN, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_ASSAULTSHOTGUN, true);
			}
			}
			if(BodyWeapon == 24)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_BULLPUPSHOTGUN, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_BULLPUPSHOTGUN, true);
			}
			}
			if(BodyWeapon == 25)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_STUNGUN, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_STUNGUN, true);
			}
			}
			if(BodyWeapon == 26)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_SNIPERRIFLE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_SNIPERRIFLE, true);
			}
			}
			if(BodyWeapon == 27)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_HEAVYSNIPER, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_HEAVYSNIPER, true);
			}
			}
			if(BodyWeapon == 28)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_GRENADELAUNCHER, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_GRENADELAUNCHER, true);
			}
			}
			if(BodyWeapon == 29)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_RPG, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_RPG, true);
			}
			}
			if(BodyWeapon == 30)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_MINIGUN, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_MINIGUN, true);
			}
			}
			if(BodyWeapon == 31)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_GRENADE, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_GRENADE, true);
			}
			}
			if(BodyWeapon == 32)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_STICKYBOMB, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_STICKYBOMB, true);
			}
			}
			if(BodyWeapon == 33)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_MOLOTOV, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_MOLOTOV, true);
			}
			}
			if(BodyWeapon == 34)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_FIREEXTINGUISHER, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_FIREEXTINGUISHER, true);
			}
			}
			if(BodyWeapon == 35)
			{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			WEAPON::GIVE_WEAPON_TO_PED(gameped[i], WEAPON_FIREWORK, 99999999, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(gameped[i], WEAPON_FIREWORK, true);
			}
			}
 }

	void ChangeModelPed(char* model, bool useComp)
{
	ChangeModel = true;
	MODEL_STRING = model;
	UseComponent = useComp;
}

	void ChangeMovement(int ped, char* movemnt)
{
        MovePed = ped;
	Movement = true;
	MOVEMENT = movemnt;
}
	void StartAnimation(int ped, char* animdict, char* animid, int AnimTypes)
{
	AI::CLEAR_PED_TASKS_IMMEDIATELY(ped);
        AnimPed = ped;
	StartAnim = true;
	AnimTypeMe = AnimTypes;
	ANIM_STRING = animdict;
	ANIMID_STRING = animid;
}

void GiveAllWeapons(int ped)
	{
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_SMG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_MG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_RPG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_PASSENGER_ROCKET, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_AIRSTRIKE_ROCKET, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_VEHICLE_ROCKET, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_DROWNING_IN_VEHICLE, 1000, 0, 1);
	}

	void CreateObject(int model, float x, float y, float z, float rotxx, float rotyy, float rotzz)
{
        STREAMING::REQUEST_MODEL(model);
        objMap = OBJECT::CREATE_OBJECT(model, x, y, z,  false, false, true);
	 ENTITY::SET_ENTITY_ROTATION(objMap,  rotxx, rotyy, rotzz, 2, 1);
	 ENTITY::FREEZE_ENTITY_POSITION(objMap, 1);
	 ENTITY::SET_ENTITY_LOD_DIST(objMap, 9999);

}

	void CreateObjectnAttach(int ped , char* model, float x, float y, float z, float rotxx, float rotyy, float rotzz, int boneIndex)
{
        STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(model));
        Vector3 coord = ENTITY::GET_ENTITY_COORDS(ped, 0);
        int attach = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY(model), coord.x, coord.y, coord.z,  true, true, false);
        ENTITY::ATTACH_ENTITY_TO_ENTITY(attach, ped, PED::GET_PED_BONE_INDEX(ped, boneIndex), x, y, z, rotxx, rotyy, rotzz, 0, 0, 0, 0, 2, 1);
	 ENTITY::FREEZE_ENTITY_POSITION(attach, 1);

}
void AnimationsBg(char* animdict, char *animid, int type)
{
	BgAniamtions = true;
	animdictbg = animdict;
	animidbg = animid;
	AnimType = type;
}
void AnimationsAn(char* animdict, char *animid, int type)
{
	AnAniamtions = true;
	animdictAn = animdict;
	animidAn = animid;
	AnimTypeAn = type;
}
void delete_all_spawnAnaimls(void){
	Agroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	int test,guards, tick = 0;
	PED::GET_GROUP_SIZE(Agroup, &test, &guards);
	if(PED::DOES_GROUP_EXIST(Agroup))
	{
		for(int i = 0;i <= 7; i++)
		{
			if(ENTITY::DOES_ENTITY_EXIST(animalped[i]))
			{
				PED::DELETE_PED(&animalped[i]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&animalped[i]);
			}
		}
		print("Deleted All available Animals", 2000);
	}
}
void teleport_spawnAnaimls(void){
	Agroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	int test,guards, tick = 0;
	PED::GET_GROUP_SIZE(Agroup, &test, &guards);
	if(PED::DOES_GROUP_EXIST(Agroup))
	{
		for(int i = 0;i <= 7; i++)
		{
			if(ENTITY::DOES_ENTITY_EXIST(animalped[i]))
			{
		Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 4, 0);
                ENTITY::SET_ENTITY_COORDS(animalped[i], coord.x, coord.y, coord.z, 1,  0,  0, 1);
			}
		}
		print("Deleted All available Animals", 2000);
	}
}
void delete_all_spawnguards(void){
	Bgroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	int test,guards, tick = 0;
	PED::GET_GROUP_SIZE(Bgroup, &test, &guards);
	if(PED::DOES_GROUP_EXIST(Bgroup))
	{
		for(int i = 0;i <= 7; i++)
		{
			if(ENTITY::DOES_ENTITY_EXIST(gameped[i]))
			{
				PED::DELETE_PED(&gameped[i]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&gameped[i]);
			}
		}
		print("Deleted All available guards", 2000);
	}
}

void delete_one_spawnguards(void)
{
	Bgroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	int test,guards, tick = 0;
	PED::GET_GROUP_SIZE(Bgroup, &test, &guards);
	if(PED::DOES_GROUP_EXIST(Bgroup))
	{
		for(int i = 0;i <= 7; i++)
		{
			if(ENTITY::DOES_ENTITY_EXIST(gameped[i]))
			{
				PED::DELETE_PED(&gameped[i]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&gameped[i]);
				print("1 was Guard Deleted", 2000);
			}
		}
	print("No guards Exist or Available", 2000);
	}
}


void spawnguards(char* modelgaurd, bool RandomComponents)
{
               RequestModelHash = GAMEPLAY::GET_HASH_KEY(modelgaurd);
               RequestModelString = modelgaurd;
 int pPlayer = PLAYER::PLAYER_PED_ID();
      Bgroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
      if(PED::DOES_GROUP_EXIST(Bgroup)){
      PED::CREATE_GROUP(0);
      PED::SET_PED_AS_GROUP_LEADER(pPlayer, Bgroup);
      PED::SET_GROUP_FORMATION(Bgroup, 3);
      PED::SET_GROUP_FORMATION_SPACING(Bgroup, 1.1, 1.1, 1.1);
      }
      PED::GET_GROUP_SIZE(Bgroup, &test, &guards);
      if((guards >= 7) || (guards == 7) || (guards > 6)){
      print("Max guards (7) exceeded", 2000); return;}
      for(int i = 0; i <= 6; i++){
      if(!ENTITY::DOES_ENTITY_EXIST(gameped[i])){
               RequestModelHash = GAMEPLAY::GET_HASH_KEY(modelgaurd);
               RequestModelString = modelgaurd;
		 Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 4, 0);
		 float H = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		 gameped[i] = PED::CREATE_PED(26, GAMEPLAY::GET_HASH_KEY(modelgaurd), coord.x, coord.y, coord.z, -H, true, false);
		 ENTITY::SET_ENTITY_INVINCIBLE(gameped[i], 1);
		int Group = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_AS_GROUP_LEADER(gameped[i], Group);
		PED::SET_PED_AS_GROUP_MEMBER(gameped[i], Group);
		PED::SET_GROUP_FORMATION(Group, 3);
		PED::SET_GROUP_FORMATION_SPACING(Group, 1.1000, 1.1000, 1.1000);
                PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(gameped[i], 1);
                if(RandomComponents == true)
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(gameped[i], false);
		PED::SET_PED_NEVER_LEAVES_GROUP(gameped[i], true);
			PED::SET_PED_ACCURACY(gameped[i], 100);
			PED::SET_PED_KEEP_TASK(gameped[i], true);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(gameped[i], true);
			PED::SET_PED_SHOOT_RATE(gameped[i], 100);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(gameped[i], 0);
			PED::SET_PED_SEEING_RANGE(gameped[i], 9999);
			PED::SET_PED_CAN_COWER_IN_COVER(gameped[i], false);
			PED::SET_PED_FIRING_PATTERN(gameped[i], 0x7A845691);
			PED::SET_PED_CAN_BE_TARGETTED(gameped[i], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(gameped[i], 0x84DCFAAD);
			ENTITY::SET_ENTITY_PROOFS(gameped[i], true, true, true, true, true, true, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(gameped[i], true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(gameped[i], true);
			PED::SET_PED_CAN_EVASIVE_DIVE(gameped[i], false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(gameped[i], false);
			AI::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(gameped[i], true);
			AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(gameped[i], true);
                        print("Spawned Guard", 2000);
                        return;
                  }
           }
          return;
        //CreateGuard = true;
        //GuardModel = modelgaurd;
}
void spawnAnimals(char* modelanimal, bool RandomComponents)
{
 int pPlayer = PLAYER::PLAYER_PED_ID();
      Agroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
      if(PED::DOES_GROUP_EXIST(Agroup)){
      PED::CREATE_GROUP(0);
      PED::SET_PED_AS_GROUP_LEADER(pPlayer, Agroup);
      PED::SET_GROUP_FORMATION(Agroup, 3);
      PED::SET_GROUP_FORMATION_SPACING(Agroup, 1.1, 1.1, 1.1);
      }
      PED::GET_GROUP_SIZE(Agroup, &test1, &animal);
      if((guards >= 7) || (animal == 7) || (animal > 6)){
      print("Max guards (7) exceeded", 2000); return;}
      for(int i = 0; i <= 6; i++){
      if(!ENTITY::DOES_ENTITY_EXIST(animalped[i])){
		 Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 4, 0);
		 float H = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		 animalped[i] = PED::CREATE_PED(26, GAMEPLAY::GET_HASH_KEY(modelanimal), coord.x, coord.y, coord.z, -H, true, false);
		 ENTITY::SET_ENTITY_INVINCIBLE(animalped[i], 1);
		int Group = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_AS_GROUP_LEADER(animalped[i], Group);
		PED::SET_PED_AS_GROUP_MEMBER(animalped[i], Group);
		PED::SET_GROUP_FORMATION(Group, 3);
		PED::SET_GROUP_FORMATION_SPACING(Group, 1.1000, 1.1000, 1.1000);
                PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(animalped[i], 1);
                if(RandomComponents == true)
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(animalped[i], false);
		PED::SET_PED_NEVER_LEAVES_GROUP(animalped[i], true);
			PED::SET_PED_ACCURACY(animalped[i], 100);
			PED::SET_PED_KEEP_TASK(animalped[i], true);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(animalped[i], true);
			PED::SET_PED_SHOOT_RATE(animalped[i], 100);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(animalped[i], 0);
			PED::SET_PED_SEEING_RANGE(animalped[i], 9999);
			PED::SET_PED_CAN_COWER_IN_COVER(animalped[i], false);
			PED::SET_PED_FIRING_PATTERN(animalped[i], 0x7A845691);
			PED::SET_PED_CAN_BE_TARGETTED(animalped[i], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(animalped[i], 0x84DCFAAD);
			ENTITY::SET_ENTITY_PROOFS(animalped[i], true, true, true, true, true, true, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(animalped[i], true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(animalped[i], true);
			PED::SET_PED_CAN_EVASIVE_DIVE(animalped[i], false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(animalped[i], false);
			AI::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(animalped[i], true);
			AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(animalped[i], true);
                        print("Spawned Animal", 2000);
                        return;
                  }
           }
          return;
        //CreateGuard = true;
        //GuardModel = modelgaurd;
}
void GivePedWeapons(int ped)
{
WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_KNIFE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_NIGHTSTICK, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BAT, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_GOLFCLUB, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_CROWBAR, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_PISTOL, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_COMBATPISTOL, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_PISTOL50, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_MICROSMG, 1000, 0, 1);
		//WAIT(100);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_SMG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_ASSAULTSMG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_ASSAULTRIFLE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_CARBINERIFLE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_ADVANCEDRIFLE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_MG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_COMBATMG, 1000, 0, 1);
		//WAIT(70);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_PUMPSHOTGUN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_SAWNOFFSHOTGUN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_ASSAULTSHOTGUN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BULLPUPSHOTGUN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_STUNGUN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_SNIPERRIFLE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_HEAVYSNIPER, 1000, 0, 1);
		//WAIT(100);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_REMOTESNIPER, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_GRENADELAUNCHER, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_GRENADELAUNCHER_SMOKE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_RPG, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_PASSENGER_ROCKET, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_AIRSTRIKE_ROCKET, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_STINGER, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_MINIGUN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_GRENADE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_STICKYBOMB, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_SMOKEGRENADE, 1000, 0, 1);
		//WAIT(70);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BZGAS, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_MOLOTOV, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_FIREEXTINGUISHER, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_PETROLCAN, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_DIGISCANNER, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BRIEFCASE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BRIEFCASE_02, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BALL, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_FLARE, 1000, 0, 1);
		//WAIT(100);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_VEHICLE_ROCKET, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BARBED_WIRE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_DROWNING, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_DROWNING_IN_VEHICLE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_BLEEDING, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_ELECTRIC_FENCE, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_EXPLOSION, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(ped, WEAPON_FALL, 1000, 0, 1);
}

int GET_PLAYER_NUMBER() {
	switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
	case 225514697:
		return 0;
	case -1692214353:
		return 1;
	case -1686040670:
		return 2;
	}

	return -1;
};

int GET_PLAYER_CASH() {
	int plyCash = -1;

	switch (GET_PLAYER_NUMBER())
	{
	case 0:
		STATS::STAT_GET_INT(SP0_TOTAL_CASH, &plyCash, -1);
		break;
	case 1:
		STATS::STAT_GET_INT(SP1_TOTAL_CASH, &plyCash, -1);
		break;
	case 2:
		STATS::STAT_GET_INT(SP2_TOTAL_CASH, &plyCash, -1);
		break;
	}

	return plyCash;
};
bool SET_PLAYER_CASH(int amount) {
	switch (GET_PLAYER_NUMBER())
	{
	case 0:
		STATS::STAT_SET_INT(SP0_TOTAL_CASH, amount, true);
		break;
	case 1:
		STATS::STAT_SET_INT(SP1_TOTAL_CASH, amount, true);
		break;
	case 2:
		STATS::STAT_SET_INT(SP2_TOTAL_CASH, amount, true);
		break;
	default:
		return false;
	}

	return true;
};
void SpawnCar(char* model)
{
//CreateVeh = true;
//modelVeh = GAMEPLAY::GET_HASH_KEY(model);
STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY(model));
Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0 , 0, 0);
	float Heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
   	vehicle = VEHICLE::CREATE_VEHICLE(GAMEPLAY::GET_HASH_KEY(model), coord.x, coord.y, coord.z, Heading, true, true);
	vehicle = VEHICLE::CREATE_VEHICLE(GAMEPLAY::GET_HASH_KEY(model), coord.x, coord.y, coord.z, Heading, false, true);
	vehicle = VEHICLE::CREATE_VEHICLE(GAMEPLAY::GET_HASH_KEY(model), coord.x, coord.y, coord.z, Heading, true, false);
vehicle = VEHICLE::CREATE_VEHICLE(GAMEPLAY::GET_HASH_KEY(model), coord.x, coord.y, coord.z, Heading, false, false);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, -1);

}
void Menu(void)
{
MOBILE::_DISABLE_PHONE_THIS_FRAME(true);
	if(NumMenu != Closed) SetupScroller();
	optionCount = 0;
	if(NumMenu == Main_Menu)
	{
		AddTitle("ArabicGuy");
		addOption("Player", "commonmenutu", "custom_mission",  1, "");
		addOption("Vehicle", "commonmenutu", "custom_mission",  0, "");
		addOption("Weapon", "commonmenutu", "custom_mission",  1, "");
		addOption("Object", "commonmenutu", "custom_mission",  0, "");
        addOption("Teleport", "commonmenutu", "custom_mission",  1, "");
		addOption("Map", "commonmenutu", "custom_mission",  0, "");
		addOption("Guards", "commonmenutu", "custom_mission",  1, "");
		addOption("Animals", "commonmenutu", "custom_mission",  0, "");
		addOption("World", "commonmenutu", "custom_mission",  1, "");
		addOption("Misc", "commonmenutu", "custom_mission",  0, "");
		addOption("Credits", "commonmenutu", "custom_mission",  1, "");
		if(GET() == 1)
		{
			ChangeMenu(PlayerMenu);
		}
		else if(GET() == 2)
		{
			ChangeMenu(VehicleMenu);
		}
		else if(GET() == 3)
		{
			ChangeMenu(WeaponMenu);
		}
		else if(GET() == 4)
		{
			ChangeMenu(ObjectMenu);
		}
		else if(GET() == 5)
		{
			ChangeMenu(TeleportMenu);
		}
		else if(GET() == 6)
		{
			ChangeMenu(MapMods);
		}
		else if(GET() == 7)
		{
			ChangeMenu(Bodyguards);
		}
		else if(GET() == 8)
		{
			ChangeMenu(AnimalsG);
		}
		else if(GET() == 9)
		{
			ChangeMenu(World);
		}
                else if(GET() == 10)
                {
                        ChangeMenu(Misc);
                }
		else if(GET() == 11)
		{
			ChangeMenu(Credits);
		}
	}
       else if(NumMenu == PlayerMenu)
       {
                 AddTitle("Player");
		 addOption("Animations", "commonmenutu", "custom_mission", 1, "");
		 addOption("Scenarios", "commonmenutu", "custom_mission", 0, "");
		 addOption("Model Changer", "commonmenutu", "custom_mission", 1, "");
		 CheckBox("GodMode", GodMode, "commonmenutu", "custom_mission", 0, "");
		 CheckBox("Never Wanted", NeverWanted, "commonmenutu", "custom_mission", 1, "");
		 CheckBox("Super Run", SuperRun, "commonmenutu", "custom_mission", 0, "Press X to use super jump.");
		 CheckBox("SuperMan", SuperMan, "commonmenutu", "custom_mission", 1, "");
		 CheckBox("Super Jump", SuperJump, "commonmenutu", "custom_mission", 0, "");
		 CheckBox("Forcefield", Forcefield, "commonmenutu", "custom_mission", 1, "");
		 CheckBox("Invisibility", Invisibility, "commonmenutu", "custom_mission", 0, "");
		 CheckBox("Freeze Position", FreezePos, "commonmenutu", "custom_mission", 1, "");
		 if(GET() == 1)
		 {
			 ChangeMenu(Animations);
		 }
		 else if(GET() == 2)
		 {
			  ChangeMenu(Scenarios);
		 }
		 else if(GET() == 3)
		 {
			  ChangeMenu(ModelChanger);
		 }
		 else if(GET() == 4)
		 {
			 GodMode = !GodMode;
		 }
		 else if(GET() == 5)
		 {
			NeverWanted = !NeverWanted;
			if (NeverWanted == true)
			{
				PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			}
			else if (NeverWanted == false)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(6);
				PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			}
		 }
                 else if(GET() == 6)
                 {
                 SuperRun =! SuperRun;
                 }
		 else if(GET() == 7)
		 {
			 SuperMan = !SuperMan;
			if(SuperMan == true)
			{
				SuperMod();
			}else
			{
				super_check = false;
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
		 }
		 else if(GET() == 8)
		 {
		 SuperJump =!SuperJump;
		 }
		 else if(GET() == 9)
		 {
			 Forcefield =!Forcefield;
		 }
		 else if(GET() == 10)
		 {
			 Invisibility = !Invisibility;
			if(Invisibility == false)
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true);
		        ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, true);
			}

		 }
		 else if(GET() == 11)
		 {
			 FreezePos =! FreezePos;
			 ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), FreezePos);
		 }
       }

	  else if(NumMenu == Animations)
	{
		AddTitle("Animations");
		addOption("Change Movement Group", "commonmenutu", "custom_mission", 1, "");
		addOption("Stop Animation", "commonmenutu", "custom_mission", 0, "");
		IntOption("Stripper Dances", &StripperDances, 1, 6, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Tap Danceing", &TapDanceing, 1, 5, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Misc Animations", &MiscAnimations, 1, 10, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Workouts", &Workouts, 1, 3, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Setting Animations", &SettingAnimations, 1, 7, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Lay Down", &LayDown, 1, 3, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Aniamtions With Walk", &AnimationsWalk, 1, 3, false, "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			ChangeMenu(MovementChanger);
		}
		else if(GET() == 2)
		{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		else if(GET() == 3)
		{
			if(StripperDances == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mini@strip_club@pole_dance@pole_dance1", "pd_dance_01", 1);
			}
			else if(StripperDances == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mini@strip_club@pole_dance@pole_dance2", "pd_dance_02", 1);
			}
			else if(StripperDances == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mini@strip_club@pole_dance@pole_dance3", "pd_dance_03", 1);
			}
			else if(StripperDances == 4)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mini@strip_club@private_dance@part1", "priv_dance_p1", 1);
			}
			else if(StripperDances == 5)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mini@strip_club@private_dance@part2", "priv_dance_p2", 1);
			}
			else if(StripperDances == 6)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mini@strip_club@private_dance@part3", "priv_dance_p3", 1);
			}
		}
		else if(GET() == 4)
		{
			if(TapDanceing == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "special_ped@mountain_dancer@base", "base", 1);
			}
			else if(TapDanceing == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "special_ped@mountain_dancer@monologue_1@monologue_1a", "mtn_dnc_if_you_want_to_get_to_heaven", 1);
			}
			else if(TapDanceing == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "special_ped@mountain_dancer@monologue_4@monologue_4a", "mnt_dnc_verse", 1);
			}
			else if(TapDanceing == 4)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "special_ped@mountain_dancer@monologue_2@monologue_2a", "mnt_dnc_angel", 1);
			}
			else if(TapDanceing == 5)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "special_ped@mountain_dancer@monologue_3@monologue_3a", "mnt_dnc_buttwag", 1);
			}
		}
		else if(GET() == 5)
		{
			if(MiscAnimations == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", "cower_loop", 1);
			}
			else if(MiscAnimations == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", "HAIL_TAXI", 1);
			}
			else if(MiscAnimations == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "ODDJOBS@ASSASSINATE@VICE@SEX", "frontseat_carsex_base_f", 1);
			}
			else if(MiscAnimations == 4)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@", "alert_gunshot", 1);
			}
			else if(MiscAnimations == 5)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "misscarsteal2", "COME_HERE_IDLE_C", 1);
			}
			else if(MiscAnimations == 6)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "misscarsteal4@director_grip", "mcs_2_loop_grip1", 1);
			}
			else if(MiscAnimations == 7)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "DEAD", "DEAD_E", 1);
			}
			else if(MiscAnimations == 8)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "missheistdocks2a@crouch", "enter_crouch_a", 1);
			}
			else if(MiscAnimations == 9)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "rcmfanatic3", "KNEEL_IDLE_A", 1);
			}
			else if(MiscAnimations == 10)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@prop_human_seat_deckchair@male@base", "base", 1);
			}
		}
		else if(GET() == 6)
		{
			if(Workouts == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_push_ups@male@base", "base", 1);
			}
			else if(Workouts == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_sit_ups@male@base", "base", 1);
			}
			else if(Workouts == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@prop_human_muscle_chin_ups@male@base", "base", 1);
			}
		}
		else if(GET() == 7)
		{
			if(SettingAnimations == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_picnic@female@idle_a", "idle_a", 1);
			}
			else if(SettingAnimations == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_picnic@female@base", "base", 1);
			}
			else if(SettingAnimations == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_picnic@male@idle_a", "idle_a", 1);
			}
			else if(SettingAnimations == 4)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "rcm_barry3", "barry_3_sit_loop", 1);
			}
			else if(SettingAnimations == 5)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "mp_arresting", "sit", 1);
			}
			else if(SettingAnimations == 6)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "rcmextreme2", "sitting_idle", 1);
			}
			else if(SettingAnimations == 7)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_picnic@male@idle_a", "idle_b", 1);
			}
		}
		else if(GET() == 8)
		{
			if(LayDown == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@prop_human_seat_sunlounger@female@base", "base", 1);
			}
			else if(LayDown == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_sunbathe@female@front@base", "base", 1);
			}
			else if(LayDown == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "amb@world_human_sunbathe@female@back@base", "base", 1);
			}
		}
		else if(GET() == 9)
		{
			if(AnimationsWalk == 1)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "timetable@jimmy@ig_3@sleeping", "base", 2);
			}
			else if(AnimationsWalk == 2)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "misschinese1crazydance", "crazy_dance_base", 2);
			}
			else if(AnimationsWalk == 3)
			{
				StartAnimation(PLAYER::PLAYER_PED_ID(), "oddjobs@towingangryidle_a", "idle_a", 2);
			}
		}
	}
	else if(NumMenu == MovementChanger)
	{
		AddTitle("Change Movement Group");
		addOption("Default", "commonmenutu", "custom_mission", 1, "");
		addOption("Chubby", "commonmenutu", "custom_mission", 0, "");
		addOption("Injured", "commonmenutu", "custom_mission", 1, "");
		addOption("Drunk", "commonmenutu", "custom_mission", 0, "");
		addOption("Sexy", "commonmenutu", "custom_mission", 1, "");
		addOption("Hobo", "commonmenutu", "custom_mission", 0, "");
		addOption("Old Man", "commonmenutu", "custom_mission", 1, "");
		addOption("Holding a Baby", "commonmenutu", "custom_mission", 0, "");
		addOption("Fat", "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25);
		}
		else if(GET() == 2)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_f@chubby@a");
		}
		else if(GET() == 3)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_injured_generic");
		}
		else if(GET() == 4)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_m@drunk@verydrunk");
		}
		else if(GET() == 5)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_f@sexy@a");
		}
		else if(GET() == 6)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_m@hobo@a");
		}
		else if(GET() == 7)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_lester_CaneUp");
		}
		else if(GET() == 8)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_f@film_reel");
		}
		else if(GET() == 9)
		{
			ChangeMovement(PLAYER::PLAYER_PED_ID(),"move_f@fat@a");
		}

	}

		else if(NumMenu == Scenarios)
	{
		AddTitle("Scenarios");
		addOption("Stop Scenario", "commonmenutu", "custom_mission", 1, "");
		AddScenario("Coffee", "WORLD_HUMAN_AA_COFFEE", 0);
		AddScenario("Smoke", "WORLD_HUMAN_AA_SMOKE", 1);
		AddScenario("Binoculars", "WORLD_HUMAN_BINOCULARS", 0);
		AddScenario("Freeway", "WORLD_HUMAN_BUM_FREEWAY", 1);
		AddScenario("Slumped", "WORLD_HUMAN_BUM_SLUMPED", 0);
		AddScenario("Standing", "WORLD_HUMAN_BUM_STANDING", 1);
		AddScenario("Cheering", "WORLD_HUMAN_CHEERING", 0);
		AddScenario("Clipboard", "WORLD_HUMAN_CLIPBOARD", 1);
		AddScenario("Drill", "WORLD_HUMAN_CONST_DRILL", 0);
		AddScenario("Drinking", "WORLD_HUMAN_DRINKING", 1);
		AddScenario("Drug Dealer", "WORLD_HUMAN_DRUG_DEALER", 0);
		AddScenario("Golf", "WORLD_HUMAN_GOLF_PLAYER", 1);
		AddScenario("Hammering", "WORLD_HUMAN_HAMMERING", 0);
		AddScenario("Muscle Flex", "WORLD_HUMAN_MUSCLE_FLEX", 1);
		AddScenario("Muscle Free Weights", "WORLD_HUMAN_MUSCLE_FREE_WEIGHTS", 0);
		AddScenario("Musician", "WORLD_HUMAN_MUSICIAN", 1);
		AddScenario("Paparazzi", "WORLD_HUMAN_PAPARAZZI", 0);
		AddScenario("Picnic", "WORLD_HUMAN_PICNIC", 1);
		AddScenario("Yoga", "WORLD_HUMAN_YOGA", 0);
		AddScenario("Welding", "WORLD_HUMAN_WELDING", 1);
		if(GET() == 1)
		{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}

	else if(NumMenu == ModelChanger)
	{
		AddTitle("Model Changer");
		addOption("Franklin", "commonmenutu", "custom_mission", 1, "");
		addOption("Trevor", "commonmenutu", "custom_mission", 0, "");
		addOption("Michael", "commonmenutu", "custom_mission", 1, "");
		addOption("Rambo", "commonmenutu", "custom_mission", 0, "");
		addOption("Justin", "commonmenutu", "custom_mission", 1, "");
		addOption("Pogo", "commonmenutu", "custom_mission", 0, "");
		addOption("Zombie", "commonmenutu", "custom_mission", 1, "");
		addOption("Super Hero", "commonmenutu", "custom_mission", 0, "");
		addOption("Cop", "commonmenutu", "custom_mission", 1, "");
		addOption("Alien", "commonmenutu", "custom_mission", 0, "");
		addOption("Swat", "commonmenutu", "custom_mission", 1, "");
		addOption("Clown", "commonmenutu", "custom_mission", 0, "");
		addOption("Old Naked Guy", "commonmenutu", "custom_mission", 1, "");
		addOption("Niko", "commonmenutu", "custom_mission", 0, "");
		addOption("Animals", "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			ChangeModelPed("player_one", false);
		}
		else if(GET() == 2)
		{
			ChangeModelPed("player_two", false);
		}
		else if(GET() == 3)
		{
			ChangeModelPed("player_zero", false);
		}
		else if(GET() == 4)
		{
			ChangeModelPed("u_m_y_babyd", false);
		}
		else if(GET() == 5)
		{
			ChangeModelPed("u_m_y_justin", false);
		}
		else if(GET() == 6)
		{
			ChangeModelPed("u_m_y_pogo_01", false);
		}
		else if(GET() == 7)
		{
			ChangeModelPed("u_m_y_zombie_01", false);
		}
		else if(GET() == 8)
		{
			ChangeModelPed("u_m_y_imporage", false);
		}
		else if(GET() == 9)
		{
			ChangeModelPed("s_m_y_cop_01", false);
		}
		else if(GET() == 10)
		{
			ChangeModelPed("s_m_m_movalien_01", false);
		}
		else if(GET() == 11)
		{
			ChangeModelPed("s_m_y_swat_01", false);
		}
		else if(GET() == 12)
		{
			ChangeModelPed("s_m_y_clown_01", true);
		}
		else if(GET() == 13)
		{
			ChangeModelPed("a_m_o_acult_01", true);
		}
		else if(GET() == 14)
		{
			ChangeModelPed("mp_m_niko_01", true);
		}
		else if(GET() == 15)
		{
			ChangeMenu(Animals);
		}
	}
	else if(NumMenu == Animals)
	{
			AddTitle("Animals");
			addOption("Chop", "commonmenutu", "custom_mission", 1, "");
			addOption("Husky", "commonmenutu", "custom_mission", 0, "");
			addOption("Mtlion", "commonmenutu", "custom_mission", 1, "");
			addOption("Retriever", "commonmenutu", "custom_mission", 0, "");
			addOption("Rottweiler", "commonmenutu", "custom_mission", 1, "");
			addOption("Chimp", "commonmenutu", "custom_mission", 0, "");
			addOption("Coyote", "commonmenutu", "custom_mission", 1, "");
			addOption("Pig", "commonmenutu", "custom_mission", 0, "");
			addOption("Rhesus", "commonmenutu", "custom_mission", 1, "");
			addOption("Cat", "commonmenutu", "custom_mission", 0, "");
			addOption("Westy", "commonmenutu", "custom_mission", 1, "");
			addOption("Pug", "commonmenutu", "custom_mission", 0, "");
			addOption("Poodle", "commonmenutu", "custom_mission", 1, "");
			addOption("Rabbit", "commonmenutu", "custom_mission", 0, "");
                        addOption("Cormorant", "commonmenutu", "custom_mission", 1, "");
                        addOption("Crow", "commonmenutu", "custom_mission", 0, "");
                        addOption("Seagull", "commonmenutu", "custom_mission", 1, "");
                        addOption("Chickenhawk", "commonmenutu", "custom_mission", 0, "");

			if(GET() == 1)
			{
				ChangeModelPed("a_c_chop", true);
			}
			else if(GET() == 2)
			{
				ChangeModelPed("a_c_husky", true);
			}
			else if(GET() == 3)
			{
				ChangeModelPed("a_c_mtlion", true);
			}
			else if(GET() == 4)
			{
				ChangeModelPed("a_c_retriever", true);
			}
			else if(GET() == 5)
			{
				ChangeModelPed("a_c_rottweiler", true);
			}
			else if(GET() == 6)
			{
				ChangeModelPed("a_c_chimp", true);
			}
			else if(GET() == 7)
			{
				ChangeModelPed("a_c_coyote", true);
			}
			else if(GET() == 8)
			{
				ChangeModelPed("a_c_pig", true);
			}
			else if(GET() == 9)
			{
				ChangeModelPed("a_c_rhesus", true);
			}
			else if(GET() == 10)
			{
				ChangeModelPed("A_C_Cat_01", true);
			}
			else if(GET() == 11)
			{
				ChangeModelPed("a_c_westy", true);
			}
			else if(GET() == 12)
			{
				ChangeModelPed("A_C_Pug", true);
			}
			else if(GET() == 13)
			{
				ChangeModelPed("A_C_Poodle", true);
			}
			else if(GET() == 14)
			{
				ChangeModelPed("a_c_rabbit_01", true);
			}
                        else if(GET() == 15)
                        {
				ChangeModelPed("A_C_Cormorant", true);
                        }
                        else if(GET() == 16)
                        {
				ChangeModelPed("A_C_Crow", true);
                        }
                        else if(GET() == 17)
                        {
 				ChangeModelPed("A_C_Seagull", true);
                        }
                        else if(GET() == 18)
                        {
 				ChangeModelPed("A_C_Chickenhawk", true);
                        }
	}
	else if(NumMenu == VehicleMenu)
	{
		AddTitle("Vehicle");
		addOption("Vehicle Spawner", "commonmenutu", "custom_mission", 1, "");
		CheckBox("GodMode", GodModeVeh, "commonmenutu", "custom_mission", 0, "");
		addOption("Speed Boost", "commonmenutu", "custom_mission", 1, "");
		CheckBox("Set Car Visibility", IS_VISIBLE(), "commonmenutu", "custom_mission", 0, "");
		addOption("Fix & Wash","commonmenutu", "custom_mission", 1, "");
		TextOption("Neons", Neons_[NeonNum], &NeonNum, 0, 3, false, true,  0, "");
		addOption("Slingshot","commonmenutu", "custom_mission", 1, "");
		addOption("Delete Vehicle","commonmenutu", "custom_mission", 0, "");
		addOption("Chrome Color","commonmenutu", "custom_mission", 1, "");
		CheckBox("Hydrolics", VehHydrolics, "commonmenutu", "custom_mission", 0, "");
		CheckBox("Scorched Overlay", VehScorched, "commonmenutu", "custom_mission", 1, "");
		CheckBox("Freeze Position", VehFreeze, "commonmenutu", "custom_mission", 0, "");
		CheckBox("Super Jump", VehSuperJump, "commonmenutu", "custom_mission", 1, "");
                if(GET() == 1)
                {
                 ChangeMenu(VehicleSpawner);
                }
		else if(GET() == 2)
		{
	        GodModeVeh = !GodModeVeh;
		if(GodModeVeh == false)
	        {
		int pPlayer = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(pPlayer, 0))
		{
			int pveh = PED::GET_VEHICLE_PED_IS_USING(pPlayer);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(pveh, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(pveh, true);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(pveh, true);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(pveh);
			ENTITY::SET_ENTITY_PROOFS(pveh, false, false, false, false, false, false, false, false);
		}
		}
		}
		else if(GET() == 3)
		{
			int Entity = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
                        VEHICLE::SET_VEHICLE_FORWARD_SPEED(Entity, 100);
		}
		else if(GET() == 4)
		{
			int Entity = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if(ENTITY::IS_ENTITY_VISIBLE(Entity))
			{
				ENTITY::SET_ENTITY_VISIBLE(Entity, false, false);
			}else
			{
				ENTITY::SET_ENTITY_VISIBLE(Entity, true, true);
			}
		}
		else if(GET() == 5)
		{
			int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_FIXED(veh);
		}
		else if(GET() == 6)
		{
			ChangeMenu(Neons);
		}
		else if(GET() == 7)
		{
			int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
                        ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 6000, 5, 2, 5, true, true, true, true, 2, true);
		}
		else if(GET() == 8)
		{
			int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
                        VEHICLE::DELETE_VEHICLE(&veh);
		}
		else if(GET() == 9)
		{
			int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
                        VEHICLE::SET_VEHICLE_COLOURS(veh, 120, 120);
		}
		else if(GET() == 10)
		{
			VehHydrolics =! VehHydrolics;
		}
                else if(GET() == 11)
                {
                 VehScorched =! VehScorched;
                 int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		 ENTITY::SET_ENTITY_RENDER_SCORCHED(veh, VehScorched);
                }
                else if(GET() == 12)
                {
                 VehFreeze =! VehFreeze;
                 int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		 ENTITY::FREEZE_ENTITY_POSITION(veh, VehFreeze);
                }
                else if(GET() == 13)
                {
                VehSuperJump =! VehSuperJump;
                }
	}

       else if(NumMenu == VehicleSpawner)
	{
		AddTitle("Vehicle Spawner");
		addOption("Sports", "commonmenutu", "custom_mission",  1, "");
		addOption("Super", "commonmenutu", "custom_mission",  0, "");
		addOption("Coupes", "commonmenutu", "custom_mission",  1, "");
		addOption("Compacts", "commonmenutu", "custom_mission",  0, "");
		addOption("Sedans", "commonmenutu", "custom_mission",  1, "");
		addOption("Sports Classics", "commonmenutu", "custom_mission",  0, "");
		addOption("Muscle", "commonmenutu", "custom_mission",  1, "");
		addOption("SUVs", "commonmenutu", "custom_mission",  0, "");
		addOption("Vans", "commonmenutu", "custom_mission",  1, "");
		/*addOption("Off-Road", "commonmenutu", "custom_mission");
		addOption("Commercial", "commonmenutu", "custom_mission");
		addOption("Service", "commonmenutu", "custom_mission");
		addOption("Utility", "commonmenutu", "custom_mission");
		addOption("Military", "commonmenutu", "custom_mission");
		addOption("Motorcycle", "commonmenutu", "custom_mission");
		addOption("Cycles", "commonmenutu", "custom_mission");
		addOption("Planes", "commonmenutu", "custom_mission");
		addOption("Helicopters", "commonmenutu", "custom_mission");
		addOption("Boats", "commonmenutu", "custom_mission");
		addOption("Trailers", "commonmenutu", "custom_mission");
		addOption("Trains", "commonmenutu", "custom_mission");*/
		if(GET() == 1)
		{
			ChangeMenu(Sports);
		}
		else if(GET() == 2)
		{
			ChangeMenu(Super);
		}
		else if(GET() == 3)
		{
			ChangeMenu(Coupes);
		}
		else if(GET() == 4)
		{
			ChangeMenu(Compacts);
		}
		else if(GET() == 5)
		{
			ChangeMenu(Sedans);
		}
		else if(GET() == 6)
		{
			ChangeMenu(SportsClassics);
		}
		else if(GET() == 7)
		{
			ChangeMenu(Muscle);
		}
		else if(GET() == 8)
		{
			ChangeMenu(SUVs);
		}
		else if(GET() == 9)
		{
			ChangeMenu(Vans);
		}
	}
	else if(NumMenu == Sports)
	{
		AddTitle("Sports");
		AddVehicle("9F", "ninef",  1);
		AddVehicle("9F Cabrio", "ninef2",  0);
		AddVehicle("Banshee", "banshee",  1);
		AddVehicle("Buffalo", "Buffalo",  0);
		AddVehicle("Buffalo S", "Buffalo2",  1);
		AddVehicle("Carbonizzare ", "Carbonizzare",  0);
		AddVehicle("Comet", "Comet2",  1);
		AddVehicle("Coquette", "Coquette",  0);
		AddVehicle("Elegy RH8", "elegy2",  1);
		AddVehicle("Feltzer", "feltzer2",  0);
		AddVehicle("Fusilade", "Fusilade",  1);
		AddVehicle("Futo", "Futo",  0);
		AddVehicle("Khamelion", "Khamelion",  1);
		AddVehicle("Penumbra", "Penumbra",  0);
		AddVehicle("Rapid GT", "rapidgt",  1);
		AddVehicle("Rapid GT Cabrio", "rapidgt2",  0);
		AddVehicle("Schwarzer", "Schwarzer",  1);
		AddVehicle("Sultan", "Sultan",  0);
		AddVehicle("Surano", "Surano",  1);
		AddVehicle("Jester", "Jester",  0);
		AddVehicle("Alpha", "Alpha",  1);
		AddVehicle("Massacro", "Massacro",  0);
		AddVehicle("Furore GT", "furoregt",  1);
	}
	else if(NumMenu == Super)
	{
		AddTitle("Super");
		AddVehicle("Bullet", "Bullet",  1);
		AddVehicle("Cheetah", "Cheetah",  0);
		AddVehicle("Entity XF ", "entityxf",  1);
		AddVehicle("Infernus", "infernus",  0);
		AddVehicle("Adder", "adder",  1);
		AddVehicle("Voltic", "voltic",  0);
		AddVehicle("Vacca", "vacca",  1);
		AddVehicle("Turismo R", "turismor",  0);
		AddVehicle("Zentorno", "zentorno",  1);
	}
	else if(NumMenu == Coupes)
	{
		AddTitle("Coupes");
		AddVehicle("Cognoscenti Cabrio", "cogcabrio",  1);
		AddVehicle("Exemplar", "Exemplar",  0);
		AddVehicle("F620 ", "f620",  1);
		AddVehicle("Felon", "Felon",  0);
		AddVehicle("Felon GT", "Felon2",  1);
		AddVehicle("Jackal", "jackal",  0);
		AddVehicle("Oracle XS", "oracle2",  1);
		AddVehicle("Oracle", "Oracle",  0);
		AddVehicle("Sentinel XS", "sentinel",  1);
		AddVehicle("Sentinel", "sentinel2",  0);
		AddVehicle("Zion XS", "zion",  1);
		AddVehicle("Zion Cabrio", "zion2",  0);
	}
	else if(NumMenu == Compacts)
	{
		AddTitle("Compacts");
		AddVehicle("Blista", "Blista",  1);
		AddVehicle("Dilettante", "dilettante",  0);
		AddVehicle("Dilettante (Merryweather) ", "Dilettante2",  1);
		AddVehicle("Issi", "issi2",  0);
		AddVehicle("Prairie", "Prairie",  1);
		AddVehicle("Rhapsody", "Rhapsody",  0);
		AddVehicle("Panto", "Panto",  1);
	}
	else if(NumMenu == Sedans)
	{
		AddTitle("Sedans");
		AddVehicle("Asea", "Asea",  1);
		AddVehicle("Asea (Snowy)", "Asea2",  0);
		AddVehicle("Asterope", "asterope",  1);
		AddVehicle("Emperor", "emperor",  0);
		AddVehicle("Emperor (Rusty) ", "emperor2",  1);
		AddVehicle("Emperor (Snowy)", "emperor3",  0);
		AddVehicle("Fugitive", "Fugitive",  1);
		AddVehicle("Ingot", "ingot",  0);
		AddVehicle("Intruder", "Intruder",  1);
		AddVehicle("Premier", "Premier",  0);
		AddVehicle("Primo", "Primo",  1);
		AddVehicle("Regina", "Regina",  0);
		AddVehicle("Romero", "Romero",  1);
		AddVehicle("Schafter", "schafter2",  0);
		AddVehicle("Stanier", "Stanier",  1);
		AddVehicle("Stratum", "stratum",  0);
		AddVehicle("Stretch", "Stretch",  1);
		AddVehicle("Super Diamond", "superd",  0);
		AddVehicle("Surge", "Surge",  1);
		AddVehicle("Tailgater", "Tailgater",  0);
		AddVehicle("Washington", "Washington",  1);
		AddVehicle("Warrener", "Warrener",  0);
		AddVehicle("Glendale", "Glendale",  1);
	}
	else if(NumMenu == SportsClassics)
	{
		AddTitle("Sports Classics");
		AddVehicle("JB 700", "jb700",  1);
		AddVehicle("Manana", "Manana",  0);
		AddVehicle("Monroe", "Monroe",  1);
		AddVehicle("Peyote", "Peyote",  0);
		AddVehicle("Stinger ", "Stinger",  1);
		AddVehicle("Stinger GT", "stingergt",  0);
		AddVehicle("Tornado", "Tornado",  1);
		AddVehicle("Tornado Cabrio", "tornado2",  0);
		AddVehicle("Tornado (Rusty)", "Tornado3",  1);
		AddVehicle("Tornado (Guitar)", "tornado4",  0);
		AddVehicle("Z-Type", "ztype",  1);
		AddVehicle("Roosevelt", "btype",  0);
		AddVehicle("Pigalle", "Pigalle",  1);
		AddVehicle("Coquette Classic", "coquette2",  0);
	}
	else if(NumMenu == Muscle)
	{
		AddTitle("Muscle");
		AddVehicle("Buccaneer", "buccaneer",  1);
		AddVehicle("Hotknife", "Hotknife",  0);
		AddVehicle("Dominator", "dominator",  1);
		AddVehicle("Gauntlet", "gauntlet",  0);
		AddVehicle("Phoenix ", "phoenix",  1);
		AddVehicle("Picador", "Picador",  0);
		AddVehicle("Sabre Turbo", "sabregt",  1);
		AddVehicle("Voodoo", "voodoo2",  0);
		AddVehicle("Vigero", "vigero",  1);
		AddVehicle("Blade", "blade",  0);
	}
	else if(NumMenu == SUVs)
	{
		AddTitle("SUVs");
		AddVehicle("Baller", "baller",  1);
		AddVehicle("Baller (Old)", "baller2",  0);
		AddVehicle("Cavalcade 2013", "cavalcade",  1);
		AddVehicle("Cavalcade 2015", "cavalcade2",  0);
		AddVehicle("Gresley", "gresley",  1);
		AddVehicle("Dubsta", "dubsta",  0);
		AddVehicle("Dubsta (Blacked Out)", "Dubsta2",  1);
		AddVehicle("FQ 2", "fq2",  0);
		AddVehicle("Granger", "granger",  1);
		AddVehicle("Habanero", "habanero",  0);
		AddVehicle("Landstalker", "Landstalker",  1);
		AddVehicle("Mesa", "mesa",  0);
		AddVehicle("Mesa (Snowy)", "mesa2",  1);
		AddVehicle("Patriot", "patriot",  0);
		AddVehicle("Radius", "radi",  1);
		AddVehicle("Rocoto", "rocoto",  0);
		AddVehicle("Seminole", "Seminole",  1);
		AddVehicle("Serrano", "serrano",  0);
		AddVehicle("Huntley S", "huntley",  1);
	}
	else if(NumMenu == Vans)
	{
		AddTitle("Vans");
		AddVehicle("Bison", "bison",  1);
		AddVehicle("Bison (Construction)", "bison2", 0 );
		AddVehicle("Bison (Landscapeing)", "bison3",  1);
		AddVehicle("Boxville (Water&Power)", "boxville",  0);
		AddVehicle("Boxville (Postal)", "boxville2",  1);
		AddVehicle("Boxville (Humane)", "boxville3",  0);
		AddVehicle("Bobcat XL ", "bobcatxl",  1);
		AddVehicle("Burrito", "burrito",  0);
		AddVehicle("Burrito (Bugstars) ", "burrito2",  1);
		AddVehicle("Burrito (Construction) ", "burrito4",  0);
		AddVehicle("Burrito (Snowy) ", "burrito5",  1);
		AddVehicle("Gang Burrito ", "burrito3 ",  0);
		AddVehicle("Camper", "camper",  1);
		AddVehicle("Journey", "Journey",  0);
		AddVehicle("Minivan", "minivan",  1);
		AddVehicle("Pony", "PONY",  0);
		AddVehicle("Weed Van", "pony2",  1);
		AddVehicle("Rumpo (Weazel News)", "rumpo",  0);
		AddVehicle("Rumpo (Deludamol)", "rumpo2",  1);
		AddVehicle("Speedo", "speedo",  0);
		AddVehicle("Clown Van", "speedo2",  1);
		AddVehicle("Surfer", "surfer",  0);
		AddVehicle("Surfer (Rusty)", "surfer2",  1);
		AddVehicle("Taco Van", "taco",  0);
	}
	else if(NumMenu == Neons)
	{
		int veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		AddTitle("Neon");
		CheckBox("Enable Neon", VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, NeonNum), "commonmenutu", "custom_mission", 1, "");
		AddColor("White", 255, 255, 255 , 1);
		AddColor("Red", 255, 0, 0 , 0);
		AddColor("Green", 0, 255, 0 , 1);
		AddColor("Blue", 0, 0, 205 , 0);
		AddColor("Yellow", 255, 255, 0 , 1);
		AddColor("Purple", 137, 5, 190 , 0);
		CheckBox("Flash Color", FlashNeon, "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			if(!VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, NeonNum))
			{
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, NeonNum, true);
			}
			else
			{
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, NeonNum, false);
			}
		}
		else if(GET() == 8)
		{
			FlashNeon =! FlashNeon;
		}


	}
        else if(NumMenu == WeaponMenu)
        {
 		AddTitle("Weapon");
		addOption("Give All Weapons", "commonmenutu", "custom_mission", 1, "");
		addOption("Take All Weapons", "commonmenutu", "custom_mission", 0, "");
		CheckBox("Infinite Ammo", InfiniteAmmo, "commonmenutu", "custom_mission", 1, "");
		CheckBox("Fire Ammo", FireAmmo, "commonmenutu", "custom_mission", 0, "");
		CheckBox("Explosive Ammo", ExplosiveAmmo, "commonmenutu", "custom_mission", 1, "");
		CheckBox("Delete Entity Gun", DeleteEntityGun, "commonmenutu", "custom_mission", 0, "");
		CheckBox("Rope Gun", RopeGun, "commonmenutu", "custom_mission", 1, "");
		CheckBox("Hash Gun", HashGun, "commonmenutu", "custom_mission", 0, "");
		CheckBox("Clone Gun", CloneGun, "commonmenutu", "custom_mission", 1, "");
                if(GET() == 1)
                {
                GivePedWeapons(PLAYER::PLAYER_PED_ID());
                }
                else if(GET() == 2)
                {
                 WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), false);
                }
                else if(GET() == 3)
                {
                InfiniteAmmo =!InfiniteAmmo;
                WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), InfiniteAmmo);
                }
                else if(GET() == 4)
                {
                FireAmmo =!FireAmmo;
                }
                else if(GET() == 5)
                {
                ExplosiveAmmo =!ExplosiveAmmo;
                }
                else if(GET() == 6)
                {
                DeleteEntityGun =!DeleteEntityGun;
                }
                else if(GET() == 7)
                {
                RopeGun =!RopeGun;
                }
                else if(GET() == 8)
                {
                HashGun =!HashGun;
                }
                else if(GET() == 9)
                {
                CloneGun =!CloneGun;
                }
        }

		else if(NumMenu == ObjectMenu)
        {
 		AddTitle("Object");
		addOption("Move Last Object", "commonmenutu", "custom_mission", 0, "");
		addObject("Fire", "prop_beach_fire");
                addObject("Windmill", "prop_windmill_01");
                addObject("Ferris wheel", "prop_Ld_ferris_wheel");
                addObject("Oil slick", "p_oil_slick_01");
                addObject("Weed plant", "Prop_weed_01");
                addOption("Containers", "commonmenutu", "custom_mission", 0, "");
         if (GET() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(HandleObject) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(HandleObject))
			{
				print("~r~Error,~w~Saved object is no longer in memory.", 2000);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(HandleObject))
			{
				ChangeMenu(MoveLastObject);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(HandleObject))
			{
				print("~r~Error,~w~Saved object is no longer in memory.", 2000);
			}
		}
          else if(GET() == 7)
          {
          ChangeMenu(Containers);
          }
        }
    else if (NumMenu == MoveLastObject)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(HandleObject))
		{
			NumMenu = lastNumMenu[NumMenuLevel - 1];
			currentOption = lastOption[NumMenuLevel - 1];
			NumMenuLevel--;
		}
		AddTitle("Move Last Object");
		IntOption("Precision Level", &PLevel, 0, 3, false, "commonmenutu", "custom_mission", 1, "");
		EditCoordObj("X Coord", true, false, false, 0);
		EditCoordObj("Y Coord", false, true, false, 1);
		EditCoordObj("Z Coord", false, false, true, 0);
		EditRotatObj("Pitch", true, false, false, 1);
		EditRotatObj("Roll", false, true, false, 0);
		EditRotatObj("Yaw", false, false, true, 1);
		addOption("Delete Object", "commonmenutu", "custom_mission", 0, "");
		addOption("Snap to Ground", "commonmenutu", "custom_mission", 1, "");
		addOption("Copy", "commonmenutu", "custom_mission", 0, "");
		addOption("Teleport To Me", "commonmenutu", "custom_mission", 1, "");
		addOption("Set To My Direction", "commonmenutu", "custom_mission", 0, "");
		addOption("UnFreeze", "commonmenutu", "custom_mission", 1, "");
	    if (GET() == 8)
		{
			if (RequestObject() == true)
			{
				ENTITY::DELETE_ENTITY(&HandleObject);
			}
		}
		else if (GET() == 9)
		{
			if (RequestObject() == true)
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(HandleObject);
			}
		}
                else if(GET() == 10)
                {
           STREAMING::REQUEST_MODEL(ENTITY::GET_ENTITY_MODEL(HandleObject));
        Vector3 coord = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(HandleObject, 0, 10, 0);
        HandleObject = OBJECT::CREATE_OBJECT(ENTITY::GET_ENTITY_MODEL(HandleObject), coord.x, coord.y, coord.z,  false, false, true);
        ENTITY::SET_ENTITY_ROTATION(HandleObject, RotX, RotY, RotZ, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(HandleObject, 1);
                }
                else if(GET() == 11)
                {
                Vector3 Coord = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
                ENTITY::SET_ENTITY_COORDS(HandleObject, Coord.x, Coord.y, Coord.z, 1, 0, 0, 1);
                }
                else if(GET() == 12)
                {
                float h = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
                ENTITY::SET_ENTITY_HEADING(HandleObject, -h);
                }
                else if(GET() == 13)
                {
                ENTITY::FREEZE_ENTITY_POSITION(HandleObject, 0);
                }
	}
	else if(NumMenu == Containers)
        {
		AddTitle("Containers");
		addObject("prop_container_03mb", "prop_container_03mb");
		addObject("prop_container_03_ld", "prop_container_03_ld");
		addObject("prop_container_hole", "prop_container_hole");
		addObject("prop_container_ld", "prop_container_ld");
		addObject("prop_container_ld2", "prop_container_ld2");
		addObject("prop_container_old1", "prop_container_old1");
        }
        else if(NumMenu == TeleportMenu)
        {
		AddTitle("Teleport");
		addOption("Teleport to Waypoint", "commonmenutu", "custom_mission", 0, "");
		AddTeleport("Teleport to Airport", -1102.2910, -2894.5160, 13.9467);
		AddTeleport("Teleport to Airport Terminal", -1561.5250, -3232.3460, 26.3361);
		AddTeleport("Teleport to Trevor's Air Field", 1741.4960, 3269.2570, 41.6014);
		AddTeleport("Teleport to Fort Zacundo", -2012.8470, 2956.5270, 32.8101);
		AddTeleport("Teleport to Maze bank city Helipad", -74.94243, -818.63446, 326.174347);
		AddTeleport("Teleport to Mount Chiliad Jump", 430.2037, 5614.7340, 766.1684);
		AddTeleport("Teleport to Far away beach", 178.3295, 7041.8220, 1.8671);
		AddTeleport("Teleport to Far Island", 17.8323, 7630.0140, 13.5068);
		AddTeleport("Teleport to Zancudo river", -558.9814, 2945.7010, 14.5917);
		AddTeleport("Teleport to Ammunation Office", 12.4553, -1110.2580, 29.7970);
		AddTeleport("Teleport to 400k Garage (Outside)", -795.4600, 308.8900, 85.7100);
		AddTeleport("Teleport to 400k Apartment (Outside)", -775.0500, 312.3200, 85.7000);
		AddTeleport("Teleport to Humane Lab (Waterbody)", 3524.0700, 3711.9500, 20.9913);
		AddTeleport("Teleport to Track", 1226.7500, 125.5000, 81.8394);
		AddTeleport("Teleport to Private Garage", 3601.3830, 3668.7930, 33.8718);
		AddTeleport("Teleport to Inside Store", -1244.1380, -1454.9980, 4.3478);
		AddTeleport("Teleport to Dock (Near Lighthouse)", 3369.2240, 5184.1500, 1.4602);
		AddTeleport("Teleport to Prison", 1736.0712, 2583.6311, 45.1847);
		AddTeleport("Teleport to High in The Sky", -129.9640, 8130.8730, 6705.6510);
                if(GET() == 1)
                {
                TeleportWPLoop = true;
                }
        }
	else if(NumMenu == MapMods)
	{
		AddTitle("Map Mods");
		addOption("D70M M4P", "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
				CreateObject(0x9C762726,-1426.886,-2497.702,19.9720, 30.7213,0.1092,  -26.3437);//1
				CreateObject(0x9C762726,-1413.186,-2469.902,38.3891,30.7213,0.1092,-26.3437);//2
				CreateObject(0x9C762726,-1399.487,-2442.101,56.8062,30.7213,0.1092,-26.3437);//3
				CreateObject(0x9C762726,-1385.687,-2414.402,75.1943,30.7213,0.1092,-26.3437);//4
				CreateObject(0x9C762726,-1371.987, -2386.702, 93.5514, 30.7213,0.1092,-26.3437);//5
				CreateObject(0x9C762726,-1358.257,-2358.993,111.9185,30.7213,  0.1092, -26.3437);//6
				CreateObject(0x9C762726,-1344.457,-2331.294,130.3056,30.7213, 0.1092,  -26.3437);//7
				CreateObject(0x9C762726,-1330.557,-2303.493,148.7926,30.7213,0.1092,-26.3437);//8
				CreateObject(0x9C762726,-1316.857,-2275.794,167.1497,30.7213,0.1092, -26.3437);//9
				CreateObject(0x9C762726,-1303.057, -2248.085, 185.5368, 30.7213, 0.1092, -26.3437);//10
				CreateObject(0x9C762726,-1289.257,  -2220.385,  203.9238, 30.7213,0.1092, -26.3437);//11
				CreateObject(0x9C762726, -1275.457,  -2192.685,  222.3109,  30.7213,  0.1092,  -26.3437);//12
				CreateObject(0x9C762726,  -1261.758, -2164.887,  240.7280,  30.7213, 0.1092, -26.3437);//13
				CreateObject(0x9C762726, -1247.958,  -2137.185,  259.1151,  30.7213,  0.1092, -26.3437);//14
				CreateObject(0x9C762726, -1234.238, -2109.405, 277.5222,  30.7213,   0.1092,  -26.3437);//15
				CreateObject(0x9C762726,  -1220.538,  -2081.704,  295.8792,  30.7213, 0.1092, -26.3437);//16
				CreateObject(0x9C762726, -1206.868, -2054.017, 314.2263,  30.7213,  0.1092, -26.3437);//17
				CreateObject(0x9C762726,  -1193.068, -2026.417,  332.5634,  30.7213,   0.1092,  -26.3437);//18
				CreateObject(0x9C762726,  -1179.368,  -1998.676,  350.9403,  30.7213, 0.1092, -26.3437);//19
				CreateObject(0x9C762726, -1165.648,  -1970.866,  369.3675, 30.7213,0.1092,  -26.3437);//17
				CreateObject(0x9C762726,  -1151.948,  -1943.167,  387.7346,  30.7213, 0.1092, -26.3437);//18
				CreateObject(0x9C762726, -1138.148,  -1915.467,  406.1316,  30.7213,  0.1092, -26.3437);//19
				CreateObject(0x9C762726,   -1124.449, -1887.667,  424.5489,  30.7213,   0.1092,  -26.3437);//19
				CreateObject(0x9C762726,   -1110.749, -1859.937,  442.9361, 30.7213,  0.1092,  -26.3437);//19
				CreateObject(0x9C762726,     -1097.009 , -1832.238,  461.3032,  30.7213,  0.1092 ,-26.3437);//19
				CreateObject(0x9C762726,    -1082.210,  -1802.338,  470.6203,  0.7213,  0.1092, -26.3437);//19
				CreateObject(0x9C762726,    -1090.710,  -1798.137,  470.6374,  0.7213,  0.1092, -26.3437);//19
				CreateObject(0x9C762726,     -1073.909, -1806.737,  470.6545, 0.7213,   0.1092,  -26.3437);//19
				CreateObject(0x9C762726,    -1430.539, -2505.158, 13.6871, 22, 0, -25.8939);//19
				//ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1435.219, -2514.554, 14.1808, 1, 0, 0, 1);
				print("Airport Ramp Created by ~r~D70M", 4000);
		}
		else if(GET() == 2)
		{
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
			CreateObject(GAMEPLAY::GET_HASH_KEY("prop_beach_fire"),   coords.x, coords.y,  coords.z,  0,  0, 0);//19
		}
		else if(GET() == 3)
		{
			CreateObject(GAMEPLAY::GET_HASH_KEY("prop_beach_fire"), -1102.2910, -2894.5160, 13.9467,  0,  0, 0);//19
		}
	}
	else if(NumMenu == Bodyguards)
	{
		AddTitle("Guards");
		addOption("Guards Options", "commonmenutu", "custom_mission", 1, "");
		addOption("Rambo", "commonmenutu", "custom_mission", 0, "");
		addOption("Swat", "commonmenutu", "custom_mission", 1, "");
		addOption("Acult", "commonmenutu", "custom_mission", 0, "");
		addOption("Justin", "commonmenutu", "custom_mission", 1, "");
		addOption("Pogo", "commonmenutu", "custom_mission", 0, "");
		addOption("Stripper", "commonmenutu", "custom_mission", 1, "");
		addOption("Clown", "commonmenutu", "custom_mission", 0, "");
		if(GET() == 1)
		{
			ChangeMenu(BodyguardsOptions);
		}
		else if(GET() == 2)
		{
			spawnguards("u_m_y_babyd", true);
		}
		else if(GET() == 3)
		{
			spawnguards("s_m_y_swat_01", true);
		}
		else if(GET() == 4)
		{
			spawnguards("a_m_y_acult_02", true);
		}
		else if(GET() == 5)
		{
			spawnguards("u_m_y_justin", true);
		}
		else if(GET() == 6)
		{
			spawnguards("u_m_y_pogo_01", true);
		}
		else if(GET() == 7)
		{
			spawnguards("s_f_y_stripper_02", true);
		}
		else if(GET() == 8)
		{
			spawnguards("s_m_y_clown_01", true);
		}
	}
	else if(NumMenu == BodyguardsOptions)
	{
		AddTitle("Guards Options");
		addOption("Weapon Options", "commonmenutu", "custom_mission", 1, "");
		addOption("Animations", "commonmenutu", "custom_mission", 0, "");
		CheckBox("GodMode",GodModeG, "commonmenutu", "custom_mission", 1, "");
		addOption("Delete All", "commonmenutu", "custom_mission", 0, "");
		 if(GET() == 1)
		{
			ChangeMenu(WeaponBg);
		}
		else if(GET() == 2)
		{
			ChangeMenu(AnimsBg);
		}
		else if(GET() == 3)
		{
			GodModeG =! GodModeG;
                        if(GodModeG == false)
                         {
                          for(int i = 0; i< 6; i++)
{
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(gameped[i], 0, 1);
ENTITY::SET_ENTITY_INVINCIBLE(gameped[i], 0);
}
                         }
		}
		else if(GET() == 4)
		{
			delete_all_spawnguards();
		}
	}
	else if(NumMenu == WeaponBg)
	{
		AddTitle("Weapon Options");
		IntOption("Give Weapon", &BodyWeapon, 1, 35, false, "commonmenutu", "custom_mission", 1, "");
		addOption("Remove Weapon", "commonmenutu", "custom_mission", 0, "");
		if(GET() == 1)
		{
			GiveWeaponBg();
		}
		else if(GET() == 2)
		{
			for(int i = 0; i< 7; i++)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(gameped[i], false);
			}
		}
	}
	else if(NumMenu == AnimsBg)
	{
		AddTitle("Animations");
		addOption("Stop Animations", "commonmenutu", "custom_mission", 1, "");
		IntOption("Tap Danceing", &AnimsBgDance, 1, 5, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Stripper Dances", &AnimsBgStripper, 1, 6, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Wave", &AnimsBgWave, 1, 2, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Animation with Walk", &AnimsBgWalk, 1, 5, false, "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			for(int i =0; i< 7; i++)
			{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(gameped[i]);
			}
		}
		else if(GET() == 2)
		{
			if(AnimsBgDance == 1)
			{
				AnimationsBg("special_ped@mountain_dancer@base", "base", 1);
			}
			else if(AnimsBgDance == 2)
			{
				AnimationsBg("special_ped@mountain_dancer@monologue_1@monologue_1a", "mtn_dnc_if_you_want_to_get_to_heaven", 1);
			}
			else if(AnimsBgDance == 3)
			{
				AnimationsBg("special_ped@mountain_dancer@monologue_4@monologue_4a", "mnt_dnc_verse", 1);
			}
			else if(AnimsBgDance == 4)
			{
				AnimationsBg("special_ped@mountain_dancer@monologue_2@monologue_2a", "mnt_dnc_angel", 1);
			}
			else if(AnimsBgDance == 5)
			{
				AnimationsBg("special_ped@mountain_dancer@monologue_3@monologue_3a", "mnt_dnc_buttwag", 1);
			}
		}
		else if(GET() == 3)
		{
			if(AnimsBgStripper == 1)
			{
				AnimationsBg("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01", 1);
			}
			else if(AnimsBgStripper == 2)
			{
				AnimationsBg("mini@strip_club@pole_dance@pole_dance2", "pd_dance_02", 1);
			}
			else if(AnimsBgStripper == 3)
			{
				AnimationsBg("mini@strip_club@pole_dance@pole_dance3", "pd_dance_03", 1);
			}
			else if(AnimsBgStripper == 4)
			{
				AnimationsBg("mini@strip_club@private_dance@part1", "priv_dance_p1", 1);
			}
			else if(AnimsBgStripper == 5)
			{
				AnimationsBg("mini@strip_club@private_dance@part2", "priv_dance_p2", 1);
			}
			else if(AnimsBgStripper == 6)
			{
				AnimationsBg("mini@strip_club@private_dance@part3", "priv_dance_p3", 1);
			}
		}
		else if(GET() == 4)
		{
			if(AnimsBgWave == 1)
			{
				AnimationsBg("missheistdockssetup1", "wave_truck", 1);
			}
			else if(AnimsBgWave == 2)
			{
				AnimationsBg("random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 1);
			}
		}
		else if(GET() == 5)
		{
			 if(AnimsBgWalk == 1)
			{
				AnimationsBg("missfbi5ig_36", "_heli_wave", 2);
			}
			else if(AnimsBgWalk == 2)
			{
				AnimationsBg("missheistdockssetup1", "wave_truck", 2);
			}
			else if(AnimsBgWalk == 3)
			{
				AnimationsBg("random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2);
			}
			else if(AnimsBgWalk == 4)
			{
				AnimationsBg("mini@strip_club@private_dance@part3", "priv_dance_p3", 2);
			}
			else if(AnimsBgWalk == 5)
			{
				AnimationsBg("mini@strip_club@private_dance@part2", "priv_dance_p2", 2);
			}
		}
	}
                else if(NumMenu == AnimalsG)
	{
		AddTitle("Animals");
		addOption("Animals Options", "commonmenutu", "custom_mission", 1, "");
			addOption("Chop", "commonmenutu", "custom_mission", 0, "");
			addOption("Husky", "commonmenutu", "custom_mission", 1, "");
			addOption("Retriever", "commonmenutu", "custom_mission", 0, "");
			addOption("Rottweiler", "commonmenutu", "custom_mission", 1, "");
			addOption("Chimp", "commonmenutu", "custom_mission", 0, "");
			addOption("Pig", "commonmenutu", "custom_mission", 1, "");
			addOption("Rhesus", "commonmenutu", "custom_mission", 0, "");
			addOption("Cat", "commonmenutu", "custom_mission", 1, "");
			addOption("Westy", "commonmenutu", "custom_mission", 0, "");
			addOption("Pug", "commonmenutu", "custom_mission", 1, "");
			addOption("Poodle", "commonmenutu", "custom_mission", 0, "");
		if(GET() == 1)
		{
			ChangeMenu(AnimalsOptions);
		}
		else if(GET() == 2)
			{
				spawnAnimals("a_c_chop", true);
			}
			else if(GET() == 3)
			{
				spawnAnimals("a_c_husky", true);
			}
			else if(GET() == 4)
			{
				spawnAnimals("a_c_retriever", true);
			}
			else if(GET() == 5)
			{
				spawnAnimals("a_c_rottweiler", true);
			}
			else if(GET() == 6)
			{
				spawnAnimals("a_c_chimp", true);
			}
			else if(GET() == 7)
			{
				spawnAnimals("a_c_pig", true);
			}
			else if(GET() == 8)
			{
				spawnAnimals("a_c_rhesus", true);
			}
			else if(GET() == 9)
			{
				spawnAnimals("A_C_Cat_01", true);
			}
			else if(GET() == 10)
			{
				spawnAnimals("a_c_westy", true);
			}
			else if(GET() == 11)
			{
				spawnAnimals("A_C_Pug", true);
			}
			else if(GET() == 12)
			{
				spawnAnimals("A_C_Poodle", true);
			}
	}
                else if(NumMenu == AnimalsOptions)
	{
		AddTitle("Animals Options");
		addOption("Animations", "commonmenutu", "custom_mission", 0, "");
		CheckBox("GodMode",GodModeA, "commonmenutu", "custom_mission", 1, "");
		addOption("Teleport To Me", "commonmenutu", "custom_mission", 0, "");
		addOption("Delete All", "commonmenutu", "custom_mission", 1, "");
	        if(GET() == 1)
		{
			ChangeMenu(AnimsAn);
		}
		else if(GET() == 2)
		{
			GodModeA =! GodModeA;
                        if(GodModeA == false)
                         {
                          for(int i = 0; i< 6; i++)
                          {
                            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(animalped[i], 0, 1);
                            ENTITY::SET_ENTITY_INVINCIBLE(animalped[i], 0);
                          }
                         }
		}
                else if(GET() == 3)
		{
			teleport_spawnAnaimls();
		}
		else if(GET() == 4)
		{
			delete_all_spawnAnaimls();
		}
	}

             	else if(NumMenu == AnimsAn)
	{
		AddTitle("Animations");
		addOption("Stop Animations", "commonmenutu", "custom_mission", 1, "");
		IntOption("Cat Animations", &AnimsCat, 1, 7, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Chop Animations", &AnimsChop, 1, 6, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Monkey Animations", &AnimsMonkey, 1, 5, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Pug Animations", &AnimsPug, 1, 5, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Rabbit Animations", &AnimsRabbit, 1, 6, false, "commonmenutu", "custom_mission", 0, "");
		if(GET() == 1)
		{
			for(int i =0; i< 7; i++)
			{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(animalped[i]);
			}
		}
		else if(GET() == 2)
		{
		   if(AnimsCat == 1)
			{
				AnimationsAn("creatures@cat@amb@world_cat_sleeping_ground@base", "base", 1);
			}
			else if(AnimsCat == 2)
			{
				AnimationsAn("creatures@cat@getup", "getup_l", 1);
			}
			else if(AnimsCat == 3)
			{
				AnimationsAn("creatures@cat@move", "dead_left", 1);
			}
			else if(AnimsCat == 4)
			{
				AnimationsAn("creatures@cat@move", "walk_turn_l", 1);
			}
			else if(AnimsCat == 5)
			{
				AnimationsAn("creatures@cat@move", "idle_upp", 1);
			}
			else if(AnimsCat == 6)
			{
				AnimationsAn("creatures@cat@player_action@", "action_a", 1);
			}
			else if(AnimsCat == 7)
			{
				AnimationsAn("creatures@cat@step", "step_lft", 1);
			}
		}
		else if(GET() == 3)
		{
			if(AnimsChop == 1)
			{
				AnimationsAn("missexile2", "chop_swim_across", 1);
			}
			else if(AnimsChop == 2)
			{
				AnimationsAn("missexile2", "chop_sit_in_frogger_rds", 1);
			}
			else if(AnimsChop == 3)
			{
				AnimationsAn("missfra0_chop_fchase", "fra_0_chop_jumps_down", 1);
			}
			else if(AnimsChop == 4)
			{
				AnimationsAn("missfra0_chop_find", "hump_loop_ladydog", 1);
			}
			else if(AnimsChop == 5)
			{
				AnimationsAn("missfra0_chop_shared", "fra0_ig_12_chop_fast_turn_b", 1);
			}
			else if(AnimsChop == 6)
			{
				AnimationsAn("missfra0_chop_tovan", "put_chop_in_van_chop", 1);
			}
		}
		else if(GET() == 4)
		{
			if(AnimsMonkey == 1)
			{
				AnimationsAn("creatures@monkey@die", "monkey_die", 1);
			}
			else if(AnimsMonkey == 2)
			{
				AnimationsAn("creatures@monkey@move", "dying", 1);
			}
			else if(AnimsMonkey == 3)
			{
				AnimationsAn("missfbi5ig_30monkeys", "monkey_a_idle", 1);
			}
			else if(AnimsMonkey == 4)
			{
				AnimationsAn("missfbi5ig_30monkeys", "monkey_b_freakout_loop", 1);
			}
			else if(AnimsMonkey == 5)
			{
				AnimationsAn("missfbi5ig_30monkeys", "monkey_c_idle", 1);
			}
		}
		else if(GET() == 5)
		{
			 if(AnimsPug == 1)
			{
				AnimationsAn("creatures@pug@amb@peyote@enter", "enter", 1);
			}
			else if(AnimsPug == 2)
			{
				AnimationsAn("creatures@pug@amb@world_dog_barking@base", "base", 1);
			}
			else if(AnimsPug == 3)
			{
				AnimationsAn("creatures@pug@amb@world_dog_barking@idle_a", "idle_b", 1);
			}
			else if(AnimsPug == 4)
			{
				AnimationsAn("creatures@pug@amb@world_dog_barking@idle_a", "idle_c", 1);
			}
			else if(AnimsPug == 5)
			{
				AnimationsAn("creatures@pug@amb@world_dog_sitting@base", "base", 1);
			}
			else if(AnimsPug == 6)
			{
				AnimationsAn("creatures@pug@amb@world_dog_sitting@idle_a", "idle_a", 1);
			}
			else if(AnimsPug == 7)
			{
				AnimationsAn("creatures@pug@melee@streamed_core@", "attack", 1);
			}
			else if(AnimsPug == 8)
			{
				AnimationsAn("creatures@pug@move", "dying", 1);
			}
		}
		else if(GET() == 6)
		{
			 if(AnimsRabbit == 1)
			{
				AnimationsAn("creatures@rabbit@amb@world_rabbit_eating@base", "base", 1);
			}
			else if(AnimsRabbit == 2)
			{
				AnimationsAn("creatures@rabbit@amb@world_rabbit_eating@idle_a", "idle_a", 1);
			}
			else if(AnimsRabbit == 3)
			{
				AnimationsAn("creatures@rabbit@amb@world_rabbit_eating@idle_a", "idle_b", 1);
			}
			else if(AnimsRabbit == 4)
			{
				AnimationsAn("creatures@rabbit@amb@world_rabbit_eating@idle_a", "idle_c", 1);
			}
			else if(AnimsRabbit == 5)
			{
				AnimationsAn("creatures@rabbit@player_action@", "action_a", 1);
			}
			else if(AnimsRabbit == 6)
			{
				AnimationsAn("creatures@rabbit@move", "idle", 1);
			}
		}
	}
		else if(NumMenu == World)
	{
		AddTitle("World");
		IntOption("Cloud Types", &CloudTypes, 1, 21, false, "commonmenutu", "custom_mission", 1, "");
		CheckBox("Thunder & Lightning", ThunderLightning, "commonmenutu", "custom_mission", 0, "");
		TextOption("Weather", WEATHER_[weather_h], &weather_h, 0, 12, false, true, 1, "");
		CheckBox("Freeze Time", FreezeTime, "commonmenutu", "custom_mission", 0, "");
		addOption("Next Time", "commonmenutu", "custom_mission", 1, "");
		FloatOption("Vehicle Density", &VehicleDensity, 0.0, 10.0, 1.0, "commonmenutu", "custom_mission", 0, "");
		FloatOption("Parked Vehicle Density", &ParkedVehicleDensity, 0.0, 10.0, 1.0, "commonmenutu", "custom_mission", 1, "");
		FloatOption("Random Vehicle Density", &RandomVehicleDensity, 0.0, 10.0, 1.0, "commonmenutu", "custom_mission", 0, "");
		FloatOption("Ped Density", &PedDensity, 0.0, 10.0, 1.0, "commonmenutu", "custom_mission", 1, "");
		FloatOption("Scenario Ped Density", &ScenarioPedDensity, 0.0, 10.0, 1.0, "commonmenutu", "custom_mission", 0, "");
		CheckBox("No Traffic", NoTraffic, "commonmenutu", "custom_mission", 1, "");
		CheckBox("Blackout", Blackout, "commonmenutu", "custom_mission", 0, "");
		addOption("Nearby Ped Controller", "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			if(CloudTypes == 1)
				GAMEPLAY::LOAD_CLOUD_HAT("RAIN", 0);
			else if(CloudTypes == 2)
				GAMEPLAY::LOAD_CLOUD_HAT("Stormy 01", 0);
			else if(CloudTypes == 3)
				GAMEPLAY::LOAD_CLOUD_HAT("Cirrus", 0);
			else if(CloudTypes == 4)
				GAMEPLAY::LOAD_CLOUD_HAT("Wispy", 0);
			else if(CloudTypes == 5)
				GAMEPLAY::LOAD_CLOUD_HAT("cirrocumulus", 0);
			else if(CloudTypes == 6)
				GAMEPLAY::LOAD_CLOUD_HAT("Snowy 01", 0);
			else if(CloudTypes == 7)
				GAMEPLAY::LOAD_CLOUD_HAT("CONTRAILS", 0);
			else if(CloudTypes == 8)
				GAMEPLAY::LOAD_CLOUD_HAT("Cloudy 01", 0);
			else if(CloudTypes == 9)
				GAMEPLAY::LOAD_CLOUD_HAT("horizonband1", 0);
			else if(CloudTypes == 10)
				GAMEPLAY::LOAD_CLOUD_HAT("horizonband2", 0);
			else if(CloudTypes == 11)
				GAMEPLAY::LOAD_CLOUD_HAT("Puffs", 0);
			else if(CloudTypes == 12)
				GAMEPLAY::LOAD_CLOUD_HAT("Horizon", 0);
			else if(CloudTypes == 13)
				GAMEPLAY::LOAD_CLOUD_HAT("Clear 01", 0);
			else if(CloudTypes == 14)
				GAMEPLAY::LOAD_CLOUD_HAT("altostratus", 0);
			else if(CloudTypes == 15)
				GAMEPLAY::LOAD_CLOUD_HAT("Nimbus", 0);
			else if(CloudTypes == 16)
				GAMEPLAY::LOAD_CLOUD_HAT("cirrocumulus", 0);
			else if(CloudTypes == 17)
				GAMEPLAY::LOAD_CLOUD_HAT("stratoscumulus", 0);
			else if(CloudTypes == 18)
				GAMEPLAY::LOAD_CLOUD_HAT("horizonband3", 0);
			else if(CloudTypes == 19)
				GAMEPLAY::LOAD_CLOUD_HAT("Stripey", 0);
			else if(CloudTypes == 20)
				GAMEPLAY::LOAD_CLOUD_HAT("horsey", 0);
			else if(CloudTypes == 21)
				GAMEPLAY::LOAD_CLOUD_HAT("shower", 0);
		}
		else if(GET() == 2)
		{
			ThunderLightning =! ThunderLightning;
		}
		else if(GET() == 3)
		{
			GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST(WEATHER_[weather_h]);
		}
		else if(GET() == 4)
		{
			FreezeTime = !FreezeTime;
			if(FreezeTime == false)
			{
				TIME::PAUSE_CLOCK(false);
			}
		}
		else if(GET() == 5)
		{
		  NextTime++;
		  TIME::SET_CLOCK_TIME(NextTime, NextTime, NextTime);
		  if(NextTime == 23)
		  {
			  NextTime = 0;
		  }
		}
		else if(GET() == 6)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(VehicleDensity);
		}
		else if(GET() == 7)
		{
			VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(ParkedVehicleDensity);
		}
		else if(GET() == 8)
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(RandomVehicleDensity);
		}
		else if(GET() == 9)
		{
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(PedDensity);
		}
		else if(GET() == 10)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(ScenarioPedDensity, ScenarioPedDensity);
		}
		else if(GET() == 11)
		{
			NoTraffic =! NoTraffic;
			if(NoTraffic == false)
	       {
			 VEHICLE::_SET_SOME_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.0);
		     VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.0);
		     VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.0);
		     VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.0);
		     PED::SET_CREATE_RANDOM_COPS(true);
		     VEHICLE::SET_RANDOM_BOATS(true);
		     VEHICLE::SET_RANDOM_TRAINS(true);
		     VEHICLE::SET_GARBAGE_TRUCKS(true);
		     STREAMING::SET_PED_POPULATION_BUDGET(1);
		     STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
		     VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
		     VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(1);
		     GRAPHICS::DISABLE_VEHICLE_DISTANTLIGHTS(0);
		     //VEHICLE:: _DISPLAY_DISTANT_VEHICLES(1);
	      }
		}
		else if(GET() == 12)
		{
			Blackout = !Blackout;
			//GRAPHICS::_SET_BLACKOUT(Blackout);
		}
		else if(GET() == 13)
		{
			ChangeMenu(NearbyPedController);
		}
	}

        else if(NumMenu == NearbyPedController)
        {
        AddTitle("Nearby Ped Controller");
        DrawIntOption("Hash Model", &GetHashModel, "commonmenutu", "custom_mission", 1, "");
        addOption("Animations", "commonmenutu", "custom_mission", 0, "");
        addOption("Weapons", "commonmenutu", "custom_mission", 1, "");
        addOption("Objects", "commonmenutu", "custom_mission", 0, "");
	    IntOption("Sex Player", &RapeType, 1, 2, false,  "commonmenutu", "custom_mission", 1, "");
        addOption("Slingshot", "commonmenutu", "custom_mission", 0, "");
        addOption("Clone", "commonmenutu", "custom_mission", 1, "");
        addOption("Set To My Group", "commonmenutu", "custom_mission", 0, "");
        addOption("Attack Me", "commonmenutu", "custom_mission", 1, "");
        CheckBox("GodMode", NerGodMode, "commonmenutu", "custom_mission", 0, "");
        addOption("Teleport To Me", "commonmenutu", "custom_mission", 1, "");
        addOption("Teleport To Player", "commonmenutu", "custom_mission", 0, "");
        addOption("Random Components", "commonmenutu", "custom_mission", 1, "");
		CheckBox("Freeze Position", NerFreeze, "commonmenutu", "custom_mission", 0, "");
		addOption("Speech", "commonmenutu", "custom_mission", 1, "");
		addOption("Attack By Guards", "commonmenutu", "custom_mission", 1, "");
		addOption("Attack By Animals", "commonmenutu", "custom_mission", 0, "");
        addOption("Delete", "commonmenutu", "custom_mission", 1, "");
        if(GET() == 2)
        {
        ChangeMenu(NerAnimations);
        }
        else if(GET() == 3)
        {
        ChangeMenu(NerWeapons);
        }
        else if(GET() == 4)
        {
        ChangeMenu(NerObjects);
        }
        else if(GET() == 5)
        {
			RapeNer = ! RapeNer;
			if(RapeNer == true)
			{
			RapePlayer =true;
			Player_naked = Closest;
			}
			else if(RapeNer == false)
			{
			Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(Closest, false);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(Closest);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
        }
        else if(GET() == 6)
        {
        ENTITY::APPLY_FORCE_TO_ENTITY(Closest, true, 0, 0, 100, 5, 2, 5, true, true, true, true, 2, true);
        }
        else if(GET() == 7)
        {
        float h = ENTITY::GET_ENTITY_HEADING(Closest);
        PED::CLONE_PED(Closest, -h, 0, 1);
        }
        else if(GET() == 8)
        {
        int Group = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_AS_GROUP_LEADER(Closest, Group);
		PED::SET_PED_AS_GROUP_MEMBER(Closest, Group);
		PED::SET_GROUP_FORMATION(Group, 3);
		PED::SET_GROUP_FORMATION_SPACING(Group, 1.1000, 1.1000, 1.1000);
		PED::SET_PED_NEVER_LEAVES_GROUP(Closest, true);
                PED::SET_PED_ACCURACY(Closest, 100);
			PED::SET_PED_KEEP_TASK(Closest, true);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(Closest, true);
			PED::SET_PED_SHOOT_RATE(Closest, 100);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Closest, 0);
			PED::SET_PED_SEEING_RANGE(Closest, 9999);
			PED::SET_PED_CAN_COWER_IN_COVER(Closest, false);
			PED::SET_PED_FIRING_PATTERN(Closest, 0x7A845691);
			PED::SET_PED_CAN_BE_TARGETTED(Closest, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Closest, 0x84DCFAAD);
			ENTITY::SET_ENTITY_PROOFS(Closest, true, true, true, true, true, true, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Closest, true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Closest, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(Closest, false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Closest, false);
			AI::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Closest, true);
			AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(Closest, true);
        }
        else if(GET() == 9)
        {
			 WEAPON::GIVE_WEAPON_TO_PED(Closest, WEAPON_PISTOL, 999999, false, true);
        AI::TASK_COMBAT_PED(Closest, PLAYER::PLAYER_PED_ID(), 0, 16);
	AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PLAYER::PLAYER_PED_ID(), 200, 0);

        }
        else if(GET() == 10)
        {
       NerGodMode =! NerGodMode;
        ENTITY::SET_ENTITY_INVINCIBLE(Closest, NerGodMode);
        }
        else if(GET() == 11)
        {
        Vector3 coord = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
        ENTITY::SET_ENTITY_COORDS(Closest, coord.x, coord.y, coord.z, 1, 0, 0, 1);
        }
        else if(GET() == 12)
        {
        Vector3 coord = ENTITY::GET_ENTITY_COORDS(Closest, 0);
        ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), coord.x, coord.y, coord.z, 1, 0, 0, 1);
        }
        else if(GET() == 13)
        {
	    PED::SET_PED_RANDOM_COMPONENT_VARIATION(Closest, 0);
        }
		 else if(GET() == 14)
        {
       NerFreeze = !NerFreeze;
	   ENTITY::FREEZE_ENTITY_POSITION(Closest, NerFreeze);
        }
		 else if(GET() == 15)
        {
        ChangeMenu(Speech);
        }
        else if(GET() == 16)
        {
        for(int i = 0; i < 6; i++)
          {
	 AI::TASK_COMBAT_PED(gameped[i], Closest, 0, 16);
	AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Closest, 200, 0);
       }
        }
        else if(GET() == 17)
        {
	     for(int i = 0; i < 6; i++)
          {
	 AI::TASK_COMBAT_PED(animalped[i], Closest, 0, 16);
	AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Closest, 200, 0);
       }
        }
        else if(GET() == 18)
        {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Closest);
        ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Closest, 0, 1);
        PED::DELETE_PED(&Closest);
        ENTITY::DELETE_ENTITY(&Closest);
        }
       }
        else if(NumMenu == NerAnimations)
        {
         AddTitle("Animations");
                addOption("Change Movement Group", "commonmenutu", "custom_mission", 1, "");
		addOption("Stop Animation", "commonmenutu", "custom_mission", 0, "");
		IntOption("Stripper Dances", &NerStripperDances, 1, 6, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Tap Danceing", &NerTapDanceing, 1, 5, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Misc Animations", &NerMiscAnimations, 1, 10, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Workouts", &NerWorkouts, 1, 3, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Setting Animations", &NerSettingAnimations, 1, 7, false, "commonmenutu", "custom_mission", 1, "");
		IntOption("Lay Down", &NerLayDown, 1, 3, false, "commonmenutu", "custom_mission", 0, "");
		IntOption("Aniamtions With Walk", &NerAnimationsWalk, 1, 3, false, "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			ChangeMenu(NerMovementChanger);
		}
		else if(GET() == 2)
		{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(Closest);
		}
		else if(GET() == 3)
		{
			if(NerStripperDances == 1)
			{
				StartAnimation(Closest, "mini@strip_club@pole_dance@pole_dance1", "pd_dance_01", 1);
			}
			else if(NerStripperDances == 2)
			{
				StartAnimation(Closest,"mini@strip_club@pole_dance@pole_dance2", "pd_dance_02", 1);
			}
			else if(NerStripperDances == 3)
			{
				StartAnimation(Closest,"mini@strip_club@pole_dance@pole_dance3", "pd_dance_03", 1);
			}
			else if(NerStripperDances == 4)
			{
				StartAnimation(Closest,"mini@strip_club@private_dance@part1", "priv_dance_p1", 1);
			}
			else if(NerStripperDances == 5)
			{
				StartAnimation(Closest,"mini@strip_club@private_dance@part2", "priv_dance_p2", 1);
			}
			else if(NerStripperDances == 6)
			{
				StartAnimation(Closest,"mini@strip_club@private_dance@part3", "priv_dance_p3", 1);
			}
		}
		else if(GET() == 4)
		{
			if(NerTapDanceing == 1)
			{
				StartAnimation(Closest,"special_ped@mountain_dancer@base", "base", 1);
			}
			else if(NerTapDanceing == 2)
			{
				StartAnimation(Closest,"special_ped@mountain_dancer@monologue_1@monologue_1a", "mtn_dnc_if_you_want_to_get_to_heaven", 1);
			}
			else if(NerTapDanceing == 3)
			{
				StartAnimation(Closest,"special_ped@mountain_dancer@monologue_4@monologue_4a", "mnt_dnc_verse", 1);
			}
			else if(NerTapDanceing == 4)
			{
				StartAnimation(Closest,"special_ped@mountain_dancer@monologue_2@monologue_2a", "mnt_dnc_angel", 1);
			}
			else if(NerTapDanceing == 5)
			{
				StartAnimation(Closest,"special_ped@mountain_dancer@monologue_3@monologue_3a", "mnt_dnc_buttwag", 1);
			}
		}
		else if(GET() == 5)
		{
			if(NerMiscAnimations == 1)
			{
				StartAnimation(Closest,"mp_am_hold_up", "cower_loop", 1);
			}
			else if(NerMiscAnimations == 2)
			{
				StartAnimation(Closest,"TAXI_HAIL", "HAIL_TAXI", 1);
			}
			else if(NerMiscAnimations == 3)
			{
				StartAnimation(Closest,"ODDJOBS@ASSASSINATE@VICE@SEX", "frontseat_carsex_base_f", 1);
			}
			else if(NerMiscAnimations == 4)
			{
				StartAnimation(Closest,"oddjobs@assassinate@hotel@", "alert_gunshot", 1);
			}
			else if(NerMiscAnimations == 5)
			{
				StartAnimation(Closest,"misscarsteal2", "COME_HERE_IDLE_C", 1);
			}
			else if(NerMiscAnimations == 6)
			{
				StartAnimation(Closest,"misscarsteal4@director_grip", "mcs_2_loop_grip1", 1);
			}
			else if(NerMiscAnimations == 7)
			{
				StartAnimation(Closest,"DEAD", "DEAD_E", 1);
			}
			else if(NerMiscAnimations == 8)
			{
				StartAnimation(Closest,"missheistdocks2a@crouch", "enter_crouch_a", 1);
			}
			else if(NerMiscAnimations == 9)
			{
				StartAnimation(Closest,"rcmfanatic3", "KNEEL_IDLE_A", 1);
			}
			else if(NerMiscAnimations == 10)
			{
				StartAnimation(Closest,"amb@prop_human_seat_deckchair@male@base", "base", 1);
			}
		}
		else if(GET() == 6)
		{
			if(NerWorkouts == 1)
			{
				StartAnimation(Closest,"amb@world_human_push_ups@male@base", "base", 1);
			}
			else if(NerWorkouts == 2)
			{
				StartAnimation(Closest,"amb@world_human_sit_ups@male@base", "base", 1);
			}
			else if(NerWorkouts == 3)
			{
				StartAnimation(Closest,"amb@prop_human_muscle_chin_ups@male@base", "base", 1);
			}
		}
		else if(GET() == 7)
		{
			if(NerSettingAnimations == 1)
			{
				StartAnimation(Closest,"amb@world_human_picnic@female@idle_a", "idle_a", 1);
			}
			else if(NerSettingAnimations == 2)
			{
				StartAnimation(Closest,"amb@world_human_picnic@female@base", "base", 1);
			}
			else if(NerSettingAnimations == 3)
			{
				StartAnimation(Closest,"amb@world_human_picnic@male@idle_a", "idle_a", 1);
			}
			else if(NerSettingAnimations == 4)
			{
				StartAnimation(Closest,"rcm_barry3", "barry_3_sit_loop", 1);
			}
			else if(NerSettingAnimations == 5)
			{
				StartAnimation(Closest,"mp_arresting", "sit", 1);
			}
			else if(NerSettingAnimations == 6)
			{
				StartAnimation(Closest,"rcmextreme2", "sitting_idle", 1);
			}
			else if(NerSettingAnimations == 7)
			{
				StartAnimation(Closest,"amb@world_human_picnic@male@idle_a", "idle_b", 1);
			}
		}
		else if(GET() == 8)
		{
			if(NerLayDown == 1)
			{
				StartAnimation(Closest,"amb@prop_human_seat_sunlounger@female@base", "base", 1);
			}
			else if(NerLayDown == 2)
			{
				StartAnimation(Closest,"amb@world_human_sunbathe@female@front@base", "base", 1);
			}
			else if(NerLayDown == 3)
			{
				StartAnimation(Closest,"amb@world_human_sunbathe@female@back@base", "base", 1);
			}
		}
		else if(GET() == 9)
		{
			if(NerAnimationsWalk == 1)
			{
				StartAnimation(Closest,"timetable@jimmy@ig_3@sleeping", "base", 2);
			}
			else if(NerAnimationsWalk == 2)
			{
				StartAnimation(Closest,"misschinese1crazydance", "crazy_dance_base", 2);
			}
			else if(NerAnimationsWalk == 3)
			{
				StartAnimation(Closest,"oddjobs@towingangryidle_a", "idle_a", 2);
			}
		}
	}
	else if(NumMenu == NerMovementChanger)
	{
		AddTitle("Change Movement Group");
		addOption("Default", "commonmenutu", "custom_mission", 1, "");
		addOption("Chubby", "commonmenutu", "custom_mission", 0, "");
		addOption("Injured", "commonmenutu", "custom_mission", 1, "");
		addOption("Drunk", "commonmenutu", "custom_mission", 0, "");
		addOption("Sexy", "commonmenutu", "custom_mission", 1, "");
		addOption("Hobo", "commonmenutu", "custom_mission", 0, "");
		addOption("Old Man", "commonmenutu", "custom_mission", 1, "");
		addOption("Holding a Baby", "commonmenutu", "custom_mission", 0, "");
		addOption("Fat", "commonmenutu", "custom_mission", 1, "");
		if(GET() == 1)
		{
			PED::RESET_PED_MOVEMENT_CLIPSET(Closest, 0.25);
		}
		else if(GET() == 2)
		{
			ChangeMovement(Closest, "move_f@chubby@a");
		}
		else if(GET() == 3)
		{
			ChangeMovement(Closest,"move_injured_generic");
		}
		else if(GET() == 4)
		{
			ChangeMovement(Closest,"move_m@drunk@verydrunk");
		}
		else if(GET() == 5)
		{
			ChangeMovement(Closest,"move_f@sexy@a");
		}
		else if(GET() == 6)
		{
			ChangeMovement(Closest,"move_m@hobo@a");
		}
		else if(GET() == 7)
		{
			ChangeMovement(Closest,"move_lester_CaneUp");
		}
		else if(GET() == 8)
		{
			ChangeMovement(Closest,"move_f@film_reel");
		}
		else if(GET() == 9)
		{
			ChangeMovement(Closest,"move_f@fat@a");
		}

        }
        else if(NumMenu == NerWeapons)
        {
         AddTitle("Weapons");
               addWeapon("Weapon  Knife", WEAPON_KNIFE, 1, Closest);
		addWeapon("Weapon  Nightstick", WEAPON_NIGHTSTICK, 999, Closest);
		addWeapon("Weapon  Baseball Bat", WEAPON_BAT, 999, Closest);
		addWeapon("Weapon  Crowbar", WEAPON_CROWBAR, 999, Closest);
		addWeapon("Weapon  Golf Club", WEAPON_GOLFCLUB, 999, Closest);
		addWeapon("Weapon  Hammer", WEAPON_HAMMER, 999, Closest);
		addWeapon("Weapon  Molotov", WEAPON_MOLOTOV, 9999, Closest);
		addWeapon("Weapon  Grenade", WEAPON_GRENADE, 9999, Closest);
		addWeapon("Weapon  Tear Gas", WEAPON_SMOKEGRENADE, 9999, Closest);
		addWeapon("Weapon  Sticky Bomb", WEAPON_STICKYBOMB, 9999, Closest);
		addWeapon("Weapon  Pistol", WEAPON_PISTOL, 9999, Closest);
		addWeapon("Weapon  Combat Pistol", WEAPON_COMBATPISTOL, 9999, Closest);
		addWeapon("Weapon  AP Pistol", WEAPON_APPISTOL, 9999, Closest);
		addWeapon("Weapon  Pistol.50", WEAPON_PISTOL50, 9999, Closest);
		addWeapon("Weapon  Micro SMG", WEAPON_MICROSMG, 9999, Closest);
		addWeapon("Weapon  SMG", WEAPON_SMG, 9999, Closest);
		addWeapon("Weapon  Assault Rifle", WEAPON_ASSAULTRIFLE, 9999, Closest);
		addWeapon("Weapon  Carbine Rifle", WEAPON_CARBINERIFLE, 9999, Closest);
		addWeapon("Weapon  Advanced Rifle", WEAPON_ADVANCEDRIFLE, 9999, Closest);
		addWeapon("Weapon  MG", WEAPON_MG, 9999, Closest);
		addWeapon("Weapon  Combat MG", WEAPON_COMBATMG, 9999, Closest);
		addWeapon("Weapon  Assault SMG", WEAPON_ASSAULTSMG, 9999, Closest);
		addWeapon("Weapon  Pump Shotgun", WEAPON_PUMPSHOTGUN, 9999, Closest);
		addWeapon("Weapon  Assault Shotgun", WEAPON_ASSAULTSHOTGUN, 9999, Closest);
		addWeapon("Weapon  Sniper Rifle", WEAPON_SNIPERRIFLE, 9999, Closest);
		addWeapon("Weapon  Heavy Sniper", WEAPON_HEAVYSNIPER, 9999, Closest);
		addWeapon("Weapon  Grenade Launcher", WEAPON_GRENADELAUNCHER, 9999, Closest);
		addWeapon("Weapon  Minigun", WEAPON_MINIGUN, 9999, Closest);
		addWeapon("Weapon  RPG", WEAPON_RPG, 9999, Closest);
		addWeapon("Weapon  Sawed-Off Shotgun", WEAPON_SAWNOFFSHOTGUN, 9999, Closest);
		addWeapon("Weapon  Bullpup Shotgun", WEAPON_BULLPUPSHOTGUN, 9999, Closest);
		addWeapon("Weapon  Stungun", WEAPON_STUNGUN, 9999, Closest);
		addWeapon("Weapon  Grenade Launcher Smoke", WEAPON_GRENADELAUNCHER_SMOKE, 9999, Closest);
		addWeapon("Weapon  Flare Gun", WEAPON_FLARE, 9999, Closest);
		addWeapon("Weapon  Bottle", WEAPON_BOTTLE, 9999, Closest);
		addWeapon("Weapon  Gusenberg Sweeper", WEAPON_GUSENBERG, 9999, Closest);
		addWeapon("Weapon  Special Carbine", WEAPON_SPECIALCARBINE, 9999, Closest);
		addWeapon("Weapon  Heavy Pistol", WEAPON_HEAVYPISTOL, 9999, Closest);
		addWeapon("Weapon  SNS Pistol", WEAPON_SNSPISTOL, 9999, Closest);
		addWeapon("Weapon  Bullpup Rifle", WEAPON_BULLPUPRIFLE, 9999, Closest);
		addWeapon("Weapon  Antique Cavalry Dagger", WEAPON_DAGGER, 9999, Closest);
		addWeapon("Weapon  Vintage Pistol", WEAPON_VINTAGEPISTOL, 9999, Closest);
		addWeapon("Weapon  Firework Launcher", WEAPON_FIREWORK, 9999, Closest);
		addWeapon("Weapon  Musket", WEAPON_MUSKET, 9999, Closest);
		addWeapon("Weapon  Heavy Shotgun", WEAPON_HEAVYSHOTGUN, 9999, Closest);
		addWeapon("Weapon  Marksman Rifle", WEAPON_MARKSMANRIFLE, 9999, Closest);
		addWeapon("Weapon  Homing Launcher", WEAPON_HOMINGLAUNCHER, 9999, Closest);
		addWeapon("Weapon  Proximity Mine", WEAPON_PROXMINE, 9999, Closest);
		addWeapon("Weapon  Snow Ball", WEAPON_SNOWBALL, 9999, Closest);
		addWeapon("Weapon  Flare Gun", WEAPON_FLAREGUN, 9999, Closest);
		addWeapon("Weapon  Garbagebag", WEAPON_GARBAGEBAG, 9999, Closest);
		addWeapon("Weapon  Combat PDW", WEAPON_COMBATPDW, 9999, Closest);
		addWeapon("Weapon  Marksman Pistol", WEAPON_MARKSMANPISTOL, 9999, Closest);
		addWeapon("Weapon  Knuckle Duster", WEAPON_KNUCKLE, 9999, Closest);
		addWeapon("Weapon  Stinger", WEAPON_STINGER, 9999, Closest);
		addWeapon("Weapon  Bzgas", WEAPON_BZGAS, 9999, Closest);
		addWeapon("Weapon  Fire Exitinguisher", WEAPON_FIREEXTINGUISHER, 9999, Closest);
		addWeapon("Weapon  Digi Scanner", WEAPON_DIGISCANNER, 9999, Closest);
		addWeapon("Weapon  Ball", WEAPON_BALL, 9999,Closest);
		addWeapon("Weapon  Briefcase", WEAPON_BRIEFCASE, 9999, Closest);
		addWeapon("Weapon  Briefcase 2", WEAPON_BRIEFCASE_02, 9999, Closest);
        }
       else if(NumMenu == NerObjects)
        {
         AddTitle("Objects");
            AddOption("Attach Suppository",  "", "", true, 0, "");
		   AddOption("Attach Thick hair",  "", "", true, 0, "");
			AddOption("Attach Recorded",  "", "", true, 0, "");
			AddOption("Attach Alien Egg",  "", "", true, 0, "");
			AddOption("Attach Trimmer",  "", "", true, 0, "");
			AddOption("Attach Guitar",  "", "", true, 0, "");
			AddOption("Attach Dock float",  "", "", true, 0, "");
			AddOption("Attach Eyeglasses",  "", "", true, 0, "");
			AddOption("Attach Mask",  "", "", true, 0, "");
			AddOption("Attach Chute",  "", "", true, 0, "");
			AddOption("Attach CarWash",  "", "", true, 0, "");
			AddOption("Attach SnowMan",  "", "", true, 0, "");
			AddOption("Attach Rock",  "", "", true, 0, "");
			AddOption("Attach Bouy",  "", "", true, 0, "");
			AddOption("Attach Ball",  "", "", true, 0, "");
			AddOption("Attach Drum",  "", "", true, 0, "");
			AddOption("Attach Drum2",  "", "", true, 0, "");
			AddOption("Attach Ring",  "", "", true, 0, "");
			AddOption("Attach Fire",  "", "", true, 0, "");
			AddOption("Attach Cone",  "", "", true, 0, "");
			AddOption("Attach Trevor TV",  "", "", true, 0, "");
			AddOption("Attach Old TV",  "", "", true, 0, "");
			AddOption("Attach Basketball",  "", "", true, 0, "");
			AddOption("Attach Barrel",  "", "", true, 0, "");
			AddOption("Attach Boxing Glove",  "", "", true, 0, "");
			AddOption("Attach Dick",  "", "", true, 0, "");
			AddOption("Attach Big Radar",  "", "", true, 0, "");
			AddOption("Attach Trippy Wheel",  "", "", true, 0, "");
			AddOption("Attach Plant",  "", "", true, 0, "");
			AddOption("Attach Flashing Light",  "", "", true, 0, "");
			AddOption("Attach Bullet Shield",  "", "", true, 0, "");
			AddOption("Attach Katana",  "", "", true, 0, "");
			AddOption("Attach Big Plane",  "", "", true, 0, "");
			AddOption("Attach UFO",  "", "", true, 0, "");
			AddOption("Attach Christmas Tree",  "", "", true, 0, "");
			if(GET() == 1)CreateObjectnAttach(Closest, "prop_ld_bomb_01", -0.4800, -0.6600, 0.0100, -180.1899, 0.0, 0.1, 24818);
			if(GET() == 2)CreateObjectnAttach(Closest, "prop_ld_binbag_01", 0.0, 0.0, 0.0, 166.0000, 88.6000, -44.0000, 31086);
			if(GET() == 3)CreateObjectnAttach(Closest, "prop_hifi_01", 0.07, 0.0, 0.0, -172.0000, -89.0000, 0.0, 31086);
			if(GET() == 4)CreateObjectnAttach(Closest, "prop_alien_egg_01", 0.2, 0.0, 0.0, 0.0, 90.0, 0.0, 31086);

			if(GET() ==  5)CreateObjectnAttach(Closest, "prop_hedge_trimmer_01", 0.01, 0.0, 0.03, 1.0, -34.9200, 74.3000, 57005);

			if(GET() ==  6)CreateObjectnAttach(Closest, "prop_el_guitar_02", 0.3, 0.3600, -0.0600, -99.0000, -147.0000, 0.0, 57005);

			if(GET() ==  7)CreateObjectnAttach(Closest, "prop_dock_float_1b", -0.2, 0.0, 0.0, 18.0000, 95.1000, -4.0000, 31086);

			if(GET() ==  8)CreateObjectnAttach(Closest, "prop_cs_sol_glasses", 0.0600, 0.0270, 0.0010, -0.0760, -88.0802, -167.0000, 31086);

			if(GET() ==  9)CreateObjectnAttach(Closest, "p_balaclavamichael_s", 0.0010, 0.0, -0.0060, 174.2000, 92.0000, -8.0000, 31086);

			if(GET() ==  10)CreateObjectnAttach(Closest, "p_cargo_chute_s", -0.1000, 0.0000, 0.0000, 81.2000, 93.0000, 1.0000, 31086);

			if(GET() ==  11)CreateObjectnAttach(Closest, "prop_carwash_roller_horz", 0.0000, 0.0000, 0.0000, 0.0, 0.0, 0.0, 24818);

			if(GET() ==  12)CreateObjectnAttach(Closest, "prop_prlg_snowpile", -0.4000, 0.0000, 0.0000, -50.0, 88.0, -0.1000, 24818);

			if(GET() ==  13)CreateObjectnAttach(Closest, "prop_test_boulder_04", 0.0, 0.0000, 0.0000, 0.0, 0.0, 0.0, 24818);

			if(GET() ==  14)CreateObjectnAttach(Closest, "prop_dock_bouy_3", 0.0, 0.0000, 0.0000, 0.0, 90.0, 4.0, 24818);

			if(GET() ==  15)CreateObjectnAttach(Closest, "Prop_beach_volball01", 0.0500, 0.0000, 0.0000, 0.0, 0.0, 0.0, 31086);

			if(GET() ==  16)CreateObjectnAttach(Closest, "prop_barrel_01a", 0.0, 0.0000, 0.0000, 0.0, 89.0000, 0.0, 24818);

			if(GET() ==  17)CreateObjectnAttach(Closest, "prop_bin_12a", -0.3, 0.0000, 0.0000, -164.8000, 90.0000, 0.0, 24818);

			if(GET() ==  18)CreateObjectnAttach(Closest, "prop_beach_ring_01", -0.3, -0.0000, 0.0000, 0.0000, 88.0000, 0.0, 24818);

			if(GET() ==  19)CreateObjectnAttach(Closest, "prop_beach_fire", -0.3, -0.0000, 0.0000, 0.0000, 88.0000, 0.0, 24818);

			if(GET() ==  20)CreateObjectnAttach(Closest, "prop_roadcone02c", 0.0700, 0.0000, 0.0000, 87.0000, 84.0000, -10.0, 31086);

			if(GET() ==  21)CreateObjectnAttach(Closest, "prop_trev_tv_01", -0.0300, 0.0700, 0.0000, -178.0000, 86.0000, -2.0, 31086);

			if(GET() ==  22)CreateObjectnAttach(Closest, "prop_tv_test", -0.0200, -0.0300, 0.0000, 175.0000, 86.4401, 4.4000, 31086);

			if(GET() ==  23)CreateObjectnAttach(Closest, "prop_bball_arcade_01", -0.1000, 0.9000, 0.0200, -179.0000, 89.0000, -11.6700, 24818);

			if(GET() ==  24)CreateObjectnAttach(Closest, "prop_barrel_02a", -0.1900, -0.0100, 0.0000, 75.1400, 83.4000, 6.2400, 24818);

			if(GET() ==  25)CreateObjectnAttach(Closest, "prop_boxing_glove_01", 0.0300, 0.0200, -0.0400, 151.0700, 119.8600, -2.9100, 57005);

			if(GET() ==  26)CreateObjectnAttach(Closest, "prop_ld_fireaxe", -0.6300, 0.7100, -0.0200, -85.1201, 88.3000, -61.7000, 24818);

			if(GET() ==  27)CreateObjectnAttach(Closest, "prop_air_bigradar", 0, 0, 0, 60, 86, -4, 24818);

			if(GET() ==  28)CreateObjectnAttach(Closest, "prop_Ld_ferris_wheel", 2.3000, 0, 0, 0, 0, 0, 24818);

			if(GET() ==  29)CreateObjectnAttach(Closest, "Prop_weed_01", -0.1000, 0, 0, 1, 89, 0, 24818);

			if(GET() ==  30)CreateObjectnAttach(Closest, "hei_prop_wall_light_10a_cr", -0.1000, 0.0190, 0, 0, -90, 0, 31086);

			if(GET() ==  31)CreateObjectnAttach(Closest, "prop_juicestand", 0.4330, 0, 0, 0, 0, 0, 24818);

			if(GET() ==  32)CreateObjectnAttach(Closest, "prop_cs_katana_01", 0.0600, 0.0200, -0.0300, -46.2200, 45.0200, -8, 57005);

			if(GET() ==  33)CreateObjectnAttach(Closest, "p_cs_mp_jet_01_s", 0, 4.6, 0.7, -163.0000, 93.6000, 4, 24818);

			if(GET() ==  34)CreateObjectnAttach(Closest, "p_SPINNING_ANUS_S", 5, 0, 1, 1, -94.0000, 4, 24818);

			if(GET() ==  35)CreateObjectnAttach(Closest, "prop_xmas_tree_int", -1.0000, 0, 0.0700, 0, 87.0000, 0, 24818);


			}
		else if(NumMenu == Speech)
		{
			AddTitle("Speech");
			 addOption("Fuck You", "commonmenutu", "custom_mission", 0, "");
			 addOption("Sex Climax", "commonmenutu", "custom_mission", 0, "");
			 addOption("Insult High", "commonmenutu", "custom_mission", 0, "");
			 addOption("Thanks", "commonmenutu", "custom_mission", 0, "");
			 addOption("Hi", "commonmenutu", "custom_mission", 0, "");
			 addOption("Sex Finished", "commonmenutu", "custom_mission", 0, "");
			 addOption("Sex Oral", "commonmenutu", "custom_mission", 0, "");
			 addOption("Sex Generic", "commonmenutu", "custom_mission", 0, "");
			 addOption("Angry", "commonmenutu", "custom_mission", 0, "");
			 if(GET() == 1)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE");
			 }
			 else if(GET() == 2)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
			 }
			 else if(GET() == 3)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE");
			 }
			 else if(GET() == 4)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "GENERIC_THANKS", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL");
			 }
			 else if(GET() == 5)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "GENERIC_HI", "SPEECH_PARAMS_FORCE");
			 }
			 else if(GET() == 6)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
			 }
			 else if(GET() == 7)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
			 }
			 else if(GET() == 8)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
			 }
			 else if(GET() == 9)
			 {
				AUDIO:: _PLAY_AMBIENT_SPEECH1(Closest, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
			 }

		}
        else if(NumMenu == Misc)
        {
         AddTitle("Misc");
         addOption("Activate Animal Attack", "commonmenutu", "custom_mission", 1, "");
	     CheckBox("Dog Attacker", DogAttack, "commonmenutu", "custom_mission", 0, "Aim any player by pistol.");
         CheckBox("Zombie Mission", ZombieMode, "commonmenutu", "custom_mission", 1, "");
         addOption("Disable Mobile", "commonmenutu", "custom_mission", 0, "");
		 CheckBox("Full Map", FullMap, "commonmenutu", "custom_mission", 1, "");
		 IntOption("Add Money", &AddMoney, 1, 1000000000, false, "commonmenutu", "custom_mission", 0, "");
         if(GET() == 1)
          {
           AnimalAttack = true;
          }
		  else if(GET() == 2)
		  {
			  DogAttack =! DogAttack;
			  if(DogAttack == true)
			  {
			  CreateDog = true;
                          WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), WEAPON_PISTOL, 99999999999, false, true);
			  }
			  else
			  {
			  PED::DELETE_PED(&Dog);
			  EnableDogAttack = false;
			  }

		  }
		  else if(GET() == 3)
		  {
			  ZombieMode = !ZombieMode;
			if(ZombieMode == false)
			{
				zombie = 0;
			}
		  }
		  else if(GET() == 4)
		  {
			 GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("cellphone_controller");
		  }
		  else if(GET() == 5)
		  {
			  FullMap =! FullMap;
			  UI::_SET_MAP_FULL_SCREEN(FullMap);
		  }
		  else if(GET() == 6)
		  {
			  SET_PLAYER_CASH(AddMoney);
		  }
        }
        else if(NumMenu == Credits)
        {
	AddTitle("Credits");
	addOption("RF0oDxM0Dz", "commonmenutu", "custom_mission", 1, "");
        addOption("D70M for Airport Ramp", "commonmenutu", "custom_mission", 0, "");
        addOption("Yahya for help me", "commonmenutu", "custom_mission", 1, "");
        addOption("2much4u", "commonmenutu", "custom_mission", 0, "");
        }
	if(NumMenu != Closed)
		SetupActions();
}


extern "C" void _main(void) {
	int newFrameCount = GAMEPLAY::GET_FRAME_COUNT();
	if (newFrameCount > frameCount) {
		frameCount = newFrameCount;
                 Loop();
                 SetupButtons();
                  Menu();
                 Setup_System();
                 //DRAW_TEXT("Fuck RockstarGames!", 0, 0.10, 0.60, 0.35000000f, 0.35000000f, 255, 255, 255, 255, false, false, 0, 0, 0);
	}
}
