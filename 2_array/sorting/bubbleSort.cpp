#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void inputArr(int arr1[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter the value for element " << i+1 << " : ";
        cin >> arr1[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr1[n]; 

    //we are using taking input approch;
    inputArr(arr1, n); 

    bubbleSort(arr1, n); 

    return 0;
}