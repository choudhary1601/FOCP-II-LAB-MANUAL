#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int valid = 1;

    for (int i = 0; i < s.length(); i++) {
        if (!( (s[i] >= 'a' && s[i] <= 'z') ||
               (s[i] >= 'A' && s[i] <= 'Z') ||
               (s[i] >= '0' && s[i] <= '9') )) {
            valid = 0;
            break;
        }
    }

    if (valid)
        cout << "Valid string";
    else
        cout << "Invalid string";

    return 0;
}
