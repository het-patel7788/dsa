/*
Problem: Count Substrings with Same Start & End (LeetCode Premium)

Description:
We are given a string S. We need to find the count of all contiguous 
substrings starting and ending with the same character.

Example 1:
    Input: S = "abcab"
    Output: 7
    Explanation: Out of all 15 possible substrings, the 7 valid ones are:
    a, abca, b, bcab, c, a, and b.

Example 2:
    Input: S = "aba"
    Output: 4
    Explanation: The 4 valid substrings are: 
    a, b, a, and aba.

*/





//method - 1

// #include <iostream>
// #include <string>
// using namespace std;

// int count = 0;

// int chosenSubStr(string str, int i, int j, int n){
//     if(i==n){
//         return count;
//     }
//     if(j<n){
//         if(str[i] == str[j]){
//             count += 1;
//             return chosenSubStr(str, i, j+1, n);
//         }
//         else{
//             return chosenSubStr(str, i, j+1, n);
//         }
//     }
//     else{
//         return chosenSubStr(str, i+1, i+1, n);
//     }
// }

// int main(){

//     string str = "abcab";

//     int ans = chosenSubStr(str, 0, 0, 5);

//     cout << "ans = " << ans;

//     return 0;
// }






//method-2
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countOptimized(const string& str) {
    // A tiny array of size 26 to store letter counts (O(1) space)
    vector<int> freq(26, 0); 
    int totalSubstrings = 0;

    // Count how many times each letter appears (O(N) time)
    for (int i = 0; i < str.size(); i++) {
        freq[str[i] - 'a']++;
    }

    // Apply the magic formula to our counts!
    for (int i = 0; i < 26; i++) {
        int k = freq[i];
        if (k > 0) {
            // Formula: k * (k + 1) / 2
            totalSubstrings += (k * (k + 1)) / 2; 
        }
    }

    return totalSubstrings;
}

int main() {
    string str = "abcab";
    cout << "Total valid substrings: " << countOptimized(str) << endl;
    
    return 0;
}