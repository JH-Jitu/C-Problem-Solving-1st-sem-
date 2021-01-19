#include<iostream>
using namespace std;

class mr_Makeem
{
public:
    mr_Makeem()
    {
        cout<<"\t1. Mr. Makeem built a mansion in California and drove a Ford Mustang."<<endl;
    }
};

class mr_hakeem:public mr_Makeem
{
public:
    mr_hakeem()
    {
        cout<<"\t2. Mr. Hakeem took over the business and further extended their wealth by purchasing a casino in Las Vegas."<<endl;
    }
};

class mr_rakeem:public mr_hakeem
{
public:
    mr_rakeem()
    {
        cout<<"\t3. Mr. Hakeem retired and his son Mr. Rakeem started investing in the garments industry."<<endl;
    }
};

main()
{
    cout<<"\n***********************************Story of Mr Hakeem**************************************\n\n";
    mr_rakeem display;
}
