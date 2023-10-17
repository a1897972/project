#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Player::Player(std::string name, const std::vector<Card>& cardLibrary)
    : name(name), health(0), attack(0), cardLibrary(cardLibrary), actionTaken(false) {
    health = 100;
    attack = 30;

    if (!cardLibrary.empty()) {
        activePokemon = cardLibrary[0];
    }
}

void Player::drawCards(int numCards) {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < numCards; ++i) {
        int index = rand() % cardLibrary.size();s
    }
}

void Player::chooseActiveCard() {
    if (!cardLibrary.empty()) {
        activePokemon = cardLibrary[0];
    }
}

void Player::displayStatus() const {
    std::cout << "Player: " << name << "\n";
    std::cout << "Health Points (HP): " << health << "\n";
    std::cout << "Attack Damage: " << attack << "\n";
    std::cout << "Active Pokemon: " << activePokemon.getName() << "\n";
    std::cout << "-----------------------------\n";
}

void Player::performAction() {
    if (!actionTaken) {
        int damage = getDamage();
        std::cout << name << " dealt " << damage << " damage to the opponent!\n";
        actionTaken = true;
    }
}

void Player::endTurn() {
    actionTaken = false;
}

bool Player::isActive() const {
    return health > 0;
}

int Player::getDamage() const {
    return attack;
}
