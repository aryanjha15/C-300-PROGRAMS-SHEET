#include<iostream>
using namespace std;

void convertToBinary(int n) {
    if (n == 0) return; // Base case: if n is 0, return
    convertToBinary(n / 2); // Recursive case: call the function with n divided by 2
    cout << n % 2; // Print the remainder (0 or 1)
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Binary representation: ";
    convertToBinary(n);
    cout << endl;
    return 0;
}