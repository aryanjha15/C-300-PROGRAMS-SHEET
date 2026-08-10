// Given a string s, return the longest palindromic substring in s.

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "babad";

    string longest = "";

    for (int i = 0; i < s.length(); i++) {

        // Odd length palindrome
        int left = i;
        int right = i;

        while (left >= 0 && right < s.length() &&
               s[left] == s[right]) {

            if (right - left + 1 > longest.length()) {
                longest = s.substr(left, right - left + 1);
            }

            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < s.length() &&
               s[left] == s[right]) {

            if (right - left + 1 > longest.length()) {
                longest = s.substr(left, right - left + 1);
            }

            left--;
            right++;
        }
    }

    cout << "Longest palindromic substring: " << longest;

    return 0;
}