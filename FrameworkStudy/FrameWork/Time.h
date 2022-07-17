#pragma once
#define s_clock std::chrono::system_clock

class Time
{
	static s_clock::time_point previous;

public:
	static double lag;
public:
	static void initialize();
	static void update();
};