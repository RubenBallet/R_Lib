#ifndef MESSAGE_H
#define MESSAGE_H

#include "../String/String.h"

namespace r_lib {

	class Message
	{
	public:
		Message();
		~Message();
		virtual String getMessage() = 0;
		virtual void setMessage(String s) = 0;

	};

}

#endif