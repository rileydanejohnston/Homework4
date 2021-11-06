// Riley Johnston
// CS137
// Homework 4

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Package box1("Bruce Banner", "123 Fake St", "Smithville", "TX", "78957", "Matt Murdock", "1919 Super Pl", "Los Angeles", "CA", "90042", 15.2, 2.95);
    
    TwoDayPackage box2("Peter Parker", "456 Real St", "Smithville", "TX", "78957", "Stephen Strange", "103 Superfly Ave", "Los Angeles", "CA", "90042", 15.2, 2.95, 30.0);
    
    OvernightPackage box3("Peter Parker", "456 Real St", "Smithville", "TX", "78957", "Stephen Strange", "103 Superfly Ave", "Los Angeles", "CA", "90042", 15.2, 2.95, 12.50);
    
    
    cout << "Sender info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: "    << box3.getFromName() << endl;
    cout << "Address: " << box3.getFromAddress() << endl;
    cout << "City: "    << box3.getFromCity() << endl;
    cout << "State: "   << box3.getFromState() << endl;
    cout << "Zip: "     << box3.getFromZip() << endl;
    
    cout << endl;
    
    cout << "Destination info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: "    << box3.getToName() << endl;
    cout << "Address: " << box3.getToAddress() << endl;
    cout << "City: "    << box3.getToCity() << endl;
    cout << "State: "   << box3.getToState() << endl;
    cout << "Zip: "     << box3.getToZip() << endl;
    
    cout << endl;
    
    cout << "Cost info" << endl;
    cout << "-----------------------------" << endl;
    cout << "Weight: " << box3.getWeightOz() << " ounces" << endl;
    cout << "Cost (per oz): $" << box3.getCostPerOz() << endl;
    cout << "Extra fee (per oz): $" << box3.getExtraFeePerOz() << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: $" << box3.calculateCost() << endl;
    
     
    return 0;
}
