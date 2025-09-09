#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"
#include <vector>
#include <string>

class Player : public Person {
    int id;
    string mobile;
    vector<string> enrolledSports;
public:
    Player();
    Player(int i, string n, int a, string m);

    void enrollSport(const string &sport);
    void display() const override;
    void displaySports() const;
    string getPlayerName() const;
};

#endif
