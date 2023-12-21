#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include "I_Printable.h"

#pragma once

class Account : public I_Printable
{
private:
    static constexpr const char* default_name ="Unnamed Account";
    static constexpr double default_balance = 0.0;
protected:
    std::string Name;
    double Balance;
public:
    Account(std::string name = default_name,double balance = default_balance);//Overloaded 2 args constructor
    virtual bool deposit(double amount)=0;
    virtual bool withdraw(double amount)=0;
    virtual void print(std::ostream &os) const override;
    virtual ~Account()=default; //Virtual destructor for avoiding warnings
};

#endif