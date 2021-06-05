#include "Shipping.h"

class Envelope : public Shipping{
  private:
    float length;
    float width;
    double additionalCharge;
  public:
    Envelope();
    Envelope(Person, Person, double,float,float,double);
    double CalculateCost() override;
    string seeInformation() override;
    string getType() override;
    float getLength();
    float getWidth();
    double getAdditionalCharge();  
};