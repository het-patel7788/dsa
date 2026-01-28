#include <iostream>
using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;  // Reference variable (cho is an alias for ch)

    cho += a;        // 'A' (65) + 32 = 97 ('a') -> Updates ch to 'a'
    *ptr += ch;      // a (32) + 97 = 129 -> Updates a to 129

    cout << a << ", " << ch << endl;

    return 0;
}