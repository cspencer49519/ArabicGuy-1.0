void givePedWeapon(Ped ped, Hash weapon) {
    WEAPON::GIVE_DELAYED_WEAPON_TO_PED(ped, weapon, 9999, true);
}
void playSound(char* sound)
{
		AUDIO::PLAY_SOUND_FRONTEND(-1, sound, "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
}

int GetRFromI(int i)
{
	i *= 10;
	if (i <= 255)
		return 255;
	else if (i <= 510)
		return 255 - (i - 255);
	else if (i <= 765)
		return 0;
	else if (i <= 1020)
		return 0;
	else if (i <= 1275)
		return i - 1020;
	else if (i <= 1530)
		return 255;
	else 
		return 255;
}
int GetGFromI(int i)
{
	i *= 10;
	if (i <= 255)
		return 0;
	else if (i <= 510)
		return 0;
	else if (i <= 765)
		return i - 510;
	else if (i <= 1020)
		return 255;
	else if (i <= 1275)
		return 255;
	else if (i <= 1530)
		return 255 - (i - 1275);
	else
		return 255;
}
int GetBFromI(int i)
{
	i *= 10;
	if (i <= 255)
		return i;
	else if (i <= 510)
		return 255;
	else if (i <= 765)
		return 255;
	else if (i <= 1020)
		return 255 - (i - 765);
	else if (i <= 1275)
		return 0;
	else if (i <= 1530)
		return 0;
	else
		return 255;
}