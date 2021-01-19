// Md. Jidanul Hakim Jitu
// Id: 20-44365-3
// Ans No : 1 (LP-6)

#include<iostream>
using namespace std;

class course
{
private:
    string course_title;
    int course_code[60];
    int credit[60];
    int n;
public:
    int setData()
    {
        cout<<"Enter course number: ";
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cout<< '\n';
            cout<<"Details of course: " << i+1 << '\n';
        cout<<"Enter course title : ";
        cin>>course_title[i];
        cout<<"Enter course code : ";
        cin>>course_code[i];
        cout<<"Enter credit : ";
        cin>>credit[i];
        }
        cout<<endl;
    }
    int getData()
    {

        for(int i=0; i<n; i++)
        {
            cout << "Information of course " <<i+1 <<'\n';
            cout<<"\tThe course title is : "<<course_title[i]<<endl;
            cout<<"\tThe course course is : "<<course_code[i]<<endl;
            cout<<"\tThe course credit is : "<<credit[i]<<endl;
            cout<<endl;
        }
    }
};
int main()
{
    course A;
    A.setData();
    A.getData();
    return 0;
}
