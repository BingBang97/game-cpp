#pragma once
#include"Tile.h"
#include<string>
using namespace std;
class Wall:public Tile
{
private:
	string wall;
public:
	void draw();
	Wall(const int x, const int y);
	Wall();
	~Wall();
};

