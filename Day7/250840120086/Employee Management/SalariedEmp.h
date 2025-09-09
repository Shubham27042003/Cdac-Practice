#ifndef SALARIEDEMP_H
#define SALARIEDEMP_H

#include "Employee.h"

class SalariedEmp : public Employee {
private:
    double basicSalary;
    double bonus;

public:
    SalariedEmp();
    SalariedEmp(int empno, const char* ename, const char* dept, const char* desg, double basicSalary);
    ~SalariedEmp();

    void setSalary(double basicSalary);
    double getSalary() const;
    double getBonus() const;

    double calculateSalary() const override;
    void display() const override;
};

#endif

