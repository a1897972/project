#include "Gengar.h"
#include <iostream>

int main() {
  // Create an instance of Gengar
  Gengar Gengar("Gengar", 30, 0, 0);

  // Display Gengar's initial stats
  std::cout << "Initial Stats:\n";
  Gengar.displayStats();

  // Simulate switching Gengar for another Pokemon
  Gengar.switchPokemon();

  // Verify that Gengar is no longer the active Pokemon
  if (Gengar.isGengarActivePokemon() == false) {
    std::cout << "\nGengar is no longer the active Pokemon.\n";
  }
  if (Gengar.isGengarActivePokemon() == true) {
    std::cout << "\nGengar is still the active Pokemon.\n";
  }

  return 0;
}
