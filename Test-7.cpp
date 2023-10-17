#include "Blastoise.h"
#include <iostream>

int main() {
  // Create an instance of Blastoise
  Blastoise Blastoise("Blastoise", 30, 0, 0);

  // Display Blastoise's initial stats
  std::cout << "Initial Stats:\n";
  Blastoise.displayStats();

  // Simulate switching Blastoise for another Pokemon
  Blastoise.switchPokemon();

  // Verify that Blastoise is no longer the active Pokemon
  if (Blastoise.isBlastoiseActivePokemon() == false) {
    std::cout << "\nBlastoise is no longer the active Pokemon.\n";
  }
  if (Blastoise.isBlastoiseActivePokemon() == true) {
    std::cout << "\nBlastoise is still the active Pokemon.\n";
  }

  return 0;
}
