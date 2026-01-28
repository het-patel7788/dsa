#include <iostream>
using namespace std;

int changeA(int a){
    a = 20;
    return a;
}

int changeB(int *b){
    *b = 20;
    return *b;
}

int main(){

    int a = 10;
    cout << "\npass by value." << "\n";
    cout << "In main a = " << a << "\n";
    cout << "In changeA func, a = " << changeA(a);
    cout << "\nIn main a after func call = " << a << "\n";

    int b = 10;
    int *p = &b;
    cout << "\npass by reference using pointer." << "\n";
    cout << "In main b = " << b << "\n";
    cout << "In changeB func, b = " << changeB(p);
    cout << "\nIn main b after func call = " << b << "\n";

    return 0;
}