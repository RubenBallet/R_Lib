#include "RCoord.h"
#include "RStack.h"
#include "RDeck.h"
#include "R3DCoord.h"

namespace r_lib {

	int main()
	{
		/*
		RCoord coord1(5, 6);
		std::cout << coord1;
		RCoord coord2(7, 9);
		std::cout << coord2;
		RCoord coord3 = coord1 + coord2;
		std::cout << coord3;
		RCoord coord4 = coord1 - coord2;
		std::cout << coord4;
		RCoord coord5 = -coord1;
		std::cout << coord5;
		RCoord coord6 = coord1 * 10;
		std::cout << coord6;
		RCoord coord7 = 10 * coord2;
		std::cout << coord7;
		RCoord coord8 = coord1 / 2;
		std::cout << coord8;
		RCoord coord9, coord10;
		coord10 = coord9 += coord1;
		std::cout << coord9 << coord10;
		std::cout << ++coord9 << coord10++;
		std::cout << coord10;
		std::cout << --coord9 << coord10--;
		std::cout << coord10;
		RCoord coord11 = !coord1;
		std::cout << coord11;
		
		std::cout << std::endl;

		RStack<RCoord> stack;
		
		stack.push(coord1);
		stack.push(coord2);
		stack.pop();
		//std::cout << stack;
		
		RDeck <RCoord> deck;
		deck.Size();
		RCoord coord1(5, 6);
		deck.AddElement(coord1);
		RCoord coord2 = deck.GetNextElement();
		std::cout << coord2;
		int a;
		std::cin >> a;
		*/

		R3DCoord a(0, 6, 9);
		a.printCoord();
		R3DCoord b(3, 4, 9);
		b.printCoord();
		R3DCoord c = a + b;
		c.printCoord();

		return 0;
	}

}