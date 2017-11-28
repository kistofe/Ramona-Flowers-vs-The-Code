#ifndef _BUTTON_
#define _BUTTON_

#include "Widgets.h"

#include "SDL/include/SDL.h"
class Label;

class Button : public Widgets
{
public:
	Button(uint x, uint y, j1Module* callback);
	~Button();

	void Draw();

private:

	void OnEvent();
	bool CheckClick(const SDL_Rect& button);
	bool MouseOver(const SDL_Rect& button);

private:
	SDL_Rect atlas_click_rect;
	SDL_Rect atlas_idle_rect;
	SDL_Rect atlas_highlighted_rect;
	SDL_Rect area;


	Label* text;
};
#endif
