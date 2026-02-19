#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }
    
    int i = 0; 

    for (int j = 1; j < nums.size(); j++) {
        
        if (nums[j] != nums[i]) {
            i++;               
            nums[i] = nums[j]; 
        }
    }
    
    return i + 1;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << "Original array size: " << nums.size() << endl;

    int k = removeDuplicates(nums);

    cout << "Number of unique elements (k): " << k << endl;
    
    cout << "Modified array (first k elements): [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i < k - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}