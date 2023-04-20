#pragma once
#include <string>

#include "Characters.h"

using namespace std;

struct Enemy : Characters
{
	friend struct Player;
	Player* opponent = nullptr;

	std::string eName;
	int eHealth = 100;
	int eDamage = 10;

	void Attack() override;

	void Serialize(Enemy& enemy, size_t filePosition, std::fstream& file);
	void Deserialize(Enemy& enemy, size_t filePosition, std::fstream& file);
};
