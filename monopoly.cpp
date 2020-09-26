#include <iostream>
#include "player.h"
#include "Squares/square.h"
#include "Squares/street.h"
#include "Squares/jail.h"
#include "Squares/community.h"

using namespace std;

int main() {
    Jail* j = new Jail();
    j->landedOn();
    return 0;
}
