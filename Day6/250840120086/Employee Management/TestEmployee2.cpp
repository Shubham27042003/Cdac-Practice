#include <iostream>
#include "Employee.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"
using namespace std;

int main() {
    Employee* salaried = new SalariedEmp(201, "John", "Finance", "Accountant", 50000);
    Employee* contract = new ContractEmp(301, "Lily", "Support", "Freelancer", 120, 250);

    cout << "Salaried Employee Details:\n";
    salaried->display();
    cout << "\n";

    cout << "Contract Employee Details:\n";
    contract->display();
    cout << "\n";

    cout << "Polymorphic Salary Calculation:\n";
    cout << "Salaried Emp Salary: " << salaried->calculateSalary() << endl;
    cout << "Contract Emp Salary: " << contract->calculateSalary() << endl;

    delete salaried;
    delete contract;

    return 0;
}

