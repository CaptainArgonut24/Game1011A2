#include "Enemy.h"

Enemy::Enemy(const std::string& name, const std::string& location) : name(name), location(location), health(100) {}

std::string Enemy::getName() const {
	return name;
}

std::string Enemy::getLocation() const {
	return location;
}

bool Enemy::isDead() const {
	return health <= 0;
}

void Enemy::takeDamage(int damage) {
	health -= damage;
}
