#pragma once
#include"CharacterBase.h"
#include<iostream>
#include <string>
class Hero : public CharacterBase
{
private:
	int experience;
	std::string type;
public:
	//Functions
	void toString();

	//Setters
	void setExperience(int XptoSet);
	void setType(std::string typeToSet);

	//Getters
	int getXp();
	std::string getType();

	//Konstruktory
	Hero();
	Hero(const std::string &name, const int &hp, const int &dmg, const int &def, const int &xp, const std::string &type);

	//Destruktor
	~Hero();
};

ostream &operator<<(ostream &out, Hero *character);//przeciazenie operatora
