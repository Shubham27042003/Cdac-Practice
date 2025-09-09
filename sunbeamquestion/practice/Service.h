#ifndef SERVICE_H
#define SERVICE_H
#include "Player.h"
#include "Sports.h"
#include <vector>
using namespace std;

class Service {
    vector<Player*> players;
    vector<Sports*> sportsList;
public:
    Service();
    ~Service();

    void addPlayer();
    void addSport();
    void enrollPlayerInSport();
    void displayPlayerSports();
    void displayAllPlayers();
};
#endif
