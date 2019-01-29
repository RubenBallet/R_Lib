#pragma once
#include "Observable.h"
class Person : public r_lib::Observable
{
public:
	Person(int n);
	~Person();
	void age();


private:
	int _age;
	
};

