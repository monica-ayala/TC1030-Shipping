#include <iostream>
#include <stdio.h>
#include "Shipping.h"
#include "Envelope.h"
#include "Person.h"
#include "Package.h"
#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;

//functions
void TotalCost();
void seeList();
bool menu();
void registerShippment();
double isPositive(double x);
float isPositiveFloat(float x);
Person registerPerson();

vector<Shipping*> shippments;

int main() {
  while (true){
    bool stop;
    stop=menu();
    if (stop == true){
      break;
    }
  }

  return 0;
}

//code of functions
bool menu(){
  #define RED  "\033[91m" 
  #define RESET   "\033[0m"
  cout << endl << "------------MENU------------------"<<endl<<endl;
  cout<<"1. Add Package or Envelope to ship"<<endl;
  cout<<"2. See list of shippments"<<endl;
  cout<<"3. See the total cost of all shippments"<<endl;
  cout<<"4. Exit Program"<<endl;
  cout<<" Choose an option"<<endl;

  int op;
  cin >> op;
  switch (op){
    case 1:
      registerShippment();
      break;
    case 2:
      seeList();
      break;
    case 3:
      TotalCost();
      break;
    case 4:
      return true;
      break;
  }
  return false;
}

void seeList(){
  vector<Shipping*>::const_iterator i;
  int number=1;
  for(i= shippments.begin(); i<shippments.end(); ++i){
    cout<<endl<<"----------"<<(*i)->getType()<<" "<<number<<"--------"<<endl;
    cout<<(*i)->seeInformation();
    cout<< endl<< RED << "Cost of Shippment: "<< (*i)->CalculateCost() << " USD$" <<RESET<<endl;
    number++;
  }
}

void TotalCost(){
  #define RED  "\033[91m" 
  #define RESET   "\033[0m"
  vector<Shipping*>::const_iterator i;
  int number=0;
  for(i= shippments.begin(); i<shippments.end(); ++i){
    number = number + (*i)->CalculateCost();
  }
  cout<<endl<<"--------------TOTAL----------"<<endl;
  cout << RED << "THE TOTAL IS: "<<number<<" USD$"<<RESET<<endl;
}

void registerShippment(){
  cout<<endl<<"--Shipper´s Information--"<<endl;
  Person shipper = registerPerson();

  cout<<endl<<"--Reciever´s Information--"<<endl;
  Person reciever = registerPerson();

  cout << endl<< "How many shippments do you want to process for the same shipper and reciever?"<<endl; int n; cin >> n;

  for ( int i=0; i<n; i++ ){

    cout << endl<< "Do you want to change the shipper´s information Y/N?"<<endl; string op1; cin >> op1;

    if (op1 == "Y"){shipper = registerPerson();}
    cout << endl<<"Do you want to change the reciever´s information Y/N?"<<endl; string op2; cin >> op2;

    if (op2 == "Y"){reciever = registerPerson();}
    cout << endl<<"Do you want to register a 1. Package or 2. Envelope?"<<endl;int op3;cin>>op3;

    if (op3 == 1){
      float length,width,depth,weight;
      double StandardCost, costPerKilo;
      cout<<endl<<"------PACKAGE------"<<endl;
      cout << "length:";cin>>length;
      length = isPositiveFloat(length);
      cout << "width:";cin>>width;
      width = isPositiveFloat(width);
      cout << "depth:";cin>>depth;
      depth = isPositiveFloat(depth);
      cout << "weight:";cin>>weight;
      weight = isPositiveFloat(weight);
      cout << "Cost per Kilogram:";cin>>costPerKilo;
      costPerKilo = isPositive(costPerKilo);
      cout << "Standard Cost:";cin>>StandardCost;
      StandardCost = isPositive(StandardCost);

      shippments.push_back(new Package(shipper,reciever,StandardCost,length,width,depth,weight,costPerKilo));
    }
    else if(op3 == 2){
      float length,width;
      double StandardCost,additionalCharge;
      cout<<endl<<"------ENVELOPE------"<<endl;
      cout << "length:";cin>>length;
      length = isPositiveFloat(length);
      cout << "width:";cin>>width;
      width = isPositiveFloat(width);
      cout << "additional charge:";cin>>additionalCharge;
      additionalCharge = isPositive(additionalCharge);
      cout << "Standard Cost:";cin>>StandardCost;
      StandardCost = isPositive(StandardCost);

      shippments.push_back(new Envelope(shipper,reciever,StandardCost,length,width,additionalCharge));
    }

  }
}

Person registerPerson(){
  string name,address,city,state;
  double zipCode; 
  cout<<"name:"; cin>>name; 
  cout<<"adress:"; cin>>address; 
  cout<<"city:"; cin>>city; 
  cout<<"state:"; cin>>state; 
  cout<<"zipCode:"; cin>>zipCode; 
  Person person(name, address, city, state, zipCode);
  return person;
}

double isPositive(double x){
  while(x<0){
    cout<<endl<<"Please enter a positive value:";cin>>x;
  }
  return x;
}
float isPositiveFloat(float x){
  while(x<0){
    cout<<endl<<"Please enter a positive value:";cin>>x;
  }
  return x;

}