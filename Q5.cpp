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
