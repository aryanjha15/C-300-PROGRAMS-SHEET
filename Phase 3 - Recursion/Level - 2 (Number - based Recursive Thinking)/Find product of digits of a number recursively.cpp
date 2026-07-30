#include<iostream>
using namespace std;
int productOfDigits(int n) {
    if (n == 0) return 1; // Base case: if n is 0, return 1 (multiplicative identity)
    return (n % 10) * productOfDigits(n / 10); // Recursive case: multiply last digit with product of remaining digits
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Product of digits: " << productOfDigits(n) << endl;
    return 0;
}