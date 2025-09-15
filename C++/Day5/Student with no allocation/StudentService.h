#ifndef STUDENT_SERVICE_H
#define STUDENT_SERVICE_H

#include "Student.h"

const int SIZE_OF_STUDENT = 5;

class StudentService {
private:
    static Student stud[SIZE_OF_STUDENT];
    static int count;

public:
    static void addStudent();
    static void studentDisplay();
};

#endif
