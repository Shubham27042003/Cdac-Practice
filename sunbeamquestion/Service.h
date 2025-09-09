#ifndef SERVICE_H
#define SERVICE_H

#include "Player.h"
#include "Sports.h"
#include <vector>

class Service {
    vector<Player> players;
    vector<Sports> sportsList;
public:
    void addPlayer();
    void addSport();
    void enrollPlayerInSport();
    void displaySpecificPlayer();
    void displayAllPlayers();
};

#endif
