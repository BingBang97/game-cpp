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

		plik >> name >> hp >> dmg >> def >> attribute_1 >> type >> objectType;

		if (objectType == 'M') {
			m = new Monster(name, hp, dmg, def, attribute_1, type);
			addMonster(m);

			if (objectType == 'H') {
				h = new Hero(name, hp, dmg, def, attribute_1, type);
				addCharacter(h);
			}
		}

	}
	plik.close();
}

void CharacterEditor::editMonster(int monsterNumber, Monster * monster)
{
	monsters[monsterNumber] = new Monster();
	addMonster(monster);
}

void CharacterEditor::editHero(int number, Hero * hero)
{
	heroes[number] = new Hero();
	heroes.push_back(hero);
}


void CharacterEditor::addCharacter(Hero *character) {
	heroes.push_back(character);
}

void CharacterEditor::addMonster(Monster *monster) {
	monsters.push_back(monster);
}

void CharacterEditor::showCharacters() {
	for (int i = 0; i < heroes.size(); i++) {
		cout << heroes[i] << endl;
	}
}
void CharacterEditor::showMonsters() {
	for (int i = 0; i < monsters.size(); i++) {
		cout << monsters[i] << endl;
	}
}
