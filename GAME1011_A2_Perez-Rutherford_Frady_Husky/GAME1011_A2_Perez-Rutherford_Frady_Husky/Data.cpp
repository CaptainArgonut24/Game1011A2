#include "Data.h"

#include <fstream>
#include <iostream>

void Data::LoadDialogue()
{
	fstream file;
	string text;

	file.open("Story.txt", ios::in);

	if (file.is_open())
	{
		while (!file.fail())
		{
			getline(file, text);
			cout << text << endl;
		}

		file.close();
	}

	else
	{
		cout << "Uh oh! There was a problem opening this file..." << endl;
	}
}

void Data::SavePlayerData(Player& player)
{
	ofstream file("player.dat", ios::binary);

	if (!file.is_open())
	{
		cout << "Uh oh! There was a problem opening this file..." << endl;
		return;
	}

	else
	{
		file.write(reinterpret_cast<const char*>(&player), sizeof(Player));
		file.close();
	}
}

void Data::SaveEnemyData(Enemy& enemy)
{
	ofstream file("enemy.dat", ios::binary);

	if (!file.is_open())
	{
		cout << "Uh oh! There was a problem opening this file..." << endl;
		return;
	}

	else
	{
		file.write(reinterpret_cast<const char*>(&enemy), sizeof(Enemy));
		file.close();
	}
}
