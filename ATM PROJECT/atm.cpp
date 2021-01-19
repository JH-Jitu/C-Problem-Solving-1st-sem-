#include <iostream>
using namespace std;
class Atm_Machine
{
public:
    Atm_Machine()
    {
        cout << "\n\t======================================='X' BANK======================================================" << endl;
    }
    Atm_Machine(int x)
    {
        cout << "\n\t..................................WELCOME TO OUR 'X' BANK ATM MACHINE................................." << endl;
    }
};
class Atm_Machine1 : public Atm_Machine
{
private:
    double balance = 100000, tw = 0, tt = 0;

public:
    Atm_Machine1()
    {
        cout << "\n\t.....If you face any problem in our Atm Machine please call to our help center: 21200.............." << endl;
    }
    void Balance()
    {
        cout << "\n\t Your Balance is: $" << balance << endl;
    }
    void Withdraw(double withdraw_amount)
    {
        if (balance < withdraw_amount)
        {
            cout << "\n\t Not enough money" << endl;
        }
        else
        {
            balance -= withdraw_amount;
            tw += withdraw_amount;
            cout << "\n\t Your Current Balance : $" << balance << endl;
        }
    }
    void Transfer(double transfer_amount)
    {
        if (balance < transfer_amount)
        {
            cout << "\n\t Not enough money" << endl;
        }
        else
        {
            balance -= transfer_amount;
            tt += transfer_amount;
            cout << "\n\t Your Current Balance : $" << balance << endl;
        }
    }
    void Mini_Statement()
    {
        cout << "\n\t***************MINI STATEMENT***************";
        cout << "\n\t*                                          *";
        cout << "\n\t*                                          *";
        cout << "\n\t* Your current Balance is: $" << balance << "\t   *";
        cout << "\n\t* Your total withdraw is: $" << tw << "\t\t   *";
        cout << "\n\t* Your total transfer is: $" << tt << "\t\t   *";
        cout << "\n\t*                                          *";
        cout << "\n\t********************************************" << endl;
    }
    ~Atm_Machine1()
    {
        cout << "\n\t..................................Thank you for banking with us.....................................";
    }
};

int main()
{
    string act_first_name;
    string act_last_name;
    string act_type;
    double withdraw, Transfer;
    int option;
    int a;
    int b = 1;
    Atm_Machine1 *objatm = new Atm_Machine1;
    Atm_Machine objatm1(1);
    cout << "\n\tPlease enter your ATM card" << endl;
    int pin;
    do
    {
        if (b == 1)
        {
            cout << "\n\tPlease enter your 4 digit pin code: ";
            cin >> pin;
            if (pin > 999 && pin <= 9999)
            {
                cout << "\n\tEnter your Account Name: ";
                cin >> act_first_name;
                cin >> act_last_name;
                cout << "\n\t Account Type: Saving" << endl;
            }
        }

        if (pin > 999 && pin <= 9999)

            do
            {
                b = 0;
                cout << "\n\t**************MENU****************";
                cout << "\n\t*                                *";
                cout << "\n\t*       1. Check Balance         *";
                cout << "\n\t*       2. withdraw              *";
                cout << "\n\t*       3. Transfer              *";
                cout << "\n\t*       4. Mini Statement        *";
                cout << "\n\t*       5. Exit                  *";
                cout << "\n\t*                                *";
                cout << "\n\t**********************************";
                cout << "\n\t Please choose an option: ";
                cin >> option;
                switch (option)
                {
                case 1:
                    objatm->Balance();
                    break;

                case 2:
                    cout << "\n\t withdraw Amount: ";
                    cin >> withdraw;
                    objatm->Withdraw(withdraw);
                    break;

                case 3:
                    int choose_option, Account_number;
                    do
                    {
                        cout << "\n\t***********************************";
                        cout << "\n\t*                                 *";
                        cout << "\n\t*   1. To any account of our bank *";
                        cout << "\n\t*   2. To any other bank account  *";
                        cout << "\n\t*                                 *";
                        cout << "\n\t***********************************";
                        cout << "\n\t Please choose option: ";
                        cin >> choose_option;
                        switch (choose_option)
                        {
                        case 1:
                            cout << "\n\t Account number: ";
                            cin >> Account_number;
                            cout << "\n\t Transfer Amount: ";
                            cin >> Transfer;
                            objatm->Transfer(Transfer);
                            break;

                        case 2:
                            cout << "\n\t Account number: ";
                            cin >> Account_number;
                            cout << "\n\t Transfer Amount: ";
                            cin >> Transfer;
                            objatm->Transfer(Transfer);
                            break;
                        }
                    } while (choose_option != 1 && choose_option != 2);
                    break;

                case 4:
                    objatm->Mini_Statement();
                    break;

                default:
                    if (option != 5)
                        cout << "\n\t Invalid option please try again" << endl;
                    break;
                }
            } while (option != 5);
        else
        {
            cout << "Invalid pin code please try again" << endl;
            b = 1;
        }

        cout << "\tDo you want finish\n\t(1)Yes\n\t(2)no\n\t";
        cin >> a;
    } while (a == 2);
    delete objatm;
}
