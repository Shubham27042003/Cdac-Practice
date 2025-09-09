#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"Product.h"
#include"Seller.h"
#include"Service.h"
using namespace std;
int main(){
    Service service;
    int ch;
    do{
    

    cout<<"1.for addSeller"<<endl;
    cout<<"2.addProduct()"<<endl;
    cout<<"3.displaySpecific"<<endl;
    cout<<"4.displayAllSellers"<<endl;
    cout<<"5.displayAllPrd"<<endl;
    cout<<"6.Exit....."<<endl;

    cout<<"Enter choice "<<endl;
    cin>>ch;

    switch(ch){

        case 1:service.addSeller();
                break;
        case 2:service.addProduct();
                break;
        case 3:service.displaySpecific();
                break;
        case 4:service.displayAllSellers();
                break;
        case 5:service.displayAllPrd();
                break;
        case 6:cout<<"Exit"<<endl;
                break;
        default:
                cout<<"thank you "<<endl;

    }

    }while(ch!=6);

}