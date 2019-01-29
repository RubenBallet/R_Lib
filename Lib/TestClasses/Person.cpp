#include "Person.h"



Person::Person(int n)
{
	_age = n;
}


Person::~Person()
{
}

void Person::age() {
	++_age;
	setChanged();
	notifyObservers();
}

