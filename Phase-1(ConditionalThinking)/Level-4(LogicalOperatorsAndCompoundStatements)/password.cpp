#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool digit = false;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            digit = true;
        }
    }

    if (password.length() >= 8) {
        if (digit) {
            cout << "Valid Password";
        }
        else {
            cout << "Invalid Password (No digit)";
        }
    }
    else {
        cout << "Invalid Password (Length less than 8)";
    }

    return 0;
}