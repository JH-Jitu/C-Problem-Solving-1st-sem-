//MidTerm Project (ANS TO THE QUESTION NO 1)
//MD. JIDANUL HAKIM JITU
//ID: 20-44365-3

#include<iostream>
using namespace std;
#include <string>

void sum(char *name, char *id, char *email, char *phone, char *department, char *program, char *address){

}

int main(){
char name[30]; char email[30]; char department[30]; char program[30]; char address[30];
char id[30];
char phone[30];

cout<<"Your Name: " ;
gets(name);
cout<<"Your ID: " ;
gets(id);
cout<<"Your Email: " ;
gets(email);
cout<<"Your Phone: " ;
gets(phone);
cout<<"Your Department: " ;
gets(department);
cout<<"Your program: " ;
gets(program);
cout<<"Your Address: " ;
gets(address);

sum(name, id, email, phone, department, program, address);
}
