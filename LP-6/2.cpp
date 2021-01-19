// Md. Jidanul Hakim Jitu
// Id: 20-44365-3
// Ans No : 2 (LP-6)

#include<iostream>
using namespace std;

class A
{
private:
    int a;
    int b;
    int c;
public:
    A()
    {
         cout<<"No Arguement"<<endl;
    }
    A(int x)
    {
        a=x;
        cout << "one argument ";
        cout<<a<<endl;
    }
    A(int x, int y)
    {
        a=x;
        b=y;
        cout << "two argument ";
        cout<<a<< ", " <<b <<endl;
    }
    A(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
        cout << "three argument ";
        cout<< a << ", " << b << ", " <<c <<endl;
    }
};

int main()
{
    A arg1,arg2(12),arg3(13,14),arg4(15,16,17);
    return 0;
}
