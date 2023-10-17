#include "Charizard.h"
#include <iostream>

Charizard::Charizard(std::string name, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, 510, 150), attack("Royal Blaze"), healingPower(30),
      defensePoints(0), attackPoints(0), isCharizardActive(true),
      actionTaken(false) {}

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
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Charizard::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Charizard::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 40;
  setDefensePoints(newDefense);
}

void Charizard::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 50;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << increaseAmount << " to "
            << newAttack << "!\n";
}

void Charizard::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
}

void Charizard::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
  std::cout << "Current Defence Points: " << getDamage() << std::endl;
}

void Charizard::resetActionTaken() { actionTaken = false; }

void Charizard::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
