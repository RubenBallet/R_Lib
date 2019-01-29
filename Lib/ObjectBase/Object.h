#ifndef OBJECT_H
#define OBJECT_H

namespace r_lib {

	class Object
	{
	public:
		virtual bool equals(Object* obj) = 0;
		virtual Object* clone() = 0;


	};
}

#endif //OBJECT_H