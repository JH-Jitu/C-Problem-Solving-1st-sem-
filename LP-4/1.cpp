//MD JIDANUL HAKIM JITU
//ID: 20-44365-3
//Ans: 1

#include <iostream>
using namespace std;

class teacher
{
    private:
        char  id[30];       //Id might be used character with number. That's why I used Char here

    public:
        //function to get ID
        void getDetails(void);
        //function to print ID
        void putDetails(void);
};

//function defining outside of the class to get detials
void teacher::getDetails(void){
    cout << "Enter ID: " ;
    cin >> id;
}

//function defining outside of the class to print details
void teacher::putDetails(void){
    cout << "Your Id is: "<< id;
}

int main()
{
    teacher T1;   //Creating Object T1
 T1.getDetails();
 T1.putDetails();
 return 0;
}
