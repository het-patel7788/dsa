// #include <iostream>
// using namespace std;

// int fibb(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fibb(n-1) + fibb(n-2);
// }

// int main(){

//     int n;
//     cout << "For which number you want to print fibbonaci number : ";
//     cin >> n;

//     int ans = fibb(n);
//     cout << "The number is : " << ans;

//     return 0;
// }







// print all fibbonacci untill that number
#include <iostream>
using namespace std;

int fibb(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibb(n-1) + fibb(n-2);
}

int main(){

    int n;
    cout << "For which number you want to print fibbonaci number : ";
    cin >> n;

    cout << "The Fibonacci sequence up to " << n << " is: ";

    for(int i = 0; i <= n; i++){
        cout << fibb(i) << " ";
    }

    return 0;
}