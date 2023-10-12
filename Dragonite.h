#ifndef DRAGONITE_H
#define DRAGONITE_H

#include "Player1.h"
#include <string>

class Dragonite : public Player {
private:
  std::string attack;
  int healingPower;
  int defensePoints;
  int attackPoints;
  bool isDragoniteActive; // New member variable to track active Pokemon

public:
  Dragonite(std::string name, int health, int damage, std::string attack,
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

  // New member function to check if Dragonite is active
  bool isDragoniteActivePokemon() const;
};

#endif
