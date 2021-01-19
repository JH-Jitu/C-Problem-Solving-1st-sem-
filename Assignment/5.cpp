
//Ans No 5
//MD. JIDANUL HAKIM JITU
//ID 20-44365-3

#include <cstring>
#include <iostream>

using namespace std;

void display(char *r1, char *r2, int result)
{
    if(result > 0 || result < 0)
        cout << "r1 = " << r1 << " and " << "r2 = " << r2 << " are not same" << endl;
    else
        cout << "r1 = " << r1 << " and " << "r2 = " << r2 << " are same" << endl;
}

int main()
{
    char r1[] = "four ohm";
    char r2[] = "five ohm";
    int result;

    result = strcmp(r1,r2);
    display(r1,r2,result);


    return 0;
}
