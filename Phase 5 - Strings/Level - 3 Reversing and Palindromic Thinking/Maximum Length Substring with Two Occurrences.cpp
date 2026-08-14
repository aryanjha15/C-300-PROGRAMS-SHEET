// Given a string s, return the maximum length of a substring such that it contains at most two occurrences of each character.
 
// Example 1:
// Input: s = "bcbbbcba"
// Output: 4

// Explanation:
// The following substring has a length of 4 and contains at most two occurrences of each character: "bcbbbcba".

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "bcbbbcba";

    int left = 0;
    int maxLength = 0;
    int freq[26] = {0};

    for (int right = 0; right < s.length(); right++) {

        freq[s[right] - 'a']++;

        // If a character occurs more than 2 times
        while (freq[s[right] - 'a'] > 2) {
            freq[s[left] - 'a']--;
            left++;
        }

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    cout << "Maximum length: " << maxLength;

    return 0;
}