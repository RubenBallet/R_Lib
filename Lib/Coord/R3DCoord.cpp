#include "R3DCoord.h"

R3DCoord::R3DCoord() : m_z(0)
{

}

R3DCoord::R3DCoord(int x, int y, int z) : RCoord(x, y), m_z(z)
{


}

void R3DCoord::printCoord()
{
	std::cout << '(' << GetX() << ", " << GetY() << ", " << m_z << ')' << std::endl;

}

R3DCoord R3DCoord::operator+(R3DCoord coord2)
{
	R3DCoord temp(coord2.GetX() + GetX(), coord2.GetY() + GetY(), coord2.m_z + m_z);
	return temp;
}

R3DCoord R3DCoord::operator+=(R3DCoord coord2)
{
	R3DCoord temp(coord2.GetX() + GetX(), coord2.GetY() + GetY(), coord2.m_z + m_z);
	return temp;
}