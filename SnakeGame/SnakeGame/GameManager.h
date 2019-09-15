#pragma once

#include <iostream>

#include "Display.h"


namespace GAMEMANAGER
{
	class GameManager
	{
	private:
		DISPLAY::Display display;


		void init();
	public:
		GameManager();
		bool Play();
	};
}