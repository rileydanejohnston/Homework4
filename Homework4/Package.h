// Riley Johnston
// CS137
// Homework 4

#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package {
private:
    string fromName;
    string fromAddress;
    string fromCity;
    string fromState;
    string fromZip;
    string toName;
    string toAddress;
    string toCity;
    string toState;
    string toZip;
    double weightOz;
    double costPerOz;
public:
    Package(const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, double, double);
    
    Package& setFromName(const string&);
    Package& setFromAddress(const string&);
    Package& setFromCity(const string&);
    Package& setFromState(const string&);
    Package& setFromZip(const string&);
    Package& setToName(const string&);
    Package& setToAddress(const string&);
    Package& setToCity(const string&);
    Package& setToState(const string&);
    Package& setToZip(const string&);
    Package& setWeightOz(double);
    Package& setCostPerOz(double);
    
    string getFromName() const;
    string getFromAddress() const;
    string getFromCity() const;
    string getFromState() const;
    string getFromZip() const;
    string getToName() const;
    string getToAddress() const;
    string getToCity() const;
    string getToState() const;
    string getToZip() const;
    double getWeightOz() const;
    double getCostPerOz() const;
    double calculateCost() const;
};

#endif /* Package_hpp */
