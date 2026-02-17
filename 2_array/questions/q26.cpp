//leetcode 3sum(15)
//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//Notice that the solution set must not contain duplicate triplets.
//must check example 


#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        
        if (i > 0 && nums[i] == nums[i-1]) continue;

        int j = i + 1;      
        int k = n - 1;      
        int target = -nums[i]; 

        while (j < k) {
            int sum = nums[j] + nums[k];

            if (sum == target) {
                ans.push_back({nums[i], nums[j], nums[k]});

                while (j < k && nums[j] == nums[j+1]) j++;
                while (j < k && nums[k] == nums[k-1]) k--;

                j++;
                k--;
            } 
            else if (sum > target) {
                k--; 
            } 
            else {
                j++; 
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets found:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}