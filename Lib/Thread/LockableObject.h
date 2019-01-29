#ifndef LOCKABLEOBJECT_H
#define LOCKABLEOBJECT_H

#include <mutex>
#include "Object.h"


namespace r_lib {

	class LockableObject : public Object
	{
	public:
		LockableObject();
		~LockableObject();
		virtual Object* clone() = 0;
		virtual bool equals(Object * obj) = 0;
		/*
		Locks the object, no other class can get acces to the object
		Blocks if acces unavailable
		*/
		void acquire();
		/*
		Locks the object, no other class can get acces to the object
		returns false acces unavailable, true if access available
		*/
		bool tryAcces();
		/*
		Releases the object, other classes can get acces
		*/
		void release();
	private:
		std::mutex _mutex;
	};

}

#endif //LOCKABLEOBJECT_H