#include "Charizard.h"
#include <iostream>

Charizard::Charizard(std::string name, int health, int damage,
                     std::string attack, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, health, damage), attack(attack), healingPower(healingPower),
      defensePoints(defensePoints), attackPoints(attackPoints) {}

std::string Charizard::getAttack() const { return attack; }

void Charizard::setAttack(std::string newAttack) { attack = newAttack; }

int Charizard::getHealingPower() const { return healingPower; }

void Charizard::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Charizard::getDefensePoints() const { return defensePoints; }

void Charizard::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Charizard::getAttackPoints() const { return attackPoints; }

void Charizard::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Charizard::swingAttack(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << "!\n";
}

void Charizard::heal() {
  // Implement the healing logic here
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Charizard::raiseDefense() {
  // Implement the logic to raise defense points here
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 10; // You can adjust the amount as needed
  setDefensePoints(newDefense);
}

void Charizard::raiseAttack() {
  // Implement the logic to raise attack points here
  int currentAttack = getAttackPoints();
  int newAttack = currentAttack + 10; // You can adjust the amount as needed
  setAttackPoints(newAttack);
}

void Charizard::switchPokemon() {
  // Implement the retreat logic here
  std::cout << getName() << " retreated from the battle! " << std::endl;
}