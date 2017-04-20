#include "stdafx.h"
#include "CharacterEditor.h"
#include"Hero.h"
#include"Monster.h"
#include<iostream>
#include<fstream>

void CharacterEditor::saveToFile()
{
	for (int i = 0; i < heroes.size(); i++) {
		heroes[i]->toString();
	}
	for (int i = 0; i < monsters.size(); i++) {
		monsters[i]->toString();
	}
}

void CharacterEditor::loadFromFile()
{
	int hp, dmg, def, attribute_1;
	string name, type;
	char objectType; // M albo H

	Monster *m = new Monster();
	Hero *h = new Hero();

	fstream plik;
	plik.open("postacie.txt", ios::in);
	if (plik.good()) {
		plik.seekg(0);
		while (!plik.eof()) {
			plik >> name >> hp >> dmg >> def >> attribute_1 >> type >> objectType;
			if (plik.eof())break;
			if (objectType == 'M') {
				m = new Monster(name, hp, dmg, def, attribute_1, type);
				addMonster(m);
			}
			if (objectType == 'H') {
				h = new Hero(name, hp, dmg, def, attribute_1, type);
				addCharacter(h);
			}

		}
	}
	plik.close();
}

void CharacterEditor::editMonster(int monsterNumber)
{
	string name, type;
	int  healthPoints, damage, defence, value;

	cout << "Podaj atrybuty wroga: " << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Hp: ";
	cin >> healthPoints;
	cout << "Dmg: ";
	cin >> damage;
	cout << "Def: ";
	cin >> defence;
	cout << "Type: ";
	cin >> type;
	cout << "RevardValue: ";
	cin >> value;
	monsters[monsterNumber - 1]->setName(name);
	monsters[monsterNumber - 1]->setHealth(healthPoints);
	monsters[monsterNumber - 1]->setDmg(damage);
	monsters[monsterNumber - 1]->setDef(defence);
	monsters[monsterNumber - 1]->setMonsterType(type);
	monsters[monsterNumber - 1]->setRewardValue(value);
}

void CharacterEditor::editHero(int number)
{
	int  healthPoints, damage, defence, xp;
	string name, type;

	cout << "Podaj atrybuty postaci: " << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Hp: ";
	cin >> healthPoints;
	cout << "Dmg: ";
	cin >> damage;
	cout << "Def: ";
	cin >> defence;
	cout << "Type: ";
	cin >> type;
	cout << "Xp: ";
	cin >> xp;
	characters[number - 1]->setName(name);
	characters[number - 1]->setHealth(healthPoints);
	characters[number - 1]->setDmg(damage);
	characters[number - 1]->setDef(defence);
	characters[number - 1]->setType(type);
	characters[number - 1]->setExperience(xp);
}


void CharacterEditor::addCharacter(Hero *character) {
	heroes.push_back(character);
}

void CharacterEditor::addMonster(Monster *monster) {
	monsters.push_back(monster);
}

void CharacterEditor::showCharacters() {
	for (unsigned int i = 0; i < heroes.size(); i++) {
		cout << "HERO NR.: " << i + 1 << endl;
		cout << heroes[i] << endl;
	}
}
void CharacterEditor::showMonsters() {
	for (unsigned int i = 0; i < monsters.size(); i++) {
		cout << "MONSTER NR.: " << i + 1 << endl;
		cout << monsters[i] << endl;
	}
}
