#include <iostream>
using namespace std;

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


int stairCaseApproch(int mat[4][4], int target, int n, int m){
    int i = 0;
    int j = m-1;
    while(i < n && j >= 0){
        if(mat[i][j] == target){
            return 1;
        } else if(mat[i][j] > target){
            j--;
        } else {
            i++;
        }
    }
    return -1;
}

int main(){

    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}
                    };

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    // int result = serchBruteForce(arr, target);

    int result = stairCaseApproch(arr, target, 4, 4);

    if(result == 1){
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
                    

    return  0;
}