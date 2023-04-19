#include "Player.h"

Player::Player(const std::string& name) : name(name), health(100) {}

std::string Player::getName() const {
	return name;
}

bool Player::isDead() const {
	return health <= 0;
}

void Player::takeDamage(int damage) {
	health -= damage;
}
