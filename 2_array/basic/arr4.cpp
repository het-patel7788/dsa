//char array

#include <iostream>
#include <cstring> //for strlen() function
using namespace std;

int main(){
    // char str[5] = {'h', 'e', 'l', 'l', 'o'};
    // cout << str << endl; 
    //what is this in output? hello¢→@ ? why something extra is printed? 
    // --> because char array is not null terminated, so it will keep on printing until it finds a null character. so we need to add a null character at the end of the array to make it a string.


    // for(int i=0; i<5; i++){
    //     cout << str[i] << " "; //h e l l o
    // }




    // char work[4] = {"code"};
    // cout << work << endl; 
    //code won't work we will see an error here so don't run this code, because we are trying to initialize a char array with a string literal, but the size of the array is not enough to hold the string literal and the null character. so we need to increase the size of the array to 5 to hold the string literal and the null character.



    //how to take input in char array?
    char name[20];
    cout << "Enter your name: ";
    cin >> name; //this will work but it will only take the first word of the input, if we want to take the full name we need to use getline() function.
    cout << "Your name is: " << name << endl;
    cout << "length of name is : " << strlen(name) << endl;
    //hey this is not working i see some error like this : strlen was not declared in this scope, why? because we need to include the header file <cstring> to use the strlen() function, so we need to add #include <cstring> at the top of the code.


    //there is a problem in the code when i run it then input jon it is showing in as Your name is : jon but then the below code runs automatically and it is not waiting for the input of full name, why? because when we use cin >> name; it leaves the newline character in the input buffer, so when we use getline() function it reads the newline character and it considers it as an empty string. to fix this problem we need to clear the input buffer before using getline() function.
    cin.ignore(); //this will clear the input buffer

    
    //how to take input in char array using getline() function?
    char fullName[50];
    cout << "Enter your full name: ";
    cin.getline(fullName, 50);
    cout << "Your full name is: " << fullName << endl;
    cout << "length of full name is : " << strlen(fullName) << endl;


    return 0;

}