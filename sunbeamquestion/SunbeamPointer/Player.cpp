#include "Player.h"

Player::Player() {}
Player::Player(int i, string n, int a, string m) : Person(n, a){
    id=i;
    mobile=m; 
}

void Player::enrollSport(const string sport) {
    enrolledSports.push_back(sport);
}

void Player::display() const {
    cout << "ID: " << id << ", ";
    Person::display();
    cout << ", Mobile: " << mobile << endl;
}

void Player::displaySports() const {
    cout << "Sports of " << name << ": ";
    if (enrolledSports.empty()) {
        cout << "No sports enrolled.";
    } else {
        for (const string s : enrolledSports) {
            cout << s << " ";
        }
    }
    cout << endl;
}

string Player::getPlayerName() const {
    return name;
}
