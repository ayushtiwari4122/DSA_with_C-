#include <iostream>
using namespace std;

int main() {
// Array creation:
// datatype var.namee[size of array]
    int marks[5] = {98,97,96,94,50};
    int size = 5
    double price[] = {102,144,125,54};

    // to acces any data in an array- we use the array indexing---
    cout << marks[1] << endl;
    
    // Indexing range of arrays - 0 to size-1;
    
    // For performing operations over arrays we use loops;

    // To calculate size of array--
    int sz = sizeof(marks);
    cout << sizeof(marks) << endl;
    

    // LOOPS in ARRAY-
    for( int i = 0; i < size; i++) {
        cout << marks[i] << endl;           
    }
}