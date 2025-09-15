#ifndef CONTRACTEMP_H
#define CONTRACTEMP_H

#include "Employee.h"

class ContractEmp : public Employee {
private:
    int hrs;
    double charges;

public:
    ContractEmp();
    ContractEmp(int empno, const char* ename, const char* dept, const char* desg, int hrs, double charges);
    ~ContractEmp();

    void setHrs(int hrs);
    void setCharges(double charges);

    int getHrs() const;
    double getCharges() const;

    double calculateSalary() const override;
    void display() const override;
};

#endif

