#include <iostream>
using namespace std;

int main(){

    // int a = 10;
    // int *ptr = &a;

    // int **pptr = &ptr;

    // float pi = 3.14;
    // float *ptr2 = &pi;

    // cout << "\n ptr for int ...\n";
    // cout << &a << " = " << ptr << "\n ";
    // cout << a << " = " << *(&a) << " = " << *ptr << "\n \n";
    
    // cout << "ptr for pptr...\n";
    // cout << &ptr << " = " << pptr << "\n \n";

    // cout << "ptr for float... \n";
    // cout << &pi << " = " << ptr2 << "\n \n";


    

    //gives random memory.
    int *ptr;
    cout << ptr << "\n";
    //sometime we wamt to declare not to point anywhere so we init it with null
    int *ptr2 = NULL;
    cout << ptr2 << "\n";
    return 0;
}