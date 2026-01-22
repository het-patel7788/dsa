#include <iostream>
#include <limits> //use for cin thihngs in num comp char is count as zero, we use this to ....
#include <cmath> // this line has math func like squre root or more...
using namespace std;

int main(){



    // Print numbers from 1 to 10 using a for loop
    // for(int i = 1; i <= 10; i++){
    //     cout << i << endl;
    // }



    //print one line with loop 10 times
    // for(int i = 0; i < 10; i++){
    //     cout << "This is line number " << i+1 << endl;
    // }



    // print number untill n number
    // int n;
    // cout << "Enter a number: "; 
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     cout << i << endl;
    // }



    //print sum of first n natural number
    // int n;
    // int sum = 0; 
    // cout << "Enter a number: ";
    // cin >> n;
    
    // for(int i = 1; i <= n; i++){
    //     sum = sum + i;
    // }
    
    // cout << "The answer is : " << sum << endl;




    //print in revers from n to 1.
    // int n;
    // cout << "Enter the number n: ";
    // cin >> n;
    // for (int i = n; i >= 1; i--){
    //     cout << i << endl;
    // }



    //while loop
    // int count = 1;
    // while(count <= 3){
    //     cout << count << "  ";
    //     count++;
    // }



    //print sum of digit in number n using while loop
    // int n;
    // cout << "Enter the number n: ";
    // cin >> n;
    // int sum = 0;
    // while(n > 0){
    //     int lastDigit = n % 10;
    //     sum = sum + lastDigit;
    //     n = n / 10;
    // }
    // cout << "The sum of digit is: " << sum << endl;



    //print sum of odd digit in number n using while loop
    // int n;
    // cout << "Enter the number n: ";
    // cin >> n;
    // int sum = 0;
    // while(n > 0){
    //     int lastDigit = n % 10;
    //     if(lastDigit % 2 != 0){
    //         sum = sum + lastDigit;
    //     }
    //     n = n / 10;
    // }
    // cout << "The sum of digit is: " << sum << endl;




    //reverse a given number and print it
    // int n;
    // cout << "Enter the number n: ";
    // cin >> n;
    // int result =  0;

    // while(n>0){
    //     int lastDigit = n % 10;
    //     result  =  result * 10 + lastDigit;  //do dryrun for better understanding
    //     n = n / 10;
    // }

    // cout << "The reversed number is: " << result << endl; 




    //do while loop
    // int i = 1;

    // do{
    //     cout << i << " ";
    //     i++;
    // } while(i <= 5);

    // cout << endl;



    //break 
    // int i = 1;
    
    // while(i<10){
    //     if(i==5){
    //         break;
    //     }
    //     cout << i << endl;
    //     i++;
    // }

    // cout << "Out of loop now (break is used)" << endl;





    //enter number from user untill he enter multiple of 10.
    // int n;
    
    // bool itIs = true;

    // while(itIs){

    //     cout << "Enter number n: ";
    //     cin >> n;

    //     if(n%10 == 0){
    //         itIs = false;
    //     }
        
    // }




    //different approch
    // int n;
    // do {
    //     cout << "Enter a number: ";
    //     cin >> n;
    // } while (n % 10 != 0);

    // cout << "Success! " << n << " is a multiple of 10." << endl;




    //on upper both logic for input number untill you got multi of 10, if you input h or l it say yes end of loop
    //this logic down is better but for that we have to add #include <limits> in header.

    // int n;

    // while(true) {
    //     cout << "Enter number n: ";
    //     cin >> n;

    //     //Check if cin failed (user entered text)
    //     if (cin.fail()) {
    //         cout << "Invalid input! Please enter a number." << endl;
            
    //         cin.clear(); // Fix cin so it works again
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Throw away the bad input ('h')
            
    //         continue; // Skip the rest and ask again
    //     }

    //     //Check your logic
    //     if (n % 10 == 0) {
    //         cout << "Success! " << n << " is a multiple of 10." << endl;
    //         break;
    //     } else {
    //         cout << "Not a multiple of 10, try again." << endl;
    //     }
    // }





    //continue
    // for (int i =1; i <= 10; i++){
    //     if(i == 3){
    //         continue;
    //     }
    //     cout << i << endl;
    // }




    //prime number check
    // int n;
    // cout << "Enter number n: ";
    // cin >> n;
    // bool isPrime = true;

    // for(int i = 2; i <= n-1; i++){
    //     if(n%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true){
    //     cout << "The number is prime" << endl;
    // }
    // else{
    //     cout << "The number is not a prime" << endl;
    // }




    //prime number better and efficient way with under root n.
    // int n;
    // cout << "Enter number n: ";
    // cin >> n;
    // bool isPrime = true;

    // for(int i = 2; i <= sqrt(n); i++){  //sqrl(n) means do squre root of n. to use this have to add cmath line at top
    //     if(n%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true){
    //     cout << "The number is prime" << endl;
    // }
    // else{
    //     cout << "The number is not a prime" << endl;
    // }





    //extra que-1 
    //WAP to find the factorial of a number entered by the user
    // int n;
    // cout << "Enter number n: ";
    // cin >> n;
    // int factorial = 1;

    // for(int i = 1; i <= n; i++){
    //     factorial = factorial * i;
    // }

    // cout << "The factorial of " << n << " is: " << factorial << endl;





    //extra que-2
    //WAP to print the multiplication table of a number, entered by the user
    // int n;
    // cout << "Enter number n: ";
    // cin >> n;

    // for(int i = 1; i <= 10; i++){
    //     cout << n << " * " << i << " = " << n*i << endl;
    // }




    //extra que-3
    //check for armstrong number
    // int n;
    // cout << "Enter number n: ";
    // cin >> n;

    // int originalNumber = n;
    // int sum = 0;

    // while(n > 0){
    //     int lastDigit = n % 10;
    //     sum += lastDigit * lastDigit * lastDigit;
    //     n /= 10;
    // }

    // if(sum == originalNumber){
    //     cout << "The number is an Armstrong number." << endl;
    // }
    // else{
    //     cout << "The number is not an Armstrong number." << endl;
    // }




    //for n number print all prime number till n
    // int n;
    // cout << "Enter number n: ";
    // cin >> n;

    // for(int i = 2; i <= n; i++){
    //     bool isPrime = true;
    //     for(int j = 2; j <= sqrt(i); j++){
    //         if(i % j == 0){
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if(isPrime == true){
    //         cout << i << " ";
    //     }
    // }




    //for n number print first n fibonacci number
    int n;
    cout << "Enter number n: ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";

    for(int i = 2; i < n; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;

} 