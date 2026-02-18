//3 Sum closest
// Given an integer array nums of length n and an integer target, find three integers at distinct indices in nums such that the sum is closest to target.
// Return the sum of the three integers.
// You may assume that each input would have exactly one solution.


#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>     // Required for abs()
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int closestSum = nums[0] + nums[1] + nums[2];

    for(int i = 0; i < nums.size() - 2; i++) {
        
        int j = i + 1;     
        int k = nums.size() - 1; 

        while(j < k) {
            int currentSum = nums[i] + nums[j] + nums[k];

            if (abs(target - currentSum) < abs(target - closestSum)) {
                closestSum = currentSum;
            }

            if (currentSum == target) {
                return currentSum; 
            }
            else if (currentSum < target) {
                j++; 
            } 
            else {
                k--; 
            }
        }
    }
    return closestSum;
}

int main() {
    
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = threeSumClosest(nums, target);

    cout << "The closest sum to " << target << " is: " << result << endl;

    return 0;
}