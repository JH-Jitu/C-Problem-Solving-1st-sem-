//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
//Ans of "Write a program to calculate and display the area of a rectangle having it's length  (l=10cm) & breadth (b=12cm)".
    int l=10, b=12;

    cout<< "The area of the rectangle is: " << l * b <<" cm square" <<endl <<endl;

//Ans of "Write a program to display "hello world" "
    cout<< "hello world" <<endl <<endl;

//Ans of "Write a program to add two numbers taking input from user and display it's sum"
    int first, second, sum;
    cout<< "Type first value: ";
    cin>> first;
    cout<< "Type second number: ";
    cin>> second;
    sum = first + second;
    cout << "Sum of your given numbers = " << sum <<endl <<endl;

//Ans of "Write a program to multiply two numbers(10&8) and display it's product."
    int product_value1 = 10, product_value2 = 8;
    cout<<"Product of 10 & 8 is: "<< product_value1 * product_value2 <<endl <<endl;

//Ans of "Write a letter that can take input a letter from user and display it"
    string letter;
    cout<<"Write letter/letters: ";
    cin>> letter;
    cout<< "You have written: "<<letter;
    getch();

}
