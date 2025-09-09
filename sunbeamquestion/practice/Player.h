#ifndef PLAYER_H
#define PLAYER_H
#include "Person.h"
#include <vector>
#include <string>
#include"Sports.h"
using namespace std;

//class Sports; // forward declaration

class Player : public Person {
    int id;
    string mobile;
    vector<Sports*> enrolledSports; 
public:
    Player();
    Player(int id, string nm, int ag, string mob);
    ~Player();

    int getId() const;
    string getMobile() const;

    void setMobile(string mob);

    void enrollSport(Sports* sp);
    void display() const override;
    void displaySports() const;
};
#endif
