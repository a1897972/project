#include "Gengar.h"
#include <iostream>

int main() {
  // Create an instance of Gengar
  Gengar Gengar("Gengar", 30, 0, 0);

  // Display Gengar's initial stats
  std::cout << "Initial Stats:\n";
  Gengar.displayStats();

  // Simulate Gengar raising its attack by pressing a button
  std::cout << "Press any key to raise Gengar's attack...\n";
  std::cin.get();
  Gengar.raiseAttack();

  // Display Gengar's updated stats after raising attack
  std::cout << "\nUpdated Stats after raising attack:\n";
  std::cout << "Current attack damage: "
            << Gengar.getDamage() + Gengar.getAttackPoints() << "\n";

  return 0;
}
