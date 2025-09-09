#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student() {
    studId = 0;
    name[0] = '\0';
    m1 = m2 = m3 = 0;
}

Student::Student(int studId, const char name[SIZE], int m1, int m2, int m3) {
    this->studId = studId;
    strncpy(this->name, name, SIZE - 1);
    this->name[SIZE - 1] = '\0';
    this->m1 = m1;
    this->m2 = m2;
    this->m3 = m3;
}

void Student::setStudId(int id) { studId = id; }
void Student::setName(const char name[SIZE]) {
    strncpy(this->name, name, SIZE - 1);
    this->name[SIZE - 1] = '\0';
}
void Student::setM1(int m) { m1 = m; }
void Student::setM2(int m) { m2 = m; }
void Student::setM3(int m) { m3 = m; }

int Student::getStudId() { return studId; }
const char* Student::getName() { return name; }
int Student::getM1() { return m1; }
int Student::getM2() { return m2; }
int Student::getM3() { return m3; }

void Student::display() {
    cout << "Student Details:\n____________\n";
    cout << "Student Id--> " << studId << endl;
    cout << "Name: " << name << endl;
    cout << "M1 : " << m1 << endl;
    cout << "M2 : " << m2 << endl;
    cout << "M3 : " << m3 << endl;
}
