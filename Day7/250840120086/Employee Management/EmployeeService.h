#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include "Employee.h"

const int MAX_EMPLOYEES = 100;

class EmployeeService {
private:
    static Employee* employees[MAX_EMPLOYEES];
    static int count;

public:
    static void addEmployee(int ch);
    static Employee* searchById(int id);
    static void searchByName(const char* name);

    static void displayAll();
    static void displayAllSalariedEmp();
    static void displayAllContractEmp();
    static void sortBySalary();
    static void cleanup();
};

#endif

