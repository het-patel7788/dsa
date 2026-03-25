// frineds pair problem : one can stay single or pair with one and other one can't 
// have pair with other one count total ways of it


#include <iostream>
using namespace std;

int frinedsPairing(int n){
    //base case
    if(n == 1 || n == 2){
        return n;
    }

    //single
    int single = frinedsPairing(n-1);
    //pair
    int pair = (n-1) * frinedsPairing(n-2);

    return single + pair;
}

int main(){

    cout << frinedsPairing(4);

    return 0;
}