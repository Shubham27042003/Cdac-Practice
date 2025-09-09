#include <iostream>
#include "Service.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Seller\n";
        cout << "2. Add Product\n";
        cout << "3. Display All Sellers\n";
        cout << "4. Display All Products\n";
        cout << "5. Display Products Sold by Specific Seller\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: Service::addSeller(); break;
            case 2: Service::addProduct(); break;
            case 3: Service::displayAllSellers(); break;
            case 4: Service::displayAllProducts(); break;
            case 5: Service::displayProductSoldBySpecSeller(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
