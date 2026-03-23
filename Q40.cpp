#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0, digits = 0, special = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) digits++;
        else if (!isalnum(s[i]) && s[i] != ' ') special++;
        if (s[i] == ' ') words++;
    }

    words++; // last word

    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special: " << special << endl;

    return 0;
}
