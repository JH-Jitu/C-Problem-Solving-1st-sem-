// Md. Jidanul Hakim Jitu
// Id: 20-44365-3
// Ans No : 3 (LP-6)

#include<iostream>
using namespace std;

class building
{
protected:
    int floors;
protected:
    int rooms;
public:
    double squareFootage;
public:
    void getBuildingDet()
    {
        cout<<"Number of floors: ";
        cin>>floors;
        cout<<"Number of rooms: ";
        cin>>rooms;
        cout<<"Size of total square footage: ";
        cin>>squareFootage;
        cout<<endl;
    }
    void putBuildingDet()
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
    }

};

int main()
{
    house s;
    s.getBuildingDet();
    s.putBuildingDet();
    s.getHouseDet();
    s.putHouseDet();
    return 0;
}
