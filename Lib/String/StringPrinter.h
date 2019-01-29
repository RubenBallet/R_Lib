#pragma once
#include "../Thread/Thread.h"
#include <iostream>
class StringPrinter : public r_lib::Thread
{
public:
	StringPrinter();
	~StringPrinter();
	void run();
};

