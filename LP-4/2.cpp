//MD JIDANUL HAKIM JITU
//ID: 20-44365-3
//Ans: 2

#include <iostream>
using namespace std;

#define MAX 10

class Footballer
{
    private:
        char  name[30];
        int   goals;
        int   income;
    public:
        //A function to get footballer details
        void getDetails(void);
        //Three separate function to print footballer details
        void putName(void);
        void putGoals(void);
        void putIncome(void);
};

//Get footballer details
void Footballer::getDetails(void){
    cout << "Name of Footballer : " ;
    cin >> name;
    cout << "Goals of the footballer: ";
    cin >> goals;
    cout << "Income of the footballer: ";
    cin >> income;
}

//Print footballer details
void Footballer::putName(void){
    cout << "Name: " << name <<endl;
}
void Footballer::putGoals(void){
    cout << "Goals: " << goals <<endl;
}
void Footballer::putIncome(void){
    cout << "Income: " << income <<endl <<endl;
}

int main()
{
    Footballer std[MAX];       //Array of objects
    int n,loop;

    cout << "Enter total number of footballers: ";
    cin >> n; cout<<"\n";

    for(loop=0; loop< n; loop++){
        cout << "Enter details of the Footballer " << loop+1 << ":\n";
        std[loop].getDetails();
    }

    cout << endl;

    for(loop=0;loop< n; loop++){
        cout << "Details of all Footballer " << (loop+1) << ":\n";
        std[loop].putName();
        std[loop].putGoals();
        std[loop].putIncome();

    }

    return 0;
}
