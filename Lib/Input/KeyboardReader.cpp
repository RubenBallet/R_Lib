#include "KeyboardReader.h"

namespace r_lib {


	KeyboardReader::KeyboardReader()
	{
	}


	KeyboardReader::~KeyboardReader()
	{
	}

	KeyboardReader::KEYSTATE KeyboardReader::getKeyPressed(int key) {
		short sh = GetKeyState(key);
		std::cout << sh << " - low: " << getLowBit(sh)<< " - high: " << getHighBit(sh) << "\n";
		if (getHighBit(sh) == 0)
			return KEYSTATE::UP;
		
		return KEYSTATE::DOWN;
	}

	KeyboardReader::KEYSTATE KeyboardReader::getKeyToggled(int key) {
		short sh = GetKeyState(key);
		std::cout << sh << " - low: " << getLowBit(sh) << " - high: " << getHighBit(sh) << "\n";
		if (getLowBit(sh) == 1)
			return TOGGLED;
		if (getLowBit(sh) == 1)
			return UNTOGGLED;
		return KEYSTATE::DOWN;
	}


	int KeyboardReader::keyToInt(char c) {
		if (isLower(c)) 
			return c - ('A' - 'a'); // A - a distance between lower and upper
		if (isUpper(c))
			return c;
		else
			return c;
	}

	int KeyboardReader::keyToInt(KeyboardReader::SPECIALKEY key) {
		switch (key)
		{
		case r_lib::KeyboardReader::SHIFT:
			return VK_SHIFT;
		case r_lib::KeyboardReader::CONTROL:
			return VK_CONTROL;
		case r_lib::KeyboardReader::ENTER:
			return VK_RETURN;
		case r_lib::KeyboardReader::BACKSPACE:
			return VK_BACK;
		case r_lib::KeyboardReader::TAB:
			return VK_TAB;
		case r_lib::KeyboardReader::CLEAR:
			return VK_CLEAR;
		case r_lib::KeyboardReader::ALT:
			return VK_MENU;
		case r_lib::KeyboardReader::PAUSE:
			return VK_PAUSE;
		case r_lib::KeyboardReader::CAPS:
			return VK_CAPITAL;
		case r_lib::KeyboardReader::ESC:
			return VK_ESCAPE;
		case r_lib::KeyboardReader::SPACE:
			return VK_SPACE;
		case r_lib::KeyboardReader::END:
			return VK_END;
		case r_lib::KeyboardReader::HOME:
			return VK_HOME;
		case r_lib::KeyboardReader::ARROW_LEFT:
			return VK_LEFT;
		case r_lib::KeyboardReader::ARROW_RIGHT:
			return VK_RIGHT;
		case r_lib::KeyboardReader::ARROW_UP:
			return VK_UP;
		case r_lib::KeyboardReader::ARROW_DOWN:
			return VK_DOWN;
		case r_lib::KeyboardReader::DEL:
			return VK_DELETE;
		default:
			return 0;
		}
	}
}