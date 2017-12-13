#ifndef _MAINMENU_
#define _MAINMENU_

#include "j1Module.h"
#include "j1GuiController.h"

#include "SDL\include\SDL.h"

class j1MainMenu : public j1Module
{

public:
	j1MainMenu();
	~j1MainMenu();

	bool Start();
	bool Update(float d_time);
	bool CleanUp();

	bool OnEvent(Button* button);

private:

	void AddUiElems();
	void CreateSettingsWindow();
	void CreateCreditsWindow();

public:

	//Main Buttons
	Button* new_game = nullptr;
	Button* load_game = nullptr;
	Button* settings = nullptr;
	Button* credits = nullptr;
	Button* exit = nullptr;
	Button* close_window = nullptr;

	//Label for each button
	Label* new_game_lab = nullptr;
	Label* load_game_lab = nullptr;
	Label* settings_lab = nullptr;
	Label* credits_lab = nullptr;
	Label* exit_lab = nullptr;

	//Copyright
	Label* copyright = nullptr;

	//Windows
	UIWindow* settings_win = nullptr;
	UIWindow* settings_title_win = nullptr;
	UIWindow* credits_win = nullptr;
	UIWindow* credits_title_win = nullptr;

	//Images
	SDL_Texture* background = nullptr;
	SDL_Texture* title = nullptr;
	
};
#endif
