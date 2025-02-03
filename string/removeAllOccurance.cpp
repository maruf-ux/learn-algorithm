#include <iostream>
#include <string>

using namespace std;

// Function to remove all occurrences of `part` from `s`
string RAO(string s, string part) {
    while (s.find(part) != string::npos) {
        // Check if `part` exists in `s`
        int st = s.find(part);
        // Find the starting index of `part`
        int l = part.length();
        // Get the length of `part`
        s.erase(st, l);
        // Remove `part` from `s`
    }
    return s; // Return the modified string
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    // Capture the result and print it
    string result = RAO(s, part);
    cout << result << endl; // Expected Output: "dabubc"

    return 0;
}
