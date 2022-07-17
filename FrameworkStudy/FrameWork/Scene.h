#pragma once
#include "GameObject.h"
class Scene
{
protected:
	std::vector<GameObject*> gameobjects;
public:
	void update()
	{
		for (const auto& gameobject : gameobjects)
			gameobject->update();
	}
};

