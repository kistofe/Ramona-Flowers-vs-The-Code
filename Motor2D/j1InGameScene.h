#ifndef _INGAMESCENE_
#define _INGAMESCENE_

#include "j1Module.h"
#include "j1GuiController.h"
#include "j1Timer.h"

#include "SDL\include\SDL.h"

#define LAST_LVL 2

class j1InGameScene : public j1Module
{
public:
	j1InGameScene();
	~j1InGameScene();

	bool Awake(pugi::xml_node& config);
	bool Start();
	bool Update(float d_time);
	bool CleanUp();

	bool Load(pugi::xml_node&);
	bool Save(pugi::xml_node&) const;

	void NextLevel();
	void InitializeMap(const char* map_initialized);
	bool OnEvent(Button* button);

	void UpdateScore();

private:

	void AddUiElems();
	void HandleInput();
	void UpdateUI();
	void UpdateTimer();
	void ResetTimer();
	void OpenWindow(uint type);
	void PauseGame();
	void ResumeGame();
	

public:

	//Main UI
	DynamicLabel* life = nullptr;
	DynamicLabel* time = nullptr;
	DynamicLabel* score = nullptr;
	DynamicLabel* coins = nullptr;
	DynamicLabel* level = nullptr;
	DynamicLabel* curr_character = nullptr;

	//UI Textures
	SDL_Texture* hud_tex = nullptr;

	//HUD elements
	SDL_Rect char1_life_icon;
	SDL_Rect char2_life_icon;
	SDL_Rect time_icon;
	
	//Buttons
	Button* back_to_main_menu = nullptr;
	Button* resume = nullptr;

	//Labels
	Label* tuto_window_content1 = nullptr;
	Label* tuto_window_content2 = nullptr;
	Label* tuto_window_content3 = nullptr;
	Label* tuto_window_content4 = nullptr;
	Label* pause_window_lab = nullptr;
	Label* resume_lab = nullptr;
	Label* back_lab = nullptr;

	//Windows
	UIWindow* tuto_window = nullptr;
	UIWindow* pause_window = nullptr;
	UIWindow* pause_window_title = nullptr;
	UIWindow* hud_window = nullptr;

	//Scene Properties
	uint	timer_count = 0;
	uint	current_time = 200;
	uint	max_time = 200;
	j1Timer	scene_timer;
	uint32	current_lvl = 1;
	fPoint	gravity;
	fPoint	max_gravity; 
	bool	paused = false;

private:

	pugi::xml_document ui_elements;
	pugi::xml_document config_document;
	pugi::xml_node config;
	pugi::xml_node ui_config;
	pugi::xml_node ui_data;
	pugi::xml_node data;
	pugi::xml_node textures;
	pugi::xml_node labels;
	pugi::xml_node windows;
	pugi::xml_node dynamic_labels;
	pugi::xml_node buttons;
};
#endif
