#ifndef KEYBOARDREADER_H
#define KEYBOARDREADER_H

#include <Windows.h>
#include <iostream>
#include "../C/basic.h"

namespace r_lib {

	class KeyboardReader
	{
	public:
		enum KEYSTATE {UP, DOWN, TOGGLED, UNTOGGLED};
		enum SPECIALKEY { SHIFT, CONTROL, ENTER, BACKSPACE, TAB, CLEAR, ALT, PAUSE, CAPS, ESC, SPACE, END, HOME, ARROW_LEFT, ARROW_RIGHT, ARROW_UP, ARROW_DOWN, DEL };
		/*
		Char to windows virtual-keycode
		*/
		static int keyToInt(char c);
		/*
		SPECIALKEY to windows virtual-keycode
		*/
		static int keyToInt(SPECIALKEY key);
		KeyboardReader();
		~KeyboardReader();
		/*
		Tests whether a key is up or down
		Param int key: windows virtual key code
		Return KEYSTATE: UP or DOWN
		*/
		KEYSTATE getKeyPressed(int key);
		/*
		Tests whether a key is toggled
		Param int key: windows virtual key code
		Return KEYSTATE: TOGGLED, UNTOGGLED or PRESSED 
		*/
		KEYSTATE getKeyToggled(int key);


	private:
	};
}

#endif //KEYBOARDREADER_H