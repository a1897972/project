#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "PokemonCardsx.h"
#include "Ampharos.h"
#include "Blastoise.h"
#include "Charizard.h"
#include "Dragonite.h"
#include "Gardevoir.h"
#include "Gengar.h"
#include "Lucario.h"
#include "Metagross.h"
#include "Snorlax.h"
#include "Venusaur.h"
#include "Player.h"
#include "Card.h"

int main() {
    std::vector<Card> cardLibrary = {
        {"Ampharos", 420, 120},
        {"Blastoise", 480,150},
        {"Charizard", 510,150},
        {"Dragonite", 480,180},
        {"Gardevoir", 450,120},
        {"Gengar", 390,70},
        {"Lucario", 390,130},
        {"Metagross", 450, 160},
        {"Snorlax", 450, 160},
        {"Venusaur", 540,130},
    };

    Player player1("Player1", cardLibrary);
    Player player2("Player2", cardLibrary);

    std::cout << "Welcome to the Pokemon Card Game!\n";

    player1.drawCards(3);
    player2.drawCards(3);

    player1.chooseActiveCard();
    player2.chooseActiveCard();

    while (player1.isActive() && player2.isActive()) {
        std::cout << "\n-----------------------------\n";
        player1.displayStatus();
        player2.displayStatus();

        std::cout << "Player1, choose your action (1: Attack, 2: Heal): ";
        char action = _getch();

        switch (action) {
            case '1':
                player1.performAction();
                player2.takeDamage(player1.getDamage());
                break;
            case '2':
                player1.heal();
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                continue;
        }

        if (!player2.isActive()) {
            std::cout << "Player1 wins!\n";
            break;
        }

        std::cout << "\n-----------------------------\n";
        player1.displayStatus();
        player2.displayStatus();

        std::cout << "Player2, choose your action (1: Attack, 2: Heal): ";
        action = _getch();

        switch (action) {
            case '1':
                player2.performAction();
                player1.takeDamage(player2.getDamage());
                break;
            case '2':
                player2.heal();
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                continue;
        }

        if (!player1.isActive()) {
            std::cout << "Player2 wins!\n";
            break;
        }
    }

    std::cout << "Game Over!\n";

    return 0;
}
