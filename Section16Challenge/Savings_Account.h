#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"
#pragma once

class Savings_Account:public Account
{
private:
    static constexpr const char* default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double Interest_rate;
public:
    Savings_Account(std::string name = default_name,double balance = default_balance,double interest_rate = default_interest_rate);
    virtual bool deposit(double amount)override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Savings_Account()=default;
};

#endif