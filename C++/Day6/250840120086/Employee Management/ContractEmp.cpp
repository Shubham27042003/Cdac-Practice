#include <iostream>
#include "ContractEmp.h"

ContractEmp::ContractEmp() : Employee() {
    hrs = 0;
    charges = 0.0;
}

ContractEmp::ContractEmp(int empno, const char* ename, const char* dept, const char* desig,double hrs, double charges) : Employee(empno, ename, dept, desig) {
    this->hrs = hrs;
    this->charges = charges;
}

ContractEmp::~ContractEmp() {
    // No dynamic memory in ContractEmp
}

void ContractEmp::setHrs(double hrs){
    this->hrs = hrs;
}

void ContractEmp::setCharges(double charges) {
    this->charges = charges;
}

double ContractEmp::getHrs() const {
    return hrs;
}

double ContractEmp::getCharges() const {
    return charges;
}

double ContractEmp::calculateSalary() const {
    return hrs * charges;
}

void ContractEmp::display() const {
    Employee::display(); // Call base class display
    std::cout << "Hours Worked: " << hrs << std::endl;
    std::cout << "Charge/Hour : " << charges << std::endl;
    std::cout << "Total Salary: " << calculateSalary() << std::endl;
}

