// Riley Johnston
// CS137
// Homework 4

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
    private:
        double extraFeePerOz;
    public:
        OvernightPackage(const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, double, double, double);
        OvernightPackage& setExtraFeePerOz(double);
        double getExtraFeePerOz() const;
        double calculateCost() const;
};

#endif
