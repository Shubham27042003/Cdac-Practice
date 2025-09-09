#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
public:
    Person(string nm="") : name(nm) {}
    virtual void display() const {
        cout << "Name: " << name << endl;
    }
};

// Product Class
class Product {
    int pid;
    string pname;
    double price;
public:
    Product(int id=0, string nm="", double pr=0.0) : pid(id), pname(nm), price(pr) {}
    void display() const {
        cout << "Product ID: " << pid 
             << ", Name: " << pname 
             << ", Price: " << price << endl;
    }
};

// Seller Class (IS-A Person, HAS-A Products)
class Seller : public Person {
    int sellerId;
    vector<Product> products;
public:
    Seller(int id=0, string nm="") : Person(nm), sellerId(id) {}
    
    void addProduct(int pid, string pname, double price) {
        products.push_back(Product(pid, pname, price));
    }

    void display() const override {
        cout << "Seller ID: " << sellerId << ", Name: " << name << endl;
        if(products.empty()) cout << "   No Products\n";
        else {
            for(auto &p : products) p.display();
        }
    }

    int getId() const { return sellerId; }

    const vector<Product>& getProducts() const {
        return products;
    }
};

// Main Menu
int main() {
    vector<Seller> sellers;
    int choice;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Add Seller\n";
        cout << "2. Add Product to Seller\n";
        cout << "3. Display Products by Seller\n";
        cout << "4. Display All Sellers\n";
        cout << "5. Display All Products\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            int id;
            string name;
            cout << "Enter Seller ID: ";
            cin >> id;
            cout << "Enter Seller Name: ";
            cin.ignore();
            getline(cin, name);
            sellers.push_back(Seller(id, name));
        }
        else if(choice == 2) {
            int sid, pid;
            string pname;
            double price;
            cout << "Enter Seller ID: ";
            cin >> sid;
            bool found = false;
            for(auto &s : sellers) {
                if(s.getId() == sid) {
                    cout << "Enter Product ID: ";
                    cin >> pid;
                    cout << "Enter Product Name: ";
                    cin.ignore();
                    getline(cin, pname);
                    cout << "Enter Product Price: ";
                    cin >> price;
                    s.addProduct(pid, pname, price);
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Seller not found!\n";
        }
        else if(choice == 3) {
            int sid;
            cout << "Enter Seller ID: ";
            cin >> sid;
            bool found = false;
            for(auto &s : sellers) {
                if(s.getId() == sid) {
                    s.display();
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Seller not found!\n";
        }
        else if(choice == 4) {
            for(auto &s : sellers) {
                s.display();
            }
        }
        else if(choice == 5) {
            cout << "\n--- All Products ---\n";
            bool empty = true;
            for(auto &s : sellers) {
                for(auto &p : s.getProducts()) {
                    p.display();
                    empty = false;
                }
            }
            if(empty) cout << "No products available.\n";
        }
    } while(choice != 0);

    return 0;
}
