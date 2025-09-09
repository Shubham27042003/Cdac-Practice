#include "Service.h"
#include <iostream>
using namespace std;

// Define static members
vector<Seller> Service::sl;
vector<Product> Service::pt;

void Service::addSeller() {
    string sname;
    int sid;
    cout << "Enter Seller Id: ";
    cin >> sid;
    cout << "Enter Seller Name: ";
    cin >> sname;

    sl.push_back(Seller(sid, sname));
    cout << "Seller added successfully!\n";
}

void Service::addProduct() {
    int pid;
    string pname;
    float price;

    cout << "Enter Product Id: ";
    cin >> pid;
    cout << "Enter Product Name: ";
    cin >> pname;
    cout << "Enter Product Price: ";
    cin >> price;

    pt.push_back(Product(pid, pname, price));
    cout << "Product added successfully!\n";
}

void Service::displayAllSellers() {
    cout << "\n--- All Sellers ---\n";
    for (auto &s : sl) {
        s.display();
        cout << "------------------\n";
    }
    if (sl.empty()) {
        cout << "No sellers found!\n";
    }
}

void Service::displayAllProducts() {
    cout << "\n--- All Products ---\n";
    for (auto &p : pt) {
        p.display();
        cout << "------------------\n";
    }
    if (pt.empty()) {
        cout << "No products found!\n";
    }
}

void Service::displayProductSoldBySpecSeller() {
    int sid;
    cout << "Enter Seller Id to view products: ";
    cin >> sid;

    // Check seller exists
    bool found = false;
    for (auto &s : sl) {
        if (s.getSid() == sid) {
            cout << "\nSeller Found: \n";
            s.display();

            cout << "\nProducts Sold (Demo Linking):\n";
            for (auto &prod : pt) {
                cout << "Product ID: " << prod.getPid()
                     << ", Name: " << prod.getPname()
                     << ", Price: " << prod.getPrice() << endl;
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Seller with ID " << sid << " not found!\n";
    }
}
