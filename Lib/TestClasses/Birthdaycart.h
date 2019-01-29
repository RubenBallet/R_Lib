#pragma once
#include "Observer.h"
#include <iostream>
class Birthdaycart : public r_lib::Observer
{
public:
	Birthdaycart();
	~Birthdaycart();
	void update(r_lib::Observable* o, r_lib::Message* m);

};

