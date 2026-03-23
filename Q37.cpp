#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter username: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (!isalnum(s[i])) {
            cout << "Invalid username";
            return 0;
        }
    }

    cout << "Valid username";
    return 0;
}
