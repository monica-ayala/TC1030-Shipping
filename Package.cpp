#include "Package.h"

Package :: Package(){
  shipper = Person();
  recipient = Person();
}

Package :: Package(Person _shipper, Person _reciever, double _StandardCost, float _length, float _width,float _depth,float _weight,double _costPerKilo):Shipping(_shipper,_reciever,_StandardCost){
  length = _length;
  width = _width;
  depth = _depth;
  weight = _weight;
  costPerKilo = _costPerKilo;
}

double Package :: CalculateCost(){
  double cost;
  cost = weight*costPerKilo + StandardCost;
  return cost;
}

string Package::getType(){
  string type = "PACKAGE";
  return type;
}
string Package :: seeInformation(){
  
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
  info=info+"Depth:" +to_string(depth)+"\n";
  info=info+"Weight:"+to_string(weight)+"\n";
  info=info+"Cost per Kilogram:" + to_string(costPerKilo)+"\n";
  return info;
}
float Package :: getLength(){
  return length;
}
float Package :: getWidth(){
  return width;
}
float Package :: getDepth(){
  return depth;
}
float Package :: getWeight(){
  return weight;
}
double Package :: getCostPerKilo(){
  return costPerKilo;
}
