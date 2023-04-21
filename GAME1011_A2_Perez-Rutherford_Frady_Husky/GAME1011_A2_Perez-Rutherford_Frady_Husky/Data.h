//#pragma once
//
//#include "Player.h"
//#include "Enemy.h"
//#include "Rooms.h"
//
//using namespace std;
//
//class Data
//{
//public:
//	void LoadDialogue();
//
//	void SavePlayerData(Player& player);
//	void SaveEnemyData(Enemy& enemy);
//
//	void CommandParse(string& command, Player& player, Enemy& enemy, Rooms*& room);
//};

#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include "Enemy.h"
#include "Player.h"

using namespace std;

class Data {
public:
	Data() : player(Player()), enemy(Enemy()) {}

	void LoadDialogue();

	void SavePlayerData(Player& player);

	void SaveEnemyData(Enemy& enemy);

	void CommandParse(string& command);

private:
	Player player;
	Enemy enemy;

};

