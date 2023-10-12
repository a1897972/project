#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "player1.h"
#include "player2.h"
#include "PokemonCardsx.h"
#include "attack.h"
#include "defend.h"
#include "heal.h"
#include "setup.h"

enum PlayerTurn {
    PLAYER1_TURN,
    PLAYER2_TURN
};

// Function to perform actions based on player's choice
void performAction(char key, PlayerTurn turn) {
    switch (key) {
        case '1':
            // Player chose Attack
            if (turn == PLAYER1_TURN) {
                attackPlayer1();
            } else {
                attackPlayer2();
            }
            break;
        case '2':
            // Player chose Defend
            if (turn == PLAYER1_TURN) {
                defendPlayer1();
            } else {
                defendPlayer2();
            }
            break;
        case '3':
            // Player chose Heal
            if (turn == PLAYER1_TURN) {
                healPlayer1();
            } else {
                healPlayer2();
            }
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
    }
}

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Initialize game
    setupGame();

    // Game loop
    PlayerTurn currentTurn = PLAYER1_TURN;  // Start with Player 1's turn

    while (true) {
        // Display whose turn it is
        if (currentTurn == PLAYER1_TURN) {
            std::cout << "Player 1's turn. Choose an action (1: Attack, 2: Defend, 3: Heal): ";
        } else {
            std::cout << "Player 2's turn. Choose an action (1: Attack, 2: Defend, 3: Heal): ";
        }

        // Check keyboard input for actions
        if (_kbhit()) {
            char key = _getch();
            performAction(key, currentTurn);

            // Display the action taken
            if (currentTurn == PLAYER1_TURN) {
                std::cout << "Player 1 ";
            } else {
                std::cout << "Player 2 ";
            }

            switch (key) {
                case '1':
                    std::cout << "attacked!\n";
                    break;
                case '2':
                    std::cout << "defended!\n";
                    break;
                case '3':
                    std::cout << "healed!\n";
                    break;
                default:
                    break;
            }

            // Switch to the next player's turn
            currentTurn = (currentTurn == PLAYER1_TURN) ? PLAYER2_TURN : PLAYER1_TURN;
        }
    }

    return 0;
}
