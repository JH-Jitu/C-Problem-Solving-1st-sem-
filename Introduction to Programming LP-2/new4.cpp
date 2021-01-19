// Ans 4:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3

#include<iostream>
using namespace std;

void sum(int sub,double gpa, double totalGpa, double credit, double totalCredit, double cgpa){
    cout << "Number of subject: ";cin >> sub;

    int i;
    for(i=1;i<=sub;i++){
    cout<< "Subject Number : " << i <<endl ;
    cout << "GPA of subject " << i << ": " ;cin >> gpa;
    if(gpa > 4 || gpa<0){
        cout<<"GPA can't be better than 4.00 or less than 0 " <<endl;
        break;
    }
    cout << "Credit of subject: " << i << ": "; cin >> credit;
    totalGpa = (totalGpa + gpa * credit);
    totalCredit = totalCredit + credit;


}


    double result = totalGpa/totalCredit;


cgpa=result;
cout << "Your CGPA is: " << cgpa <<endl;}

int main(){
double sub, gpa, totalGpa, credit, totalCredit, cgpa;
sum(sub, gpa, totalGpa, credit, totalCredit, cgpa);
}

