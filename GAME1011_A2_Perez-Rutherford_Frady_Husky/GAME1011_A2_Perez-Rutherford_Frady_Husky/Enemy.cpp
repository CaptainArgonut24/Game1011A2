#include "Enemy.h"
#include "Player.h"

#include <iostream>

using namespace std;

void Enemy::Attack()
{
	opponent->pHealth -= eDamage;
	cout << eName << " hit " << opponent->pName << " for " << eDamage << " damage!" << endl;
}
