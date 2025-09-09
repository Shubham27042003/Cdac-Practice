#include <iostream>
#include "Employee.h"
#include "SalariedEmp.h"
using namespace std;

int main() {
    Employee* emp1 = new SalariedEmp(201, "John", "Finance", "Accountant", 50000);
    Employee* emp2 = new SalariedEmp(202, "Sara", "IT", "Team Lead", 70000);

    cout << "Employee 1 Details:" << endl;
    emp1->display();
    cout << "\n";

    cout << "Employee 2 Details:" << endl;
    emp2->display();
    cout << "\n";

    // Polymorphic call to calculateSalary
    cout << "Emp1 Salary (calculated): " << emp1->calculateSalary() << endl;
    cout << "Emp2 Salary (calculated): " << emp2->calculateSalary() << endl;

    delete emp1;
    delete emp2;

    return 0;
}

