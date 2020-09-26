#ifndef __STREET_H__
#define __STREET_H__
#include "square.h"

class Street : Square {
    public:
        virtual void landedOn() = 0;
};

#endif
