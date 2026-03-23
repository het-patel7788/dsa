#include <iostream>
#include <vector>
using namespace std;

int LO(vector<int> arr, int n, int target){

    if(n < 0){
        return -1;
    }

    if(arr[n] == target){
        return n;
    }

    return LO(arr, n-1, target);
    
}

int main(){

    vector<int> arr = {1,2,3,3,3,4};

    cout << LO(arr, 5, 2);

    return 0;
}