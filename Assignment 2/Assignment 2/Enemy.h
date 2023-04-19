#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy {
public:
	Enemy(const std::string& name, const std::string& location);

	std::string getName() const;
	std::string getLocation() const;
	bool isDead() const;
	void takeDamage(int damage);

private:
	std::string name;
	std::string location;
	int health;
};

#endif // ENEMY_H
