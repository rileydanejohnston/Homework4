// Riley Johnston
// CS137
// Homework 4

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
    private:
        double feePerOz;
    public:
        OvernightPackage(const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, const string&, double, double, double);
        OvernightPackage& setFeePerOz(double);
        double getFeePerOz() const;
};

#endif
