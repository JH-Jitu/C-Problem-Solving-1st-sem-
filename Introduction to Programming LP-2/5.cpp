// Ans 5:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3
#include <iostream>
using namespace std;

int main()
{
    char operate;
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+) or, (-) or, (*) or, (/): ";
    cin >> operate;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operate)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            cout << "Failed! Your operator was invalid!";
            break;

    }

    return 0;
}
