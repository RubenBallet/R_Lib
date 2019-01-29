#ifndef DEBUG_H
#define DEBUG_H
#include "../ObjectBase/Observable.h"
#include "../String/String.h"
#include "DebugMessage.h"
#include "DebugConsole.h"
#include <iostream>
#include <String>


namespace r_lib {

	/*
	Todo:
	Different kinds of messages (Error, exception, debug, information)
	Prefix
	*/

	class Debug : public Observable
	{
	public:
		
		~Debug();
		static Debug* getInstance();//Singleton Patron
		static void print(std::string s);
		static void print(char * s);
		static void print(String s);
		void debug(std::string s);
		void debug(char * s);
		void debug(String& s);
		void debug(double i);
	

	private:
		Debug();
		static Debug* _instance;


	};

	

}
#endif //DEBUG_H