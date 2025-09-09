#include "Service.h"
#include <iostream>
using namespace std;

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
    players.push_back(Player(id, name, age, mobile));
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
    sportsList.push_back(Sports(sname, fee));
    cout << "Sport Added Successfully!\n";
}

void Service::enrollPlayerInSport() {
    string pname, sname;
    cout << "Enter Player Name: ";
    cin.ignore();
    getline(cin, pname);
    cout << "Enter Sport Name: ";
    getline(cin, sname);

    bool foundPlayer = false, foundSport = false;

    for (auto &p : players) {
        if (p.getPlayerName() == pname) {
            foundPlayer = true;
            for (auto &s : sportsList) {
                if (s.getSportsName() == sname) {
                    foundSport = true;
                    p.enrollSport(sname);
                    cout << "Player enrolled in sport successfully!\n";
                    break;
                }
            }
        }
    }
    if (!foundPlayer) cout << "Player not found!\n";
    if (!foundSport) cout << "Sport not found!\n";
}

void Service::displaySpecificPlayer() {
    string pname;
    cout << "Enter Player Name: ";
    cin.ignore();
    getline(cin, pname);
    for (auto &p : players) {
        if (p.getPlayerName() == pname) {
            p.display();
            p.displaySports();
            return;
        }
    }
    cout << "Player not found!\n";
}

void Service::displayAllPlayers() {
    for (auto &p : players) {
        p.display();
        p.displaySports();
        cout << "--------------------\n";
    }
}
