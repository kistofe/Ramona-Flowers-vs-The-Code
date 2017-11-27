#ifndef _WIDGETS_
#define _WIDGETS_

#include "p2Point.h"

class Widgets
{
public:

enum UiElemType
{
	LABEL,
	BUTTON,
	DYNAMIC_LABEL,
};

	Widgets(UiElemType type);

	~Widgets();

	virtual bool Start() { return true; };
	virtual bool PreUpdate() { return true; };
	virtual bool Update() { return true; };
	virtual bool PostUpdate() { return true; };
	virtual bool CleanUp() { return true; };
	virtual void Draw();

protected:

	iPoint		position;
	UiElemType	type;
};
#endif // !_WIDGETS_