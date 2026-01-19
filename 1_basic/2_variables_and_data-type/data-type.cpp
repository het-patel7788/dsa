#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

int main(){

    //two type of data-types are there primitive and non-primitive
    //int,float,char are pri  || arr,str,tree are non-pri

    int A = 29;
    char B = 'b';
    float C = 9.11;
    bool D = true;

    cout << " A = " << A << endl;
    cout << " B = " << B << endl;
    cout << " C = " << C << endl;
    cout << " D = " << D << endl;


    /*float and double are diff, 
    float is float and double is double of float
    */
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;

    cout << "-----> normal float <-----" << setprecision(12) << PI <<endl;
    cout << "-----> Doublr float <-----" << setprecision(12) << PI2 << endl;

    cout << "type of var A = " << typeid(A).name() << endl;
    cout << "size of int = " << sizeof(int) << endl;

    //input lerning.
    int K;
    cout << "Eneter value of K: ";
    cin >> K; 
    cout << "The value of K = "<< K << endl;


    //calculating sum of a and b..
    int a,b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    int sum = a + b;

    cout << "a + b = "<< sum << endl;


    //avg of 3..
    int h,i,j;
    float n = 3;

    cout << "Enter the valuse of j: ";
    cin >> j;

    cout << "Enter the valuse of h: ";
    cin >> h;

    cout << "Enter the valuse of i: ";
    cin >> i;

    float avg = (h + i + j) / n;

    cout << "Avrage is : "<< avg <<endl;


    //constant
    const float pi = 3.14;
    cout << pi << endl;

    return 0;
}