#ifndef DEBUGCONSOLE_H
#define DEBUGCONSOLE_H

#include "../ObjectBase/Observer.h"
#include "../String/String.h"

namespace r_lib {
	class DebugConsole : public Observer
	{
	public:
		DebugConsole();
		~DebugConsole();
		virtual void update(Observable* o, Message* m);

	private:
		void print(String s);
	};
}

#endif //DEBUGCONSOLE_H