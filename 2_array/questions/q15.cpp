//make a own function of toUpper() function which will convert a given string to uppercase.

#include <iostream>
#include <cstring> //for strlen() function  
using namespace std;
    
void toUpper(char* word, int n){
    
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){
            continue; //if the character is already in uppercase then we will skip it.
        }
        else{
            word[i] = ch - 'a' + 'A';
        }
    }
}


int main(){

    char word[] = "ApPle";
    toUpper(word, strlen(word));
    cout << word << endl;

    return 0;
}