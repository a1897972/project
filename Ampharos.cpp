#include "Ampharos.h"
#include <iostream>

Ampharos::Ampharos(std::string name, int healingPower, int defensePoints,
                   int attackPoints)
    : Player(name, 420, 120), attack("Gigavolt"), healingPower(30),
      defensePoints(0), attackPoints(0), isAmpharosActive(true),
      actionTaken(false) {}

std::string Ampharos::getAttack() const { return attack; }

void Ampharos::setAttack(std::string newAttack) { attack = newAttack; }

int Ampharos::getHealingPower() const { return healingPower; }

void Ampharos::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Ampharos::getDefensePoints() const { return defensePoints; }

void Ampharos::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Ampharos::getAttackPoints() const { return attackPoints; }

void Ampharos::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Ampharos::swingAttack(Player *opponent) {
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Ampharos::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Ampharos::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 60;
  setDefensePoints(newDefense);
}

void Ampharos::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 60;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << currentAttack << " to "
            << newAttack << "!\n";
}

void Ampharos::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
  for (int i = 0; i < 2; i++) {
    if (isAmpharosActive == false) {
      isAmpharosActive = true;
      break;
    };
    if (isAmpharosActive == true) {
      isAmpharosActive = false;
      break;
    };
  }
}

void Ampharos::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
}

void Ampharos::resetActionTaken() { actionTaken = false; }

void Ampharos::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
