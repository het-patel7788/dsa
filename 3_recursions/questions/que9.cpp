//count good numbers
/*A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.

A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.
*/

/*Example 1:

Input: n = 1
Output: 5
Explanation: The good numbers of length 1 are "0", "2", "4", "6", "8".*/

/*Example 2:

Input: n = 4
Output: 400  */




#include <iostream>
using namespace std;

const int MOD = 1e9 + 7; 

long long power(long long base, long long exp) {
    // Base case
    if (exp == 0) {
        return 1;
    }

    long long halfPower = power(base, exp / 2);
    
    long long halfPowerSquared = (halfPower * halfPower) % MOD;

    if (exp % 2 == 0) {
        return halfPowerSquared;
    } else {

        return (base * halfPowerSquared) % MOD;
    }
}

int countGoodNumbers(long long n) {

    long long even_slots = (n + 1) / 2;
    long long odd_slots = n / 2;
    long long five_power = power(5, even_slots);
    long long four_power = power(4, odd_slots);

    return (five_power * four_power) % MOD;
}

int main() {

    cout << "n = 1: " << countGoodNumbers(1) << " (Expected: 5)" << endl;

    cout << "n = 4: " << countGoodNumbers(4) << " (Expected: 400)" << endl;

    cout << "n = 50: " << countGoodNumbers(50) << endl;

    return 0;
}
