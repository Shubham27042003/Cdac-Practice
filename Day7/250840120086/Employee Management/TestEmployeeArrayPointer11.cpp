#include <iostream>
#include "Employee.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"

int main() {
    // Fixed-size array of Employee pointers
    Employee* empList[3];

    // Create and assign objects to array
    empList[0] = new SalariedEmp(1, "Alice", "HR", "Manager", 50000);
    empList[1] = new ContractEmp(2, "Bob", "IT", "Developer", 120, 200);
    empList[2] = new SalariedEmp(3, "Charlie", "Finance", "Analyst", 40000);

    std::cout << "\n--- Employee Details ---\n";

    // Display all employees and salaries
    for (int i = 0; i < 3; ++i) {
        empList[i]->display();
        std::cout << "Calculated Salary: " << empList[i]->calculateSalary() << "\n";
        std::cout << "-------------------------\n";
    }

    // Free allocated memory
    for (int i = 0; i < 3; ++i) {
        delete empList[i];
    }

    return 0;
}

