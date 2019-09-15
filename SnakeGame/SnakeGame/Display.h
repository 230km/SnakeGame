#pragma once

namespace DISPLAY
{
	class Display
	{
	private:
		void init();
		
	public:
		Display();
		void Draw();
		void DrawMap();
		void DrawPlayer();
	};
}