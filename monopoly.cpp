#include <iostream>
#include "Player/player.h"
#include "Squares/square.h"
#include "Squares/street.h"
#include "Squares/jail.h"
#include "Squares/community.h"

using namespace std;

int main() {
    Player* p = new Player();
    p->setName("Frieder");

    Jail* j = new Jail();
    j->landedOn();

    Street* s = new Street();
    s->setOwner(p);
    
    delete(p);
    delete(j);
    delete(s);
    return 0;
}
