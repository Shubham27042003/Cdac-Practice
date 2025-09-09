#include<iostream>
#include"service.cpp"
using namespace std;

int main(){

	int ch;
	do{
	cout<<"1.Add new seller"<<endl;
	cout<<"2.Add new product"<<endl;
	cout<<"3.display product by specific saler"<<endl;
	cout<<"4.display all salers display all products"<<endl;
	cout<<"Enter your choice "<<endl;
	cin>>ch;
	
	switch(ch){
	case 1:{
		service::addseller();
		break;
	}
	case 2:{
		int i;
		cout<<"Enter the Id of seller that you want to add"<<endl;
		service::addproduct(i);
		break;
	}
	
	}
	
	
	}while(ch!=5);



}
