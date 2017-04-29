#pragma once
#include "stdafx.h"
#include"Hero.h"
#include"Monster.h"
#include"CharacterBase.h"
#include<string>
#include<vector>

using namespace std;
class CharacterEditor
{
private:
	vector<CharacterBase*>characters;
	vector <Hero*> heroes;
	vector <Monster*> monsters;
public:
	void addCharacter(Hero *character);
	void addMonster(Monster *monster);
	void showCharacters();
	void showMonsters();
	void saveToFile();
	void loadFromFile();
	void editMonster(int monsterNumber);
	void editHero(int number);
};