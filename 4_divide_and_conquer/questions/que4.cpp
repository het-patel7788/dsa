#include <iostream>
#include <vector>
using namespace std;

int merge(int arr[], int left, int mid, int right) {
    int invCount = 0;
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            invCount += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }
    while (j <= right) {
        temp.push_back(arr[j++]);
    }

    for (int k = left, x = 0; k <= right; k++) {
        arr[k] = temp[x++];
    }

    return invCount;
}

int mergeSort(int arr[], int left, int right) {
    int invCount = 0;
    
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        invCount += mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);
        invCount += merge(arr, left, mid, right);
    }
    
    return invCount;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;

    int totalInversions = mergeSort(arr, 0, n - 1);

    cout << totalInversions << "\n";

    return 0;
}