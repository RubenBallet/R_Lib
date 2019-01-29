#include "Birthdaycart.h"



Birthdaycart::Birthdaycart()
{
}


Birthdaycart::~Birthdaycart()
{
}

void Birthdaycart::update(r_lib::Observable* o, r_lib::Message* m) {
	std::cout << "Person had aged, happy birthday";
}
