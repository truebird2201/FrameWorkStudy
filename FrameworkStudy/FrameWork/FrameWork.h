#pragma once
#include "Scene.h"

#define MS_PER_UPDATE ( 1'000'000 / 60 )
class FrameWork
{
	Scene* scene;
	std::vector<Scene*> scenes;

	void render() {}
public:
	FrameWork(Scene* scene) :scene(scene) {}
	void run();
};

