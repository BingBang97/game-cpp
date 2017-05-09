#include "stdafx.h"
#include "Map.h"

void Map::generateMap(int width, int heigth)
{
	maps.resize(width);
	for ( int i = 0; i < width; i++)
	{
		for ( int j = 0; j <heigth; j++)
		{
			int los = rand() % 11 ;
			if (los > 5 && los < 8)
			{
				maps[i].push_back(make_shared<Tree>(i, j));
			}
			if (los >= 0 && los <= 5)
			{
				maps[i].push_back(make_shared<Grass>(i, j));
			}
			if (los > 7 && los <= 10)
			{
				maps[i].push_back(make_shared<Wall>(i, j));
			}
		}
	}
	cout << maps.size() << endl;
}

void Map::drawMap(int width, int heigth)
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < heigth; j++)
		{
			maps[i][j]->draw();
		}
		cout << endl;
	}
}

Map::Map()
{
}


Map::~Map()
{
}
