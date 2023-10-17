#include "Card.h"

Card::Card(std::string name, int health, int attack)
    : name(name), health(health), attack(attack) {}

std::string Card::getName() const {
    return name;
}

int Card::getHealth() const {
    return health;
}

int Card::getAttack() const {
    return attack;
}
