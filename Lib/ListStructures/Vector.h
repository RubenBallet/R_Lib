#ifndef VERCTOR_H
#define VECTOR_H

namespace r_lib {

	template <class T>
	class Vector
	{
	public:
		Vector();
		~Vector();
		void pushback(T item);
		void append(T item);
	
	private:
		T* items;


	};


}

#endif //VECTOR_H