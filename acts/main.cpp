#include <iostream>
#include <string>
#include "BasicUser.h"
#include "PremiumUser.h"
using namespace std;

int main() {
    char userType;
    int data;
    string discountCode;

    while (true) {
        cout << "Enter type of User (B for Basic, P for Premium): ";
        cin >> userType;

        if (userType != 'B' && userType != 'P') {
            cout << "Invalid user type! Try again.\n";
            continue;
        }

        cout << "Enter data usage in GB: ";
        cin >> data;

        if (data < 0) {
            cout << "Invalid data usage! Must be positive.\n";
            continue;
        }

        User* user = nullptr;
        if (userType == 'B') {
            user = new BasicUser(data);
        } else {
            cout << "Enter discount code (or press Enter to skip): ";
            cin.ignore();
            getline(cin, discountCode);
            user = new PremiumUser(data);
        }

        user->calculateBill(discountCode);

        delete user;
        break;
    }

    return 0;
}
