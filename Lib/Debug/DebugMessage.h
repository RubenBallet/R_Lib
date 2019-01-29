#ifndef DEBUGMESSAGE_H
#define DEBUGMESSAGE_H

#include "../ObjectBase/Message.h"
#include "../String/String.h"

namespace r_lib {

	class DebugMessage : public Message
	{
	public:
		DebugMessage();
		DebugMessage(String s);
		~DebugMessage();
		virtual String getMessage();
		virtual void setMessage(String s);

	private:
		String _message;
	};
}

#endif //DEBUGMESSAGE_H