//aproch 1 and 3 are here
// #include <iostream>
// using namespace std;


// //aproch 1: Brute Force
// int serchBruteForce(int arr[4][4], int target){
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(arr[i][j] == target){
//                 return 1;
//             }
//         }
//     }
//     return -1;
// }


// //aproch 3: Staircase approch
// int stairCaseApproch(int mat[4][4], int target, int n, int m){
//     int i = 0;
//     int j = m-1;
//     while(i < n && j >= 0){
//         if(mat[i][j] == target){
//             return 1;
//         } else if(mat[i][j] > target){
//             j--;
//         } else {
//             i++;
//         }
//     }
//     return -1;
// }

// int main(){

//     int arr[4][4] = {{10, 20, 30, 40},
//                      {15, 25, 35, 45},
//                      {27, 29, 37, 48},
//                      {32, 33, 39, 50}
//                     };

//     int target;
//     cout << "Enter the element to search: ";
//     cin >> target;

//     // int result = serchBruteForce(arr, target);

//     int result = stairCaseApproch(arr, target, 4, 4);

//     if(result == 1){
//         cout << "Element found in the array." << endl;
//     } else {
//         cout << "Element not found in the array." << endl;
//     }
                    

//     return  0;
// }







//aproch 2: Binary Search on each row
#include <iostream>
using namespace std;

// Helper Function: Standard Binary Search on a 1D array
bool binarySearch(int arr[], int m, int target) {
    int start = 0;
    int end = m - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

// Main Search Function
int searchUsingBinarySearch(int mat[][4], int target, int n, int m) {
    // Iterate through every row and run Binary Search on it
    for (int i = 0; i < n; i++) {
        if (binarySearch(mat[i], m, target)) {
            return 1; // Found
        }
    }
    return -1; // Not Found
}

int main() {
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int result = searchUsingBinarySearch(arr, target, 4, 4);

    if (result == 1) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}