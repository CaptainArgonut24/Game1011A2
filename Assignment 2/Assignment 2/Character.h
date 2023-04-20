#pragma once
#include <string>
#include <fstream>

class Character {
public:
    Character(const std::string& name, int health, int damage);
    std::string GetName() const;
    void SetName(const std::string& name);
    int GetHealth() const;
    void SetHealth(int health);
    int GetDamage() const;
    void SetDamage(int damage);
    void Attack(Character& other);
    bool IsDead() const;
    virtual void Action();
    ;

protected:
    std::string name_;
    int health_;
    int damage_;
};
