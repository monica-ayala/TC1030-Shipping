#include "Person.h"
#include <iostream>
using namespace std;

Person :: Person(){}

Person :: Person(string _name,string _address,string _city,string _state,double _zipCode){
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  zipCode = _zipCode;
}

string Person :: getName(){
  return name;
}

string Person :: getAddress(){
  return address;
}

string Person :: getCity(){
  return city;
}

string Person :: getState(){
  return state;
}

double Person :: getZipCode(){
  return zipCode;
} 