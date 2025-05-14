#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
public:
    int jerseyNumber;
    string name;
    int runs;
    int wickets;
    int matches;

    void input();
    void display() const;
};

#endif
