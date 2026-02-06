#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] == nums[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 2};
    if (containsDuplicate(nums)) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "Does not contain duplicate" << endl;
    }
    return 0;
}