#include<iostream>
using namespace std;
int sumOfEvenNumbers(int n) {
    if (n <= 0) return 0; // Base case: if n is less than or equal to 0, return 0
    return (2 * n) + sumOfEvenNumbers(n - 1); // Recursive case: add the nth even number (2*n) to the sum of first (n-1) even numbers
}

int main() {
    int n;
    cout << "Enter the number of even numbers to sum: ";
    cin >> n;
    cout << "First " << n << " even numbers are: ";
    for (int i = 1; i <= n; i++) {
        cout << 2 * i << " "; // Print the first n even numbers
    }
    cout << "\nSum of first " << n << " even numbers: " << sumOfEvenNumbers(n) << endl;
    return 0;
}