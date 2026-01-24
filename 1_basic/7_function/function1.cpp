#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello" << endl;
}

void assistant(){
    sayHello();
    cout << "byy from assistant"<< endl;
}

void assistant2(); //declare...

int sum(int a, int b){ //a, b are parameters
    int sum = a + b;
    return sum;
}

int main(){

    assistant2();
    int answer = sum(2, 5); // this two are arguments.
    cout << answer << endl;

    return 0;
}

void assistant2(){ //define
    assistant();
    cout << "assistant2 helped" << endl ;
}