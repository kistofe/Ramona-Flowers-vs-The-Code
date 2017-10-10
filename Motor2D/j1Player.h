#ifndef __j1PLAYER__
#define __j1PLAYER__

#include "p2List.h"
#include "p2Point.h"
#include "p2Log.h"
#include "p2Defs.h"
#include "j1Module.h"
#include "Animation.h"
#include "j1App.h"

#include "SDL/include/SDL.h"

class j1Player : public j1Module
{
public:
	j1Player();

	//Destructor
	~j1Player();


	bool Start();

	bool CleanUp();



private:

public:

	SDL_Texture* graphics = nullptr;
	Animation* current_animation = nullptr;

};

#endif