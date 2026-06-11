#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    unordered_map<char, int> lastSeen;
    int maxLen = 0;
    int start = 0;
    int bestStart = 0;

    for (int i = 0; i < s.length(); i++) {
        if (lastSeen.find(s[i]) != lastSeen.end() && lastSeen[s[i]] >= start) {
            start = lastSeen[s[i]] + 1;
        }
        lastSeen[s[i]] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
            bestStart = start;
        }
    }

    cout << "Longest substring without repeating characters: " << s.substr(bestStart, maxLen) << "\n";
    cout << "Length: " << maxLen << "\n";

    return 0;
}