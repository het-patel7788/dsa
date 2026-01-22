#include <iostream>
using namespace std;

int main() {
    // Check if the number is even or odd
    // int number;
    // cout << "Enter an integer: ";
    // cin >> number;

    // if (number % 2 == 0) {
    //     cout << number << " is an even number." << endl;
    // } else {
    //     cout << number << " is an odd number." << endl;
    // }



    // big in two numbers    
    // int num1, num2;
    // cout << "Enter one integer: ";
    // cin >> num1;
    // cout << "Enter another integer: ";
    // cin >> num2;
    // if (num1 > num2) {
    //     cout << num1 << " is the bigger number." << endl;
    // } else if (num2 > num1) {
    //     cout << num2 << " is the bigger number." << endl;
    // } else {
    //     cout << "Both numbers are equal." << endl;
    // }



    //print the largest of three numbers
    // int a, b, c;
    // cout << "Enter first number: ";
    // cin >> a;
    // cout << "Enter second number: ";
    // cin >> b;
    // cout << "Enter third number: ";
    // cin >> c;

    // if (a > b && a > c) {
    //     cout << a << " is the largest number." << endl;
    // } else if (b > a && b > c) {
    //     cout << b << " is the largest number." << endl;
    // } else {
    //     cout << c << " is the largest number." << endl;
    // }



    //using ternary operator
    // bool isAdult;
    // int age;
    // cout << "Enter your age: "; 
    // cin >> age;

    // isAdult = age >= 18 ? true : false;

    // cout << isAdult << endl;
    // cout << "Is adult: " << (isAdult ? "Yes" : "No") << endl;



    //ternary operator largest of two numbers
    // int x, y;
    // cout << "Enter first number : ";
    // cin >> x;
    // cout << "Enter second number : ";
    // cin >> y;

    // int largest = (x > y)? x : y;

    // cout << "The larger number is: " << largest << endl;



    //switch statement
    // int day;
    // cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    // cin >> day;

    // switch (day) {
    //     case 1:
    //         cout << "Monday" << endl;
    //         break;
    //     case 2:
    //         cout << "Tuesday" << endl;
    //         break;
    //     case 3:
    //         cout << "Wednesday" << endl;
    //         break;
    //     case 4:
    //         cout << "Thursday" << endl;
    //         break;
    //     case 5:
    //         cout << "Friday" << endl;
    //         break;
    //     case 6:
    //         cout << "Saturday" << endl;
    //         break;
    //     case 7:
    //         cout << "Sunday" << endl;
    //         break;
    //     default:
    //         cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    // }



    //making calculator (+, -, *, /)
    // char op;
    // float num1, num2, result;   

    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter operator (+, -, *, /): ";
    // cin >> op;
    // cout << "Enter second number: ";
    // cin >> num2;

    // switch (op) {
    //     case '+':
    //         result = num1 + num2;
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         break;
    //     case '*':
    //         result = num1 * num2;
    //         break;
    //     case '/':
    //         if (num2 != 0) {
    //             result = num1 / num2;
    //         } else {
    //             cout << "Error: Division by zero is not allowed." << endl;
    //             return 1; // Exit if division by zero
    //         }
    //         break;
    //     default:
    //         cout << "Error: Invalid operator." << endl;
    //         return 1; // Exit if invalid operator
    // }

    // cout << "Result: " << result << endl;



    //check the year is leap year or not
    // int year;   
    // cout << "Enter a year: ";
    // cin >> year;

    // if (year % 4 == 0) {
    //     if (year % 100 == 0) {
    //         if (year % 400 == 0) {
    //             cout << year << " is a leap year." << endl;
    //         } else {
    //             cout << year << " is not a leap year." << endl;
    //         }
    //     } else {
    //         cout << year << " is a leap year." << endl;
    //     }
    // } else {
    //     cout << year << " is not a leap year." << endl;
    // }



    //amstrong number for three digits
    int n;
    cout << "Enter a three-digit number: ";
    cin >> n;

    int num = n;

    int digit1 = num % 10;
    num /= 10;     
    int digit2 = num % 10;
    num /= 10;
    int digit3 = num % 10;

    if (digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3 == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}