//Ans No 8
//MD. JIDANUL HAKIM JITU
//ID 20-44365-3


#include<iostream>
#include<string.h>
using namespace std;

int main()
{

	char name[40];

	cout<< "Your name: ";
	gets(name);

	cout<< "Reverse form of your name: ";
	for(int i=25; i>-1; i--)
	{

    		cout<< name[i];

	}

	return 0;

}
