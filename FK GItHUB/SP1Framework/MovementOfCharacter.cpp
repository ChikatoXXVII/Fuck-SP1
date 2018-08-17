/*#include "Charmovement.h"


void moveCharacter()
{
	bool bSomethingHappened = false;
	if (g_dBounceTime > g_dElapsedTime)
		return;

	// Updating the location of the character based on the key press
	// providing a beep sound whenver we shift the character
	if (g_abKeyPressed[K_UP] && g_MapValue[g_sChar.m_cLocation.X][g_sChar.m_cLocation.Y - 1] != '#')
	{
		//Beep(1440, 30);
		g_sChar.m_cLocation.Y--;
		bSomethingHappened = true;
	}
	if (g_abKeyPressed[K_LEFT] && g_MapValue[g_sChar.m_cLocation.X - 1][g_sChar.m_cLocation.Y] != '#')
	{
		//Beep(1440, 30);
		g_sChar.m_cLocation.X--;
		bSomethingHappened = true;
	}
	if (g_abKeyPressed[K_DOWN] && g_MapValue[g_sChar.m_cLocation.X][g_sChar.m_cLocation.Y + 1] != '#')
	{
		//Beep(1440, 30);
		g_sChar.m_cLocation.Y++;
		bSomethingHappened = true;
	}
	if (g_abKeyPressed[K_RIGHT] && g_MapValue[g_sChar.m_cLocation.X + 1][g_sChar.m_cLocation.Y] != '#')
	{
		//Beep(1440, 30);
		g_sChar.m_cLocation.X++;
		bSomethingHappened = true;
	}
	if (g_abKeyPressed[K_SPACE])
	{
		g_sChar.m_bActive = !g_sChar.m_bActive;
		bSomethingHappened = true;
	}

	if (bSomethingHappened)
	{
		// set the bounce time to some time in the future to prevent accidental triggers
		g_dBounceTime = g_dElapsedTime + 0.125; // 125ms should be enough
	}
}*/