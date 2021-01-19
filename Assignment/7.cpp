//Ans No 7
//MD. JIDANUL HAKIM JITU
//ID 20-44365-3


#include<iostream>
using namespace std;

int main(){
    int i1=0, i2=0;
    char r1[]= "four ohm";
    char r2[]= "four ohm";

for(i1=0;r1[i1]!='\0';i1++){}
for(i2=0;r1[i2]!='\0';i2++){}

    if(i1!=i2){
        cout<<"r1 = " <<r1 << " and " << "r2 = " <<r2 << " are different"<<endl;
    }

else{
int i3=0;
    for(i3 =0; i3!=i2; i3++){
        if(r1[i3]!=r2[i3])
        break;
        }
            if(i3!=i2){
                cout<<"r1 = " <<r1 << " and " << "r2 = " <<r2 << " are different"<<endl;
                }
            else{
                cout<<"r1 = " <<r1 << " and " << "r2 = " <<r2 << " are same"<<endl;
                }
 }
   return 0;
 }
