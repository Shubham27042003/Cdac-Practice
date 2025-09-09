#ifndef SALARIEDEMP_H
#define SALARIEDEMP_H

#include "Employee.h"
class SalariedEmp : public Employee{
    private:
        double basicSalary;
        double bonus;
    public:
        SalariedEmp();
        SalariedEmp(int empno,const char* name,const char* dept,const char* desig,double basicSalary);
        ~SalariedEmp();

        void setBasicSalary(double basicSalary);
        double getbasicSalary()const;
        double getBonus()const;

        double calculateSalary()const;
        void display()const;
};
#endif