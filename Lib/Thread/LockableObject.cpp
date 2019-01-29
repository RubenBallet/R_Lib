#include "LockableObject.h"

namespace r_lib {

	LockableObject::LockableObject()
	{

	}


	LockableObject::~LockableObject()
	{
	}


	void LockableObject::acquire() {
		_mutex.lock();
	}

	void LockableObject::release() {
		_mutex.unlock();
	}

	bool LockableObject::tryAcces() {
		return _mutex.try_lock();
	}

}