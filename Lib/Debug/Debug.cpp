#include "Debug.h"

namespace r_lib {


	Debug::Debug()
	{
		addObserver(new DebugConsole());
	}


	Debug::~Debug()
	{
	}

	Debug* Debug::getInstance() {
		static Debug * _instance = new Debug();
		return _instance;
		
	}

	void Debug::print(std::string s) {
		std::cout << s;
	}
	void Debug::print(char * s) {
		std::cout << s;
	}
	void Debug::print(String s) {
		std::cout << s;
	}


	void Debug::debug(std::string s) {
		
	}
	void Debug::debug(char * s) {

	}
	void Debug::debug(String& s) {
		setChanged();
		notifyObservers(new DebugMessage(s));
	}
	void Debug::debug(double i) {

	}



}