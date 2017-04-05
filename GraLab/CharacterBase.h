#pragma once
#include<string>
using namespace std;

class CharacterBase {
private: // zmienne zawsze w prywatnych
	string name;
	int hp;
	int dmg;
	int def;
public:

	//Setters
	void setHealth(int hpToSet);
	void setName(string nameToSet);
	void setDmg(int dmgToSet);
	void setDef(int defToSet);

	//Getters
	virtual int getDmg();
	virtual int getDef();
	virtual int getHealth();
	virtual string getName();

	//functions
	virtual void toString();

	//konstruktory
	CharacterBase(); // jezeli tego nie napiszesz to on jest domyslnie tworzony przez kompilator
	CharacterBase(const string &name, const int &hp, const int &dmg, const int &def); // tutaj sam ustalasz co ma na wejsciu

																					  // destruktor
	~CharacterBase(); // tez jest tworzony domyslnie jezeli nie napiszesz ;p
};
