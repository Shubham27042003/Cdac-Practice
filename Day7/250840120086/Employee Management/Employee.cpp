#include <iostream>
#include <cstring>
#include "Employee.h"

Employee::Employee() {
    empno = 0;
    ename = nullptr;
    dept = nullptr;
    desg = nullptr;
}

Employee::Employee(int empno, const char* ename, const char* dept, const char* desg) {
    this->empno = empno;
    this->ename = new char[strlen(ename) + 1];
    strcpy(this->ename, ename);
    this->dept = new char[strlen(dept) + 1];
    strcpy(this->dept, dept);
    this->desg = new char[strlen(desg) + 1];
    strcpy(this->desg, desg);
}

Employee::~Employee() {
    delete[] ename;
    delete[] dept;
    delete[] desg;
}

// Setters
void Employee::setEmpNo(int empno) { this->empno = empno; }

void Employee::setEName(const char* ename) {
    delete[] this->ename;
    this->ename = new char[strlen(ename) + 1];
    strcpy(this->ename, ename);
}

void Employee::setDept(const char* dept) {
    delete[] this->dept;
    this->dept = new char[strlen(dept) + 1];
    strcpy(this->dept, dept);
}

void Employee::setDesg(const char* desg) {
    delete[] this->desg;
    this->desg = new char[strlen(desg) + 1];
    strcpy(this->desg, desg);
}

// Getters
int Employee::getEmpNo() const { return empno; }
const char* Employee::getEName() const { return ename; }
const char* Employee::getDept() const { return dept; }
const char* Employee::getDesg() const { return desg; }

void Employee::display() const {
    std::cout << "Emp No: " << empno << std::endl;
    std::cout << "Name  : " << (ename ? ename : "N/A") << std::endl;
    std::cout << "Dept  : " << (dept ? dept : "N/A") << std::endl;
    std::cout << "Desg  : " << (desg ? desg : "N/A") << std::endl;
}

/*double Employee::calculateSalary() const {
    return 0.0; // Base class doesn't implement salary
}*/

