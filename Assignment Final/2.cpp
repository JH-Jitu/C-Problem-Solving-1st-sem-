// Md. Jidanul Hakim Jitu
// Id: 20-44365-3
// Ans No : 2 (Assignment Final)

#include<iostream>
#include<string.h>
using namespace std;

class person
{
private:
    string name;
    double age;
public:
    void setName(string n)
    {
        name=n;
        cout<<"Name : ";
        getline (cin,name);
    }
    string getName()
    {
       return name;
    }
public:
    double setAge(double x)
    {
        age=x;
        cout<<"Age : ";
        cin>>age;
    }
    double getAge()
    {
        return age;
    }
};

class student:public person
{
private:
    double cgpa;
public:
    double setCGPA(double y)
    {
        cgpa=y;
        cout<<"CGPA : ";
        cin>>cgpa;
    }
    double getCGPA()
    {
        if (cgpa > 4 || cgpa < 0){
            cout<<"Invalid CGPA ";
        }
        return cgpa;
    }
};

class teacher:public person
{
private:
    int salary;
public:
    int setSalary(int z)
    {
        salary=z;
        cout<<"Salary : ";
        cin>>salary;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{ string name;
    double age;
    double cgpa;
     person showname;
     person showage;
     student showcgpa;
     teacher showsalary;
     showname.setName(name);
     showage.setAge(age);
     showcgpa.setCGPA(cgpa);
     showsalary.setSalary(50000);
     cout<<"The name is: "<<showname.getName()<<endl;
     cout<<"The age is: "<<showage.getAge()<<endl;
     cout<<"The cgpa is: "<<showcgpa.getCGPA()<<endl;
     cout<<"The salary is: "<<showsalary.getSalary()<<endl;
     return 0;
}
