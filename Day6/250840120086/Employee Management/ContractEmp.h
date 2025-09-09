#ifndef CONTRACTEMP_H
#define CONTRACTEMP_H

#include"Employee.h"
class ContractEmp : public Employee{
    private:
        double hrs;
        double charges;
    public:
        ContractEmp();
        ContractEmp(int empno,const char* name, const char* dept,const char* desig,double hrs,double charges);
        

        ~ContractEmp();


        void setHrs(double hrs);
        void setCharges(double charges);

        double getHrs()const;
        double getCharges()const;

        double calculateSalary()const;
        void display()const;

};
#endif;
