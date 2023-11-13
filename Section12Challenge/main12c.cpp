#include <iostream>

using namespace std;

void print(const int* const,int);
int* apply_all(int* const,int,int* const,int);

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;

    return 0;
}
void print(const int*const arr,int size){
    for(int i {};i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int* apply_all(int* const arr1,int size1,int* const arr2,int size2){
    int pos = 0;
    int* new_array= new int[size1*size2];
    
    for(int i {};i<size2;i++){
        for(int j {};j<size1;j++){
            new_array[pos] = arr1[j]*arr2[i];
            pos++;
        }
    }

    return new_array;
}