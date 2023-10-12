#include "Lucario.h"
#include <iostream>

Lucario::Lucario(std::string name, int health, int damage, std::string attack,
                 int healingPower, int defensePoints, int attackPoints)
    : Player(name, health, damage), attack(attack), healingPower(healingPower),
      defensePoints(defensePoints), attackPoints(attackPoints) {}

std::string Lucario::getAttack() const { return attack; }

void Lucario::setAttack(std::string newAttack) { attack = newAttack; }

int Lucario::getHealingPower() const { return healingPower; }

void Lucario::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Lucario::getDefensePoints() const { return defensePoints; }

void Lucario::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Lucario::getAttackPoints() const { return attackPoints; }

void Lucario::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Lucario::swingAttack(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << "!\n";
}

void Lucario::heal() {
  // Implement the healing logic here
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Lucario::raiseDefense() {
  // Implement the logic to raise defense points here
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 10; // You can adjust the amount as needed
  setDefensePoints(newDefense);
}

void Lucario::raiseAttack() {
  // Implement the logic to raise attack points here
  int currentAttack = getAttackPoints();
  int newAttack = currentAttack + 10; // You can adjust the amount as needed
  setAttackPoints(newAttack);
}

void Lucario::switchPokemon() {
  // Implement the retreat logic here
  std::cout << getName() << " retreated from the battle! " << std::endl;
}