#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    int n = s.length();
    int maxLen = 0;
    int bestStart = 0;

    for (int i = 0; i < n; i++) {
        int zeros = 0, ones = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == '0') zeros++;
            else ones++;

            if (zeros == ones && zeros + ones > maxLen) {
                maxLen = zeros + ones;
                bestStart = i;
            }
        }
    }

    cout << "\nLongest substring with equal 0s and 1s: " << s.substr(bestStart, maxLen) << "\n";
    cout << "Length: " << maxLen << "\n";
    cout << "Start index: " << bestStart << "\n";

    return 0;
}