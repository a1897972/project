#include "Gengar.h"
#include <iostream>

Gengar::Gengar(std::string name, int healingPower, int defensePoints,
               int attackPoints)
    : Player(name, 390, 70), attack("Fade to Black"), healingPower(30),
      defensePoints(0), attackPoints(0), isGengarActive(true),
      actionTaken(false) {}

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
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Gengar::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Gengar::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 80;
  setDefensePoints(newDefense);
}

void Gengar::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 70;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << increaseAmount << " to "
            << newAttack << "!\n";
}

void Gengar::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
}

void Gengar::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
  std::cout << "Current Defence Points: " << getDamage() << std::endl;
}

void Gengar::resetActionTaken() { actionTaken = false; }

void Gengar::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
