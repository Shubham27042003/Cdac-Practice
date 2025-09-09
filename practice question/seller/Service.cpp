#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"Product.h"
#include"Seller.h"
#include"Service.h"
using namespace std;

void Service::addSeller(){
    int id;
    string name;
    cout << "Enter seller id: ";
    cin >> id;
    cin.ignore();                // clear buffer
    cout << "Enter name: ";
    getline(cin, name);          // full name allowed
    s.push_back(new Seller(name,id));
}

void Service::addProduct(){
    int pid;
    string pname;
    int price;
    cout << "Enter Product id: ";
    cin >> pid;
    cin.ignore();
    cout << "Enter Product name: ";
    getline(cin, pname);
    cout << "Product price is: ";
    cin >> price;
    p.push_back(new Product(pid,pname,price));
}

void Service::displaySpecific(){
    string Sel;
    cout << "Enter name of Seller: ";
    cin.ignore();
    getline(cin, Sel);
    Seller* sell = nullptr;
    for(auto k: s){
        if(k->getSname() == Sel){
            sell = k;
            break;
        }
    }
    if (sell) {
        sell->display();
        sell->displayProduct();
    } else {
        cout << "Seller not found!\n";
    }
}
void Service::addPro() {
    int pid;
    string sportName;
    cout << "Enter Player ID: ";
    cin >> pid;
    cin.ignore();                   // clear newline
    cout << "Enter Sport Name: ";
    getline(cin, sportName);

    Player* p = nullptr;
    for (auto pl : players){
        if (pl->getId() == pid) {
            p = pl;
            break; 
        }
    }

    Sports* sp = nullptr;
    for (auto s : sportsList){
        if (s->getName() == sportName) {
            sp = s;
            break;
        }
    }

    if (p && sp) {
        p->enrollSport(sp);
        cout << "Player enrolled successfully!\n";
    } else {
        cout << "Invalid Player ID or Sport Name\n";
    }
}


void Service::displayAllSellers(){
    for(auto s1 : s){
        s1->display();
        s1->displayProduct();
        cout << "---------------------\n";
    }
}

void Service::displayAllPrd(){
    for(auto p1 : p){
        p1->display();     // show product details
    }
}
