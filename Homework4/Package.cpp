// Riley Johnston
// CS137
// Homework 4

#include "Package.h"

Package::Package(const string &sendName, const string &sendAdd, const string &sendCity, const string &sendState, const string &sendZip, const string &destName, const string &destAdd, const string &destCity, const string &destState, const string &destZip, double ounces, double cost)
{
    setFromName(sendName);
    setFromAddress(sendAdd);
    setFromCity(sendCity);
    setFromState(sendState);
    setFromZip(sendZip);
    
    setToName(destName);
    setToAddress(destAdd);
    setToCity(destCity);
    setToState(destState);
    setToZip(destZip);
    
    setWeightOz(ounces);
    setCostPerOz(cost);
}

Package& Package::setFromName(const string& sendName)
{
    fromName = sendName;
    return *this;
}

Package& Package::setFromAddress(const string& sendAdd)
{
    fromAddress = sendAdd;
    return *this;
}

Package& Package::setFromCity(const string& sendCity)
{
    fromCity = sendCity;
    return *this;
}

Package& Package::setFromState(const string& sendState)
{
    fromState = sendState;
    return *this;
}

Package& Package::setFromZip(const string& sendZip)
{
    fromZip = sendZip;
    return *this;
}

Package& Package::setToName(const string& destName)
{
    toName = destName;
    return *this;
}

Package& Package::setToAddress(const string& destAdd)
{
    toAddress = destAdd;
    return *this;
}

Package& Package::setToCity(const string& destCity)
{
    toCity = destCity;
    return *this;
}

Package& Package::setToState(const string& destState)
{
    toState = destState;
    return *this;
}

Package& Package::setToZip(const string& destZip)
{
    toZip = destZip;
    return *this;
}

Package& Package::setWeightOz(double ounces)
{
    weightOz = (ounces >= 0.0) ? ounces : 0.0;
    return *this;
}

Package& Package::setCostPerOz(double cost)
{
    costPerOz = (cost >= 0.0) ? cost : 0.0;
    return *this;
}
