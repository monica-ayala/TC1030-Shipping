#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
  private:  
    string name;
    string address;
    string city;
    string state;
    double zipCode; 
  public:
    Person();
    Person(string,string,string,string,double);
    string getName();
    string getAddress();
    string getCity();
    string getState();
    double getZipCode(); 
};

#endif