#include <iostream>
#include "Employee.h"
#include "SalariedEmp.h"

int main() {
    Employee* emp1 = new SalariedEmp(201, "John", "Finance", "Accountant", 50000);
    Employee* emp2 = new SalariedEmp(202, "Sara", "IT", "Team Lead", 70000);

    std::cout << "Employee 1 Details:" << std::endl;
    emp1->display();
    std::cout << "\n";

    std::cout << "Employee 2 Details:" << std::endl;
    emp2->display();
    std::cout << "\n";

    // Polymorphic call to calculateSalary
    std::cout << "Emp1 Salary (calculated): " << emp1->calculateSalary() << std::endl;
    std::cout << "Emp2 Salary (calculated): " << emp2->calculateSalary() << std::endl;

    delete emp1;
    delete emp2;

    return 0;
}

