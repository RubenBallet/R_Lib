#include "String.h"

namespace r_lib {

	String::String() {}

	String::String(char* s)
	{
		_length = strlen(s);
		_ch = (char*) malloc(sizeof(char) * _length + 1);
		strcpy(_ch, s);
		
	}

	String::~String()
	{
		free(_ch);
	}

	String* String::clone() {
		return new String(this->_ch);
	}

	String* String::conc(String* s) {
		realloc(_ch, _length + s->_length + 1);
		strcat(_ch, s->_ch);
		_length += s->_length;
		return this;
	}

	bool String::equals(String* s) {
		return strcmp(_ch, s->_ch) == 0;
	}

	String* String::reverse() {
		_strrev(_ch);
		return this;
	}

	char* String::at(int i) {
		return strchr(_ch, i);
	}

	int String::contains(char c) {
		int n = strchr(_ch, c) - _ch;
		if (n < 0)
			n = -1;
		return n;
	}

	bool String::replace(char c, int i) {
		if (i >= 0 && i < _length) {
			_ch[i] = c;
			return true;
		}
		return false;
	}

	int String::length() {
		return _length;
	}

	String* String::operator+(String& s) {
		int n = _length + s._length;
		char* new_string;
		new_string = (char*)malloc(sizeof(char) * n + 1);
		strcat(new_string, _ch);
		strcat(new_string, s._ch);
		String * new_s = new String(new_string);
		free(new_string);
		return new_s;
	}

	String* String::operator+=(String& s) {
		conc(&s);
		return this;
	}
	bool String::operator==(String& s) {
		return strcmp(_ch, s._ch) == 0;
	}
	bool String::operator!=(String& s) {
		return strcmp(_ch, s._ch) != 0;
	}
	char String::operator[](int i) {
		if (i >= 0 || i < _length)
			return _ch[i];
		return NULL;
	}
	std::ostream& operator<<(std::ostream& os, const String& s) {
		std::cout << s._ch << "\n";
		return os;
	}

	std::ostream& operator<<(std::ostream& os, const String* s) {
		std::cout << s->_ch << "\n";
		return os;
	}

}