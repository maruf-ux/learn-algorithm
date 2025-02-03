#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAlphaNumeric(char ch) {
    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

bool isValidPalindrome(string s) {
    int st = 0;
    int e = s.length() - 1;

    while (st < e) {
        // Skip non-alphanumeric characters
        if (!isAlphaNumeric(s[st])) {
            st++;
            continue;
        }
        if (!isAlphaNumeric(s[e])) {
            e--;
            continue;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[st]) != tolower(s[e])) {
            return false;
        }

        st++;
        e--;
    }
    return true;
}

int main() {
    string str = "Ac3?e3c&a";

    if (isValidPalindrome(str)) {
        cout << "The string is a valid palindrome.";
    } else {
        cout << "The string is not a valid palindrome.";
    }

    cout << endl << iswalnum(str[1]);

    return 0;
}
