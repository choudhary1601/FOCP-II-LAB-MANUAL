// A student wants to swap the values of two variables for practising coding basics.
// Implement a solution to swap two numbers using different techniques

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // swap using temp
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << a << " " << b;
    return 0;
}

    
