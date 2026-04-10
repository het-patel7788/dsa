#include <iostream>
#include <vector>
#include <string>
using namespace std;

void backtrack(string digits, int index, string currentPath, vector<string>& ans, string pad[]) {
    if (index == digits.length()) {
        ans.push_back(currentPath);
        return;
    }

    char currentDigit = digits[index];
    int digitVal = currentDigit - '0';
    string letters = pad[digitVal];

    for (int i = 0; i < letters.length(); i++) {
        backtrack(digits, index + 1, currentPath + letters[i], ans, pad);
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    
    if (digits.length() == 0) {
        return ans;
    }

    string pad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    backtrack(digits, 0, "", ans, pad);

    return ans;
}

int main() {
    string digits = "23";
    
    vector<string> result = letterCombinations(digits);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}