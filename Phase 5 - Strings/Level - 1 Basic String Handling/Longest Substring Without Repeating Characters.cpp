// Given a string s, find the length of the longest substring without duplicate characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcabcbb";

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++) {

        // Check if current character is already present
        for (int i = left; i < right; i++) {

            if (s[i] == s[right]) {
                left = i + 1;
                break;
            }
        }

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    cout << "Longest substring length: " << maxLength;

    return 0;
}
