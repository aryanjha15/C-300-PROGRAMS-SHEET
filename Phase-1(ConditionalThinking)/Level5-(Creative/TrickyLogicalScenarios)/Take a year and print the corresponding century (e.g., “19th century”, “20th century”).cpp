#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year < 1) {
        cout << "Invalid year. Please enter a positive integer." << endl;
        return 1; // Exit the program with an error code
    }

    int century = (year - 1) / 100 + 1; // Calculate the century
    cout << century << "th century" << endl;

    return 0;
}