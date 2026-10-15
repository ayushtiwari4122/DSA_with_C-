#include <iostream>
using namespace std;

// Array creation:
// datatype var.namee[size of array]
    // int marks[5] = {98,97,96,94,50};
    // int size = 5;
    // double price[] = {102,144,125,54};

    // to acces any data in an array- we use the array indexing---
    // cout << marks[1] << endl;
    
    // Indexing range of arrays - 0 to size-1;
    
    // For performing operations over arrays we use loops;

    // To calculate size of array--
    // int sz = sizeof(marks);
    // cout << sizeof(marks) << endl;
    

    // LOOPS in ARRAY-

    // // For output values from an array-
    // for( int i = 0; i < size; i++) {
    //     cout << marks[i] << endl;           
    // }

    // For input values in an array--
    // for (int i =0; i < size; i++){
    //     cin >> marks[i];
    // }
    

    // Q--> Find smallest and largest in array ?
    // 
    
    
//     return 0;
// }

// TWO POINTER// REVERSE AN ARRAY--:
void reverseArray(int arr[], int sz) {
    int start = 0, end = sz-1;

    while (start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

int main (){
    int arr[] = {15,22,42,154,12,2};
    int sz = 6;

    reverseArray(arr,sz);

    for(int i =0; i <=sz; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0;
}