//count lowercase in string.

#include<iostream>
#include<string>
using namespace std;

int countLowercase(string str1){
    int count = 0;
    for(int i=0; i < str1.length(); i++){
        if(str1[i] < 'a' || str1[i] > 'z'){
            continue;
        }
        count += 1;
    }
    return count;
}

int main(){

    string str1 = "abcDfCCCncM";

    int count = countLowercase(str1);
    cout << count << "\n";

    return 0;
}