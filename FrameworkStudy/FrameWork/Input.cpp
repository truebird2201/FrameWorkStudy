#include "stdafx.h"
#include "Input.h"

bool Input::olds[256];

bool Input::Keys[256];
bool Input::KeyUp[256];
bool Input::KeyDown[256];

void Input::update()
{
	while (_kbhit())
		Keys[_getch()] = true;

	for (int i = 0; i < 256; ++i)
	{
		if (Keys[i] == true && olds[i] == false)
			KeyUp[i] = true;
		if (Keys[i] == false && olds[i] == true)
			KeyDown[i] = true;
	}
}

void Input::clear()
{
	memcpy(olds, Keys, 256);
	memset(Keys, 0, 256);
	memset(KeyUp, 0, 256);
	memset(KeyDown, 0, 256);
}