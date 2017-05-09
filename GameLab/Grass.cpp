#include "stdafx.h"
#include "Grass.h"


void Grass::draw()
{
	cout<< ".";
}

Grass::Grass(const int x, const int y)
{
	Point p(x, y);
	grass= ".";
}

Grass::Grass()
{
}


Grass::~Grass()
{
}
