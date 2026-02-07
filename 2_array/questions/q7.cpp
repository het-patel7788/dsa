//Maximum Product Subarray
/*Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Note that the product of an array with a single element is the value of that element.*/

#include <iostream>
#include <vector>
#include <algorithm> // Required for max()
#include <climits>   // Required for INT_MIN
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxProd = INT_MIN;
        int currProd = 1;

        // Pass 1: Left to Right
        for(int i=0; i<nums.size(); i++){
            currProd *= nums[i];
            maxProd = max(maxProd, currProd); // Check max BEFORE resetting 0
            if(currProd == 0){
                currProd = 1;
            }
        }

        currProd = 1; // Reset for the second pass

        // Pass 2: Right to Left
        for (int i = nums.size() - 1; i >= 0; i--) {
            currProd *= nums[i];
            maxProd = max(maxProd, currProd);
            if (currProd == 0) currProd = 1;
        }
        return maxProd;
    }
};

int main() {
    // 1. Create the object
    Solution sol;

    // 2. Create a test case (You can change these numbers)
    vector<int> nums = {2, 3, -2, 4}; 

    // 3. Call the function
    int result = sol.maxProduct(nums);

    // 4. Print the result
    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}