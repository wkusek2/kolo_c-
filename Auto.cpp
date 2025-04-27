#include "Auto.h"

// Tutaj robie to i to 
AUTO::AUTO(string b, string c,
        string s, string t,double p, string cond,
        string pd, string sd,
        string desc) {
    brand = b;
        color = c;
    size = s;
    type = t;
    price = p;
        condition = cond;
    purchaseDate = pd;
    saleDate = sd;
    description = desc;
}

// Metoda
string AUTO::getBrand() {
    return brand;
}

string test()