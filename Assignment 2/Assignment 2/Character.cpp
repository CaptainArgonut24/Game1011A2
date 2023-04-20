//#include "character.h"
//
//Character::Character(const std::string& name, int health, int damage)
//    : name_(name), health_(health), damage_(damage) {}
//
//std::string Character::GetName() const {
//    return name_;
//}
//
//void Character::SetName(const std::string& name) {
//    name_ = name;
//}
//
//int Character::GetHealth() const {
//    return health_;
//}
//
//void Character::SetHealth(int health) {
//    health_ = health;
//}
//
//int Character::GetDamage() const {
//    return damage_;
//}
//
//void Character::SetDamage(int damage) {
//    damage_ = damage;
//}
//
//void Character::Attack(Character& other) {
//    other.SetHealth(other.GetHealth() - damage_);
//}
//
//bool Character::IsDead() const {
//    return health_ <= 0;
//}
