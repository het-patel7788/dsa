//palindrome for char array

#include <iostream>
#include <cstring>
using namespace std;

void checkPalindrome(char* word, int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        if(word[s] != word[e]){
            cout << "Not a palindrome" << endl;
            return;
        }
        s++;
        e--;
    }
    cout << "Palindrome" << endl;
}

int main(){

    char word[] = "racecar";
    checkPalindrome(word, strlen(word));
    return 0;
}