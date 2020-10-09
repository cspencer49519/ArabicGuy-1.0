//int Menu_X = 1000;
int CurrentSelectedIndex = 0;
float SelectedIndexSize = 0.6;
bool IncreaseSelectedIndexSize = false;
bool DecreaseSelectedIndexSize = true;
int CurrentMenuID = 0;
bool open = false;
int CurrentMenuLayer = 0;
int PreviousMenuID[5] = { 0, 0, 0, 0, 0 };
int PreviousSelectedIndex[5] = { 0, 0, 0, 0, 0 };

enum OptionType
{
	None,
	Checked,
	UnChecked,
	RadioChecked,
	RadioUnChecked,
	Submenu,
	Disabled
};
struct Option
{
	char* Name;
	OptionType Type;
};
int CurrentCreatedMenuID = 0;

struct Menu
{
	int ID;
	Option Options[45];
	int Size;
	char* MenuName;
};
Menu Menus[100];

int CreateMenu(char* MenuName)
{
	Menus[CurrentCreatedMenuID].ID = CurrentCreatedMenuID;
	Menus[CurrentCreatedMenuID].MenuName = MenuName;
	CurrentCreatedMenuID++;
	return CurrentCreatedMenuID - 1;
}
void CreateOption(int MenuID, char* OptionName, OptionType Type = None, unsigned char FreezeValue = 0)
{
	Menus[MenuID].Options[Menus[MenuID].Size].Name = OptionName;
	Menus[MenuID].Options[Menus[MenuID].Size].Type = Type;
	Menus[MenuID].Size++;
}

void EnterSubMenu(int MenuID)
{
	PreviousSelectedIndex[CurrentMenuLayer] = CurrentSelectedIndex;
	PreviousMenuID[CurrentMenuLayer] = CurrentMenuID;
	CurrentSelectedIndex = 0;
	CurrentMenuID = MenuID;
	CurrentMenuLayer++;
}
void RemoveLastOption(int MenuID)
{
	if (Menus[MenuID].Size > 0)
		Menus[MenuID].Size--;
}
char* GetMenuNameFromID(int MenuID)
{
	return Menus[MenuID].MenuName;
}
int GetMenuIDFromName(char* MenuName)
{
	for (int i = 0; i < CurrentCreatedMenuID; i++)
	{
		if (Menus[i].MenuName == MenuName)
			return i;
	}
	return 0;
}
void Notify(char* Text, int Time = 4000)
{
	UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Text);
	UI::END_TEXT_COMMAND_PRINT(Time, false);
}
void Notify(int Value, int Time = 4000)
{
	char buffer[100];
	sprintf(buffer, "%i", Value);
	Notify(buffer);
}
int GetOptionIDFromName(int MenuID, char* OptionName)
{
	for (int i = 0; i < 45; i++)
	{
		if (Menus[MenuID].Options[i].Name == OptionName)
			return i;
	}
	return 0;
}
int GetOptionIDFromName(char* MenuName, char* OptionName)
{
	return GetOptionIDFromName(GetMenuIDFromName(MenuName), OptionName);
}
void ClearMenuOptions(int MenuID)
{
	for (int i = 0; i <= Menus[MenuID].Size; i++)
		RemoveLastOption(MenuID);
}
void ChangeOptionRadioChecked(int MenuID, char* OptionName)
{
	for (int i = 0; i < Menus[MenuID].Size; i++)
	{
		if (Menus[MenuID].Options[i].Type == RadioChecked || Menus[MenuID].Options[i].Type == RadioUnChecked)
		{
			if (Menus[MenuID].Options[i].Name == OptionName)
				Menus[MenuID].Options[i].Type = RadioChecked;
			else
				Menus[MenuID].Options[i].Type = RadioUnChecked;
		}
	}
}
void ChangeOptionRadioChecked(char* MenuName, char* OptionName)
{
	ChangeOptionRadioChecked(GetMenuIDFromName(MenuName), OptionName);
}
void ChangeOptionRadioChecked(int MenuID, int OptionID)
{
	for (int i = 0; i < Menus[MenuID].Size; i++)
	{
		if (Menus[MenuID].Options[i].Type == RadioChecked || Menus[MenuID].Options[i].Type == RadioUnChecked)
		{
			if (i == OptionID)
				Menus[MenuID].Options[i].Type = RadioChecked;
			else
				Menus[MenuID].Options[i].Type = RadioUnChecked;
		}
	}
}
void ChangeOptionRadioChecked(char* MenuName, int OptionID)
{
	int MenuID = GetMenuIDFromName(MenuName);
	ChangeOptionRadioChecked(MenuID, OptionID);
}
void ClearMenuOptions(char* MenuName)
{
	ClearMenuOptions(GetMenuIDFromName(MenuName));
}
void ChangeOptionChecked(char* MenuName, char* OptionName, bool Toggle)
{
	if (Toggle)
		Menus[GetMenuIDFromName(MenuName)].Options[GetOptionIDFromName(MenuName, OptionName)].Type = Checked;
	else
		Menus[GetMenuIDFromName(MenuName)].Options[GetOptionIDFromName(MenuName, OptionName)].Type = UnChecked;
}
void ChangeOptionChecked(int MenuID, char* OptionName, bool Toggle)
{
	if (Toggle)
		Menus[MenuID].Options[GetOptionIDFromName(MenuID, OptionName)].Type = Checked;
	else
		Menus[MenuID].Options[GetOptionIDFromName(MenuID, OptionName)].Type = UnChecked;
}
bool IsOptionChecked(char* MenuName, char* OptionName)
{
	if (Menus[GetMenuIDFromName(MenuName)].Options[GetOptionIDFromName(MenuName, OptionName)].Type == Checked)
		return true;
	else
		return false;
}
bool IsOptionChecked(int MenuID, char* OptionName)
{
	if (Menus[MenuID].Options[GetOptionIDFromName(MenuID, OptionName)].Type == Checked)
		return true;
	else
		return false;
}
void InvertOption(char* MenuName, char* OptionName)
{
	ChangeOptionChecked(MenuName, OptionName, !IsOptionChecked(MenuName, OptionName));
}
void InvertOption(int MenuID, char* OptionName)
{
	ChangeOptionChecked(MenuID, OptionName, !IsOptionChecked(MenuID, OptionName));
}

void GenerateMenus()
{
#pragma region MainMenu
	int MainMenu = CreateMenu("Main Menu");
	CreateOption(MainMenu, "Player Options");
	CreateOption(MainMenu, "Examples");
	CreateOption(MainMenu, "Sub Menu 3");
	CreateOption(MainMenu, "Settings");
#pragma endregion

#pragma region Player
	int Player = CreateMenu("Player");
	CreateOption(Player, "Godmode", UnChecked);
	CreateOption(Player, "Invisible", UnChecked);
	CreateOption(Player, "Unlimited Ammo", UnChecked);
	CreateOption(Player, "No Cops", UnChecked);
	CreateOption(Player, "Heat Vision", UnChecked);
	CreateOption(Player, "Special Vision", UnChecked);
	CreateOption(Player, "Exploding Bullets", UnChecked);
#pragma endregion

#pragma region Examples
	int Examples = CreateMenu("Example Options");
	CreateOption(Examples, "Option");
	CreateOption(Examples, "Checked", Checked);
	CreateOption(Examples, "UnChecked",UnChecked);
	CreateOption(Examples, "Radio Unchecked",RadioUnChecked);
	CreateOption(Examples, "Radio Checked",RadioChecked);
	CreateOption(Examples, "SubMenu",Submenu);
	CreateOption(Examples, "Disabled",Disabled);
#pragma endregion

#pragma region SubMenu3
	int SubMenu3 = CreateMenu("Sub Menu 3");
	CreateOption(SubMenu3, "Option 1", UnChecked);
	CreateOption(SubMenu3, "Option 2", UnChecked);
	CreateOption(SubMenu3, "Option 3", UnChecked);
	CreateOption(SubMenu3, "Option 4", UnChecked);
	CreateOption(SubMenu3, "Option 5", UnChecked);
	CreateOption(SubMenu3, "Option 6", UnChecked);
#pragma endregion

#pragma region Settings
	int Settings = CreateMenu("Settings");
	CreateOption(Settings, "Move Menu Left");
	CreateOption(Settings, "Move Menu Right");
	CreateOption(Settings, "Custom RGB", RadioUnChecked);
	CreateOption(Settings, "Green", RadioUnChecked);
	CreateOption(Settings, "Purple", RadioUnChecked);
	CreateOption(Settings, "Blue", RadioUnChecked);
	CreateOption(Settings, "Pink", RadioUnChecked);
	CreateOption(Settings, "Red", RadioUnChecked);
	CreateOption(Settings, "Orange", RadioUnChecked);
	CreateOption(Settings, "Yellow", RadioUnChecked);
#pragma endregion
}