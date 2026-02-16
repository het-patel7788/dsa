#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i]; 

        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }

            char topElement = st.top(); 

            if ((c == ')' && topElement == '(') ||
                (c == '}' && topElement == '{') ||
                (c == ']' && topElement == '[')) {
                
                st.pop(); 
            } 
            else {
                return false; 
            }
        }
    }

    return st.empty();
}

int main() {
    string s1 = "()[]{}";
    if (isValid(s1)) cout << s1 << " is Valid " << endl;
    else cout << s1 << " is Invalid " << endl;

    string s2 = "(]";
    if (isValid(s2)) cout << s2 << " is Valid " << endl;
    else cout << s2 << " is Invalid " << endl;

    string s3 = "([";
    if (isValid(s3)) cout << s3 << " is Valid " << endl;
    else cout << s3 << " is Invalid " << endl;

    return 0;
}