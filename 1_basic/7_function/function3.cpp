#include <iostream>
using namespace std;


//1------------------------------------------
// int isPrime(int n){
//     if(n<=1) return 0;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
//------------------------------------------


//2------------------------------------------
// int factorial(int n){
//     int fact = 1;
//     for(int i=2;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     // nCr = n! / (r! * (n-r)!)
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
//-------------------------------------------


//3------------------------------------------
int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void printPrimesInRange(int low, int high){
    for(int num=low; num<=high; num++){
        if(isPrime(num)){
            cout << num << " ";
        }
    }
    cout << endl;
}
//-------------------------------------------


int main(){

    //1------------------------------------------
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // if(isPrime(num)){
    //     cout << num << " is a prime number." << endl;
    // } else {
    //     cout << num << " is not a prime number." << endl;
    // }

    
    //2------------------------------------------
    // //write a function to find binomial coefficient nCr
    // int n, r;
    // cout << "Enter n : ";
    // cin >> n;
    // cout << "Enter r : ";
    // cin >> r;

    // cout << "nCr = " << nCr(n, r) << endl;
    //-------------------------------------------


    //3------------------------------------------
    // print all prime numbers in a given range using function
    int low, high;
    cout << "Enter lower bound: ";
    cin >> low;
    cout << "Enter upper bound: ";
    cin >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";
    printPrimesInRange(low, high);
    //-------------------------------------------

    return 0;
}