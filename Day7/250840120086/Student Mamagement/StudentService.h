#ifndef STUDSERVICE_H
#define STUDSERVICE_H

#include "Student.h"

const int MAX_STUDENT = 100;

class StudentService {
private:
    static Student* students[MAX_STUDENT];
    static int count;

public:
    static void addStudent(int ch);
    static void displayAll();
    static Student* searchById(int id);
    static void searchByName(const char* name);
    static void sortByM1();
    static void displayAllMSCStud();
    static void displayAllPHDStud();
    static void cleanup();
};

#endif

