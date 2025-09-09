#include "StudentService.h"
#include"Student.h"
#include <iostream>
#include<cstring>
using namespace std;

Student* StudentService::stud[SIZE_OF_STUDENT];
int StudentService::count = 0;

void StudentService::addStudent() {
    if (count >= SIZE_OF_STUDENT) {
        cout << "Cannot add more students! Maximum reached.\n";
        return;
    }

    char name[SIZE];
    int id, m1, m2, m3;

    cout << "Enter StudId: ";
    cin >> id;
    cin.ignore(); // clear newline before getline
    cout << "Enter name: ";
    cin.getline(name, SIZE);

    cout << "Enter m1: ";
    cin >> m1;
    cout << "Enter m2: ";
    cin >> m2;
    cout << "Enter m3: ";
    cin >> m3;

    stud[count++] = new Student(id, name, m1, m2, m3);
    cout << "Added Successfully\n";
}

void StudentService::studentDisplay() {
    if (count == 0) {
        cout << "No students to display.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        stud[i]->display();
        cout << endl;
    }
}
Student* StudentService::searchById() {
    int id;
    cout<<"Enter id you want to search"<<endl;
    cin>>id;
    if (count == 0) {
        cout << "No students to display.\n";
        return nullptr;
    }
    for (int i = 0; i < count; i++) {
        if(stud[i]->getStudId()==id){
            return stud[i];
        }
        cout << endl;
    }
}
Student* StudentService::SearchByName() {
    char name[SIZE];
    cout<<"Enter name you want to search"<<endl;
    cin>>name;
    for (int i = 0; i < count; i++) {
        if(strcmp(stud[i]->getName(),name)==0){
            return stud[i];
        }
        cout << endl;
    }
    return nullptr;
}

 void StudentService::sortByM1(){
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(stud[j]->getM1()>stud[j+1]->getM1()){
             Student* temp=stud[j];
            stud[j]=stud[j+1];
            stud[j+1]=temp;

            }
        }

    }
}

void StudentService::Gpa(){
for (int i = 0; i < count; i++) {
    cout << "GPA of " << stud[i]->getName() << " = "<< stud[i]->calculateGpa() << endl;    
    }
}   
