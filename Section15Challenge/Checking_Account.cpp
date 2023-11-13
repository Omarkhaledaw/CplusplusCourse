#include "Checking_Account.h"

Checking_Account::Checking_Account():Checking_Account{default_name,default_balance}
{
    //std::cout << "Default Checking Account Constructor called" << std::endl;

}
Checking_Account::Checking_Account(std::string name,double balance):Account{name,balance}
{
    //std::cout << "Overloaded 2 args Checking Account Constructor called" << std::endl;

}
bool Checking_Account::withdraw(double amount)
{
    //std::cout << "Withdrawing..." << std::endl;
    amount+=default_fee;
    return Account::withdraw(amount);
}
std::ostream &operator<<(std::ostream &out,const Checking_Account &account)
{
    out << "[Checking_Account: " << account.Name << ": " << account.Balance  << "]";
    return out;
}
