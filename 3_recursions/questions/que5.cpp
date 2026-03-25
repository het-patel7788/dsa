//binary search using recursions

#include <iostream>
using namespace std;

int binarySearch(int arr[], int st, int en, int target){
    if(st>en){
        return -1;
    }

    int mid = st + (en-st)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] > target){   //target is big , go for left(small) half.
        return binarySearch(arr, st, mid-1, target);
    }
    else{
        return binarySearch(arr, mid+1, en, target);
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int ans = binarySearch(arr, 0, 6, 4);
    cout << ans;
    return 0;
}