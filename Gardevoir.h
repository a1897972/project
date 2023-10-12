#ifndef GARDEVOIR_H
#define GARDEVOIR_H

#include "Player1.h"
#include <string>

class Gardevoir : public Player {
private:
  std::string attack;
  int healingPower;
  int defensePoints;
  int attackPoints;
  bool isGardevoirActive; // New member variable to track active Pokemon

public:
  Gardevoir(std::string name, int health, int damage, std::string attack,
            int healingPower, int defensePoints, int attackPoints);

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

  // New member function to check if Gardevoir is active
  bool isGardevoirActivePokemon() const;
};

#endif
