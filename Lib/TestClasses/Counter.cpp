#include "Counter.h"



Counter::Counter()
{
}


Counter::~Counter()
{
}

void Counter::run() {
	while (true) {
		std::cout << _counter;
		++_counter;
		sleep(2);
	}
}
