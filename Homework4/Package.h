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
    int fromZip;
    string toName;
    string toAddress;
    string toCity;
    string toState;
    int toZip;
    double weight;
    double costPerOz;
public:
    Package(const string&, const string&, const string&, const string&, int, const string&, const string&, const string&, const string&, int, double, double);
    string getFromName() const;
    string getFromAddress() const;
    string getFromCity() const;
    string getFromState() const;
    int getFromZip() const;
    
    Package& setFromName(const string&);
    Package& setFromAddress(const string&);
    Package& setFromCity(const string&);
    Package& setFromState(const string&);
    Package& setFromZip(int);
    
    string getToName() const;
    string getToAddress() const;
    string getToCity() const;
    string getToState() const;
    int getToZip() const;
    
    Package& setToName(const string&);
    Package& setToAddress(const string&);
    Package& setToCity(const string&);
    Package& setToState(const string&);
    Package& setToZip(int);
};

#endif /* Package_hpp */
