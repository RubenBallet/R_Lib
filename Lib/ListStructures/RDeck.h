#ifndef RDECK_H
#define RDECK_H

#include <iostream>
#include <vector>
using std::vector;

template <class T>
class RDeck
{
public:
	void AddElement(T element);
	int Size() { return array.size(); }
	T GetNextElement();
	RDeck();

private:
	bool CheckIndex();
	int index;
	vector<T> array;


};

template<class T>
RDeck<T>::RDeck() : index(0)
{


}

template<class T>
void RDeck<T>::AddElement(T element)
{
	array.push_back(element);
	if (Size() > 1) {
		++index;
	}
	
}

template <class T>
T RDeck<T>::GetNextElement() 
{
	T temp_element = array[index];
	
	
	CheckIndex();
	return temp_element; 
}

template <class T>
bool RDeck<T>::CheckIndex()
{
	if (index == Size()) {
		index = 0;
		return false;
	}
	return true;
}



#endif
