#include "Venusaur.h"
#include <iostream>

Venusaur::Venusaur(std::string name, int healingPower, int defensePoints,
                   int attackPoints)
    : Player(name, 540, 130), attack("Solar Beam"), healingPower(30),
      defensePoints(defensePoints), attackPoints(attackPoints),
      isVenusaurActive(true), actionTaken(false) {}

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
  std::cout << "Attack points raised by " << increaseAmount << " to "
            << newAttack << "!\n";
}

void Venusaur::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
}

void Venusaur::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Attack Damage: " << getDamage() << std::endl;
}

void Venusaur::resetActionTaken() { actionTaken = false; }

void Venusaur::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
