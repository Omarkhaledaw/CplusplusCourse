#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name,double balance,double interest_rate):Account(name,balance),Interest_rate{Interest_rate}
{
    //std::cout << "Overloaded 3 args Savings Account Constructor called" << std::endl;
}
bool Savings_Account::deposit(double amount)
{
    //std::cout << "Depositing..." << std::endl;
    amount += (amount*Interest_rate/100);
    return Account::deposit(amount);
}
std::ostream &operator<<(std::ostream &out,const Savings_Account &account)
{
    out << "[Savings_Account: "<< account.Name << ":"<< account.Balance << "Interest rate: " << account.Interest_rate << "%";
    return out;
}