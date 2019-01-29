#include "DebugMessage.h"

namespace r_lib {

	DebugMessage::DebugMessage() {}

	DebugMessage::DebugMessage(String s)
	{
		_message = *s.clone();
	}


	DebugMessage::~DebugMessage()
	{
	}

	String DebugMessage::getMessage() {
		return _message;
	}

	void DebugMessage::setMessage(String s) {
		_message = s;
	}

}