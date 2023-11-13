#include <iostream>
#include <vector>

using namespace std;

vector <int> collection {};

void display_menu();
char get_selection();
void print_numbers();
void add_number();
void display_mean();
void display_smallest();
void display_largest();

int main() {
    
    char selection {};
    bool status {false};
    cout << "Welcome to Section 9 Challenge program" << endl;
    do{
        display_menu();    
        selection = get_selection();
        switch(selection){
            case 'P': case 'p':{
                print_numbers();
                break;
            }
            case 'A': case 'a':{
                add_number();
                break;
            }
            case 'M': case 'm':{
                display_mean();
                break;
            }
            case 's': case 'S':{
                display_smallest();
                break;
            }
            case 'L': case 'l':{
                display_largest();
                break;
            }
            case 'Q':case 'q':{
                cout << "Goodbye" << endl;
                status = true;
                break;
            }
            default: 
            cout << "\nUnknown selection, please try again\n" << endl;
        }

    }while(status != true);
    return 0;
}

void display_menu(){

    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}
char get_selection(){
    char selection {};
    cout << "Enter your choice: ";
    cin >> selection;
    return selection;
}
void print_numbers(){
    if(collection.size() == 0){
        cout << "[] - the list is empty" << endl;
    }else{
        cout << "[ ";
        for(int i = 0;i<collection.size();i++){
            cout << collection.at(i) << " ";
        }
        cout << "]" << endl;
    }
}
void add_number(){
    int num {};
    cout << "Please enter the number that you would like to add: ";
    cin >> num;
    collection.push_back(num);
    cout << num << " added" << endl;
}
void display_mean(){
    if(collection.size() == 0){
        cout << "Unable to calculate the mean - no data" << endl;
    }else{
        int mean {},sum{};
        for(int i = 0;i<collection.size();i++){
            sum += collection.at(i);
        }
        mean = sum/collection.size();
        cout << "The mean of the current collection is " << mean << endl;
    }
}
void display_smallest(){
    if(collection.size() == 0){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }else{
        int max = collection.at(0);
        for(int i = 0;i<collection.size();i++){
            if(collection.at(i) > max){
                max = collection.at(i);
            }
        }   
        cout << "The largest number in the current collection is " << max << endl;
    }
}
void display_largest(){
    if(collection.size() == 0){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }else{
        int max = collection.at(0);
        for(int i = 0;i<collection.size();i++){
            if(collection.at(i) > max){
                max = collection.at(i);
            }
        }
        cout << "The largest number in the current collection is " << max << endl;
    }
}