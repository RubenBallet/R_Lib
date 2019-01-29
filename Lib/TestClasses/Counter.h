#pragma once
#include "../Thread/Thread.h"
#include <iostream>
#include <chrono>
class Counter : public r_lib::Thread
{
public:
	Counter();
	~Counter();
	void run();

private:
	int _counter = 0;
};

