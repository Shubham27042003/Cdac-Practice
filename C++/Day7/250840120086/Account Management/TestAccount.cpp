#include<iostream>
//#include"Account.h"
#include"Saving.h"
#include"Current.h"
using namespace std;

int main(){
    Account ac("onkar","gaikwad","7517563160","onkargaikwad45@gmail.com",200000);
    ac.display();

    Saving ac1("ram","shinde","7517563160","rams@gmail.com",200000,15);
    ac1.display();

    Current ac2("Sham","kale","7518963160","shamk@gmail.com",200000,30000,16);
    ac2.display();

    return 0;
}