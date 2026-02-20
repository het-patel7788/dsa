//bit manipulation




//get ith bit (at i tell what is it 1 or 0)   (bit mask = 00001000)

// #include<iostream>
// using namespace std;

// int getIthBit(int num, int i){
//     int bitMask = 1 << i;

//     if(!(num && bitMask)){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// int main(){

//     cout << getIthBit(6, 2);

//     return 0;
// }




//set ith bit = (0->1) and (1->1)     (bit mask = 00001000)
// #include<iostream>
// using namespace std;

// int setIthBit(int num, int i){
//     int bitMask = 1 << i;
//     return (num | bitMask);
// }

// int main(){

//     cout << setIthBit(6, 3);

//     return 0;
// }




//clear ith bit = (1->0) and (0->0)    (bit mask = 111101111)
// #include<iostream>
// using namespace std;

// int clearIthBit(int num, int i){
//         int bitMask = ~(1 << i);
//         return (num & bitMask); 
// }

// int main(){

//     cout << clearIthBit(6,1);
//     return 0;
// }





//check of power of two; eqn = (num & (num-1))
// #include <iostream>
// using namespace std;

// bool isPowerOf2(int num){
//     if(!(num & (num-1))){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){

//     cout << isPowerOf2(7);

//     return 0;
// }





//WAF to update the ith bit in a number according to given value (0 or 1)
//1. clear ith bit
//2. num | (value << i)
// #include <iostream>
// using namespace std;

// void updateIthBit(int num, int i, int value){
//     num = num & ~(1 << i); //clear ith bit
//     num = num | (value << i); 

//     cout << num;
// }

// int main(){
//     updateIthBit(7, 2, 0);

//     return 0;
// }




//WAF to clear the last i bits of a number
// bit mask = 11110000
// num = num & (~0 << i)
// #include <iostream> 
// using namespace std;

// void clearIBits(int num, int i){
//     int bitMask = (~0) << i;
//     num = num & bitMask;
//     cout << num;
// }

// int main(){

//     clearIBits(15, 2);

//     return 0;
// }




//Count set bits in a number (Amazon, Google)
//check only last dighit and do a right shift by 1 , do it until num becomes 0
// #include <iostream>
// using namespace std;

// int countSetBits(int num){
//     int count = 0;

//     while(num > 0){
//         if(num & 1){
//             count++;
//         }
//         num = num >> 1;
//     }

//     return count;
// }

// int main(){

//     cout << countSetBits(15);

//     return 0;
// }






//Fast exponentiation
#include <iostream>
using namespace std;

void fastExpo(int x, int n){
    int ans = 1;

    while(n>0){
        int lastBit = n & 1;
        if(lastBit){
            ans = ans * x;
        }

        x = x * x;
        n = n >> 1;
    }

    cout << ans << endl;
}

int main(){

    fastExpo(3, 5);

    return 0;
}