#include<iostream>
using namespace std;

int n;
char name[25], tn[100];
int ID , tid;
int age , tage;
float experience, txp;
float salary , tsalary;



void intro();

void data()
{
    char employ[5000];

    cout << "\n\t\t\t *[Enter the employee data]*"<<endl<<endl;
    cout << "  *[You must press the exit button(2) after entering all employee details]*"<<endl<<endl;
    cout << "\t\t\t\ "<<endl;

         cout << "\t\t  ###  {Maximum employ number can be 5000}  ###"<<endl<<endl;
     cout << "Enter the number of employ : ";
         cin >> n;
         cout << endl;
         cout << "Add employee details"<<endl<<endl;

         for (int i=0; i<n; i++)
         {
         cout << "######################################"<<endl;
     cout << "# Enter the short name of "<<i+1<<" employee : ";
         cin >> employ[i];
         tn[i]+=employ[i];


     cout << "# Enter ID number of "<<i+1<<" employee      : ";
         cin >> employ[i];
         tid[i]+=employ[i];


     cout << "# Enter the age of "<<i+1<<" employee        : ";
         cin >> employ[i];
         tage[i]+=employ[i];



     cout << "# Enter the experience of "<<i+1<<" employee : ";
         cin >> employ[i];
         txp[i]+=employ[i];


     cout << "# Enter the salary of "<<i+1<<" employee     : ";
         cin >> employ[i];
         tsalary[i]+=employ[i];
         cout << "######################################"<<endl;

         cout<<endl;
     }
         intro();
     }

         void showall()
         {
         char employ [5000];

         cout<<"\t\t\t\t***[Employee data]***"<<endl<<endl;
     cout<<"Total number of employees are : "<<n<<endl<<endl;

         for(int i=0; i<n; i++)
         {
         cout<<"##########################################"<<endl;
     cout<<"Name       of the employee "<<i+1<<" is : "<<tn[i]<<endl;
     cout<<"ID         of the employee "<<i+1<<" is : "<<tid[i]<<endl;
     cout<<"Age        of the employee "<<i+1<<" is : "<<tage[i]<<endl;
     cout<<"Experience of the employee "<<i+1<<" is : "<<txp[i]<<endl;
     cout<<"Salary     of the employee "<<i+1<<" is : "<<tsalary[i]<<endl;
         cout<<"##########################################"<<endl;

     }
         cout<<endl<<endl;
         intro();
     }

         void intro()
         {
         cout<<"\t\t\t    ~~~~~~~~~~~~~~~~~~~~~~"<<endl;
         cout<<"\t\t\t    |EMPLOY MANAGMENT SYSTEM |"<<endl;
         cout<<"\t\t\t    ~~~~~~~~~~~~~~~~~~~~~~"<<endl;
         cout<<endl;

         cout<<"\t\t  S  "<<"\tH   H"<<"\t  O  "<<"\tH   H"<<"\t   A   "<<"\tN     N"<<endl;
         cout<<"\t\tS   S"<<"\tH   H"<<"\t O O "<<"\tH   H"<<"\t  A A  "<<"\tNN    N"<<endl;
         cout<<"\t\t S   "<<"\tH   H"<<"\tO   O"<<"\tH   H"<<"\t A   A "<<"\tN N   N"<<endl;
         cout<<"\t\t  S  "<<"\tHHHHH"<<"\tO   O"<<"\tHHHHH"<<"\tAAAAAAA"<<"\tN  N  N"<<endl;
         cout<<"\t\t   S "<<"\tH   H"<<"\tO   O"<<"\tH   H"<<"\tA     A"<<"\tN   N N"<<endl;
         cout<<"\t\tS   S"<<"\tH   H"<<"\t O O "<<"\tH   H"<<"\tA     A"<<"\tN    NN"<<endl;
         cout<<"\t\t  S  "<<"\tH   H"<<"\t  O  "<<"\tH   H"<<"\tA     A"<<"\tN     N"<<endl;



         cout<<"\n\t\t\t______________WELCOME______________";
         cout<<"\n\t\t\t*                                 *";
         cout<<"\n\t\t\t*---------------------------------*";
         cout<<"\n\t\t\t*   1. Add employee details       *";
         cout<<"\n\t\t\t*---------------------------------*";
         cout<<"\n\t\t\t*   2. Show all employee details  *";
         cout<<"\n\t\t\t*---------------------------------*";
         cout<<"\n\t\t\t*   3. Exit                       *";
         cout<<"\n\t\t\t***********************************";
         cout<<endl;

         int choice;
         cout << "Enter the number you want to work on : ";
         cin>>choice;
         cout<<endl;

         if(choice == 1)
         {
         data();
     }
         else if(choice == 2)
         {
         showall();
     }
         else if(choice == 3)
         {
         cout<<"Hope you enjoyed my system"<<endl<<endl;
         cout<<"TTTTT"<<"\tH   H"<<"\t   A   "<<"\tN     N"<<"\t K    K "<<"\tY     Y"<<"\t  O  "<<"\tU     U"<<endl;
         cout<<"  T  "<<"\tH   H"<<"\t  A A  "<<"\tNN    N"<<"\t K   K  "<<"\t Y   Y "<<"\t O O "<<"\tU     U"<<endl;
         cout<<"  T  "<<"\tH   H"<<"\t A   A "<<"\tN N   N"<<"\t K  K   "<<"\t  Y Y  "<<"\tO   O"<<"\tU     U"<<endl;
         cout<<"  T  "<<"\tHHHHH"<<"\tAAAAAAA"<<"\tN  N  N"<<"\t KKK    "<<"\t   Y   "<<"\tO   O"<<"\tU     U"<<endl;
         cout<<"  T  "<<"\tH   H"<<"\tA     A"<<"\tN   N N"<<"\t K  K   "<<"\t   Y   "<<"\tO   O"<<"\tU     U"<<endl;
         cout<<"  T  "<<"\tH   H"<<"\tA     A"<<"\tN    NN"<<"\t K   K  "<<"\t   Y   "<<"\t O O "<<"\t U   U "<<endl;
         cout<<"  T  "<<"\tH   H"<<"\tA     A"<<"\tN     N"<<"\t K    K "<<"\t   Y   "<<"\t  O  "<<"\t   U   "<<endl;

         return;
     }
         else
         {
         cout << "Choose an option from number 1 or 2"<<endl;
         intro();
     }
     }

         int main()
         {
         intro();
         return 0;
     }
