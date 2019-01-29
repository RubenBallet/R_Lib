#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <vector>
#include "Observer.h"

namespace r_lib {

	class Observable
	{
	public:
		Observable();
		~Observable();
		void addObserver(Observer* o);
		int countObservers() { return _observers.size(); }
		void deleteObserver(Observer* o);
		bool hasChanged() { return _changed; }
		virtual void notifyObservers();
		virtual void notifyObservers(Message *m);
		

	protected:
		void setChanged();
		void clearChanged();

	private:
		std::vector<Observer*> _observers;
		std::vector<Observer*>::iterator _it;
		bool _changed;

	};
}

#endif