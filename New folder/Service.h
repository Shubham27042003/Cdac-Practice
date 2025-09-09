#ifndef SERVICE__
#define SERVICE__

#include "Seller.h"
#include "Product.h"
#include <vector>

class Service {
    private:
        static vector<Seller> sl;
        static vector<Product> pt;
    public:
        static void addSeller();
        static void addProduct();
        static void displayProductSoldBySpecSeller();
        static void displayAllSellers();
        static void displayAllProducts();
};

#endif
