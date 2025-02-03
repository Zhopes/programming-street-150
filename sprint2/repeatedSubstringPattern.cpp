#include <iostream>
#include <string>

using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.length();

    for (int len = 1; len <= n / 2; ++len) { // Iterate through possible substring lengths
        if (n % len == 0) { // Check if substring length divides string length
            string sub = s.substr(0, len); // Extract the substring
            string repeated = "";
            for (int i = 0; i < n / len; ++i) { // Repeat the substring
                repeated += sub;
            }
            if (repeated == s) { // Compare repeated string with original
                return true;
            }
        }
    }
    return false; // No repeating substring found
}

int main() {
    string s;
    cin >> s;
    if (repeatedSubstringPattern(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}