#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void countSort(int arr[], int n){
    int freq[10000];  //range
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i = 0; i<n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;   //here arr[i] is a value but for freq it work as index.
    }

    for(int i = minVal, j = 0; i <= maxVal; i++){
        while(freq[i]){
            arr[j++] = i;
            freq[i] --;
        }
    }


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[8] = {1,4,1,3,2,4,3,7};

    countSort(arr, 8);

    return 0;
}