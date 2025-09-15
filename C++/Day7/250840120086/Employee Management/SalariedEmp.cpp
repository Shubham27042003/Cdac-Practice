#include <iostream>
#include "SalariedEmp.h"

SalariedEmp::SalariedEmp() : Employee() {
    basicSalary = 0.0;
    bonus = 0.0;
}

SalariedEmp::SalariedEmp(int empno, const char* ename, const char* dept, const char* desg, double basicSalary)
    : Employee(empno, ename, dept, desg) {
    this->basicSalary = basicSalary;
    this->bonus = 0.10 * basicSalary;
}

SalariedEmp::~SalariedEmp() {
    // Nothing additional
}

void SalariedEmp::setSalary(double basicSalary) {
    this->basicSalary = basicSalary;
    this->bonus = 0.10 * basicSalary;
}

double SalariedEmp::getSalary() const {
    return basicSalary;
}

double SalariedEmp::getBonus() const {
    return bonus;
}

double SalariedEmp::calculateSalary() const {
    double da = 0.10 * basicSalary;
    double hra = 0.15 * basicSalary;
    double pf = 0.12 * basicSalary;
    return basicSalary + da + hra - pf;
}

void SalariedEmp::display() const {
    Employee::display(); // Call base display
    std::cout << "Basic Salary: " << basicSalary << std::endl;
    std::cout << "Bonus       : " << bonus << std::endl;
    std::cout << "Total Salary (with DA, HRA, - PF): " << calculateSalary() << std::endl;
}

