#include "stdafx.h"
void input();
void update(double);
void render(double);

// 게임의 프로그램 생명주기
#define MS_PER_FRAME (1000 / 60)	// =16 (60fps)		1000 / 원하는 프레임

int main()
{
	double old = timeGetTime();
	double lag = 0.0;
	
	while (true)
	{
		double current = timeGetTime();
		double elapsed = current - old;	// delta time
		old = current;
		lag += elapsed;

		input();
		while (lag >= MS_PER_FRAME)
		{
			update(elapsed);
			lag -= MS_PER_FRAME;
		}
		render(elapsed);

	}
}