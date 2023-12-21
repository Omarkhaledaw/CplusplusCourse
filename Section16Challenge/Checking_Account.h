#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#pragma once

class Checking_Account:public Account
{
private:
    static constexpr const char* default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;
protected:

public:
    Checking_Account(std::string name = default_name,double balance = default_balance);
    virtual bool withdraw(double amount)override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking_Account()=default;
};

#endif