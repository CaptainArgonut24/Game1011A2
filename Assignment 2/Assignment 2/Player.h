#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
	Player(const std::string& name);

	std::string getName() const;
	bool isDead() const;
	void takeDamage(int damage);

private:
	std::string name;
	int health;
};

#endif // PLAYER_H
