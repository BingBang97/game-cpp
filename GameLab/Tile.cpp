#include "stdafx.h"
#include "Tile.h"


void Tile::setType()
{
	type.push_back(".");
	type.push_back("T");
	type.push_back("M");
}

string Tile::createTile()
{
	cout << "create Tile" << endl;
	setType();
	srand(time(NULL));
	int i = (rand() % 3) + 0;
	return type[i];
}

void Tile::createMap()
{
	//string returnmap;
	cout << "create map" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; i < 10; j++)
		{
			cout << "kurwa" << endl;
			map[i][j]=createTile();//cos sie dzieje!!!!!!!!!
			//returnmap=returnmap+map[i][j];
		}
	}
}

void Tile::showMap()
{
	cout << "show map kurwa" << endl;
	for (unsigned int i = 0; i < 10; i++)
	{
		cout << endl;
		for (unsigned int j = 0; j < 10; j++)
		{
			cout << map[i][j];
		}
	}
}

Tile::Tile()
{/*
	vector<Point>point;
	for (unsigned int i = 0; i < 10; i++)
	{
		for (unsigned int j = 0; i < 10; j++)
		{
			point.push_back(Point(i, j));
		}
		for (unsigned int k = 0; k < 10; k++)
		{
			map.push_back(point);
		}
	}*/
}

	Tile::~Tile() {}
