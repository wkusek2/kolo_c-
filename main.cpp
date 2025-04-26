#include <iostream>
#include "Auto.h"

using namespace std;

int main() {
    AUTO AUTO1("Toyota", "Red", "Medium", "SUV", 30000, "New", "2025-04-25", "2025-05-01", "Great car!");

    cout << "Brand: " << AUTO1.getBrand() << endl;

    return 0;
}
