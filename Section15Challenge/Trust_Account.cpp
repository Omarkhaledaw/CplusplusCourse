#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name,double balance,double interest_rate):Savings_Account{default_name,default_balance,default_interest_rate},num_withdrawals{0}
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
            return Account::withdraw(amount);
        }else{
            return false;
        }
    }
}
std::ostream &operator<<(std::ostream &out,const Trust_Account &account)
{
    out << "[Trust Account: " << account.Name << ": " << account.Balance << ", " << account.Interest_rate 
        << "%, withdrawals: " << account.num_withdrawals <<  "]";
    return out;
}
