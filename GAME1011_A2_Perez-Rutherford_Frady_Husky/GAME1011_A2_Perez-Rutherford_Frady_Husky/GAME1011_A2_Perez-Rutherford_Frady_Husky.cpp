#include <iostream>
#include <fstream>
#include <string>
#include <memory>

using namespace std;

void StoryData()
{
	// Story Data
	fstream file;
	string text;

	file.open("Story.txt");

	if (!file)
	{
		ofstream out("Story.txt");
		cout << "File not found! Creating new file..." << endl;
	}

	while (file >> text)
	{
		cout << text << endl;
	}

	file.close();
}
//
//void savePlayerData(Player player)
//{
//	fstream file;
//	string text;
//
//	file.open("player.dat", ios::in | ios::binary);
//
//	if (!file) {
//		ofstream playerFile("player.dat");
//
//		cout << "The file was not found." << endl;
//		cout << "Now creating player.dat" << endl;
//	}
//
//	while (file >> text)
//	{
//		cout << text << endl;
//	}
//
//	file.clear();
//
//	file.close();
//}
//
//Player loadPlayerData(Player player, string& file_name)
//{
//	string name;
//	int health, damage;
//
//	ifstream playerData(file_name);
//
//	if (playerData)
//	{
//		playerData >> name >> health >> damage;
//
//		player.SetName(name);
//		player.SetHealth(health);
//		player.SetDamage(damage);
//
//		playerData.close();
//
//		cout << "Player data loaded!" << endl;
//	}
//
//	else
//	{
//		cout << "Uh oh! Error opening file..." << endl;
//	}
//}
//
//void saveEnemyData(Enemy enemy, string& file_name)
//{
//	fstream file;
//	file.open(file_name);
//
//	if (!file)
//	{
//		ofstream enemyData(file_name);
//
//		enemyData << enemy.eName << endl;
//		enemyData << enemy.eHealth << endl;
//		enemyData << enemy.eDamage << endl;
//		
//		enemyData.close();
//
//		cout << "Enemy data saved!" << endl;
//	}
//
//	else if (file)
//	{
//		file.clear();
//
//		file << enemy.eName << endl;
//		file << enemy.eHealth << endl;
//		file << enemy.eDamage << endl;
//
//		file.close();
//
//		cout << "Player data saved!" << endl;
//	}
//
//	else
//	{
//		cout << "Uh oh! Error opening file..." << endl;
//	}
//}
//
//Enemy loadEnemyData(Enemy enemy, string& file_name)
//{
//	string name;
//	int health, damage;
//
//	ifstream enemyData(file_name);
//
//	if (enemyData)
//	{
//		enemyData >> name >> health >> damage;
//
//		enemy.SetName(name);
//		enemy.SetHealth(health);
//		enemy.SetDamage(damage);
//
//		enemyData.close();
//
//		cout << "Enemy data loaded!" << endl;
//	}
//
//	else
//	{
//		cout << "Uh oh! Error opening file..." << endl;
//	}
//}

void loadDialog(int num, string file_name)
{
	ifstream dialog(file_name);
	string text;
	int currentLine = 0;

	if (!dialog.fail())
	{
		while (!dialog.eof())
		{
			currentLine++;
			getline(dialog, text);

			if (currentLine == num)
			{
				break;
			}
		}

		cout << text << endl;
		dialog.close();
	}

	else
	{
		cout << "Uh oh! Error opening file..." << endl;
	}
}

int main()
{
    
	return 0;
}
