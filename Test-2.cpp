#include "Charizard.h"
#include <iostream>

int main() {
  Charizard charizard("Charizard", 30, 40, 50);

  // Display Charizard's initial stats
  std::cout << "Initial Stats:\n";
  charizard.displayStats();

  // Simulate Charizard raising its defense by pressing a button
  std::cout << "Press any key to raise Charizard's defense...\n";
  std::cin.get();
  charizard.raiseDefense();

  // Display Charizard's updated stats after raising defense
  std::cout << "\nUpdated Stats after raising defense:\n";
  charizard.displayStats();

  return 0;
}
