#include<iostream>
#include<cstring>
#include"Employee.h"
using namespace std;

        Employee::Employee(){
                empno=0;
                name=nullptr;
                dept=nullptr;
                desig=nullptr;
            }
        Employee::Employee(int empno,const char* name,const char* dept,const char*desig){
            this->empno=empno;
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name);
            this->dept=new char[strlen(dept)+1];
            strcpy(this->dept,dept);
            this->desig=new char[strlen(desig)+1];
            strcpy(this->desig,desig);
        }
        
        //Destructors
        Employee::~Employee(){
            if(name){
                delete[] name;
            }
            if(dept){
                delete[] dept;
            }
            if(desig){
                delete [] desig;
            }
        }
        
        //setters
        void Employee::setEmpno(int empno){
            this->empno=empno;
        }
        void Employee::setName(const char* name){
            delete[] this->name;
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name);
        }
        void Employee::setDept(const char* dept){
            delete[] this->dept;
            this->dept=new char[strlen(dept)+1];
            strcpy(this->dept,dept);
        }
        void Employee::setDesig(const char* desig){
            delete[] this->desig;
            this->desig=new char[strlen(desig)+1];
            strcpy(this->desig,desig);
        }


        int Employee::getEmpno() const{
            return empno;
            }
        const char* Employee::getName() const{
            return name;
            }
        const char* Employee::getDept() const{
            return dept;
            }
        const char* Employee::getDesig() const{
            return desig;
            }
        void Employee::display()const{
            cout << "Emp No: " << empno << std::endl;
            cout << "Name  : " <<name<<endl;
            cout << "Dept  : " <<dept<<endl;
            cout << "Desg  : " <<desig<<endl;
        }    