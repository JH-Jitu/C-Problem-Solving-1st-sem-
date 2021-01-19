// Ans 6:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3
#include<iostream>
using namespace std;

int main(){
double i, r, resistance;
cout<<"write resistance in Ohm: "; cin>> r;
for(i=0;i<3;i++){
cout<< " " << i << "Resistance is: " << r <<endl ;
resistance = resistance + r;
}

cout<< "Series resistance is:  " <<resistance;

return 0;
}
