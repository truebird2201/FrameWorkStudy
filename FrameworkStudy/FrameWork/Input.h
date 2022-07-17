#pragma once
#include <conio.h>
class Input
{
	static bool olds[256];
public:
	static bool Keys[256];
	static bool KeyUp[256];
	static bool KeyDown[256];
public:
	static void initialize() {}
	static void update();
	static void clear();
};

