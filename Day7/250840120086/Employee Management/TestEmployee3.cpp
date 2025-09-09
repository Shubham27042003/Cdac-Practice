#include <iostream>
#include "EmployeeService.h"

int main() {
    int choice;

    do {
        std::cout << "\n--- Employee Management ---\n";
        std::cout << "1. Add Salaried Employee\n";
        std::cout << "2. Add Contract Employee\n";
        std::cout << "3. Display All Employees\n";
        std::cout << "4. Search by ID\n";
        std::cout << "5. Search by Name\n";
        std::cout << "6. Sort Employees by Salary\n";
        std::cout << "7. Display All Salaried Employees\n";
        std::cout << "8. Display All Contract Employees\n";
        std::cout << "9. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
        case 2:
            EmployeeService::addEmployee(choice); 
            break;
        case 3:
            EmployeeService::displayAll();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID to search: ";
            std::cin >> id;
            Employee* e = EmployeeService::searchById(id);
            if (e)
                e->display();
            else
                std::cout << "Employee not found.\n";
            break;
        }
        case 5: {
            char name[50];
            std::cout << "Enter name to search: ";
            std::cin >> name;
            EmployeeService::searchByName(name);
            break;
        }
        case 6:
            EmployeeService::sortBySalary();
            std::cout << "Sorted by salary.\n";
            break;
        case 7:
            EmployeeService::displayAllSalariedEmp();
            break;
        case 8:
            EmployeeService::displayAllContractEmp();
            break;
        case 9:
            EmployeeService::cleanup();
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
        }
    } while (choice != 9);

    return 0;
}

