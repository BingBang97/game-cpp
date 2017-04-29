#pragma once
#include"Tile.h"
#include<string>
using namespace std;
class Tree:public Tile
{
private:
	string tree;
public:
	string getTileType();
	Tree(const int x, const int y);
	~Tree();
};

