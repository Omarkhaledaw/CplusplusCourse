#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#pragma once

class Checking_Account:public Account
{
    friend std::ostream &operator<<(std::ostream &out,const Checking_Account &account);
private:
    static constexpr const char* default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;
protected:

public:
    Checking_Account();
    Checking_Account(std::string name = default_name,double balance = default_balance);
    bool withdraw(double amount);

};

#endif