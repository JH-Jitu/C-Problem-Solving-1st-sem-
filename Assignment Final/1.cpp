// Md. Jidanul Hakim Jitu
// Id: 20-44365-3
// Ans No : 1 (Assignment Final)

#include<iostream>
using namespace std;

class building
{
protected:
    int floors;
    int rooms;
public:
    double squareFootage;
public:
    void getDetails()
    {
        cout<<"Number of floors: ";
        cin>>floors;
        cout<<"Number of rooms: ";
        cin>>rooms;
        cout<<"Size of total square footage: ";
        cin>>squareFootage;
        cout<<endl;
    }
    void putDetails()
    {
        cout<<"The number of floors is: "<<floors<<endl;
        cout<<"The number of rooms is: "<<rooms<<endl;
        cout<<"The number total square footage is: "<<squareFootage<<endl;
        cout<<endl;
    }

};

class house:public building
{
protected:
    int bedrooms;
    int bathrooms;
public:

     void getHouseDet()
    {
        cout<<"Number of bedrooms: ";
        cin>>bedrooms;
        cout<<"Number of bathrooms: ";
        cin>>bathrooms;
        cout<<endl;
    }
    void putHouseDet()
    {
         cout<<"The number of bedrooms: "<<bedrooms<<endl;
         cout<<"The number of bathrooms: "<<bathrooms<<endl;
         cout<<endl;
    }

};

class office:public building
{
protected:
    int fireExtinguishers;
    int telephoneNumbers;
public:
      void getOfficeDet()
    {
        cout<<"Number of fire extinguishers: ";
        cin>>fireExtinguishers;
        cout<<"Number of Telephones: ";
        cin>>telephoneNumbers;
        cout<<endl;
    }

     void putOfficeDet()
    {
         cout<<"The number of fire extinguishers: "<<fireExtinguishers<<endl;
          cout<<"The telephone numbers are: "<<telephoneNumbers<<endl;
    }

};

int main()
{
    house* obj_1=new house;
    office* obj_2=new office;
    obj_1 -> getDetails();
    obj_1 -> putDetails();
    obj_1 -> getHouseDet();
    obj_1 -> putHouseDet();
    obj_2 ->getOfficeDet();
    obj_2 ->putOfficeDet();
    return 0;
}
