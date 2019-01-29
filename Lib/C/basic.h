#ifndef BASIC_H
#define BASIC_H

extern "C" {

	int waitKeypress();
	int waitCharpress(char c);
	int getLowBit(short sh);
	int getHighBit(short sh);
	int isLower(char c);
	int isUpper(char c);
	
}


#endif // !BASIC_H
