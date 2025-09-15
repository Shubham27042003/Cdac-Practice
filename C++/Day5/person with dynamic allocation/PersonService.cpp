#include<iostream>
#include<cstring>
#include"Person.h"
#include"PersonService.h"
using namespace std;
Person* PersonService::Per[MAX_SIZE];
  int PersonService::count=0;

void PersonService::addPerson(){
    int id;
    char name[MAX_SIZE];
    char address[MAX_SIZE];
    cout<<"enter your id"<<endl;
    cin>>id;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your address"<<endl;
    cin>>address;
    Per[count++]=new Person(id,name,address);
    cout<<"Added"<<endl;

}
Person* PersonService::searchById(int id){
  for(int i=0;i<count;i++){
    if(Per[i]->getId()==id){
      return Per[i];
    }
  }
return nullptr;
}
void PersonService::displayAll(){
  for(int i=0;i<count;i++){
    Per[i]->display();
  }
}
Person* PersonService::searchByName(char*name){
  for(int i=0;i<count;i++){
    if(strcmp(Per[i]->getName(),name)==0){
      return Per[i];
    } 
  }
  return nullptr;
}
void PersonService::sortById(){
  for(int i=0;i<count-1;i++){
    for(int j=0;j<count-i-1;j++){
      if(Per[j]->getId()>Per[j+1]->getId()){
        Person* temp=Per[j];
        Per[j]=Per[j+1];
        Per[j+1]=temp;
      }
    }
  }
  cout<<"Sorted By id"<<endl;
  PersonService::displayAll();

}
void PersonService::sortByName(){
  for(int i=0;i<count;i++){
    for(int j=0;j<count-i-1;j++){
      if(strcmp(Per[j]->getName(),Per[j+1]->getName())>0){
        Person* temp=Per[j];
        Per[j]=Per[j+1];
        Per[j+1]=temp;
      }
    }
  }
  cout<<"Sorted By Name"<<endl;
  PersonService::displayAll();

}
void PersonService::modifyAddressById(int id) {
    Person* p = PersonService::searchById(id);
    if (p != nullptr) {
        char address[MAX_SIZE];
        cout << "enter new address" << endl;
        cin.ignore(); 
        cin.getline(address, MAX_SIZE);
        p->setAddress(address);
        cout << "address modified:" << endl;
        p->display();
    } else {
        cout << "id not found:" << endl;
    }
}
