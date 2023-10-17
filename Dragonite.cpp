#include "Dragonite.h"
#include <iostream>

Dragonite::Dragonite(std::string name, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, 480, 180), attack("Energy Hurricane"), healingPower(30),
      defensePoints(0), attackPoints(0), isDragoniteActive(true),
      actionTaken(false) {}

std::string Dragonite::getAttack() const { return attack; }

void Dragonite::setAttack(std::string newAttack) { attack = newAttack; }

int Dragonite::getHealingPower() const { return healingPower; }

void Dragonite::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Dragonite::getDefensePoints() const { return defensePoints; }

void Dragonite::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Dragonite::getAttackPoints() const { return attackPoints; }

void Dragonite::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Dragonite::swingAttack(Player *opponent) {
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Dragonite::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Dragonite::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 60;
  setDefensePoints(newDefense);
}

void Dragonite::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 40;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << currentAttack << " to "
            << newAttack << "!\n";
}

void Dragonite::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
  for (int i = 0; i < 2; i++) {
    if (isDragoniteActive == false) {
      isDragoniteActive = true;
      break;
    };
    if (isDragoniteActive == true) {
      isDragoniteActive = false;
      break;
    };
  }
}

void Dragonite::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
}

void Dragonite::resetActionTaken() { actionTaken = false; }

void Dragonite::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
