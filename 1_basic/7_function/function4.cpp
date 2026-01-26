// #include <iostream>
// using namespace std;


// int sizeOfNum(int n){
//     int size = 0;
//     while(n > 0){
//         size += 1;
//         n /= 10;
//     }
//     return size;
// }

// bool isPalindrome(int n){
//     int size = sizeOfNum(n);
//     int reversedNum = 0;
//     int originalNum = n;
//     for(int i = 0; i < size; i++){
//         reversedNum = reversedNum * 10 + (originalNum % 10);
//         originalNum /= 10;
//     }
//     return (reversedNum == n);
// }

// int main(){
    
//     //1. check is the number is palindrome or not
//     int n;
//     cout << "Enter the number n: ";
//     cin >> n;

//     if(isPalindrome(n)){
//         cout << n << " is a palindrome number." << endl;
//     } else {
//         cout << n << " is not a palindrome number." << endl;
//     }
    
//     return 0;
// }







// #include <iostream>
// using namespace std;

// int sumOfDigit(int n){
//     int sum = 0;
//     while(n > 0){
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int main(){

//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int s = sumOfDigit(n);
//     cout << "The total is :" << s << endl;

//     return 0;
// }






