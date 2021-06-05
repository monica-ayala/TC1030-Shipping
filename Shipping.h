#ifndef SHIPPING_H
#define SHIPPING_H
#include "Person.h"

class Shipping{
  protected:
    Person shipper;
    Person recipient; 
    double StandardCost;
  public:
    Shipping();
    Shipping(Person, Person, double);
    virtual double CalculateCost();
    virtual string seeInformation();
    virtual string getType();
    Person getShipper();
    Person getRecipient();
    double getStandardCost();
};
#endif