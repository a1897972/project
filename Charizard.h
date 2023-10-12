#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "Player1.h"
#include <string>

class Charizard : public Player {
private:
  std::string attack;
  int healingPower;
  int defensePoints;
  int attackPoints;
  bool isCharizardActive; // New member variable to track active Pokemon

public:
  Charizard(std::string name, int health, int damage, std::string attack,
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

  // New member function to check if Charizard is active
  bool isCharizardActivePokemon() const;
};

#endif
