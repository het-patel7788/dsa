#include <iostream>
#include <bitset> // Used to visualize binary for bitwise operators
using namespace std;

int main() {
    // 1. ARITHMETIC OPERATORS (Math)
    cout << "--- 1. ARITHMETIC OPERATORS ---" << endl;
    int a = 10, b = 3;
    cout << "a + b = " << (a + b) << " (Addition)" << endl;
    cout << "a - b = " << (a - b) << " (Subtraction)" << endl;
    cout << "a * b = " << (a * b) << " (Multiplication)" << endl;
    cout << "a / b = " << (a / b) << " (Division - Int)" << endl;
    cout << "a % b = " << (a % b) << " (Modulus - Remainder)" << endl; 
    cout << endl;

    // 2. INCREMENT & DECREMENT (Unary)
    cout << "--- 2. INCREMENT & DECREMENT ---" << endl;
    int c = 5;
    cout << "Original c: " << c << endl;
    cout << "Post-increment (c++): " << c++ << " (Prints 5, then becomes 6)" << endl;
    cout << "After c++: " << c << endl;
    cout << "Pre-increment (++c): " << ++c << " (Becomes 7, then prints 7)" << endl;
    cout << endl;

    // 3. RELATIONAL OPERATORS (Comparison)
    // Returns 1 (True) or 0 (False)
    cout << "--- 3. RELATIONAL OPERATORS ---" << endl;
    int x = 5, y = 9;
    cout << boolalpha; // Prints "true"/"false" instead of 1/0
    cout << "Is x == y? " << (x == y) << endl;
    cout << "Is x != y? " << (x != y) << endl;
    cout << "Is x > y?  " << (x > y) << endl;
    cout << "Is x < y?  " << (x < y) << endl;
    cout << endl;

    // 4. LOGICAL OPERATORS (Decisions)
    cout << "--- 4. LOGICAL OPERATORS ---" << endl;
    bool hasID = true;
    bool hasTicket = false;
    
    // AND (&&): Both must be true
    cout << "Has ID AND Ticket? " << (hasID && hasTicket) << endl;
    
    // OR (||): At least one must be true
    cout << "Has ID OR Ticket?  " << (hasID || hasTicket) << endl;
    
    // NOT (!): Reverses the value
    cout << "NOT hasTicket?     " << (!hasTicket) << endl;
    cout << endl;



    // 5. BITWISE OPERATORS (Binary Level)
    cout << "--- 5. BITWISE OPERATORS ---" << endl;
    // 5 is 0101, 9 is 1001
    int p = 5, q = 9; 
    
    cout << "p & q (AND): " << (p & q) << " (Binary: " << bitset<4>(p & q) << ")" << endl;
    cout << "p | q (OR):  " << (p | q) << " (Binary: " << bitset<4>(p | q) << ")" << endl;
    cout << "p ^ q (XOR): " << (p ^ q) << " (Binary: " << bitset<4>(p ^ q) << ")" << endl;
    cout << "~p    (NOT): " << (~p)    << " (Inverts bits)" << endl;
    cout << "p << 1 (Left Shift):  " << (p << 1) << " (Multiplies by 2)" << endl;
    cout << "p >> 1 (Right Shift): " << (p >> 1) << " (Divides by 2)" << endl;
    cout << endl;

    // 6. ASSIGNMENT OPERATORS (Shortcuts)
    cout << "--- 6. ASSIGNMENT OPERATORS ---" << endl;
    int num = 10;
    num += 5; // Same as num = num + 5
    cout << "num += 5 -> " << num << endl;
    num *= 2; // Same as num = num * 2
    cout << "num *= 2 -> " << num << endl;
    cout << endl;

    // 7. TERNARY OPERATOR (The One-Line If-Else)
    cout << "--- 7. TERNARY OPERATOR ---" << endl;
    int age = 20;
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "Age 20 is: " << status << endl;
    cout << endl;

    return 0;
}