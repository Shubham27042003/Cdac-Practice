#include <iostream>
#include <cstring>
#include <algorithm>
#include "EmployeeService.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"

// Initialize static members
Employee* EmployeeService::employees[MAX_EMPLOYEES];
int EmployeeService::count = 0;

void EmployeeService::addEmployee(int ch) {
    if (count >= MAX_EMPLOYEES) {
        std::cout << "Cannot add more employees.\n";
        return;
    }

    int id;
    char name[50], dept[50], desg[50];

    std::cout << "Enter ID, Name, Dept, Designation: ";
    std::cin >> id >> name >> dept >> desg;

    if (ch == 1) {
        double basic;
        std::cout << "Enter Basic Salary: ";
        std::cin >> basic;
        employees[count++] = new SalariedEmp(id, name, dept, desg, basic);
    } else if (ch == 2) {
        int hrs;
        double charges;
        std::cout << "Enter Hours Worked and Charges per Hour: ";
        std::cin >> hrs >> charges;
        employees[count++] = new ContractEmp(id, name, dept, desg, hrs, charges);
    } else {
        std::cout << "Invalid employee type.\n";
    }
}

Employee* EmployeeService::searchById(int id) {
    for (int i = 0; i < count; ++i) {
        if (employees[i]->getEmpNo() == id) {
            return employees[i];
        }
    }
    return nullptr;
}

void EmployeeService::searchByName(const char* name) {
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (strcmp(employees[i]->getEName(), name) == 0) {
            employees[i]->display();
            std::cout << "-----------------------\n";
            found = true;
        }
    }
    if (!found) std::cout << "No employee found with name: " << name << "\n";
}

void EmployeeService::displayAll() {
    for (int i = 0; i < count; ++i) {
        employees[i]->display();
        std::cout << "-----------------------\n";
    }
}

void EmployeeService::displayAllSalariedEmp() {
    for (int i = 0; i < count; ++i) {
        if (dynamic_cast<SalariedEmp*>(employees[i])) {
            employees[i]->display();
            std::cout << "-----------------------\n";
        }
    }
}

void EmployeeService::displayAllContractEmp() {
    for (int i = 0; i < count; ++i) {
        if (dynamic_cast<ContractEmp*>(employees[i])) {
            employees[i]->display();
            std::cout << "-----------------------\n";
        }
    }
}

void EmployeeService::sortBySalary() {
    std::sort(employees, employees + count, [](Employee* a, Employee* b) {
        return a->calculateSalary() > b->calculateSalary(); // Descending
    });
}

void EmployeeService::cleanup() {
    for (int i = 0; i < count; ++i) {
        delete employees[i];
    }
    count = 0;
}

