#pragma once
#include"Tile.h"
#include<string>
using namespace std;
class Grass:public Tile
{
private:
	string grass;
public:
	string getTileType();
	Grass(const int x,const int y);
	~Grass();
};

