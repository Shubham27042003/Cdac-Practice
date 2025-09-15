#include "StudentService.h"
#include <iostream>
using namespace std;

Student* StudentService::stud[SIZE_OF_STUDENT];
int StudentService::count = 0;

void StudentService::addStudent() {
    if (count >= SIZE_OF_STUDENT) {
        cout << "Cannot add more students! Maximum reached.\n";
        return;
    }

    char name[SIZE];
    int id, m1, m2, m3;

    cout << "Enter StudId: ";
    cin >> id;
    cin.ignore(); // clear newline before getline
    cout << "Enter name: ";
    cin.getline(name, SIZE);

    cout << "Enter m1: ";
    cin >> m1;
    cout << "Enter m2: ";
    cin >> m2;
    cout << "Enter m3: ";
    cin >> m3;

    stud[count++] = new Student(id, name, m1, m2, m3);
    cout << "Added Successfully\n";
}

void StudentService::studentDisplay() {
    if (count == 0) {
        cout << "No students to display.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        stud[i]->display();
        cout << endl;
    }
}
