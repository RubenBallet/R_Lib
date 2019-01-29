#ifndef STRING_H
#define STRING_H
#include <string.h>
#include <iostream>
#include <string>

namespace r_lib {
	class String
	{
	public:
		String();
		String(char* s);
		String(std::string s);
		~String();
		/*
		Creates a new instance of the object
		*/
		String* clone();

		/*
		Concatinates string s to the string
		param String* s string to add 
		*/
		String* conc(String* s);

		/*
		String* conc(double d);
		*/

		/*
		String* conc(char* s); 
		*/

		/*
		Compares the string with string s
		Param String* s string to compare with
		Return bool true if strings are equal, false if the strings are not equal
		*/
		bool equals(String* s);

		/*
		Split
		*/

		/*
		Reverses the string
		*/
		String* reverse();

		/*
		Returns te position of the first occurence of the char
		param char c: char to search
		return int: position of the char, -1 if not in string
		*/
		int contains(char c);

		/*
		returns the char at pos i
		param int i: position
		return char*: char at position i, NULL if i out of bounds
		*/
		char* at(int i);

		/*
		Replace char at position
		Param char c: new char
		Param int i: position to replace
		return true if succesfull, false if replace fails
		*/
		bool replace(char c, int i);
		
		/*
		Gives the length of the string
		return int: length if string
		*/
		int length();

		/*
		int toInt();
		*/

		/*
		char* toCharA();
		*/

		/*
		std::string toStdString();
		*/

		//Operators
		String* operator+(String& s);
		String* operator+=(String& s);
		bool operator==(String& s);
		bool operator!=(String& s);
		char operator[](int i);
		friend std::ostream& operator<<(std::ostream& os, const String& s);
		friend std::ostream& operator<<(std::ostream& os, const String* s);

	private:
		char* _ch;
		int _length;
	};

	std::ostream& operator<<(std::ostream& os, const String& s);
	std::ostream& operator<<(std::ostream& os, const String* s);


}

#endif //STRING_H