// Riley Johnston
// CS137
// Homework 4

#include "Package.h"
#include "TwoDayPackage.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Package box1("Bruce Banner", "123 Fake St", "Smithville", "TX", "78957", "Matt Murdock", "1919 Super Pl", "Los Angeles", "CA", "90042", 15.2, 2.95);
    
    TwoDayPackage box2("Peter Parker", "456 Real St", "Smithville", "TX", "78957", "Stephen Strange", "103 Superfly Ave", "Los Angeles", "CA", "90042", 15.2, 2.95, 30.0);
    
    
    cout << "Sender info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: "    << box2.getFromName() << endl;
    cout << "Address: " << box2.getFromAddress() << endl;
    cout << "City: "    << box2.getFromCity() << endl;
    cout << "State: "   << box2.getFromState() << endl;
    cout << "Zip: "     << box2.getFromZip() << endl;
    
    cout << endl;
    
    cout << "Destination info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: "    << box2.getToName() << endl;
    cout << "Address: " << box2.getToAddress() << endl;
    cout << "City: "    << box2.getToCity() << endl;
    cout << "State: "   << box2.getToState() << endl;
    cout << "Zip: "     << box2.getToZip() << endl;
    
    cout << endl;
    
    cout << "Cost info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Weight: " << box2.getWeightOz() << " ounces" << endl;
    cout << "Cost (per oz): $" << box2.getCostPerOz() << endl;
    cout << "Flat fee: $" << box2.getFlatFee() << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: $" << box2.calculateCost() << endl;
    
     
    return 0;
}
