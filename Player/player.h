#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>

using namespace std;

class Player {
    private:
        string name;
    public:
        string getName();
        void setName(string s);
};

#endif
