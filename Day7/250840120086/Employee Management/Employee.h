#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
protected:
    int empno;
    char* ename;
    char* dept;
    char* desg;

public:
    Employee();
    Employee(int empno, const char* ename, const char* dept, const char* desg);
    virtual ~Employee();

    void setEmpNo(int empno);
    void setEName(const char* ename);
    void setDept(const char* dept);
    void setDesg(const char* desg);

    int getEmpNo() const;
    const char* getEName() const;
    const char* getDept() const;
    const char* getDesg() const;

    //virtual double calculateSalary() const;  // Virtual method
    
    virtual double calculateSalary() const=0;  //pure virtual function

    virtual void display() const;
};

#endif

