#include "Enemy.h"
#include "Player.h"

#include <fstream>
#include <iostream>
#include <cassert>

using namespace std;

void Enemy::Attack()
{
	opponent->pHealth -= eDamage;
	cout << eName << " hit " << opponent->pName << " for " << eDamage << " damage!" << endl;
}

void Enemy::Serialize(Enemy& enemy, size_t filePosition, std::fstream& file)
{
	assert(file.good());
	file.seekp(filePosition);
	file.write(reinterpret_cast<char*>(&enemy), sizeof Enemy);
}

void Enemy::Deserialize(Enemy& enemy, size_t filePosition, std::fstream& file)
{
	assert(file.good());
	file.seekg(filePosition);
	file.read(reinterpret_cast<char*>(&enemy), sizeof Enemy);
}
