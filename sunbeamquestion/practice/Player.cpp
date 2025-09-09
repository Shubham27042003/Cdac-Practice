#include "Player.h"
#include "Sports.h"
using namespace std;

Player::Player() : Person(){
    id=0;
    mobile="";
}
Player::Player(int pid, string nm, int ag, string mob): Person(nm, ag){
    id=pid;
    mobile=mob;
}
Player::~Player() {}

int Player::getId() const { 
    return id;
}
string Player::getMobile() const {
     return mobile;
}
void Player::setMobile(string mob) {
     mobile = mob;
}

void Player::enrollSport(Sports* sp) {
    enrolledSports.push_back(sp);
}

void Player::display() const {
    cout << "ID: " << id << ", ";
    Person::display();
    cout << "Mobile: " << mobile << endl;
}

void Player::displaySports() const {
    cout << "Enrolled Sports: ";
    for (auto s : enrolledSports) {
        cout << s->getName() << " ";
    }
    cout << endl;
}
