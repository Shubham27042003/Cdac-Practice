#include<iostream>
#include<cstring>
#include "MyClass.h"
using namespace std;

int main() {
    MyClass ob1(12, 13, 14, "DAC");
    MyClass ob2(20, 30, 40, "B1");

    MyClass ob3 = ob1 + ob2;
    ob3.display();

    MyClass ob4 = ob1 - ob2;
    ob4.display();

    MyClass ob5 = ob1 * ob2;
    ob5.display();

    MyClass ob6 = ob1 / ob2;
    ob6.display();

    cout<<"Are ob1 and ob2 equal? "<<(ob1 == ob2)<< endl;

    return 0;
}
