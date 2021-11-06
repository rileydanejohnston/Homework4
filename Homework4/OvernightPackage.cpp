// Riley Johnston
// CS137
// Homework 4

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &sendName, const string &sendAdd, const string &sendCity, const string &sendState, const string &sendZip, const string &destName, const string &destAdd, const string &destCity, const string &destState, const string &destZip, double ounces, double cost, double ozFee):
Package(sendName, sendAdd, sendCity, sendState, sendZip, destName, destAdd, destCity, destState, destZip, ounces, cost)
{
    setFeePerOz(ozFee);
}

OvernightPackage& OvernightPackage::setFeePerOz(double ozFee)
{
    feePerOz = (ozFee >= 0.0) ? ozFee : 0.0;
    return *this;
}
