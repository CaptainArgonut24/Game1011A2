#pragma once

#include "Player.h"
#include "Enemy.h"

using namespace std;

class Data
{
public:
	void LoadDialogue();

	void SavePlayerData(Player& player);
	void SaveEnemyData(Enemy& enemy);

	void CommandParse(string& command);
};
