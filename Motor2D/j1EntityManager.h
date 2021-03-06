#ifndef _ENTITY_MANAGER_
#define _ENTITY_MANAGER_

#include "p2List.h"
#include "j1Module.h"
#include "Entity.h"
#include "Player.h"
#include "Enemy.h"
#include "Flying_Enemy.h"
#include "Ground_Enemy.h"
#include "Coin.h"

class j1EntityManager : public j1Module
{
public:
	j1EntityManager();
	~j1EntityManager();

	bool Start();
	bool PreUpdate(float d_time);
	bool Update(float d_time);
	bool PostUpdate();
	bool CleanUp();

	Entity* CreateEntity(Entity::EntityType type, uint x, uint y);
	bool DestroyEntity(Entity* entity);
	bool Load(pugi::xml_node& data);
	bool Save(pugi::xml_node& data) const;
	void SetToStart();
	void Draw();

private:
	
public:

	p2List<Entity*> entity_list;
	Player* player1 = nullptr;

private:
};

#endif // !_ENTITY_MANAGER_
