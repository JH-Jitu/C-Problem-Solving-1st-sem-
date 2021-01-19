#include<iostream>
#include<string.h>
using namespace std;

class Database
{
private:
    char student_name[60][50];
    int student_id[60];
    int student_phone[60];
    double student_cgpa[60];
    int n;
public:
    Database()
    {
     cout<<"\n\t<*********** WELCOME TO OUR STUDENT DATABASE **************>"<<endl;
     cout<<endl;
    }

    Database (int callcenter){

        cout<<"If any problem in student database call "<<callcenter<<endl;

    }

public:

    int setstudent_info()
    {
        cout<<endl<<"\tEnter student number: ";
        cin>>n; cout<<endl;
        for(int i=0; i<n; i++)
        {
        cout<<"\tEnter student name: ";
        cin>>student_name[i];
        cout<<"\tEnter student id: ";
        cin>>student_id[i];
        cout<<"\tEnter Student phone number: ";
        cin>>student_phone[i];
        cout<<"\tEnter student cgpa: ";
        cin>>student_cgpa[i];
        cout<<endl;
        }
    }
    void displays()
    {
    cout<<"\n\t*******STUDENT DATABASE********"<<endl;
    }
    int getstudent_info()
    {

        for(int i=0; i<n; i++)
        {
        cout<<"\n\t"<<i+1<<"\tstudent name: "<<student_name[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent id: "<<student_id[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent phone number: "<<student_phone[i]<<endl;
        cout<<"\n\t"<<i+1<<"\tstudent cgpa: "<<student_cgpa[i]<<endl;
        cout<<"\n\t*********************"<<endl;
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
   Database info;
   Database contact(99685);
   info.setstudent_info();
   info.displays();
   info.getstudent_info();
   return 0;
}
