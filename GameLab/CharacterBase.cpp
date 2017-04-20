#include "stdafx.h"
#include "CharacterBase.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void CharacterBase::setHealth(int hpToSet)
{
	CharacterBase::hp = hpToSet;
}

void CharacterBase::setName(string nameToSet)
{
	CharacterBase::name = nameToSet;
}

void CharacterBase::setDmg(int dmgToSet)
{
	CharacterBase::dmg = dmgToSet;
}

void CharacterBase::setDef(int defToSet)
{
	CharacterBase::def = defToSet;
}

void CharacterBase::setType(string typeToSet)
{
	CharacterBase::type = typeToSet;
}

void CharacterBase::setExperience(int XptoSet)
{
	CharacterBase::xp = XptoSet;
}

int CharacterBase::getDmg()
{
	return CharacterBase::dmg;
}

int CharacterBase::getDef()
{
	return CharacterBase::def;
}

int CharacterBase::getHealth()
{
	return CharacterBase::hp;
}

std::string CharacterBase::getName()
{
	return CharacterBase::name;
}

void CharacterBase::toString()
{
	fstream plik;
	plik.open("postacie.txt", ios::out);
	if (plik.good()) {
		plik << name << hp << dmg << def << endl;
	}
	plik.close();
}

CharacterBase::CharacterBase() {}
CharacterBase::CharacterBase(const string &name, const int &hp, const int &dmg, const int &def) : name(name), hp(hp), dmg(dmg), def(def) {}
CharacterBase::~CharacterBase() {}


