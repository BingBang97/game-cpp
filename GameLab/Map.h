#pragma once
#include"Tile.h"
#include"Tree.h"
#include"Grass.h"
#include"Wall.h"
#include<time.h>
#include<vector>
#include<memory>
#include<cstdlib>
using namespace std;
class Map
{
private:
	vector<vector<shared_ptr<Tile>>>maps;
	int width,heigth;
public:
	void generateMap(int lenght,int width);
	void drawMap(int length, int width);
	Map();
	~Map();
};