#include<iostream>
using namespace std;

void printDigitsInWords(int n) {
    if (n == 0) return; // Base case: if n is 0, return
    printDigitsInWords(n / 10); // Recursive case: call the function with n divided by 10
    switch (n % 10) // Get the last digit of n
    {
        case 0: cout << "zero "; break; // Print the last digit in words
        case 1: cout << "one "; break; // Print the last digit in words
        case 2: cout << "two "; break; // Print the last digit in words
        case 3: cout << "three "; break; // Print the last digit in words
        case 4: cout << "four "; break; // Print the last digit in words
        case 5: cout << "five "; break; // Print the last digit in words
        case 6: cout << "six "; break; // Print the last digit in words
        case 7: cout << "seven "; break; // Print the last digit in words
        case 8: cout << "eight "; break; // Print the last digit in words
        case 9: cout << "nine "; break; // Print the last digit in words
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Digits in words: ";
    printDigitsInWords(n);
    cout << endl;
    return 0;
}