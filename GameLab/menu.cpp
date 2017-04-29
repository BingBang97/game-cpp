#include "stdafx.h"
#include "menu.h"
#include"Hero.h"
#include"Monster.h"
#include"Map.h"
#include"CharacterEditor.h"
#include<iostream>
#include<vector>
#include<string>


using namespace std;
int menu::Menu()
{
	int choice, wyborPostaci, healthPoints, damage, defence, xp, value;
	int width, length;
	Hero *character;
	Monster *monster;
	CharacterEditor editor;
	Map m;
	string name, type;

	cout << "Witamy w aplikacji do tworzenia i edycji postaci" << endl;
	do {
		cout << "Wybierz zadanie ktore chcesz zrealizowac: " << endl;
		cout << "0 - Wyjscie z aplikacji" << endl;
		cout << "1 - Wczytaj postacie z pliku" << endl; // wczytuje z pliku do wektorow monsters i heroes
		cout << "2 - Stworz nowa postac" << endl; // dodaje do wektora heroes nowego playera
		cout << "3 - Stworz nowego wroga" << endl;  // dodaje do wektora monsters nowego potwora
		cout << "4 - Zapisz do pliku" << endl;  // zapisuje wszystkie postacie i potwory akutalnie w wektorach do pliku
		cout << "5 - Pokaz liste postaci" << endl;
		cout << "6 - Pokaz liste wrogow" << endl;
		cout << "7 - Modyfikacja istniejacej postaci" << endl;
		cout << "8 - Modyfikacja istniejacego wroga" << endl;
		cout << "9 - Generuj mape" << endl;
		cout << "10 - Wyswietl mape" << endl;
		cout << "Opcja: ";
		cin >> choice;

		switch (choice) {
		case 0:
			cout << "Program zostanie wylaczony" << endl;
			system("pause");
			return 0;
			break;

		case 1:
			editor.loadFromFile();
			cout << "Wczytano z pliku!" << endl;
			break;

		case 2:
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

			character = new Hero(name, healthPoints, damage, defence, xp, type);
			editor.addCharacter(character);
			break;
		case 3:
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

			monster = new Monster(name, healthPoints, damage, defence, value, type);
			editor.addMonster(monster);
			break;
		case 4:
			editor.saveToFile();
			cout << "Wykonano zapis do pliku" << endl;
			break;

		case 5:
			editor.showCharacters();
			break;
		case 6:
			editor.showMonsters();
			break;
		case 7:
			editor.showCharacters();
			cout << "Ktora postac chcesz edytowac?\nWybor: ";
			cin >> wyborPostaci;
			editor.editHero(wyborPostaci);
			break;

		case 8:
			editor.showMonsters();
			cout << "Ktorego wroga chcesz edytowac?\nWybor: ";
			cin >> wyborPostaci;
			editor.editMonster(wyborPostaci);
			break;
		case 9:
			cout << "Podaj szerokosc mapy: " << endl;
			cin >> width;
			cout << "Podaj dlugosc mapy: " << endl;
			cin >> length;
			m.generateMap(length,width);
			break;
		case 10:
			m.drawMap(length,width);
			break;
		default:
			cout << "Zly wybor" << endl;
			break;
		}

	} while (choice != 0);
}