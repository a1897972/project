#include "Gardevoir.h"
#include <iostream>

Gardevoir::Gardevoir(std::string name, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, 450, 120), attack("Magical Shot"), healingPower(30),
      defensePoints(0), attackPoints(0), isGardevoirActive(true),
      actionTaken(false) {}

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
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Gardevoir::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Gardevoir::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 70;
  setDefensePoints(newDefense);
}

void Gardevoir::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 50;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << currentAttack << " to "
            << newAttack << "!\n";
}

void Gardevoir::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
  for (int i = 0; i < 2; i++) {
    if (isGardevoirActive == false) {
      isGardevoirActive = true;
      break;
    };
    if (isGardevoirActive == true) {
      isGardevoirActive = false;
      break;
    };
  }
}

void Gardevoir::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
}
void Gardevoir::resetActionTaken() { actionTaken = false; }

void Gardevoir::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
