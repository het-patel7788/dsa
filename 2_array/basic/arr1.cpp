#include <iostream>
using namespace std;

int main() {

    //print array elements
    // int arr[5] = {10, 20, 30, 40, 50};
    // int len = sizeof(arr) / sizeof(arr[0]); // 20 / 4 = 5

    // for (int i = 0; i <= len-1; i++) {
    //     cout << "Element at index " << i << ": " << arr[i] << endl;
    // }




    //input array elements
    // int arr[5];
    // int len = sizeof(arr) / sizeof(arr[0]); // 20 / 4 = 5

    // for (int i = 0; i <= len-1; i++) {
    //     cout << "Enter element at index " << i << ": ";
    //     cin >> arr[i];
    // }

    // //confirm input by printing
    // cout << "You entered the following elements:" << endl;
    // for (int i = 0; i <= len-1; i++) {
    //     cout << "Element at index " << i << ": " << arr[i] << endl;
    // }




    //find max from array
    int arr[] = {234, 243, 43,463, 245, 652, 325, 435};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];

    for(int i = 0; i <= len-1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "the highest number is: " << max << endl; 
    return 0;
}