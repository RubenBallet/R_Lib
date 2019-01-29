#include "basic.h"

#include <stdio.h>
#include <conio.h>

int waitKeypress() {
	printf("Press key to continu");
	char c = _getch();
	return 1;
}

int waitCharpress(char c) {
	printf("Press %c-key to continu\n", c);
	char c_in = _getch();
	while (c_in != c) {
		c_in = _getch();
	}
	return 1;
}

int getLowBit(short sh) {
	return sh & 0xff;
}

int getHighBit(short sh) {
	return (sh >> 8) & 0xff;
}

int isUpper(char c) {
	if (c >= 'a' && c <= 'z')
		return 0;
	if (c >= 'A' && c <= 'Z')
		return 1;
	return -1;
}

int isLower(char c) {
	if (c >= 'a' && c <= 'z')
		return 1;
	if (c >= 'A' && c <= 'Z')
		return 0;
	return -1;
}

