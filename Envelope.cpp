#include "Envelope.h"

Envelope :: Envelope(){
  shipper = Person();
  recipient = Person();
}

Envelope :: Envelope(Person _shipper, Person _recipient, double _StandardCost,float _length,float _width,double _additionalCharge):Shipping(_shipper,_recipient,_StandardCost){
  length = _length;
  width = _width;
  additionalCharge = _additionalCharge;
}

//methods
double Envelope :: CalculateCost(){
  double Cost;
  double n;
  n = length*width;
  if (n>750){
    Cost = StandardCost + additionalCharge;
    return Cost;
  }
  Cost = StandardCost;
  return Cost;
}

string Envelope :: seeInformation(){
  
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
  info=info+"Length:"+to_string(length)+"\n";
  info=info+"Width:"+to_string(width)+"\n";
  info=info+"Width:"+to_string(additionalCharge)+"\n";
  return info;
}

//getters
float Envelope :: getLength(){
  return length;
}

float Envelope :: getWidth(){
  return width;
}

double Envelope :: getAdditionalCharge(){
  return additionalCharge;
}

string Envelope:: getType(){
  string type = "ENVELOPE";
  return type;
}
