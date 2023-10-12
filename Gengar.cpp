#include "Gengar.h"
#include <iostream>

Gengar::Gengar(std::string name, int health, int damage, std::string attack,
               int healingPower, int defensePoints, int attackPoints)
    : Player(name, health, damage), attack(attack), healingPower(healingPower),
      defensePoints(defensePoints), attackPoints(attackPoints) {}

std::string Gengar::getAttack() const { return attack; }

void Gengar::setAttack(std::string newAttack) { attack = newAttack; }

int Gengar::getHealingPower() const { return healingPower; }

void Gengar::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Gengar::getDefensePoints() const { return defensePoints; }

void Gengar::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Gengar::getAttackPoints() const { return attackPoints; }

void Gengar::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Gengar::swingAttack(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << "!\n";
}

void Gengar::heal() {
  // Implement the healing logic here
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Gengar::raiseDefense() {
  // Implement the logic to raise defense points here
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 10; // You can adjust the amount as needed
  setDefensePoints(newDefense);
}

void Gengar::raiseAttack() {
  // Implement the logic to raise attack points here
  int currentAttack = getAttackPoints();
  int newAttack = currentAttack + 10; // You can adjust the amount as needed
  setAttackPoints(newAttack);
}

void Gengar::switchPokemon() {
  // Implement the retreat logic here
  std::cout << getName() << " retreated from the battle! " << std::endl;
}