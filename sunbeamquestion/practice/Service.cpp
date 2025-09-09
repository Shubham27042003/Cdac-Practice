#include "Service.h"
#include <iostream>
using namespace std;

Service::Service() {}
Service::~Service() {
    for (auto p : players) 
            delete p;
    for (auto s : sportsList) 
            delete s;
}

void Service::addPlayer() {
    int id, age;
    string name, mob;
    cout << "Enter Player ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Player Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Mobile: ";
    cin >> mob;
    players.push_back(new Player(id, name, age, mob));
}


void Service::addSport() {
    string nm;
    float f;
    cout << "Enter Sport Name: ";
    cin.ignore();                   // clear newline from previous input
    getline(cin, nm);               // now reads full name with spaces
    cout << "Enter Sport Fees: ";
    cin >> f;
    sportsList.push_back(new Sports(nm, f));
}


void Service::enrollPlayerInSport() {
    int pid;
    string sportName;
    cout << "Enter Player ID: ";
    cin >> pid;
    cin.ignore();                   // clear newline
    cout << "Enter Sport Name: ";
    getline(cin, sportName);

    Player* p = nullptr;
    for (auto pl : players){
        if (pl->getId() == pid) {
            p = pl;
            break; 
        }
    }

    Sports* sp = nullptr;
    for (auto s : sportsList){
        if (s->getName() == sportName) {
            sp = s;
            break;
        }
    }

    if (p && sp) {
        p->enrollSport(sp);
        cout << "Player enrolled successfully!\n";
    } else {
        cout << "Invalid Player ID or Sport Name\n";
    }
}

void Service::displayPlayerSports() {
    string nm;
    cout << "Enter Player Name: ";
    cin >> nm;
    for (auto p : players) {
        if (p->getName() == nm) {
            p->display();
            p->displaySports();
            return;
        }
    }
    cout << "Player not found.\n";
}

void Service::displayAllPlayers() {
    for (auto p : players) {
        p->display();
        p->displaySports();
        cout << "-----------------\n";
    }
}
