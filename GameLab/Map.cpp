#include "stdafx.h"
#include "Map.h"


void Map::generateMap(int length,int width)
{
	//Tile.resize(width);
	for ( int i = 0; i < length; i++)
	{
		for ( int j = 0; j < width; j++)
		{
			int los = rand() % 11 ;
			if (los>5 && los<8)
				maps.emplace_back(make_shared<Tree>(i, j));
			if (los >= 0 && los <= 5)
				maps.emplace_back(make_shared<Grass>(i, j));
			if (los>7 && los<=10)
				maps.emplace_back(make_shared<Wall>(i, j));
		}
	}
	cout << "generateMap" << endl;
}

void Map::drawMap(int length, int width)
{
	int x = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			x++;
			cout << maps[i][j]<<" ";
			if (x == length)
			{
				cout << endl;
				x = 0;
			}

		}
	}
	cout << "drawMap" << endl;
}

void Map::toString()
{
	string map;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			//map += to_string(maps[i][j]);

		}
	}
}

Map::Map()
{
}


Map::~Map()
{
}

ostream & operator<<(ostream & out, Tile * m)
{
	out << m;
}
