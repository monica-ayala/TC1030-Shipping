#include "Shipping.h"

class Package : public Shipping{
    float length;
    float width; 
    float depth;
    float weight;
    double costPerKilo;
  public:
    Package();
    Package(Person, Person, double,float,float,float,float,double);
    double CalculateCost() override;
    string seeInformation() override;
    string getType() override;
    float getLength();
    float getWidth(); 
    float getDepth();
    float getWeight();
    double getCostPerKilo();
    
};