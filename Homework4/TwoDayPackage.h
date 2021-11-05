// Riley Johnston
// CS137
// Homework 4

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package {
private:
    double flatFee;
public:
    TwoDayPackage(const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, double, double, double);
    TwoDayPackage& setFlatFee(double);
    double getFlatFee() const;
    double calculateCost() const;
    
};

#endif /* TwoDayPackage_hpp */
