#include <iostream>

using namespace std;

int main(){
    double money {};
    double two_hundreds{},hundreds{},fifties{},twenties{},tens{},fives{},one_pounds{};
    
    cout << "Enter the amount of money: ";
    cin >> money;

    while(money != 0){
        if(money >= 200.0){
            money-=200.0;
            two_hundreds++;
        }else if((money < 200.0) && (money >= 100.0)){
            money-=100.0;
            hundreds++;
        }else if((money < 100.0) && (money >= 50.0)){
            money-=50.0;
            fifties++;
        }else if((money < 50.0) && (money >= 20.0)){
            money-=20.0;
            twenties++;
        }else if((money < 20.0) && (money >= 10.0)){
            money-=10.0;
            tens++;
        }else if((money < 10.0) && (money >= 1.0)){
            money-=1.0;
            one_pounds++;
        }
    }
    cout << "The money you entered can be changed for" << endl;
    cout << "Two Hundreds: " << two_hundreds << endl;
    cout << "Hundreds: " << hundreds << endl;
    cout << "Fifties: " << fifties << endl;
    cout << "Twenties: " << twenties << endl;
    cout << "Tens: " << tens << endl;
    cout << "Fives: " << fives << endl;
    cout << "One pounds: " << one_pounds << endl;

    return 0;
}