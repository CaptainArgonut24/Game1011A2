#pragma once
#include <string>

#include "Characters.h"

using namespace std;

struct Player : Characters
{
	friend struct Enemy;
	Enemy* opponent = nullptr;

	std::string pName;
	int pHealth = 100;
	int pDamage = 25;

	void Attack() override;
};
