#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"
#pragma once

class Trust_Account:public Savings_Account
{
private:
    static constexpr const char* default_name = "Unnamed Trust Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
    static constexpr double default_bonus = 50.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double default_bonus_threshold = 5000.0;
    static constexpr double max_withdrawal_percentage = 0.2;
protected:
    int num_withdrawals;
public:
    Trust_Account(std::string name = default_name,double balance = default_balance,double interest_rate = default_interest_rate);
    virtual bool deposit(double amount)override;
    virtual bool withdraw(double amount)override;
    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account()=default;
};

#endif