// Ans 2:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3

#include<iostream>
using namespace std;

int main(){

char name[]={'M','a','s','h','r','a','f','e'};
int i;
//  Identifying length
int length = *(&name + 1) - name;
//assigning value
for(i=0;i<length;i++){
cout<<name[i];



}
return 0;
}

