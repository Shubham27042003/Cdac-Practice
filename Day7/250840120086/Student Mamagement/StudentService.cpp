#include <iostream>
#include <cstring>
#include <algorithm>
#include "StudentService.h"
#include "MscStudent.h"
#include "PhdStudent.h"
using namespace std;

// Initialize static members
Student* StudentService::students[MAX_STUDENT];
int StudentService::count=0;

//add student
void StudentService::addStudent(int ch) {
    if (count >= MAX_STUDENT) {
        cout << "Cannot add more students.\n";
        return;
    }

    int id,mark1,mark2,mark3;
    char name[50],address[50];

    cout << "Enter ID, Name, Address, Mark1, Mark2, Mark3: ";
    cin >> id >> name >> address >> mark1>>mark2>>mark3;

    if (ch == 1) {
        int spSubMark;
	    int langMark;
        cout << "Enter Special subject mark, Language mark : ";
        cin >> spSubMark>>langMark;
        students[count++] = new MscStudent(id, name, address, mark1, mark2,mark3,spSubMark,langMark);
    } else if (ch == 2) {
        char thsName[50];
	    int thsMark;;
        cout << "Enter Name of Thesis, Thesis Mark : ";
        cin >> thsName >> thsMark;
        students[count++] = new PhdStudent(id, name, address, mark1, mark2, mark3,thsName,thsMark);
    } else {
        cout << "Invalid Student type.\n";
    }
}


//display all
void StudentService::displayAll() {
    for (int i = 0; i < count; ++i) {
        students[i]->display();
        cout << "-----------------------\n";
    }
}

//search by id
Student* StudentService::searchById(int id) {
    for (int i = 0; i < count; ++i) {
        if (students[i]->getId() == id) {
            return students[i];
        }
       
    }
    return nullptr;
}

//search by name
void StudentService::searchByName(const char* name) {
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (strcmp(students[i]->getName(), name) == 0) {
            students[i]->display();
            cout << "-----------------------\n";
            found = true;
        }
    }
    if (!found) cout << "No Student found with name: " << name << "\n";
}

//sort by m1
void StudentService::sortByM1() {
    sort(students, students + count, [](Student* a, Student* b) {
        return a->getMark1() > b->getMark1();
    });
}


//display all MSC Students
void StudentService::displayAllMSCStud() {
    for (int i = 0; i < count; ++i) {
        if (dynamic_cast<MscStudent*>(students[i])) {
            students[i]->display();
            cout << "-----------------------\n";
        }
    }
}

//display all PHD Students
void StudentService::displayAllPHDStud() {
    for (int i = 0; i < count; ++i) {
        if (dynamic_cast<PhdStudent*>(students[i])) {
            students[i]->display();
            cout << "-----------------------\n";
        }
    }
}



void StudentService::cleanup() {
    for (int i = 0; i < count; ++i) {
        delete students[i];
    }
    count = 0;
}

