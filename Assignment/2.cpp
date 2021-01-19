//Ans No 2
//MD. JIDANUL HAKIM JITU
//ID 20-44365-3

#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char dest[50];
    char src[50];
    cout<<"First Favourite subject: ";
    cin>>dest;
    cout<<"First Favourite subject: ";
    cin>>src;

    strcat(dest, src);

    cout << dest ;

    return 0;

}
