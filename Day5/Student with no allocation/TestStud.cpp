#include <iostream>
#include "StudentService.h"
using namespace std;

int main() {
    int ch;
    do {
        cout << "\n1. Add Student\n";
        cout << "2. Student Display\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                StudentService::addStudent();
                break;
            case 2:
                StudentService::studentDisplay();
                break;
            case 3:
                cout << "Exit\n";
                break;
            default:
                cout << "Enter valid choice\n";
        }
    } while (ch != 3);

    return 0;
}
