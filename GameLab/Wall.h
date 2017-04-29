#pragma once
#include"Tile.h"
#include<string>
using namespace std;
class Wall:public Tile
{
private:
	string wall;
public:
	string getTileType();
	Wall(const int x, const int y);
	~Wall();
};

