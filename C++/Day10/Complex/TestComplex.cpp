#include<iostream>
#include"Complex.h"
#include<cstring>
using namespace std;


int main(){
  Complex ob(12,13),ob1(ob);
  ob.display();
  ob1.display();
  
  //++ operator
  ++ob;
  ob.display();
  ob1++;
  ob1.display();
  
  //-- operator
  Complex ob2(6,8);
  ob2.display();
  ob2--;
  ob2.display();
  
  //<< operator
   Complex ob4;
   cin>>ob4;
   cout<<ob4;
  
  return 0;
}





  
  
