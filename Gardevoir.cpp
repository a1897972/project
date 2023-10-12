#include "Gardevoir.h"
#include <iostream>

Gardevoir::Gardevoir(std::string name, int health, int damage,
                     std::string attack, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, health, damage), attack(attack), healingPower(healingPower),
      defensePoints(defensePoints), attackPoints(attackPoints) {}

std::string Gardevoir::getAttack() const { return attack; }

void Gardevoir::setAttack(std::string newAttack) { attack = newAttack; }

int Gardevoir::getHealingPower() const { return healingPower; }

void Gardevoir::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Gardevoir::getDefensePoints() const { return defensePoints; }

void Gardevoir::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Gardevoir::getAttackPoints() const { return attackPoints; }

void Gardevoir::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Gardevoir::swingAttack(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << "!\n";
}

void Gardevoir::heal() {
  // Implement the healing logic here
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Gardevoir::raiseDefense() {
  // Implement the logic to raise defense points here
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 10; // You can adjust the amount as needed
  setDefensePoints(newDefense);
}

void Gardevoir::raiseAttack() {
  // Implement the logic to raise attack points here
  int currentAttack = getAttackPoints();
  int newAttack = currentAttack + 10; // You can adjust the amount as needed
  setAttackPoints(newAttack);
}

void Gardevoir::switchPokemon() {
  // Implement the retreat logic here
  std::cout << getName() << " retreated from the battle! " << std::endl;
}