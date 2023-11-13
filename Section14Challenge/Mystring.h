#ifndef MYSTRING_H
#define MYSTRING_H
#pragma once

class Mystring
{
    friend std::ostream &operator<<(std::ostream &out,const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in,Mystring &rhs);
private:
    char* str;
public:
    Mystring();//Default constructor
    Mystring(const char *s);//Overloaded constructor
    Mystring(const Mystring &source);//Copy constructor
    Mystring(Mystring &&source);//Move constructor
    ~Mystring();//Default destructor

    Mystring &operator=(const Mystring &source);
    Mystring &operator=(Mystring &&source);

    char* get_str()const;//getters
    int get_strlength()const;
    void display()const;

    bool operator==(const Mystring &rhs)const;//Check for equality
    bool operator!=(const Mystring &rhs)const;//Check for no equality
    bool operator<(const Mystring &rhs)const;//Check lexically less than
    bool operator>(const Mystring &rhs)const;//Check lexically greater than

    Mystring operator-()const;
    Mystring operator+(const Mystring &rhs)const;
    Mystring &operator+=(const Mystring &rhs);
    Mystring operator*(int number)const;
    Mystring &operator*=(int number);
    Mystring &operator++();//post increment
    Mystring operator++(int);//pre increment
    Mystring &operator--();//post decrement
    Mystring operator--(int);//pre decrement
};

#endif