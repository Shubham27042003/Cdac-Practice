#include <iostream>
#include "Employee.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"

int main() {
    int numEmployees = 3;

    // Allocate memory for array of Employee* (pointer to pointer)
    Employee** empList = new Employee*[numEmployees];

    // Add Salaried and Contract Employees
    empList[0] = new SalariedEmp(101, "Alice", "HR", "Manager", 60000);
    empList[1] = new ContractEmp(102, "Bob", "Tech", "Consultant", 120, 300);
    empList[2] = new SalariedEmp(103, "Charlie", "Finance", "Analyst", 45000);

    // Display all employees
    std::cout << "\n--- Employee List ---\n";
    for (int i = 0; i < numEmployees; ++i) {
        empList[i]->display();
        std::cout << "Salary: " << empList[i]->calculateSalary() << "\n";
        std::cout << "-----------------------\n";
    }

    // Free memory
    for (int i = 0; i < numEmployees; ++i) {
        delete empList[i];
    }
    delete[] empList; // delete the array of pointers

    return 0;
}

