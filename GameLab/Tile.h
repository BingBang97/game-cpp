#pragma once
#include"Point.h"
#include<string>
#include<vector>
#include<ctime>
using namespace std;
class Tile:public Point
{
private:
	vector<vector<string>> map;
	vector<string> type;
public:
	void setType();
	string createTile();
	void createMap();
	void showMap();

	Tile();
	//Tile(string type[]);
	~Tile();
};

