// Riley Johnston
// CS137
// Homework 4

#include "Package.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Package box1("Riley Johnston", "1001 Colorado St", "Smithville", "TX", "78957", "Laurel Appelt", "5210 Irvington Pl", "Los Angeles", "CA", "90042", 15.2, 2.95);
    
    cout << "Sender info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: "    << box1.getFromName() << endl;
    cout << "Address: " << box1.getFromAddress() << endl;
    cout << "City: "    << box1.getFromCity() << endl;
    cout << "State: "   << box1.getFromState() << endl;
    cout << "Zip: "     << box1.getFromZip() << endl;
    
    cout << endl;
    
    cout << "Destination info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: "    << box1.getToName() << endl;
    cout << "Address: " << box1.getToAddress() << endl;
    cout << "City: "    << box1.getToCity() << endl;
    cout << "State: "   << box1.getToState() << endl;
    cout << "Zip: "     << box1.getToZip() << endl;
    return 0;
}
