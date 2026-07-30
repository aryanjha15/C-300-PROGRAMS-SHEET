#include<iostream>
using namespace std;

int sumOfOddNumbers(int n) {
    if (n <= 0) return 0; // Base case: if n is less than or equal to 0, return 0
    return (2 * n - 1) + sumOfOddNumbers(n - 1); // Recursive case: add the nth odd number (2*n-1) to the sum of first (n-1) odd numbers
}

int main() {
    int n;
    cout << "Enter the number of odd numbers to sum: ";
    cin >> n;
    cout << "Sum of first " << n << " odd numbers: " << sumOfOddNumbers(n) << endl;
    return 0;
}