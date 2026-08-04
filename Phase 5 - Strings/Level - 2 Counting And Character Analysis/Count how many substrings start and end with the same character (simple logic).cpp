#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
    }
    cout << "Number of substrings that start and end with the same character: " << count << endl;
    return 0;
}