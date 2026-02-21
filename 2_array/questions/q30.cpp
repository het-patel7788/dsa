//leetcode-2527 find x-or beauty of array   (TRICK  QUE)
/*You are given a 0-indexed integer array nums.

The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) & nums[k]).

The xor-beauty of the array is the XORing of the effective values of all the possible triplets of indices (i, j, k) where 0 <= i, j, k < n.

Return the xor-beauty of nums.*/


#include <iostream>
#include <vector>
using namespace std;

int xorBeauty(vector<int>& nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i]; 
    }
    return ans;
}

int main() {
    vector<int> nums1 = {1, 4};
    cout << "XOR Beauty of [1, 4] is: " << xorBeauty(nums1) << endl;

    vector<int> nums2 = {15, 45, 20, 2, 34, 35, 5, 44, 32, 30};
    cout << "XOR Beauty of large array is: " << xorBeauty(nums2) << endl;

    return 0;
}