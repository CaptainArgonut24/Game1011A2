#include "Player.h"
#include "Enemy.h"

#include <fstream>
#include <iostream>
#include <cassert>

using namespace std;

void Player::Attack()
{
	opponent->eHealth -= pDamage;
	cout << pName << " hit " << opponent->eName << " for " << pDamage << " damage!" << endl;
}

void Player::Serialize(Player& player, size_t filePosition, std::fstream& file)
{
	assert(file.good());
	file.seekp(filePosition);
	file.write(reinterpret_cast<char*>(&player), sizeof Player);
}

void Player::Deserialize(Player& player, size_t filePosition, std::fstream& file)
{
	assert(file.good());
	file.seekg(filePosition);
	file.read(reinterpret_cast<char*>(&player), sizeof Player);
}
