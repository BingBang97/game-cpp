#include "stdafx.h"
#include "Monster.h"
#include<fstream>
using namespace std;
void Monster::setRewardValue(int rewardValueToSet)
{
	Monster::rewardValue = rewardValueToSet;
}

void Monster::setMonsterType(string MonsterTypeToSet)
{
	Monster::type = MonsterTypeToSet;
}

int Monster::getValue()
{
	return Monster::rewardValue;
}
string Monster::getMonsterType()
{
	return Monster::type;
}
void Monster::toString()
{
	fstream plik;
	plik.open("postacie.txt", ios::out | ios::app);
	if (plik.good())
		plik << getName() << " " << getHealth() << " " << getDmg() << " " << getDef() << " " << rewardValue << " " << type << " M" << endl;
	plik.close();
}


void Monster::show(Monster* show, int orderNumber)
{
	cout << "rewardValue: " << show->getValue() << endl;
	cout << "Type: " << show->getMonsterType() << endl;
}
Monster::Monster() {} // konstruktor domyslny																			//konstruktor klasy z ktorej dziedziczy
Monster::Monster(const string &name, const int &hp, const int &dmg, const int &def, const int &value, const string &type) : CharacterBase(name, hp, dmg, def), rewardValue(value), type(type) {}
Monster::~Monster() {} // destruktor

ostream &operator<<(ostream &out, Monster *monster) {
	out << "Nazwa: " << monster->getName() << endl
		<< "Dmg: " << monster->getDmg() << endl
		<< "Def: " << monster->getDef() << endl
		<< "Health: " << monster->getHealth() << endl
		<< "Type: " << monster->getMonsterType() << endl
		<< "Reward Value: " << monster->getValue() << endl;
	return out;
}