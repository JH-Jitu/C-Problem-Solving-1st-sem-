
//MD JIDANUL HAKIM JITU
//ID: 20-44365-3
//Ans of: The idea of the program is to enter student details such as Student ID, Name, Contact email, phone number, department, program, address etc.


#include <iostream>
using namespace std;

#define MAX 10

class Student
{
    private:
        char  id[30];
        char  name[30];
        int   phone;
        char  dep[30];
        char  program[30];
        char  add[30];
    public:
        //A function to get student details
        void getDetails(void);
        //function to print student details
        void showDetails(void);
};

//Get student details
void Student::getDetails(void){
    cout << "Id of the Student : " ;
    cin >> id;
    cout << "Name of the Student : " ;
    cin >> name;
    cout << "Phone number of the Student : " ;
    cin >> phone;
    cout << "Department of the Student : " ;
    cin >> dep;
    cout << "Program of the Student : " ;
    cin >> program;
    cout << "Address of the Student : " ;
    cin >> add;
}

//Print student details
void Student::showDetails(void){
    cout << "ID: " << id <<endl;
    cout << "Name: " << name <<endl;
    cout << "Phone Number: " << phone <<endl;
    cout << "Department: " << dep <<endl;
    cout << "Program: " << program <<endl;
    cout << "Address: " << add <<endl;

}

int main()
{
    Student std[MAX];       //Array of objects
    int n,loop;

    cout << "Enter total number of students: ";
    cin >> n; cout<<"\n";

    for(loop=0; loop< n; loop++){
        cout << "Enter details of the Student " << loop+1 << ":\n";
        std[loop].getDetails(); cout<<endl;
    }

    cout << endl;

    for(loop=0;loop< n; loop++){
        cout << "Details of Student " << (loop+1) << ":\n";
        std[loop].showDetails(); cout<<endl;

    }

    return 0;
}
