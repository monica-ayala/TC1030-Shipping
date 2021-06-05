#include "Shipping.h"

Shipping :: Shipping(){
  shipper = Person();
  recipient = Person();
}

Shipping :: Shipping(Person _shipper, Person _recipient, double _StandardCost){
  shipper = _shipper;
  recipient = _recipient;
  StandardCost = _StandardCost;
}

double Shipping :: CalculateCost(){
  return StandardCost;
}
Person Shipping :: getShipper(){
  return shipper;
}
Person Shipping :: getRecipient(){
  return recipient;
}
double Shipping :: getStandardCost(){
  return StandardCost;
}

string Shipping :: seeInformation(){
  string info;
  info=info+"\n----------SHIPPING--------\n";
  info=info+"\nSHIPPER:\n";
    info=info+" name:"+shipper.getName()+"\n";
    info=info+" adress:"+shipper.getAddress()+"\n"; 
    info=info+" city:"+shipper.getCity()+"\n";
    info=info+" state:"+shipper.getState()+"\n";
    info=info+" Zip Code:"+to_string(shipper.getZipCode())+"\n";
  info=info+"\nRECIPIENT:\n";
    info=info+" name:"+recipient.getName()+"\n";
    info=info+" adress:"+recipient.getAddress()+"\n"; 
    info=info+" city:"+recipient.getCity()+"\n";
    info=info+" state:"+recipient.getState()+"\n";
    info=info+" Zip Code:"+to_string(recipient.getZipCode())+"\n";
  info=info+"\nStandard Cost:"+to_string(StandardCost)+"\n";
  return info;
}

string Shipping::getType(){
  string type = "UNKNOWN";
  return type;
}
