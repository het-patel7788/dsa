#include <iostream>
using namespace std;

int main(){


    //take input as n and print something like this
    /*  
        1 1 1 1  
        2 2 2 2  
        3 3 3 3  
        4 4 4 4  
    */

    // int n;
    // cout << "Enetr the number n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*

    *   
    * * 
    * * * 
    * * * *

    */

    // int n;
    // cout << "Enter valuse of n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*

    * * * *
    * * *
    * *
    *

    */

    //first way
    // int n;
    // cout << "Enter valuse of n: ";
    // cin >> n;
    
    // int k = n;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= k; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //     k = k - 1;
    // }

    
    //second way
    // int n;
    // cout << "Enter valuse of n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     for(int j =1; j <= (n-i+1) ; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;       
    // }




    //take input as n and print something like this
    /*
    
    1 
    1 2 
    1 2 3
    1 2 3 4
    1 2 3 4 5

    */
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*

    A 
    B C
    D E F
    G H I J
    K L M N O

    */
    
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // int ch = 'A';

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
    * * * * * * 
    *         * 
    *         * 
    *         * 
    * * * * * * 
    
    */
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // for(int i=1; i <= n; i++){
    //     cout << "* " ;  //first star in all row
    //     for(int j = 1; j <= n-1; j++){
    //         if(i==1||i==n){
    //             cout << "* ";  //for first and last line print * for full row
    //         }
    //         else{
    //             cout << "  ";  //for all row less then first and last print space.
    //         }
    //     }
    //     cout << "* " << endl;  //last star in all row
    // }




    //take input as n and print something like this
    /*
    
                *
              * *
            * * *
          * * * *
        * * * * *
    
    */
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << "  ";  //two spaces needed.
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    
    */
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // int num = 1;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
            *
           * *
          * * *
         * * * *
        * * * * *
        * * * * *
         * * * *
          * * *
           * *
            *
    
    */
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;


    // for (int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " "; 
    //     }
    //     for(int k = 1; k <= i ; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int i = n; i >= 1; i--){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " "; 
    //     }
    //     for(int k = 1; k <= i ; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
            *
           ***
          *****
         *******
        *********
        *********
         *******
          *****
           ***
            *
    
    */
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;


    // for (int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " "; 
    //     }
    //     for(int k = 1; k <= 2 * i - 1 ; k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for(int i = n; i >= 1; i--){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " "; 
    //     }
    //     for(int k = 1; k <= 2 * i - 1 ; k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
        *             * 
        * *         * * 
        * * *     * * * 
        * * * * * * * * 
        * * * * * * * * 
        * * *     * * * 
        * *         * * 
        *             *
    
    */

    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=i; j++){
    //         cout << "* ";
    //     }
    //     for(int k = 1; k<=2*(n-i); k++){
    //         cout << "  ";
    //     }
    //     for(int l = 1; l<=i; l++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int i = n; i>=1; i--){
    //     for(int j = 1; j<=i; j++){
    //         cout << "* ";
    //     }
    //     for(int k = 1; k<=2*(n-i); k++){
    //         cout << "  ";
    //     }
    //     for(int l = 1; l<=i; l++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
        1 
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1
    
    */

    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         if((i + j) % 2 == 0){
    //             cout << "1 ";
    //         } else {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }




    //take input as n and print something like this
    /*
    
       ****
      ****
     ****
    ****
    
    */
    // int n ;
    // cout << "Enter the number n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n-i; j++){
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= n; k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }




    //print this pattern 
    /*
    
            1
           212
          32123
         4321234
        543212345
    
    */

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }

        //num backward
        for(int k = i; k>= 1; k--){
            cout << k;
        }

        //num forword
        for(int l = 2; l <= i; l++){
            cout << l;
        }
        cout << endl;

    }


    return 0;
}