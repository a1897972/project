#include "Metagross.h"
#include <iostream>

Metagross::Metagross(std::string name, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, 450, 160), attack("Iron Cannon"), healingPower(30),
      defensePoints(defensePoints), attackPoints(attackPoints),
      isMetagrossActive(true), actionTaken(false) {}

std::string Metagross::getAttack() const { return attack; }

void Metagross::setAttack(std::string newAttack) { attack = newAttack; }

int Metagross::getHealingPower() const { return healingPower; }

void Metagross::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Metagross::getDefensePoints() const { return defensePoints; }

void Metagross::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Metagross::getAttackPoints() const { return attackPoints; }

void Metagross::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Metagross::swingAttack(Player *opponent) {
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Metagross::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Metagross::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 60;
  setDefensePoints(newDefense);
}

void Metagross::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 40;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << increaseAmount << " to "
            << newAttack << "!\n";
}

void Metagross::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
}

void Metagross::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Attack Damage: " << getDamage() << std::endl;
}

void Metagross::resetActionTaken() { actionTaken = false; }

void Metagross::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
