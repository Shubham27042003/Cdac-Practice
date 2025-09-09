#include<iostream>
#include"Person.h"
#include"PersonService.h"
using namespace std;
int main(){
   int ch;
   do{
      
         cout<<"1.Add person"<<endl;
         cout<<"2. Search by id"<<endl;
         cout<<"3. display all"<<endl;
         cout<<"4. Search by name"<<endl;
         cout<<"5. sort by id"<<endl;
         cout<<"6. sort by name"<<endl;
         cout<<"7. modify address by id"<<endl;
         cout<<"8. exit"<<endl;

         cout<<"Enter choice"<<endl;
         cin>>ch;
         switch(ch){
            case 1:PersonService::addPerson();
                  break;
            
            case 2:{
                  int id;
                  cout<<"enter id to search"<<endl;
                  cin>>id;
                  Person* p=PersonService::searchById(id);
                  if(p){
                     p->display();
                  }else{
                     cout<<"not found:"<<endl;
                  }
                  break;
               }
            case 3:{
                  cout<<"display all persons"<<endl;
                  PersonService::displayAll();
                  break;
            }
            case 4:{
                  cout<<"search by name"<<endl;
                  char name[MAX_SIZE];
                  cout<<"enter a name you want to search"<<endl;
                  cin>>name;
                  Person* p=PersonService::searchByName(name);
                  if(p){
                     p->display();
                  }else{
                     cout<<"not found:"<<endl;
                  }
                 break;
               }
            case 5:{
                  cout<<"Sort By Id:"<<endl;
                  PersonService::sortById();
                 break;
            }

            case 6:{
                  cout<<"Sort By Name:"<<endl;
                  PersonService::sortByName();
                 break;
            }

            case 7:{
                  int id;
                  cout<<"enter id to modify address"<<endl;
                  cin>>id;
                  PersonService::modifyAddressById(id);
                 break;
               }
            case 8:{
                  cout<<"exit:"<<endl;
                  break;
            }
           
           default:{
                  cout<<"invalid choice"<<endl;
                  break;
                    }       
   }
   }while(ch!=8);
  
   
  
   return 0;
}
