#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player {
public:
    Player(std::string name, const std::vector<Card>& cardLibrary);

    void drawCards(int numCards);
    void chooseActiveCard();
    void displayStatus() const;
    void performAction();
    void endTurn();
    bool isActive() const;

private:
    std::string name;
    int health;
    int attack;
    std::vector<Card> cardLibrary;
    Card activePokemon;
    bool actionTaken;

    int getDamage() const;
};

#endif
