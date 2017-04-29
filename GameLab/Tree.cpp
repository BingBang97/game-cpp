#include "stdafx.h"
#include "Tree.h"


string Tree::getTileType()
{
	return "T";
}

Tree::Tree(const int x,const int y)
{
	Point p(x, y);
	tree = "T";
}


Tree::~Tree()
{
}
