#pragma once
#include"CharacterBase.h"
#include<iostream>
#include <string>
using namespace std;
class Hero : public CharacterBase
{
private:
	int experience;
	std::string type;
public:
	void toString();

	void setExperience(int XptoSet);
	void setType(string typeToSet);

	int getXp();
	string getType();

	Hero();
	Hero(const string &name, const int &hp, const int &dmg, const int &def, const int &xp, const string &type);

	~Hero();
};

ostream &operator<<(ostream &out, Hero *character);//przeciazenie operatora
