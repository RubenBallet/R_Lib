#ifndef RSTACK_H
#define RSTACK_H

#include <iostream>


template <class T>
class RStack
{

public:

	int GetSize() { return size; }
	bool IsEmpty() { return size == 0; }

	void push(T element);
	T pop();

	void operator+=(T element);
	friend std::ostream& operator<<(std::ostream& outstream, RStack<T> stack);
	
	RStack();
	RStack(T element);
	
private:
	T * array;
	int size;

};




template <class T>
RStack<T>::RStack() : size(0)
{

}

template <class T>
RStack<T>::RStack(T element) : size(1)
{
	push(element);
}

template <class T>
void RStack<T>::push(T element)
{
	if (size == 0)
	{
		++size;
		array = new T[size];
		array[size - 1] = element;
	}
	else if (size > 0)
	{
		++size;
		T * temp_array = new T[size];
		for (int i = 0; i < size - 1; ++i)
		{
			temp_array[i] = array[i];
		}
		temp_array[size - 1] = element;
		delete array;
		array = temp_array;
	}
}

template <class T>
T RStack<T>::pop()
{
	if (!IsEmpty())
	{
		T temp_element = array[size - 1];
		--size;
		T* temp_array = new T[size];
		for (int i = 0; i < size - 1; ++i)
		{
			temp_array[i] = array[i];
		}
		delete array;
		array = temp_array;
		return temp_element;
	}
	
}

template <class T>
void RStack<T>::operator+=(T element)
{
	push(element);
}

template <class T>
std::ostream& operator<<(std::ostream& outstream, const RStack<T> stack)
{
	for (int i = 0; i < stack.size; ++i)
	{
		cout << stack[i];
	}
	return outstream;
}



#endif //RSTACK_H
