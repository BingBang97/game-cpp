#include "stdafx.h"
#include "Grass.h"


string Grass::getTileType()
{
	return ".";
}

Grass::Grass(const int x, const int y)
{
	Point p(x, y);
	grass = ".";
}


Grass::~Grass()
{
}
