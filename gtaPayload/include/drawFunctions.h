Color SelectColour = {214,19,19,255};
enum ControlType
{
	con_Blank,
	con_None,
	con_Menu,
	con_Jetpack,
	con_vehRockets,
	con_DriveTrain,
	con_Fishing,
	con_Pool,
	con_vehBoost,
	con_forgegun,
	con_RGB_Select,
	con_DrievOnWalls,
	con_DriveFly,
	con_vehJump,
	con_vehStop,
	con_vehHydraulics,
	con_hostage,
	con_GNT
};
ControlType CurrentControlType = con_None;
enum RGBTypes
{
	RGB_Neon,
	RGB_MenuColour,
	RGB_VehiclePrimary,
	RGB_VehicleSecondary,
	RGB_VehicleSmoke
};
RGBTypes CurrentRGBType;
bool CurrentRGBActive = false;
float RGB_Left = 76;
int RGB_PressDelay = 0;
int RGB_Delay = 0;


float PixelX(int Input)
{
	return (float)Input / (float)1280;
}
float PixelY(int Input)
{
	return (float)Input / (float)720;
}
void DRAW_TEXT(char* Text, float X, float Y, float S_X, float S_Y, int Font, bool Outline, bool Shadow, bool Center, bool RightJustify, int R, int G, int B, int A)
{
	UI::SET_TEXT_FONT(Font);
	UI::SET_TEXT_SCALE(S_X, S_Y);
	UI::SET_TEXT_COLOUR(R, G, B, A);
	if (Outline)
		UI::SET_TEXT_OUTLINE();
	if (Shadow)
		UI::SET_TEXT_DROP_SHADOW();
	if (Center)
		UI::SET_TEXT_CENTRE(1);
	if (RightJustify)
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(X, Y);
}

void DrawTitle(char* Title)
{
	//DRAW_TEXT(Title, PixelX(Menu_X + 1), PixelY(35), 0.7, 0.7, 0, false, false, true, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
	//DRAW_TEXT(Title, PixelX(Menu_X - 1), PixelY(35), 0.7, 0.7, 0, false, false, true, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
	//DRAW_TEXT(Title, PixelX(Menu_X), PixelY(35 + 1), 0.7, 0.7, 0, false, false, true, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
	//DRAW_TEXT(Title, PixelX(Menu_X), PixelY(35 - 1), 0.7, 0.7, 0, false, false, true, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
	//DRAW_TEXT(Title, PixelX(Menu_X), PixelY(35), 0.7, 0.7, 0, false, false, true, false, 240, 240, 240, 240);
}
void DRAW_SPRITE(char* TextOne, char* TextTwo, float X, float Y, float Width, float Height, float Rotation, int R = 255, int G = 255, int B = 255, int A = 255)
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(TextOne, false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(TextOne))
		GRAPHICS::DRAW_SPRITE(TextOne, TextTwo, X, Y, Width, Height, Rotation, R, G, B, A);
}
void DrawOption(char* Option, int i, OptionType Type, bool Selected = false)
{
	if (Type == Disabled)
	{
		//DRAW_TEXT(Option, PixelX(Menu_X) - PixelX(130), PixelY(75) + PixelY(30 * i), 0.4, 0.4, 0, false, false, false, false, 80, 80, 80, 240);
	}
	else
	{
		if (Selected)
		{
			// DRAW_TEXT(Option, PixelX(Menu_X) - PixelX(130), PixelY(72 + 1) + PixelY(30 * i), SelectedIndexSize, SelectedIndexSize, 0, false, false, false, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
			// DRAW_TEXT(Option, PixelX(Menu_X) - PixelX(130), PixelY(72 - 1) + PixelY(30 * i), SelectedIndexSize, SelectedIndexSize, 0, false, false, false, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
			// DRAW_TEXT(Option, PixelX(Menu_X + 1) - PixelX(130), PixelY(72) + PixelY(30 * i), SelectedIndexSize, SelectedIndexSize, 0, false, false, false, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
			// DRAW_TEXT(Option, PixelX(Menu_X - 1) - PixelX(130), PixelY(72) + PixelY(30 * i), SelectedIndexSize, SelectedIndexSize, 0, false, false, false, false, SelectColour.r, SelectColour.g, SelectColour.b, 220);
			// DRAW_TEXT(Option, PixelX(Menu_X) - PixelX(130), PixelY(72) + PixelY(30 * i), SelectedIndexSize, SelectedIndexSize, 0, false, false, false, false, 240, 240, 240, 240);
		}
		else
		{
			//DRAW_TEXT(Option, PixelX(Menu_X) - PixelX(130), PixelY(75) + PixelY(30 * i), 0.4, 0.4, 0, false, false, false, false, 240, 240, 240, 240);
		}
	}
	if (Type == Checked)
		return;
		//DRAW_SPRITE("commonmenu", "shop_box_tick", PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03, 0.05, 0);
	else if (Type == UnChecked)
		return;
		//DRAW_SPRITE("commonmenu", "shop_box_blank", PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03, 0.05, 0);
	else if (Type == RadioUnChecked)
	{
		return;
		//DRAW_SPRITE("commonmenu", "common_medal", PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03, 0.05, 0);
		//DRAW_SPRITE("commonmenu", "common_medal", PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03 - 0.003, 0.05 - 0.005, 0, 0, 0, 0);
	}
	else if (Type == RadioChecked)
		return;
		//DRAW_SPRITE("commonmenu", "common_medal", PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03, 0.05, 0);
	else if (Type == Submenu)
		return;
		//DRAW_SPRITE("mpleaderboard", "leaderboard_plus_icon", PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03, 0.05, 0);
	//else if (Type == Custom)
		//DRAW_SPRITE(ImageMain, ImageAct, PixelX(Menu_X + 95), PixelY(90) + PixelY(30 * i), 0.03, 0.05, 0);
}

void GetRGB(RGBTypes RGBType)
{
	CurrentRGBType = RGBType;
	CurrentRGBActive = true;
	RGB_Delay = GAMEPLAY::GET_GAME_TIMER() + 100;
	CurrentControlType = con_RGB_Select;
}