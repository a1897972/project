#include "Dragonite.h"
#include <iostream>

Dragonite::Dragonite(std::string name, int health, int damage,
                     std::string attack, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, health, damage), attack(attack), healingPower(healingPower),
      defensePoints(defensePoints), attackPoints(attackPoints) {}

std::string Dragonite::getAttack() const { return attack; }

void Dragonite::setAttack(std::string newAttack) { attack = newAttack; }

int Dragonite::getHealingPower() const { return healingPower; }

void Dragonite::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Dragonite::getDefensePoints() const { return defensePoints; }

void Dragonite::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Dragonite::getAttackPoints() const { return attackPoints; }

void Dragonite::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Dragonite::swingAttack(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << "!\n";
}

void Dragonite::heal() {
  // Implement the healing logic here
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Dragonite::raiseDefense() {
  // Implement the logic to raise defense points here
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 10; // You can adjust the amount as needed
  setDefensePoints(newDefense);
}

void Dragonite::raiseAttack() {
  // Implement the logic to raise attack points here
  int currentAttack = getAttackPoints();
  int newAttack = currentAttack + 10; // You can adjust the amount as needed
  setAttackPoints(newAttack);
}

void Dragonite::switchPokemon() {
  // Implement the retreat logic here
  std::cout << getName() << " retreated from the battle! " << std::endl;
}