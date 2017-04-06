#pragma once
#include<string>
#include<iostream>
#include"CharacterBase.h"
using namespace std;
class Monster : public CharacterBase
{
private:
	int rewardValue;
	string type;
public:
	void toString();
	void setRewardValue(int rewardValueToSet);
	void setMonsterType(string MonsterTypeToSet);
	int getValue();
	string getMonsterType();

	Monster();
	Monster(const std::string &name, const int &hp, const int &dmg, const int &def, const int &xp, const std::string &type);

	~Monster();
};

ostream &operator<<(ostream &out, Monster *monster);//przeciazanie operatora