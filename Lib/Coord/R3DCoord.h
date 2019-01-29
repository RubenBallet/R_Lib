#ifndef R3DCOORD_H
#define R3DCOORD_H

#include "RCoord.h"

class R3DCoord : public RCoord
{
public:
	int GetZ() const { return m_z; }
	void printCoord();

	R3DCoord operator+(R3DCoord coord2);
	R3DCoord operator+=(R3DCoord coord2);
	R3DCoord operator-(R3DCoord coord2);
	R3DCoord operator-=(R3DCoord coord2);
	R3DCoord operator-();
	R3DCoord operator*(int n);
	R3DCoord operator*=(int n);
	R3DCoord operator/(int n);
	R3DCoord operator/=(int n);
	R3DCoord operator++();
	R3DCoord operator++(int dummy);
	R3DCoord operator--();
	R3DCoord operator--(int dummy);
	R3DCoord operator!();

	R3DCoord();
	R3DCoord(int x, int y, int z);
private:
	int m_z;

};


#endif
