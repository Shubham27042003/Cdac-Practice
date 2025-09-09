#include "Service.h"
#include <iostream>
using namespace std;

int main() {
    Service service;
    int choice;

    do {
        cout << "\n--- Sports Academy Menu ---\n";
        cout << "1. Add Player\n";
        cout << "2. Add Sport\n";
        cout << "3. Enroll Player in Sport\n";
        cout << "4. Display Player's Sports\n";
        cout << "5. Display All Players and Sports\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: service.addPlayer();
                    break;
            case 2: service.addSport(); 
                    break;
            case 3: service.enrollPlayerInSport(); 
                    break;
            case 4: service.displayPlayerSports(); 
                    break;
            case 5: service.displayAllPlayers(); 
                    break;
            case 0: cout << "Exiting...\n"; 
                    break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 0);

    return 0;
}
