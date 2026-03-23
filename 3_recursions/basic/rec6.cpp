#include <iostream>
#include <vector>
using namespace std;

int FO(vector<int> arr, int i, int target){
    int size = arr.size();
    int n;
    if(n == size){
        return -1;
    }

    if(arr[i]==target){
        return i;
    }

    return FO(arr, i+1, target);
}

int main(){

    vector<int> arr = {1,2,3,3,3,4};

    cout << FO(arr, 0 ,3);

    return 0;
}