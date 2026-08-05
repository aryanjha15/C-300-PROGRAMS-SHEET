#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int count = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
    char ch = str[i];

        if (ch != ' ' && !inWord) {
            count++;
            inWord = true;
        }
        else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << count << endl;

    return 0;
}