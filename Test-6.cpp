#include "Blastoise.h"
#include <iostream>

int main() {
  // Create an instance of Blastoise
  Blastoise Blastoise("Blastoise", 30, 0, 0);

  // Display Blastoise's initial stats
  std::cout << "Initial Stats:\n";
  Blastoise.displayStats();

  // Simulate Blastoise raising its attack by pressing a button
  std::cout << "Press any key to raise Blastoise's attack...\n";
  std::cin.get();
  Blastoise.raiseAttack();

  // Display Blastoise's updated stats after raising attack
  std::cout << "\nUpdated Stats after raising attack:\n";
  std::cout << "Current attack damage: "
            << Blastoise.getDamage() + Blastoise.getAttackPoints() << "\n";

  return 0;
}
