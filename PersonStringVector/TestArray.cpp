#include <iostream>
#include <string>
#include "PersonService.h"

using namespace std;

int main() {
    int ch;
    do {
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Add new Person" << endl;
        cout << "2. Display All Person" << endl;
        cout << "3. Search by Id" << endl;
        cout << "4. Search by Name" << endl;
        cout << "5. Modify address" << endl;
        cout << "6. Find address by id of Person" << endl;
        cout << "7. Display all persons in a given city" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cin.ignore(); // Ignore newline left in buffer after reading ch

        switch (ch) {
            case 1:
                PersonService::addPerson();
                break;
            case 2:
                PersonService::displayAll();
                break;
            case 3: {
                int id;
                cout << "Enter id to search: ";
                cin >> id;
                cin.ignore();
                Person* p1 = PersonService::searchById(id);
                if (p1) {
                    cout << "Person Found:" << endl;
                    p1->display();
                } else {
                    cout << "Person Not Found." << endl;
                }
                break;
            }
            case 4: {
                string name;
                cout << "Enter name to search: ";
                getline(cin, name);
                Person* p1 = PersonService::searchByName(name);
                if (p1) {
                    cout << "Person Found:" << endl;
                    p1->display();
                } else {
                    cout << "Person Not Found." << endl;
                }
                break;
            }
            case 5: {
                int id;
                cout << "Enter id of person whose address you want to modify: ";
                cin >> id;
                cin.ignore();
                if (!PersonService::modifyAddress(id)) {
                    cout << "Person not found." << endl;
                }
                break;
            }
            case 6: {
                int id;
                cout << "Enter id of person to find address: ";
                cin >> id;
                cin.ignore();
                PersonService::findAddrById(id);
                break;
            }
            case 7: {
                string city;
                cout << "Enter City: ";
                getline(cin, city);
                PersonService::displayAllPersonInCity(city);
                break;
            }
            case 8:
                cout << "Exiting program. Cleaning up memory." << endl;
                PersonService::cleanup();
                break;
            default:
                cout << "Enter a valid choice." << endl;
                break;
        }
    } while (ch != 8);

    return 0;
}
