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
    
    Square* square1 = new Jail();
    square1->landedOn();

    Square* square2 = new Community();
    square2->landedOn();

    Street* square3 = new Street();
    square3->setOwner(p);
    
    delete(square1);
    delete(square2);
    delete(square3);
    return 0;
}
