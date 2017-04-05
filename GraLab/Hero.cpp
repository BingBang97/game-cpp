#include "stdafx.h"
#include "Hero.h"
#include<fstream>
void Hero::setExperience(int XptoSet)
{
	Hero::experience = XptoSet;
}

int Hero::getXp()
{
	return Hero::experience;
}

string Hero::getType()
{
	return Hero::type;
}

void Hero::setType(string typeToSet)
{
	Hero::type = typeToSet;
}

void Hero::toString()
{
	fstream plik;
	plik.open("postacie.txt", ios::out | ios::app);
	if (plik.good())
		plik << getName() << " " << getHealth() << " " << getDmg() << " " << getDef() << " " << experience << " " << type << " H" << endl;
	cout << "co sie kurwa dzieje"<<endl;
	plik.close();
	if(!plik.good())
	cout << "Nie mozna otworzyc pliku!" << endl;
}


Hero::Hero() {} // konstruktor domyslny																			//konstruktor klasy bazowej
Hero::Hero(const string &name, const int &hp, const int &dmg, const int &def, const int &xp, const string &type) : CharacterBase(name, hp, dmg, def), experience(xp), type(type) {}
Hero::~Hero() {} // destruktor

ostream &operator<<(ostream &out, Hero *character) {
	out << "Nazwa: " << character->getName() << endl
		<< "Dmg: " << character->getDmg() << endl
		<< "Def: " << character->getDef() << endl
		<< "Health: " << character->getHealth() << endl
		<< "Type: " << character->getType() << endl
		<< "Xp " << character->getXp() << endl;
	return out;
}
