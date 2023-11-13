#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#pragma once

class Account
{
    friend std::ostream &operator<<(std::ostream &out, const Account &rhs);
private:
    static constexpr const char* default_name ="Unnamed Account";
    static constexpr double default_balance = 0.0;
protected:
    std::string Name;
    double Balance;
public:
    Account(std::string name = default_name,double balance = default_balance);//Overloaded 2 args constructor
    ~Account();//Default destructor
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance()const;
};

#endif