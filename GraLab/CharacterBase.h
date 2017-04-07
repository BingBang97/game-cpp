#pragma once
#include<string>
using namespace std;

class CharacterBase {
private: 
	string name;
	int hp;
	int dmg;
	int def;
public:
	void setHealth(int hpToSet);
	void setName(string nameToSet);
	void setDmg(int dmgToSet);
	void setDef(int defToSet);

	virtual int getDmg();
	virtual int getDef();
	virtual int getHealth();
	virtual string getName();

	virtual void toString();


	CharacterBase(); 
	CharacterBase(const string &name, const int &hp, const int &dmg, const int &def); 

	~CharacterBase(); 
};
