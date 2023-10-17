#include "Venusaur.h"
#include <iostream>

Venusaur::Venusaur(std::string name, int healingPower, int defensePoints,
                   int attackPoints)
    : Player(name, 540, 130), attack("Solar Beam"), healingPower(30),
      defensePoints(0), attackPoints(0), isVenusaurActive(true),
      actionTaken(false) {}

std::string Venusaur::getAttack() const { return attack; }

void Venusaur::setAttack(std::string newAttack) { attack = newAttack; }

int Venusaur::getHealingPower() const { return healingPower; }

void Venusaur::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Venusaur::getDefensePoints() const { return defensePoints; }

void Venusaur::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Venusaur::getAttackPoints() const { return attackPoints; }

void Venusaur::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Venusaur::swingAttack(Player *opponent) {
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Venusaur::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Venusaur::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 30;
  setDefensePoints(newDefense);
}

void Venusaur::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 40;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << currentAttack << " to "
            << newAttack << "!\n";
}

void Venusaur::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
  for (int i = 0; i < 2; i++) {
    if (isVenusaurActive == false) {
      isVenusaurActive = true;
      break;
    };
    if (isVenusaurActive == true) {
      isVenusaurActive = false;
      break;
    };
  }
}

void Venusaur::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
}

void Venusaur::resetActionTaken() { actionTaken = false; }

void Venusaur::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
