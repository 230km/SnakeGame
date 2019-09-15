#include <windows.h>
#include <iostream>

#include "Display.h"

namespace DISPLAY 
{
	Display::Display()
	{
		init();
	}

	void Display::init()
	{
		system("mode con cols=50 lines=25");
		HANDLE hConsole;
		CONSOLE_CURSOR_INFO ConsoleCursor;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		ConsoleCursor.bVisible = FALSE;
		ConsoleCursor.dwSize = 1;
		SetConsoleCursorInfo(hConsole, &ConsoleCursor);
	}

	void Display::Draw()
	{
		DrawMap();
	}

	void Display::DrawMap()
	{

	}

	void Display::DrawPlayer()
	{

	}
}