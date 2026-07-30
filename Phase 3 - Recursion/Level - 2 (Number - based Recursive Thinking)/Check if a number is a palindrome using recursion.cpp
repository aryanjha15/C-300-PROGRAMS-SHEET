#include<iostream>
using namespace std;
int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int reversed = reverseNumber(n);
    if (n == reversed) {
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }
    return 0;
}