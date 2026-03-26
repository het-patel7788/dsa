//for a given arr of size n. you have to find all occurrences(indices)
//  of a given element and print them.
/*
sample input : arr[] = {3,2,4,5,6,2,7,2,2}, key = 2
sample output = 1 5 7 8
*/




// #include <iostream>
// using namespace std;

// void printOccurrences(int arr[], int target, int i, int n){
//     if(i == n){
//         return;
//     }
//     if(arr[i] == target){
//         cout << i << " ";
//         return printOccurrences(arr, target, i+1, n);
//     }
//     else{
//         return printOccurrences(arr, target, i+1, n);
//     }
// }

// int main(){

//     int arr[] = {3,2,4,5,6,2,7,2,2};

//     printOccurrences(arr, 2, 0, 9);

//     return 0;
// }





#include <iostream>
using namespace std;

void printOccurrences(int arr[], int n, int target) {
    
    if(n == 0){
        return;
    }
    
    printOccurrences(arr, n - 1, target);

    if(arr[n - 1] == target){
        cout << (n - 1) << " ";
    }
}

int main(){

    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};

    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Sample output = ";
    printOccurrences(arr, n, 2);

    return 0;
}