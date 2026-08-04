#include<iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (i == sentence.length() - 1 || sentence[i + 1] == ' ') { // Check if it's the end of a word
            char lastChar = tolower(sentence[i]);
            if (lastChar == 's') {
                count++;
            }
        }
    }

    cout << "Number of words that end with 's': " << count << endl;
    return 0;
}