#include "Charizard.h"
#include <iostream>

int main() {
  // Create an instance of Charizard
  Charizard charizard("Charizard", 30, 0, 0);

  // Display Charizard's initial stats
  std::cout << "Initial Stats:\n";
  charizard.displayStats();

  // Simulate switching Charizard for another Pokemon
  charizard.switchPokemon();

  // Verify that Charizard is no longer the active Pokemon
  if (charizard.isCharizardActivePokemon() == false) {
    std::cout << "\nCharizard is no longer the active Pokemon.\n";
  }
  if (charizard.isCharizardActivePokemon() == true) {
    std::cout << "\nCharizard is still the active Pokemon.\n";
  }

  // Simulate switching Charizard for another Pokemon
  charizard.switchPokemon();

  // Verify that Charizard is no longer the active Pokemon
  if (charizard.isCharizardActivePokemon() == false) {
    std::cout << "\nCharizard is no longer the active Pokemon.\n";
  }
  if (charizard.isCharizardActivePokemon() == true) {
    std::cout << "\nCharizard is now the active Pokemon.\n";
  }

  return 0;
}
