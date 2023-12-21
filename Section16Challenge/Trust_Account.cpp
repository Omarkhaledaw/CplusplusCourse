#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name,double balance,double interest_rate):Savings_Account{name,balance,interest_rate},num_withdrawals{0}
{
    //std::cout << "Overloaded 3 args Trust Account Constructor called" << std::endl;

}
bool Trust_Account::deposit(double amount)
{
    if(amount > default_bonus_threshold){
        amount+=default_bonus;
    }
    return Savings_Account::deposit(amount);
}
bool Trust_Account::withdraw(double amount)
{
    if(num_withdrawals>max_withdrawals){
        return false;
    }else{
        if(amount < (max_withdrawal_percentage*Balance)){
            num_withdrawals++;
            return Savings_Account::withdraw(amount);
        }else{
            return false;
        }
    }
}
void Trust_Account::print(std::ostream &os) const {
    os << "[Trust Account: " << Name << ": " << Balance << ", " << Interest_rate 
        << "%, withdrawals: " << num_withdrawals <<  "]";
}
