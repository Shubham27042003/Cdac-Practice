#ifndef PERSONSERVICE_H
#define PERSONSERVICE_H

#include "Person.h"
#include <vector>
#include <string>

using namespace std;

class PersonService {
    private:
        static vector<Person*> pVec;
        static int cnt;
    public:
        static void addPerson();
        static void displayAll();
        static Person* searchById(int id);
        static Person* searchByName(const string name);
        static bool modifyAddress(int id);
        static void findAddrById(int id);
        static void displayAllPersonInCity(const string city);
        static void cleanup();
};

#endif
