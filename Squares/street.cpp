#include <iostream>

#include "street.h"
#include "../Player/player.h"

using namespace std;

void Street::landedOn() {
    cout << "Landed on street" << endl;
}

void Street::setOwner(Player* player) {
    owner = player;
}

Player* Street::getOwner() {
    return owner;
}
