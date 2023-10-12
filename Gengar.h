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

public:
  Gengar(std::string name, int health, int damage, std::string attack,
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

  // New member function to check if Gengar is active
  bool isGengarActivePokemon() const;
};

#endif
