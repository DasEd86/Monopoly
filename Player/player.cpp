#include <iostream>
#include "player.h"

using namespace std;

string Player::getName() {
    return name;
}

void Player::setName(string s) {
    name = s;
}
