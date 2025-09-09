#ifndef EMPLOYEE_
#define EMPLOYEE_
class Employee{
    private:
        int empno;
        char* name;
        char* dept;
        char* desig;
    public:  
        //Constructors  
        Employee();
        Employee(int empno,const char* name,const char* dept,const char*desig);
        
        //Destructors
        ~Employee();
        
        //setters
        void setEmpno(int empno);
        void setName(const char* name);
        void setDept(const char* dept);
        void setDesig(const char* desig);

        //Getters
        int getEmpno() const;
        const char* getName() const;
        const char* getDept() const;
        const char* getDesig() const;
        
       virtual double calculateSalary()const=0;
        //display
        virtual void display()const;

};
#endif
