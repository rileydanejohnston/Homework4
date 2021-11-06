// Riley Johnston
// CS137
// Homework 4

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    Package box1("Peter Parker", "456 Real St", "Smithville", "TX", "78957", "Bruce Banner", "103 Superfly Ave", "Los Angeles", "CA", "90042", 13.6, 18.23);
    
    TwoDayPackage box2;
    
    OvernightPackage box3("Nick Fury", "12 Park Circle", "Toledo", "OH", "11992", "Carol Danvers", "555 Powerful Ave", "Portland", "OR", "44377", 15.2, 2.95, 12.50);
    
    box1.print();
    cout << fixed <<setprecision(2) << "-----------------------------" << endl;
    cout << "Total: $" << box1.calculateCost() << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    
    box2.setFlatFee(-10).setFromName("Steve Rogers").setFromAddress("123 Overprice Ln").setFromCity("Brooklyn").setFromState("NY").setFromZip("33224").setToName("Bucky Barnes").setToAddress("456 Overpopulated Circle").setToCity("Brooklyn").setToState("NY").setToZip("33443").setCostPerOz(-4).setWeightOz(-50);
    
    cout << "Box2 flat fee: " << box2.getFlatFee() << endl;
    cout << "Box2 cost per oz: " << box2.getCostPerOz() << endl;
    cout << "Box2 weight (oz): " << box2.getWeightOz() << endl;
    
    box2.setFlatFee(35.25).setCostPerOz(2.95).setWeightOz(68.35);
    
    box2.print();
    cout << endl;
    
    
    cout << "-------------------------------------------------------------------------------------" << endl;
    
    box3.print();
    cout << endl;
    
     
    return 0;
}
