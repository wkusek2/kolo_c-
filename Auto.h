#ifndef AUTO_H
#define AUTO_H

#include <string>
using namespace std;

class AUTO {
public:
    string brand;
    string color;
    string size;
    string type;
    double price;
    string condition; // tu mozna zrobicv tak
    string purchaseDate;
    string saleDate;
    string description;

    AUTO(string b, string c, string s, string t, double p, string cond, string pd, string sd, string desc);

    string getBrand();
};

#endif
