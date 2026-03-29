//serch element in a rotated sorted array


#include <iostream>
using namespace std;

int rs(int arr[], int si, int ei, int target){

    if(si>ei){
        return -1;
    }

    int mid = (si+ei)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[si] <= arr[mid]){
        if(arr[si] <= target && target < arr[mid]){
            return rs(arr, si, mid, target);
        }
        else{
            return rs(arr, mid+1, ei, target);
        }
    }
    else{
        if(arr[mid] <= target && target <= arr[ei]){
            return rs(arr, mid+1, ei, target);
        }
        else{
            return rs(arr, si, mid, target);
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};

    int ans = rs(arr, 0, 6, 0);

    cout << "the ans is : " << ans << endl;

    return 0;
}