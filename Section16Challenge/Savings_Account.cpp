#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name,double balance,double interest_rate):Account{name,balance},Interest_rate{Interest_rate}
{
    //std::cout << "Overloaded 3 args Savings Account Constructor called" << std::endl;
}
bool Savings_Account::deposit(double amount)
{
    //std::cout << "Depositing..." << std::endl;
    amount += (amount*Interest_rate/100);
    return Account::deposit(amount);
}
bool Savings_Account::withdraw(double amount)
{
    return Account::withdraw(amount);
}
void Savings_Account::print(std::ostream &os) const {  
    os << "[Savings_Account: " << Name << ": " << Balance << ", " << Interest_rate << "]";
}