#include "Account.h"

Account::Account(std::string name,double balance):Name{name},Balance{balance}
{
    //std::cout << "Overloaded 2 args Constructor called" << std::endl;
}
bool Account::deposit(double amount)
{
    //std::cout << "Depositing..." << std::endl;
    if(amount<0){
        return false;
    }else{
        Balance += amount;
        return true;
    }
}
bool Account::withdraw(double amount)
{
    //std::cout << "Withdrawing..." << std::endl;
    if(Balance-amount<0){
        //std::cout << "Insufficient funds..." << std::endl;
        return false;
    }else{
        Balance -= amount;
        return true;
    }
}
void Account::print(std::ostream &os)const
{
    os << "[Account: " << Name << ": " << Balance << "]";
}