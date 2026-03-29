#include <iostream>
#include <string>
using namespace std;

void merge(string arr[], int si, int mid, int ei) {
    int tempSize = ei - si + 1;
    string* temp = new string[tempSize]; 
    
    int i = si;     
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= ei) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    while(j <= ei) {
        temp[k++] = arr[j++];
    }

    for(int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }

    delete[] temp; 
}

void mergeSort(string arr[], int si, int ei) {
    if(si >= ei) {
        return;
    }
    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

void print_arr(string arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "\"" << arr[i] << "\" ";
    }
    cout << endl;
}

int main() {
    string arr[] = {"sun", "earth", "mars", "mercury"};
    int n = 4;

    mergeSort(arr, 0, n - 1);
    print_arr(arr, n);

    return 0;
}