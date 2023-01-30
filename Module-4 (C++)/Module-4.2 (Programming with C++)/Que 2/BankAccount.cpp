#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class bank_account
{
    char holder_name[50];
    int account_no;
    char account_type[50];
    int balance = 0;

public:
    bank_account(char *name, int acc_no, char *acc_type, int bal)
    {
        strcpy(holder_name, name);
        account_no = acc_no;
        strcpy(account_type, acc_type);
        balance = bal;
    }

    void deposite()
    {
        int deposite_ammount;
        cout << "\nEnter an Ammount to Deposite: ";
        cin >> deposite_ammount;
        balance = balance + deposite_ammount;
    }

    void withdraw()
    {
        int withdraw_ammount;
        cout << "\nEnter an Ammount to Withdraw: ";
        cin >> withdraw_ammount;
        if (balance <= 0.0)
        {
            cout << "\n\t***** Insufficient Balance *****\t" << endl;
            balance = 0;
        }
        if (balance > 0)
        {
            balance = balance - withdraw_ammount;
        }
    }

    void show()
    {
        cout << "\n\n******************* Your Receipt ************************\n\n";
        cout << "\t*\tHolder Name: " << holder_name << "\t\t*" << endl;
        cout << "\t*\tAccount Number: " << account_no << "\t\t*" << endl;
        cout << "\t*\tAccount Type: " << account_type << "\t\t*" << endl;
        cout << "\t*\tAvailable Balance: " << balance << "\t\t*" << endl;
        cout << "\n*********************************************************\n\n";
    }
};

int main()
{
    int i;
    char name[50];
    int acc_no;
    char acc_type[50];
    int bal = 0;

    do
    {
    formain:
        cout << "\nEnter Account Holder Name: ";
        cin >> name;
        cout << "\nEnter Account Number: ";
        cin >> acc_no;
        cout << "\nEnter Your Account Type: ";
        cout << "\nSaving Account\t\tCurrent Account" << endl;
        cin >> acc_type;
        cout << "\nAvailable Balance: " << bal << endl;

        do
        {
        again:
            bank_account ba(name, acc_no, acc_type, bal);
            cout << "\nSelect an Option: " << endl;
            cout << "1. To Deposite an Ammount" << endl;
            cout << "2. To Withdraw an Ammount" << endl;
            cout << "3. To go to Main Menu" << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                ba.deposite();
                ba.show();
                break;

            case 2:
                ba.withdraw();
                ba.show();
                break;

            case 3:
                goto formain;
                break;

            default:
                printf("Invalid number *Please try again*\n");
                printf("\n-------------------------------------------\n");
                goto again;
                break;
            }
        } while (i != 3);
    } while (i != 3);
    return 0;
}