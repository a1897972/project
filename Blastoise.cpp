#include "Blastoise.h"
#include <iostream>

Blastoise::Blastoise(std::string name, int healingPower, int defensePoints,
                     int attackPoints)
    : Player(name, 480, 150), attack("Hydro Tackle"), healingPower(30),
      defensePoints(0), attackPoints(0), isBlastoiseActive(true),
      actionTaken(false) {}

std::string Blastoise::getAttack() const { return attack; }

void Blastoise::setAttack(std::string newAttack) { attack = newAttack; }

int Blastoise::getHealingPower() const { return healingPower; }

void Blastoise::setHealingPower(int newHealingPower) {
  healingPower = newHealingPower;
}

int Blastoise::getDefensePoints() const { return defensePoints; }

void Blastoise::setDefensePoints(int newDefensePoints) {
  defensePoints = newDefensePoints;
}

int Blastoise::getAttackPoints() const { return attackPoints; }

void Blastoise::setAttackPoints(int newAttackPoints) {
  attackPoints = newAttackPoints;
}

void Blastoise::swingAttack(Player *opponent) {
  int damage = getDamage();
  opponent->takeDamage(damage);
  std::cout << getName() << " used " << attack << " at " << opponent->getName()
            << " causing " << damage << " damage!\n";
}

void Blastoise::heal() {
  int currentHealth = getHealth();
  int newHealth = currentHealth + getHealingPower();
  setHealth(newHealth);
}

void Blastoise::raiseDefense() {
  int currentDefense = getDefensePoints();
  int newDefense = currentDefense + 60;
  setDefensePoints(newDefense);
}

void Blastoise::raiseAttack() {
  int currentAttack = getAttackPoints();
  int increaseAmount = 40;
  int newAttack = currentAttack + increaseAmount;
  setAttackPoints(newAttack);
  std::cout << "Attack points raised by " << increaseAmount << " to "
            << newAttack << "!\n";
}

void Blastoise::switchPokemon() {
  std::cout << getName() << " switched to Pokemon!" << std::endl;
}

void Blastoise::displayStats() {
  std::cout << "Current Pokemon: " << getName() << std::endl;
  std::cout << "Current Health Points (HP): " << getHealth() << std::endl;
  std::cout << "Current Attack Damage: " << getDamage() << std::endl;
  std::cout << "Current Defence Points: " << getDamage() << std::endl;
}

void Blastoise::resetActionTaken() { actionTaken = false; }

void Blastoise::performTurnAction() {
  raiseAttack();
  actionTaken = true;
}
