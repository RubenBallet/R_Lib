#include "Observable.h"

namespace r_lib {


	Observable::Observable()
	{
		_it = _observers.begin();
		_changed = false;
	}


	Observable::~Observable()
	{

	}

	void Observable::addObserver(Observer* o) {
		_it = _observers.insert(_it, o);
	}

	void Observable::deleteObserver(Observer* o) {
		for (int i = 0; i < _observers.size(); ++i) {
			if (_observers.at(i) == o) {
				std::vector<Observer*>::iterator it = _observers.begin();
				it += i;
				_observers.erase(it);
			}
		}
	}

	void Observable::notifyObservers() {
		if (_changed) {
			_changed = false;
			for (std::vector<Observer*>::iterator it = _observers.begin(); it != _observers.end(); ++it) {
				(*it)->update(this, NULL);
			}
		}
	}

	void Observable::notifyObservers(Message* m) {
		if (_changed) {
			_changed = false;
			for (std::vector<Observer*>::iterator it = _observers.begin(); it != _observers.end(); ++it) {
				(*it)->update(this, m);
			}
		}
	}

	void Observable::setChanged() {
		_changed = true;
	}

	void Observable::clearChanged() {
		_changed = false;
	}


}