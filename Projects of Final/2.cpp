#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <Windows.h>
using namespace std;

struct Record
{
	string FName, LName, MName, Email, Address, Bday, Program, ConNum;
	int StudNum,  Year;
};


//Declaration for the struct.
Record Students[50];
//The User-Defined Functions.
void Reg(Record Students[]);
void bubbleSort(Record Students[],int length);
void print(Record Students[]);
void search(Record Students[]);
//void edit(Record Students[]);
//Global Declaration of variables;
string CHOICE;
int studInt;
int length=0;
char response;
int z=0;
//Declaration for the registration function.
//int i=0; dahil nag initialize sa case 1..at student number error
//Declaration for the search function.
string LastName,FirstName, MiddleName;
int NumInFile;
//Main program.
int main()
{
	bool found=false;
	char choice;
	do
	{
	//The user will choose what to do.
	cout<<"********************************************************\n"
		<<"*********************STUDENT RECORD*********************\n"
		<<"********************************************************\n"
		<<" [1] => Registration.\n"
		//Will go to reg()
		<<" [2] => Search the student record.\n"
		//Will go to search();
		<<" [3] => Quit.\n";
	cin.get(choice);

	if (getline(cin, CHOICE)) // To delete the other unnecesary letters.
		;
	switch(choice)
	{
	case '1':
		{
		Reg(Students);
		break;
		}
	case '2':
		{
		system("CLS");
		search(Students); //Students because we have declared that as a identifier of the struct.
		break;
		}
	case '3':
		{
			exit(0);
		}
	default:
		{
			cout<<"your choice is not on the list"<<endl;
			system("CLS");
			return main();
		}
		break;
	}
	bubbleSort(Students,length);// This will sort the names of the students.
	print (Students);
	cout<<"Want another transaction? (Y/N) ";

	cin>>choice;
	//cin.ignore();
	toupper(choice);
	if (toupper(choice)=='Y')
	{
		system("CLS");
		continue;
	}
	found=true;
	}
	while (!found);
	return 0;
}




void Reg(Record Students[]) // This Function Will Register a student to the group.
{
     int i=0;//where i serves as an index
	//bool found=false;//will be used for loops later on(will be deleted if we find this useless lateron)
	ofstream outFile;
	ifstream inFile;
	//We declare as an output file the outFile.
	outFile.open("records.txt", ios::app); //We open.
	inFile.open("C:/Users/Erick/Documents/Visual Studio 2010/Projects/MP 2/MP 2/records.txt");


	//LOAD FUNCTION
	while (!inFile.eof())
	{
		char check;
		check=inFile.peek();
		if (!isdigit(check))
		{
			cout<<"We have found an available slot for you!!"<<endl;
			break;
		}
		system("CLS");
		inFile>>Students[i].StudNum ;
		inFile.ignore(10, '\n');
		inFile>>Students[i].FName;
		inFile.ignore(10, '\n');
		inFile>>Students[i].MName;
		inFile.ignore(10,'\n');
		inFile >> Students[i].LName;
		inFile.ignore(10,'\n');
		cout<<"CHECKING FOR AVAILABLE SLOTS...\n\n"
			<<"Student already registered in slot "<<i+1<<"\n"
			<<"Looking for available slots\n"
			<<"Please wait for a few momments....\n";;
		i++;
		Sleep(700);
	}
	while (i<50)
	{
		system("CLS");
		cout<<"********************************************************\n"
			<<"Student's registration form:\n"
			<<"********************************************************\n\n"
			<<"You are on slot "<<i+1<<endl<<endl;

		Students[i].StudNum=2010+i;
		outFile<<Students[i].StudNum<<endl;

		cout<<"Enter your First Name: "<<flush;
		getline(cin,Students[i].FName);
		outFile<<Students[i].FName<<endl;

		cout<<"Enter your Middle Name: ";
		getline(cin,Students[i].MName);
		outFile<<Students[i].MName<<endl;


		cout<<"Enter your Last Name: ";
		getline(cin,Students[i].LName);
		outFile<<Students[i].LName<<endl;


		cout<<"Your student number is: "<<Students[i].StudNum<<endl;
		i++;
		cout<<"Register another student? (y/n)";
		cin>>response;
		if (response=='y' || response=='Y')
		{

			length+=1;
			cin.ignore();//allows you to further add students... if taken out, program would bug you... bring RAID
			system("cls");
			continue;
		}
		else
		{
			length+=1;
			break;
		}
	}
}
void bubbleSort(Record Student[],int length)
{
	string temp1;
	int iteration;
	int index;
	for (iteration=1; iteration<length; iteration++)
	{
		for (index = 0; index<length-iteration;index++)
		{
			if ((Students[index].LName)>=(Students[index+1].LName))
			{
				temp1=Students[index].LName;
				Students[index].LName=Students[index+1].LName;
				Students[index+1].LName=temp1;
			}


		}
	}
}




void print(Record Students[])
//This function will print the values in the struct Students[]
{
	system("cls");//This will clear the screen.
	cout<<"********************************************************\n"
		<<"*********************STUDENT RECORD*********************\n"
		<<"********************************************************\n";
	/*for (int x=0; x<length; x++)
	{
		cout<<Students[x].LName<<endl;
	}
	*/
}





void search(Record Students[]) //Search();
{
	bool found=false;
	ifstream inFile;
	inFile.open("C:/Users/Erick/Documents/Visual Studio 2010/Projects/MP 2/MP 2/records.txt");

	cout<<"********************************************************\n"
		<<"*****************Searching for student******************\n"
		<<"********************************************************\n"
		<<"Enter the student number: ";
	cin>>studInt;
	int ctr=0;
	while (!inFile.eof() && !found && ctr<3)
	{
		inFile>> NumInFile;
		inFile.ignore(10, '\n');
		inFile>> FirstName;
		inFile.ignore(10,'\n');
		inFile>>MiddleName;
		inFile.ignore(10,'\n');
		inFile >> LastName;
		inFile.ignore(10,'\n');
		if (NumInFile==studInt)
		{
			cout<<"Yahoo!"<<endl;
			found=true;
			continue;
		}
		system("CLS");
		cout<<"********************************************************\n"
			<<"*****************Searching for student******************\n"
			<<"********************************************************\n"
			<<"\n\n Please wait for a few moments\n as the program searches the record..."<<endl<<endl;
		Sleep(10);
	}
	if (found)
	{
		cout<<"The information of the student are the following. "<<endl;
		cout<<"Full name: "<<LastName<<", "<< FirstName<<' '<<MiddleName<<' '<<endl;
	}
	else
	{
		cout<<"Sorry, the student ID you entered was not found"<<endl;
	}
	system("pause");
	//I did'nt include the inFile.close Because there will be a
	//logic error in search function.

}
