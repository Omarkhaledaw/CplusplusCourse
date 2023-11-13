#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring():str{nullptr}
{
    str = new char[1];
    str[0] = '\0';
}
Mystring::Mystring(const char *s):str{nullptr}
{
    if(s==nullptr){
        str = new char[1];
        str[0] = '\0';
    }else{
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}
Mystring::Mystring(const Mystring &source):str{nullptr}
{
    std::cout << "Copy constructor is used" << std::endl;
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}
Mystring::Mystring(Mystring &&source):str{source.str}
{
    std::cout << "Move constructor is used" << std::endl;
    source.str = nullptr;
}
Mystring::~Mystring()
{
    delete[] str;
}
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout << "Using Copy assginment" << std::endl;
    if(this==&rhs){
        return *this;
    }else{
        delete[] str;
        str = new char[std::strlen(rhs.str)+1];
        std::strcpy(str,rhs.str);
        return *this;
    }
}
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Using Move assginment" << std::endl;
    if(this==&rhs){
        return *this;
    }else{
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
    }
}
char* Mystring::get_str()const
{
    return str;
}
int Mystring::get_strlength()const
{
    return std::strlen(str);
}
void Mystring::display()const
{
    std::cout << "Your string contains " << str << std::endl;
}
std::ostream &operator<<(std::ostream &out,const Mystring &rhs)
{
    out << "String: " << rhs.str << std::endl;
    return out;
}
std::istream &operator>>(std::istream &in,Mystring &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}
bool Mystring::operator==(const Mystring &rhs)const
{
    return (strcmp(this->str,rhs.str)==0);
}
bool Mystring::operator!=(const Mystring &rhs)const
{
    return (!(strcmp(this->str,rhs.str)==0));
}
bool Mystring::operator<(const Mystring &rhs)const
{
    return (strcmp(this->str,rhs.str)<0);
}
bool Mystring::operator>(const Mystring &rhs)const
{
    return (strcmp(this->str,rhs.str)>0);
}
Mystring Mystring::operator-()const
{
    char* buff = new char[std::strlen(this->str)+1];
    std::strcpy(buff,this->str);
    for(size_t i{};i<std::strlen(buff);i++){
        buff[i]=std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
Mystring Mystring::operator+(const Mystring &rhs)const
{
    char* buff = new char[std::strlen(this->str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,this->str);
    std::strcpy(buff,rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
Mystring &Mystring::operator+=(const Mystring &rhs)
{
    std::strcpy(this->str,rhs.str);
    // *this = *this+rhs;
    return *this;
}
Mystring Mystring::operator*(int num)const
{
    Mystring temp;
    // char* buff = new char[(std::strlen(this->str)*num)+1];
    for(int i{};i<num;i++){
        //std::strcpy(buff,this->str);
        temp = temp + *this;
    }
    // Mystring temp{buff};
    // delete[] buff;
    return temp;
}
Mystring &Mystring::operator*=(int num)
{
    *this = *this * num;
    // char* buff = new char[std::strlen(this->str)+1];
    // std::strcpy(buff,this->str);
    // for(int i{};i<num;i++){
    //     std::strcpy(this->str,buff);
    // }
    // delete[] buff;
    return *this;
}
Mystring &Mystring::operator++()
{
    for(size_t i{};i<std::strlen(this->str);i++){
        this->str[i]=std::toupper(this->str[i]);
    }
    return *this;
}
Mystring Mystring::operator++(int)
{
    Mystring temp{*this};
    for(size_t i{};i<std::strlen(this->str);i++){
        this->str[i]=std::toupper(this->str[i]);
    }
    return temp;
}
Mystring &Mystring::operator--()
{
    for(size_t i{};i<std::strlen(this->str);i++){
        this->str[i]=std::tolower(this->str[i]);
    }
    return *this;
}
Mystring Mystring::operator--(int)
{
    Mystring temp{*this};
    for(size_t i{};i<std::strlen(this->str);i++){
        this->str[i]=std::tolower(this->str[i]);
    }
    return temp;
}