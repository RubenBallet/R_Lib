#include "Keyreader.h"
#include <conio.h>
#include <stdio.h>

int chartester() {
	char c = _getch();
	while (c != 27) {
		printf("%c = %d\n", c, c);
		c = _getch();
	}
	return 1;
}

int keyhit() {
	while (!_kbhit());
	return 1;
}