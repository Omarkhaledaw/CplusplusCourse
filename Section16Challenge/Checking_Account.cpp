#include "Checking_Account.h"

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
bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}
void Checking_Account::print(std::ostream &os)const
{
    os << "[Checking Account: " << Name << ": " << Balance << "]";
}