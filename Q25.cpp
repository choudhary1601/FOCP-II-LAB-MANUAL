#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter password: ";
    cin >> s;

    int upper = 0, lower = 0, digit = 0, special = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) upper = 1;
        else if (islower(s[i])) lower = 1;
        else if (isdigit(s[i])) digit = 1;
        else if (s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='!'||s[i]=='&'||s[i]=='*')
            special = 1;
    }

    if (upper && lower && digit && special)
        cout << "Valid password";
    else
        cout << "Invalid password";

    return 0;
}
