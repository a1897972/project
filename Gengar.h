#ifndef GENGAR_H
#define GENGAR_H

#include "Player1.h"
#include <string>

class Gengar : public Player {
private:
  std::string attack;
  int healingPower;
  int defensePoints;
  int attackPoints;
  bool isGengarActive; // New member variable to track active Pokemon
  bool actionTaken; // New member variable to track whether an action has been
                    // taken on the turn

public:
  Gengar(std::string name, int healingPower, int defensePoints,
         int attackPoints);

  // Getters and setters
  std::string getAttack() const;
  void setAttack(std::string newAttack);

  int getHealingPower() const;
  void setHealingPower(int newHealingPower);

  int getDefensePoints() const;
  void setDefensePoints(int newDefensePoints);

  int getAttackPoints() const;
  void setAttackPoints(int newAttackPoints);

  void swingAttack(Player *opponent);
  void heal();
  void raiseDefense();
  void raiseAttack();
  void switchPokemon();
  void displayStats(); // New method to display Pokemon stats

  // New methods for turn-based actions
  void resetActionTaken();
  void performTurnAction();

  // New member function to check if Gengar is the active Pokemon
  bool isGengarActivePokemon() { return isGengarActive; };
};

#endif
