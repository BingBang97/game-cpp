#pragma once
#include"Point.h"
using namespace std;
class Tile: public Point
{
public:
	virtual void draw()=0;
	Tile();
	~Tile();
};