#include "..\FrameWork\stdafx.h"
#include "..\FrameWork\FrameWork.h"
#include "..\FrameWork\Input.h"
#include <iostream>

using namespace std;

class ShootingComponent : public Component
{
public:
	void update() override
	{
		if (Input::KeyDown[' '])
			cout << "»§¾ß~!" << endl;
	}
};

class Skeleton :public GameObject
{
public:
	Skeleton()
	{
		components.push_back(new ShootingComponent);
	}
};

class MyScene :public Scene
{
public:
	MyScene()
	{
		gameobjects.push_back(new Skeleton);
	}
};

int main()
{
	MyScene myScene;
	FrameWork framework{ &myScene };
	framework.run();

}