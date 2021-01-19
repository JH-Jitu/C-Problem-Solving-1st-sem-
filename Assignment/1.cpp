//Ans No 1
//MD. JIDANUL HAKIM JITU
//ID 20-44365-3

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    cout<< "Enter your full name to see it in reverse : " <<endl;
    char name[30];
    gets(name);
    strrev(name);
    cout<<endl;
    cout<< "Your name in reverse is : "<<name;
    cout<<endl;
    return 0;
}
