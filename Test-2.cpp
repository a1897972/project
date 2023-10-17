#include "Charizard.h"
#include <iostream>

int main() {
  // Create an instance of Charizard
  Charizard charizard("Charizard", 30, 0, 0);

  // Display Charizard's initial stats
  std::cout << "Initial Stats:\n";
  charizard.displayStats();

  // Simulate Charizard raising its attack by pressing a button
  std::cout << "Press any key to raise Charizard's attack...\n";
  std::cin.get();
  charizard.raiseAttack();

  // Display Charizard's updated stats after raising attack
  std::cout << "\nUpdated Stats after raising attack:\n";
  std::cout << "Current attack damage: "
            << charizard.getDamage() + charizard.getAttackPoints() << "\n";

  return 0;
}
