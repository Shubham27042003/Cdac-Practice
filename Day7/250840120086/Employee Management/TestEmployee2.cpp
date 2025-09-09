#include <iostream>
#include "Employee.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"

int main() {
    Employee* salaried = new SalariedEmp(201, "John", "Finance", "Accountant", 50000);
    Employee* contract = new ContractEmp(301, "Lily", "Support", "Freelancer", 120, 250);

    std::cout << "Salaried Employee Details:\n";
    salaried->display();
    std::cout << "\n";

    std::cout << "Contract Employee Details:\n";
    contract->display();
    std::cout << "\n";

    std::cout << "Polymorphic Salary Calculation:\n";
    std::cout << "Salaried Emp Salary: " << salaried->calculateSalary() << std::endl;
    std::cout << "Contract Emp Salary: " << contract->calculateSalary() << std::endl;

    delete salaried;
    delete contract;

    return 0;
}

