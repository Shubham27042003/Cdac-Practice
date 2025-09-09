#include<iostream>
#include "PersonService.h"

using namespace std;

vector<Person*> PersonService::pVec;
int PersonService::cnt = 0;

void PersonService::addPerson() {
    string name, street, city, state;
    int pin;

    cout << "Enter name :" << endl;
    cin >> name;
    cout << "Enter Street :" << endl;
    cin >> street;
    cout << "Enter City :" << endl;
    cin >> city;
    cout << "Enter State :" << endl;
    cin >> state;
    cout << "Enter Pincode :" << endl;
    cin >> pin;

    pVec.push_back(new Person(name, street, city, state, pin));
    cnt = pVec.size();
    cout << "Person added successfully at position " << cnt - 1 << endl;
}

void PersonService::displayAll() {
    for(int i = 0; i < cnt; i++) {
        pVec[i]->display();
    }
}

Person* PersonService::searchById(int id) {
    for(int i = 0; i < cnt; i++) {
        if(pVec[i]->getId() == id) {
            return pVec[i];
        }
    }
    return nullptr;
}

Person* PersonService::searchByName(const string name) {
    for(int i = 0; i < cnt; i++) {
        if(pVec[i]->getName() == name) {
            return pVec[i];
        }
    }
    return nullptr;
}

bool PersonService::modifyAddress(int id) {
    for(int i = 0; i < cnt; i++) {
        if(pVec[i]->getId() == id) {
            string street, city, state;
            int pin;
            cout << "Enter Street :" << endl;
            cin >> street;
            cout << "Enter City :" << endl;
            cin >> city;
            cout << "Enter State :" << endl;
            cin >> state;
            cout << "Enter Pincode :" << endl;
            cin >> pin;
            pVec[i]->setAddress(street, city, state, pin);
            return true;
        }
    }
    return false;
}

void PersonService::findAddrById(int id) {
    for(int i = 0; i < cnt; i++) {
        if(pVec[i]->getId() == id) {
            pVec[i]->getAddress().display();
            return;
        }
    }
    cout << "Person with ID " << id << " not found." << endl;
}

void PersonService::displayAllPersonInCity(const string city) {
    for(int i = 0; i < cnt; i++) {
        if(pVec[i]->getAddress().getCity() == city) {
            pVec[i]->display();
        }
    }
}

void PersonService::cleanup() {
    for(auto p : pVec) {
        delete p;
    }
    pVec.clear();
    cnt = 0;
}
