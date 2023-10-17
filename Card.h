// Card.h
#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(std::string name, int health, int attack);

    std::string getName() const;
    int getHealth() const;
    int getAttack() const;

private:
    std::string name;
    int health;
    int attack;
};

#endif // CARD_H
