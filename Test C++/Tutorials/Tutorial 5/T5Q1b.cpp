#include <iostream>
using namespace std;

class BankAccount {
    private:
    double balance;

    public:
    BankAccount() {
        balance = 0.0;
    }
    void Deposit(double amount);
    void withdraw(double amount);
    double GetBalance();
};
void BankAccount::Deposit(double amount){
    balance += amount;
}

void BankAccount::withdraw(double amount){
    if (amount > balance){
        cout << "Insufficient fund" << endl;
    } else {
        balance -= amount;
    }
}
double BankAccount::GetBalance(){
    return balance;
}

int main(){
    BankAccount account;

    account.Deposit(1000);
    cout << "Balance: RM " << account.GetBalance() << endl;

    account.withdraw(500);
    cout << "Balance: RM " << account.GetBalance() << endl;

    account.withdraw(600);
    cout << "Balance: RM " << account.GetBalance() << endl;

    return 0;
}