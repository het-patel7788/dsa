#include <iostream>
#include <vector>
using namespace std;

int countInRange(vector<int>& nums, int num, int left, int right) {
    int count = 0;
    for (int i = left; i <= right; i++) {
        if (nums[i] == num) {
            count++;
        }
    }
    return count;
}

int majorityElementRec(vector<int>& nums, int left, int right) {
    if (left == right) {
        return nums[left];
    }

    int mid = left + (right - left) / 2;
    int leftMajority = majorityElementRec(nums, left, mid);
    int rightMajority = majorityElementRec(nums, mid + 1, right);

    if (leftMajority == rightMajority) {
        return leftMajority;
    }

    int leftCount = countInRange(nums, leftMajority, left, right);
    int rightCount = countInRange(nums, rightMajority, left, right);

    if (leftCount > rightCount) {
        return leftMajority;
    } else {
        return rightMajority;
    }
}

int main() {
    vector<int> nums = {2,3,3,3,3,3,2};
    
    cout << majorityElementRec(nums, 0, nums.size() - 1) << "\n";
    
    return 0;
}