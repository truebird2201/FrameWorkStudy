#pragma once
#include "Component.h"
class GameObject
{
protected:
	std::vector<Component*> components;
public:
	void update()
	{
		for (const auto& component : components)
			component->update();
	}
};

