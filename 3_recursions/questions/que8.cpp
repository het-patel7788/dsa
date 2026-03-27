#include <iostream>
using namespace std;

void towerOfHanoi(int n, char S, char H, char D) {
    
    // Base Case
    if (n == 1) {
        cout << "Move disk 1 from " << S << " to " << D << endl;
        return;
    }

    towerOfHanoi(n - 1, S, D, H);

    cout << "Move disk " << n << " from " << S << " to " << D << endl;

    towerOfHanoi(n - 1, H, S, D);
}

int main() {
    int n = 3; 
    cout << "Steps to solve Tower of Hanoi with " << n << " disks:" << endl;

    towerOfHanoi(n, 'A', 'B', 'C');
    
    return 0;
}
