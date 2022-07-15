#include <vector>
using namespace std;

class Component
{
public:
	virtual void update() = 0;
};

class GameObject
{
	vector<Component*> components;
public:
	void update()
	{
		for (const auto& component : components)
			component->update();
	}
};

class Scene
{
	vector<GameObject*> gameObjects;
public:
	void update()
	{
		for (const auto& gameObject : gameObjects)
			gameObject->update();
	}
};

class FrameWork
{
	Scene* scene = new Scene;
	vector<Scene*> scenes;
public:
	void run()
	{
		while (true)
		{
			scene->update();
		}
	}
};

#define MS_PER_FRAME 16

int main()
{
	FrameWork framework;
	framework.run();
	
}