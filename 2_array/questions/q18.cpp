//c++ string question : valid anagram

#include<iostream>
#include<string>
using namespace std;

bool isValidAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    int count[26] = {0};
    for(int i=0; i<str1.length(); i++){
        int index1 = str1[i] - 'a';
        count[index1]++;
    }

    for(int i=0; i<str2.length(); i++){
        int index2 = str2[i] - 'a';
        if(count[index2] == 0){
            cout << "Not Anagrams";
            return false;
        }
        count[index2]--;
    }

    cout << "Anagrams";
    return true;
}

int main(){
    string str1 = "listen";
    string str2 = "silent";

    isValidAnagram(str1, str2);

    return 0;
}