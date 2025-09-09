#include "Service.h"
#include <iostream>
using namespace std;

Service::~Service() {
    // Free allocated memory
    for (auto p : players) delete p;
    for (auto s : sportsList) delete s;
}

void Service::addPlayer() {
    int id, age;
    string name, mobile;
    cout << "Enter Player ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Mobile: ";
    cin >> mobile;
    players.push_back(new Player(id, name, age, mobile));
    cout << "Player Added Successfully!\n";
}

void Service::addSport() {
    string sname;
    double fee;
    cout << "Enter Sport Name: ";
    cin.ignore();
    getline(cin, sname);
    cout << "Enter Fees: ";
    cin >> fee;
    sportsList.push_back(new Sports(sname, fee));
    cout << "Sport Added Successfully!\n";
}

void Service::enrollPlayerInSport() {
    string pname, sname;
    cout << "Enter Player Name: ";
    cin.ignore();
    getline(cin, pname);
    cout << "Enter Sport Name: ";
    getline(cin, sname);

    Player* foundPlayer = nullptr;
    Sports* foundSport = nullptr;

    for (auto p : players) {
        if (p->getPlayerName() == pname) {
            foundPlayer = p;
            break;
        }
    }

    for (auto s : sportsList) {
        if (s->getSportsName() == sname) {
            foundSport = s;
            break;
        }
    }

    if (foundPlayer && foundSport) {
        foundPlayer->enrollSport(sname);
        cout << "Player enrolled in sport successfully!\n";
    } else {
        if (!foundPlayer) cout << "Player not found!\n";
        if (!foundSport) cout << "Sport not found!\n";
    }
}

void Service::displaySpecificPlayer() {
    string pname;
    cout << "Enter Player Name: ";
    cin.ignore();
    getline(cin, pname);
    for (auto p : players) {
        if (p->getPlayerName() == pname) {
            p->display();
            p->displaySports();
            return;
        }
    }
    cout << "Player not found!\n";
}

void Service::displayAllPlayers() {
    for (auto p : players) {
        p->display();
        p->displaySports();
        cout << "--------------------\n";
    }
}
