#include "Snorlax.h"
#include <iostream>

Snorlax::Snorlax(std::string name, int healingPower, int defensePoints,
                 int attackPoints)
    : Player(name, 450, 150), attack("Collapse"), healingPower(30),
      defensePoints(defensePoints), attackPoints(attackPoints),
      isSnorlaxActive(true), actionTaken(false) {}

std::string Snorlax::getAttack() const { return attack; }

void Snorlax::setAttack(std::string newAttack) { attack = newAttack; }

int Snorlax::getHealingPower() const { return healingPower; }

void Snorlax::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Snorlax::getDefensePoints() const { return defensePoints; }

void Snorlax::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Snorlax::getAttackPoints() const { return attackPoints; }

void Snorlax::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Snorlax::swingAttack(Player *opponent) {
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Snorlax::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Snorlax::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 50;
  setDefensePoints(newDefense);
}

void Snorlax::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 50;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << increaseAmount << " to "
            << newAttack << "!\n";
}

void Snorlax::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
}

void Snorlax::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Attack Damage: " << getDamage() << std::endl;
}

void Snorlax::resetActionTaken() { actionTaken = false; }

void Snorlax::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
