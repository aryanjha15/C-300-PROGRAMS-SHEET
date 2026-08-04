#include<iostream>
using namespace std;
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (i == 0 || sentence[i-1] == ' ') { // Check if it's the start of a word
            char firstChar = tolower(sentence[i]);
            if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') {
                count++;
            }
        }
    }
    
    cout << "Number of words that start with a vowel: " << count << endl;
    return 0;
}