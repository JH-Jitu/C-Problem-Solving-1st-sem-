// Md. Jidanul Hakim Jitu
// ID: 20-44365-3
// Ans to the Question No 1 of PROJECT

#include<iostream>
using namespace std;

class Database
{
private:
    char student_id[60][50];
    char student_name[60][50];
    char student_email[60][50];
    int student_phone[60];
    char student_dep[60][50];
    char student_program[60][50];
    char student_add[60][50];
    int n;
public:
    Database()
    {
     cout<<"\n\t<******************************** WELCOME TO OUR STUDENT DATABASE *************************************>"<<endl;
     cout<<endl;
    }
    Database(int helpcenter)
    {
        cout<<"\n\tIf any problem in Student Database then call: "<<helpcenter<<endl;
    }

public:
    int setstudent_info()
    {
        cout<<"\n\tEnter student number: ";
        cin>>n; cout<<endl;
        for(int i=0; i<n; i++)
        {
             cout<<"\tEnter details of student " << i + 1 <<'\n';
            cout<<"\tEnter student id: ";
        cin>>student_id[i];
        cout<<"\tEnter student name: ";
        cin>>student_name[i];
        cout<<"\tEnter student email: ";
        cin>>student_email[i];
        cout<<"\tEnter student phone number: ";
        cin>>student_phone[i];
        cout<<"\tEnter student department: ";
        cin>>student_dep[i];
        cout<<"\tEnter student program: ";
        cin>>student_program[i];
        cout<<"\tEnter student address: ";
        cin>>student_add[i];
        cout<<endl;
        }
    }
    void displays()
    {
    cout<<"\n\t******************STUDENT DATABASE*********************"<<endl;
    }
    int getstudent_info()
    {

        for(int i=0; i<n; i++)
        {
            cout<<"\tDetails of student " << i + 1 <<'\n';
        cout<<"\n\t"<<i+1<<"\tstudent id: "<<student_id[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent name: "<<student_name[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent email: "<<student_email[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent phone: "<<student_phone[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent department: "<<student_dep[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent program: "<<student_program[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent address: "<<student_add[i]<<endl;
        cout<<"\n\t***********************************************************"<<endl;
        }
    }
public:
    ~Database()
    {
        cout<<".....................  THANK YOU ............................"<<endl;
    }
};


int main()
{
   Database* info = new Database;
   Database contact(123);
   info -> setstudent_info();
   info -> displays();
   info -> getstudent_info();
   return 0;
}
