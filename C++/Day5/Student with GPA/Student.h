#ifndef STUDENT_H
#define STUDENT_H
const int SIZE = 100;
class Student {
private:
    int studId;
    char* name;
    int m1, m2, m3;

public:
    Student();
    Student(int studId, const char* name, int m1, int m2, int m3);

    void setStudId(int id);
    void setName(const char* name);
    void setM1(int m1);
    void setM2(int m2);
    void setM3(int m3);

    int getStudId();
    const char* getName();
    int getM1();
    int getM2();
    int getM3();
    double calculateGpa();

    void display();
};

#endif
