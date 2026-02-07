//Search in Rotated Sorted Array

/*There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.*/


#include <iostream>
#include <vector>
using namespace std;

int searchRotated(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    // Binary Search loop
    while (low <= high) {

        int mid = low + (high - low) / 2;

        // Target found on mid
        if (nums[mid] == target)
            return mid;

        // Left half is sorted
        if (nums[low] <= nums[mid]) {

            // Target lies inside left sorted part
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            // Target lies outside left sorted part
            else
                low = mid + 1;
        }

        // Right half is sorted
        else {

            // Target lies inside right sorted part
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            // Target lies outside right sorted part
            else
                high = mid - 1;
        }
    }

    // Target not found
    return -1;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = searchRotated(nums, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
