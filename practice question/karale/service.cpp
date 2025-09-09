
#include<iostream>
#include"service.h"
using namespace std;

 seller service::arr[100];
 int service::count=0;
	

	 void  service::addseller(){
	  int id;
	  string name;
	  cout<<"Enter id and Name "<<endl;
	  cin>>id>>name;
	  arr[count++]=seller(id,name);
	  
	}
	void  service::addproduct(int id){
	          int pid;
	          string name;
	          float price;
		cout<<"Enter pid name price"<<endl;
		cin>>pid>>name>>price;
		for(int i=0;i<count;i++){
		   if(arr[i].getid()==id)
		   {
		   product p;
		   p.setpid(id);
		   p.setpname(name);
		   p.setprice(price);
		   arr[i].setproduct(p);		   
		   
		   }
		}
	
	
	} 



