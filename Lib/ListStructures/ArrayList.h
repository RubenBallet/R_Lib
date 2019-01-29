#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <stdlib.h>
#include <string.h>

namespace r_lib {
	template<class T>
	class ArrayList
	{
	public:
		ArrayList();
		~ArrayList();
		void add(T item);
		void add(ArrayList<T> array);
		int size() { return _length; }
		T get(int i);
		bool remove(int i);

	private:
		T * _items;
		int _length;
		

	};
}

namespace r_lib {

	template <class T>
	ArrayList<T>::ArrayList()
	{
		_length = 0;
	}

	template <class T>
	ArrayList<T>::~ArrayList()
	{
	}

	template <class T>
	void ArrayList<T>::add(T item) {
		_items = (T*) realloc(_items, sizeof(T) * (_length + 1));
		_items[_length] = item;
		++_length;
	}

	template <class T>
	void ArrayList<T>::add(ArrayList<T> items) {
		_items = realloc(_items, sizeof(T) * (_length + items.size()));
		for (int i = _length; i < items.size(); ++i) {
			_items[i] = items[i - _length];
		}
		_length += items.size();
	}

	template <class T>
	T ArrayList<T>::get(int i) {
		if (i >= 0 && i < _length)
			return _items[i];
		return NULL;
	}

	template <class T>
	bool ArrayList<T>::remove(int i) {
		if (i >= 0 && i < _length) {
			memcpy(_items[i], _items[i + 1], sizeof(T) * _length - i);
			--_length;
			return true;
		}
		return false;
	}


}

#endif //ARRAYLIST_H