#include <iostream>
#include <cassert>
using namespace std;

class Account{
private:
    long accNumber;
    double balance;
    static int base;
public:
    Account(double bal){  //parametrized constructor
        if(bal < 0.0){
            cout <<"Balance is negative, program terminates";
            assert(false);
        }
        base++;
        accNumber = 100000 + base;
        cout<<"Acount "<<accNumber<<" is opened."<<endl;
        cout<<"Balance $"<<balance<<endl<<endl;
    }

    Account(){     //destructor
        cout<<"Account#: "<<accNumber<<" is closed."<<endl;
        cout<<"$"<<balance<<" was sent to the customer."<<endl<<endl;
    }

    void checkBalance(){  //Accessor member function
        cout<<"Account#: "<<accNumber<<endl;
        cout<<"Transaction: balance check"<<endl;
        cout<<"Balance$"<<balance<<endl<<endl;
    }

    void deposit(double amount){
        if(amount > 0.0){
            balance += amount;
            cout << "Account #: " << accNumber << endl;
            cout << "Transaction: deposit of $" << amount << endl;
            cout << "New balance: $" << balance << endl << endl;
        }
        else{
            cout<<"Transaction aborted."<<endl;
        }
    }

    void withdraw(double amount){
        if(amount > balance){
            amount = balance;
        }
        balance -= amount;
        cout << "Account #: " << accNumber << endl;
        cout << "Transaction: withdraw of $" << amount << endl;
        cout << "New balance: $" << balance << endl << endl;
    }
};

int Account::base = 0;

int main(){
    Account a1(1000);
    Account a2(2500);
    Account a3(7800);

    a1.deposit(1400);
    a2.checkBalance();
    a1.checkBalance();
    a3.withdraw(2000);
    a1.withdraw(1000);
    a2.deposit(500);
    return 0;
}