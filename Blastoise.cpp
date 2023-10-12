#include "Blastoise.h"
#include <iostream>

Blastoise::Blastoise(std::string name, int health, int damage,
                     std::string attack, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, health, damage), attack(attack), healingPower(healingPower),
      defensePoints(defensePoints), attackPoints(attackPoints) {}

std::string Blastoise::getAttack() const { return attack; }

void Blastoise::setAttack(std::string newAttack) { attack = newAttack; }

int Blastoise::getHealingPower() const { return healingPower; }

void Blastoise::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Blastoise::getDefensePoints() const { return defensePoints; }

void Blastoise::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Blastoise::getAttackPoints() const { return attackPoints; }

void Blastoise::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Blastoise::swingAttack(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << "!\n";
}

void Blastoise::heal() {
  // Implement the healing logic here
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Blastoise::raiseDefense() {
  // Implement the logic to raise defense points here
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 10; // You can adjust the amount as needed
  setDefensePoints(newDefense);
}

void Blastoise::raiseAttack() {
  // Implement the logic to raise attack points here
  int currentAttack = getAttackPoints();
  int newAttack = currentAttack + 10; // You can adjust the amount as needed
  setAttackPoints(newAttack);
}

void Blastoise::switchPokemon() {
  // Implement the retreat logic here
  std::cout << getName() << " retreated from the battle! " << std::endl;
}