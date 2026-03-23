#include <iostream>
using namespace std;

int pow(int x, int n){

    if(n==0){
        return 1;
    }

    int halfPower = pow(x, n / 2);

    if(n%2 == 0){
        return halfPower * halfPower;
    }
    else{
        return x * halfPower * halfPower;
    } 
}

int main(){
    int base = 2;
    int exponent = 5;

    int result = pow(base, exponent);
    
    cout << base << " to the power of " << exponent << " is: " << result << endl;

    return 0;
}