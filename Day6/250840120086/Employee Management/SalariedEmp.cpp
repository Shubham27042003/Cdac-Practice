#include<iostream>
#include<cstring>
#include"SalariedEmp.h"
using namespace std;

SalariedEmp::SalariedEmp():Employee(){
   basicSalary=0.0;
   bonus=0.0;
}

SalariedEmp::SalariedEmp(int empno,const char* name,const char* dept,const char* desig,double basicSalary):Employee(empno,name,dept,desig){

this->basicSalary=basicSalary;
this->bonus=0.10*basicSalary;
}

SalariedEmp::~SalariedEmp(){};

void SalariedEmp::setBasicSalary(double basicSalary){
            this->basicSalary=basicSalary;
            this->bonus=0.10*basicSalary;
        }
double SalariedEmp::getbasicSalary()const{
    return basicSalary;
}
 double SalariedEmp::getBonus()const{
            return 0.10*basicSalary;
        }

 double SalariedEmp::calculateSalary()const{
    double da = 0.10 * basicSalary;
    double hra = 0.15 * basicSalary;
    double pf = 0.12 * basicSalary;
    return basicSalary + da + hra - pf;
 }
 void SalariedEmp::display()const{
     Employee::display(); // Call base display
    std::cout << "Basic Salary: " << basicSalary << std::endl;
    std::cout << "Bonus       : " << bonus << std::endl;
    std::cout << "Total Salary (with DA, HRA, - PF): " << calculateSalary() << std::endl;
 }