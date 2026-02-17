// You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.


#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int> vec){
    int n = vec.size();

    vector<int> count(n+1, 0);

    for(int i = 0; i < n; i++){
        int val = vec[i];
        count[val]++;
    }

    int duplicate = 0;
    int missing = 0;

    for(int i = 1; i <= n; i++){
        if(count[i] == 2){
            duplicate = i;
        }
        else if(count[i] == 0){
            missing = i;
        }
    }
    return {duplicate, missing};
}

int main(){

    vector<int> vec = {1,2,2,4};

    vector<int> ans = findErrorNums(vec);
    
    cout << "Duplicate: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}