#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Displaying the vector1 elements using the vector method" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of vector1 is " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Displaying the vector2 elements using the vector method" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of vector2 is " << vector2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Displaying the vector_2d elements using the vector method" << endl;
    cout << vector_2d.at(0).at(0) << " ";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " ";
    cout << vector_2d.at(1).at(1) << endl;

    vector_2d.at(0).at(0) = 1000;

    cout << "Displaying the vector_2d elements using the vector method after updating" << endl;
    cout << vector_2d.at(0).at(0) << " ";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " ";
    cout << vector_2d.at(1).at(1) << endl;

    cout << "Size of vector_2d is " << vector_2d.size() << endl;
    return 0;
}