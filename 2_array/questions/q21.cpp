#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for sort
using namespace std;

bool closeStrings(string word1, string word2) {
    
    if (word1.length() != word2.length()) {
        return false;
    }

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for (char c : word1) freq1[c - 'a']++;
    for (char c : word2) freq2[c - 'a']++;


    //Both True -> Fine, both false -> fine 
    //both diff then it is a missmatch return now with false.
    //we are talking in terms of 0 and 1 here.
    for (int i = 0; i < 26; i++) {
        bool charInWord1 = (freq1[i] > 0);
        bool charInWord2 = (freq2[i] > 0);

        if ((charInWord1 && !charInWord2) || (!charInWord1 && charInWord2)) {
            return false;
        }
    }

    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    return freq1 == freq2;
}

int main() {
    
    string word1 = "cabbba";
    string word2 = "abbccc";

    if (closeStrings(word1, word2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}