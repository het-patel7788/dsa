//print all sub array of an array.


#include<iostream>
using namespace std;

void printSubarrays(int *arr, int n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "For how much size of array you want to make : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter " << (i + 1) << "th element : ";
        cin >> arr[i];
    }

    printSubarrays(arr, n);

    return 0;
}