#include "Game1.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Game1^ game = gcnew Game1();
	game->Run();
	delete game;
	return 0;
}