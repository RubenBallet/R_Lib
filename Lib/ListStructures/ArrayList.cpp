/*

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
		_items = realloc(_items, sizeof(T) * (_length + 1));
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
			memcpy(_ch[i], _ch[i + 1], sizeof(T) * _length - i);
			return true;
		}
		return false;
	}


}*/