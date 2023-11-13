#include <iostream>
#include <vector>

using namespace std;

int main(){

    char selection {};
    bool status {false};
    vector <int> collection {};

    while(status != true){
        cout << "Welcome to Section 9 Challenge program" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        switch(selection){
            case 'P': case 'p':{
                if(collection.size() == 0){
                    cout << "[] - the list is empty" << endl;
                }else{
                    cout << "[ ";
                    for(int i = 0;i<collection.size();i++){
                        cout << collection.at(i) << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            }
            case 'A': case 'a':{
                int num {};
                cout << "Please enter the number that you would like to add: ";
                cin >> num;
                collection.push_back(num);
                cout << num << " added" << endl;
                break;
            }
            case 'M': case 'm':{
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
                break;
            }
            case 's': case 'S':{
                if(collection.size() == 0){
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                }else{
                    int min = collection.at(0);
                    for(int i = 0;i<collection.size();i++){
                        if(collection.at(i)< min){
                            min = collection.at(i);
                        }
                    }
                    cout << "The smallest number in the current collection is " << min << endl;
                }
                break;
            }
            case 'L': case 'l':{
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
                break;
            }
            case 'Q':case 'q':{
                cout << "Goodbye" << endl;
                status = true;
                break;
            }
            default: cout << "\nUnknown selection, please try again\n" << endl;
        }
    }
    return 0;
}