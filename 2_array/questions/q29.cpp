//leetcode 26 (Remove duplicate from sorted array)


#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i]; 
    }
    
    return ans;
}

int main() {
    vector<int> nums1 = {2, 2, 1};
    int result1 = singleNumber(nums1);
    cout << "Single number in [2, 2, 1] is: " << result1 << endl;

    vector<int> nums2 = {4, 1, 2, 1, 2};
    int result2 = singleNumber(nums2);
    cout << "Single number in [4, 1, 2, 1, 2] is: " << result2 << endl;

    return 0;
}