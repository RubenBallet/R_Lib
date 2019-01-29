#include "DebugConsole.h"

namespace r_lib {

	DebugConsole::DebugConsole()
	{
	}


	DebugConsole::~DebugConsole()
	{
	}

	void DebugConsole::update(Observable* o, Message* m) {
		print(m->getMessage());
	}

	void DebugConsole::print(String s) {
		std::cout << "Debug: " << s << "\n";
	}
}
