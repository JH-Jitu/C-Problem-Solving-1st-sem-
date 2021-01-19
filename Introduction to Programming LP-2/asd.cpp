// Name: Md. Jidanul Hakim Jitu
// ID: 20-44365-3

#include <iostream>
using namespace std;
void printName(){
    int i;
    double salary_mashrafe;
    int wicket_mashrafe;

    //    ARRAY defining
    char name[]={'M','a','s','h','r','a','f','e'};

    //  Identifying length
int length = *(&name + 1) - name;

    // Making Loop
    for (i=0;i<length;i++){
             cout<<name[i];
    }
    cout<< endl;

                            //  Salary..............

    cout<< "How much salary Mashrafe gets?" <<endl;
    cin >> salary_mashrafe; cout << endl;

     if(salary_mashrafe<345.66)
   {
       cout<<"Low Salary"<<endl;
   }

   if(salary_mashrafe<0)
   {
       cout<<"Salary can't be less than 0"<<endl;
   }

   else
   {
       cout<<"High Salary"<<endl;
   }

                            // Wicket..................

    cout<< "How many wicket Mashrafe got?" <<endl;
    cin >> wicket_mashrafe; cout << endl;

    if(wicket_mashrafe<34)
   {
       cout<<"Low Wicket"<<endl;
   }
   else if(wicket_mashrafe<0)
   {
       cout<<"Wicket can't be less than 0"<<endl;
   }
   else
   {
       cout<<"High Wicket"<<endl;
   }
}
int main()
{
    printName();
}
