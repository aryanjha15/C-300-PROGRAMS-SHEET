#include<iostream>
using namespace std;

int countVowels(string str, int index) {
    if (index >= str.length()) {
        return 0;
    }
    char c = tolower(str[index]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1 + countVowels(str, index + 1);
    }
    return countVowels(str, index + 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Number of vowels in the string: " << countVowels(str, 0) << endl;
    return 0;
}