#include "Lucario.h"
#include <iostream>

Lucario::Lucario(std::string name, int healingPower, int defensePoints,
                 int attackPoints)
    : Player(name, 390, 130), attack("Accelerating Stab"), healingPower(30),
      defensePoints(0), attackPoints(0), isLucarioActive(true),
      actionTaken(false) {}

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
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Lucario::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Lucario::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 90;
  setDefensePoints(newDefense);
}

void Lucario::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 50;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << currentAttack << " to "
            << newAttack << "!\n";
}

void Lucario::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
  for (int i = 0; i < 2; i++) {
    if (isLucarioActive == false) {
      isLucarioActive = true;
      break;
    };
    if (isLucarioActive == true) {
      isLucarioActive = false;
      break;
    };
  }
}

void Lucario::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
}

void Lucario::resetActionTaken() { actionTaken = false; }

void Lucario::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
