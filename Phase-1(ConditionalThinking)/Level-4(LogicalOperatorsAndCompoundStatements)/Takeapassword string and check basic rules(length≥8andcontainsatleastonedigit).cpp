#include<iostream>
#include<string>
using namespace std;
int main() {
    
    string password;
    cout << "Enter a password: ";
    cin >> password;

    // Check if the password length is at least 8 characters
    bool isLengthValid = password.length() >= 8;

    // Check if the password contains at least one digit
    bool containsDigit = false;
    for (char ch : password) {
        if (isdigit(ch)) {
            containsDigit = true;
            break;
        }
    }

    // Output the results
    if (isLengthValid && containsDigit) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid." << endl;
        if (!isLengthValid) {
            cout << "Password must be at least 8 characters long." << endl;
        }
        if (!containsDigit) {
            cout << "Password must contain at least one digit." << endl;
        }
    }

    return 0;
}