#include <iostream>
using namespace std;

// int prod(int a, int b){
//     return a * b;
// }
//----------------------------------


// bool isEven(int n){
//     if(n % 2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
//-----------------------------------


int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    // int ans = prod(3, 7);
    // cout << "Answer = " << ans <<endl;
    //-----------------------------------------------------

    // int ans2;
    // cout << "Enter a number: ";
    // cin >> ans2;

    // if(isEven(ans2)){
    //     cout << ans2 << " is even" << endl;
    // }
    // else{
    //     cout << ans2 << " is odd" << endl;
    // }
    //-----------------------------------------------------

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}