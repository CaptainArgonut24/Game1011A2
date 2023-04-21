//#include "Data.h"
//
//#include <fstream>
//#include <iostream>
//
//void Data::LoadDialogue()
//{
//	fstream file;
//	string text;
//
//	file.open("Story.txt", ios::in);
//
//	if (file.is_open())
//	{
//		while (!file.fail())
//		{
//			getline(file, text);
//			cout << text << endl;
//		}
//
//		file.close();
//	}
//
//	else
//	{
//		cout << "Uh oh! There was a problem opening this file..." << endl;
//	}
//}
//
//void Data::SavePlayerData(Player& player)
//{
//	ofstream file("player.dat", ios::binary);
//
//	if (!file.is_open())
//	{
//		cout << "Uh oh! There was a problem opening this file..." << endl;
//		return;
//	}
//
//	else
//	{
//		file.write(reinterpret_cast<const char*>(&player), sizeof(Player));
//		file.close();
//	}
//}
//
//void Data::SaveEnemyData(Enemy& enemy)
//{
//	ofstream file("enemy.dat", ios::binary);
//
//	if (!file.is_open())
//	{
//		cout << "Uh oh! There was a problem opening this file..." << endl;
//		return;
//	}
//
//	else
//	{
//		file.write(reinterpret_cast<const char*>(&enemy), sizeof(Enemy));
//		file.close();
//	}
//}
//
//void Data::CommandParse(string& command, Player& player, Enemy& enemy, Rooms*& room) {
//
//	if (command == "help") 
//	{
//		cout << "List of available commands:" << endl;
//		cout << " - help: Displays this list of commands." << endl;
//		cout << " - quit: Exits the game." << endl;
//		cout << " - save: Saves the current progress." << endl;
//		cout << " - load: Loads a previously saved game." << endl;
//		//cout << " - attack: Attack" << endl;
//	}
//	else if (command == "quit") 
//	{
//		cout << "Goodbye!" << endl;
//		exit(0);
//	}
//	else if (command == "save") {
//		SavePlayerData(player);
//		SaveEnemyData(enemy);
//		cout << "Saving progress..." << endl;
//	}
//	else if (command == "load") 
//	{
//		// Load player and enemy data from files, assuming they exist
//		ifstream playerFile("player.dat", ios::binary);
//		if (playerFile.is_open()) 
//		{
//			playerFile.read(reinterpret_cast<char*>(&player), sizeof(Player));
//			playerFile.close();
//		}
//
//		ifstream enemyFile("enemy.dat", ios::binary);
//		if (enemyFile.is_open()) 
//		{
//			enemyFile.read(reinterpret_cast<char*>(&enemy), sizeof(Enemy));
//			enemyFile.close();
//		}
//		cout << "Loaded progress successfully!" << endl;
//	}
//	else 
//	{
//		// Handle unknown command
//		cout << "Unknown command. Type \"help\" to see the list of commands." << endl;
//	}
//}

#include <fstream>
#include <iostream>
#include <string>
#include "Enemy.h"
#include "Player.h"

using namespace std;
#include "Data.h"

void Data::LoadDialogue() {
    fstream file;
    string text;

    file.open("Story.txt", ios::in);

    if (file.is_open()) {
        while (!file.fail()) {
            getline(file, text);
            cout << text << endl;
        }

        file.close();
    }
    else {
        cout << "Uh oh! There was a problem opening this file..." << endl;
    }
}

void Data::SavePlayerData(Player& player) {
    ofstream file("player.dat", ios::binary);

    if (!file.is_open()) {
        cout << "Uh oh! There was a problem opening this file..." << endl;
        return;
    }
    else {
        file.write(reinterpret_cast<const char*>(&player), sizeof(Player));
        file.close();
    }
}

void Data::SaveEnemyData(Enemy& enemy) {
    ofstream file("enemy.dat", ios::binary);

    if (!file.is_open()) {
        cout << "Uh oh! There was a problem opening this file..." << endl;
        return;
    }
    else {
        file.write(reinterpret_cast<const char*>(&enemy), sizeof(Enemy));
        file.close();
    }
}

void Data::CommandParse(string& command) {
    if (command == "help") {
        // Handle "help" command
        cout << "List of available commands:" << endl;
        cout << " - help: Displays this list of commands." << endl;
        cout << " - quit: Exits the game." << endl;
        cout << " - save: Saves the current progress." << endl;
        cout << " - load: Loads a previously saved game." << endl;
    }
    else if (command == "quit") {
        // Handle "quit" command
        cout << "Goodbye!" << endl;
        exit(0);
    }
    else if (command == "save") {
        // Handle "save" command
        SavePlayerData(player);
        SaveEnemyData(enemy);
        cout << "Saved progress successfully!" << endl;
    }
    else if (command == "load") {
        // Handle "load" command
        ifstream playerFile("player.dat", ios::binary);

        if (playerFile.is_open()) {
            playerFile.read(reinterpret_cast<char*>(&player), sizeof(Player));
            playerFile.close();
        }

        ifstream enemyFile("enemy.dat", ios::binary);

        if (enemyFile.is_open()) {
            enemyFile.read(reinterpret_cast<char*>(&enemy), sizeof(Enemy));
            enemyFile.close();
        }

        cout << "Loaded progress successfully!" << endl;
    }
    else {
        // Handle unknown command
        cout << "Unknown command. Type \"help\" to see the list of commands." << endl;
    }
}
;