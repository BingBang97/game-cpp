#pragma once
#include<string>
using namespace std;

class CharacterBase {
private: 
	string name,type;
	int hp;
	int dmg;
	int def;
	int xp;
public:

	void setHealth(int hpToSet);
	void setName(string nameToSet);
	void setDmg(int dmgToSet);
	void setDef(int defToSet);
	virtual void setType(string typeToSet);
	virtual void setExperience(int XptoSet);

	virtual int getDmg();
	virtual int getDef();
	virtual int getHealth();
	virtual string getName();


	virtual void toString();

	CharacterBase(); 
	CharacterBase(const string &name, const int &hp, const int &dmg, const int &def); 

	~CharacterBase(); 
};
