// Md. Jidanul Hakim Jitu
// Id: 20-44365-3
// Ans No : 3 (Assignment Final)

#include<iostream>
using namespace std;

class Mammal
{
public:
    Mammal()
    {
        cout<<"Mammals can give direct birth"<<endl;
    }
};
class wingedAnimal
{
public:
    wingedAnimal()
    {
        cout<<"Winged animals can flap"<<endl;
    }
};
class Bat:public Mammal, public wingedAnimal
{
public:
    Bat()
    {
        cout<<"Bats are birds of midnight"<<endl;
    }

};
int main()
{
    Bat display;
}
