#ifndef OBSERVER_H
#define OBSERVER_H


#include "Message.h"

namespace r_lib {
	class Observable;

	class Observer
	{
	public:
		virtual void update(Observable* o, Message* m) = 0;

	};

}

#endif