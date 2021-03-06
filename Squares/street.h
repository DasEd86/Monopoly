#ifndef __STREET_H__
#define __STREET_H__
#include "square.h"
#include "../Player/player.h"

class Street : public Square {
    private:
        Player* owner;
    public:
        void landedOn();
        void setOwner(Player*);
        Player* getOwner();
        ~Street() {}
};

#endif
