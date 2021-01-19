//Ans No 10
//MD. JIDANUL HAKIM JITU
//ID 20-44365-3

#include<iostream>
using namespace std;

int main()
{
    int *num1,*num2;
    int a,b;

    num1=&a;
    num2=&b;

    cout<<"Enter Number 2: "; cin>>a; cout<<"Enter Number 2: "; cin>>b;
    int sum= *num1 + *num2;
    cout<<"The Sum of the two numbers us pointers: "<<sum;

    return 0;
}
