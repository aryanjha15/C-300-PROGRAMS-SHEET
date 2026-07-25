#include<iostream>
using namespace std;

int main() {
    int n, sumOdd = 0, sumEven = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        n /= 10;
    }
    
    cout << "Sum of odd digits: " << sumOdd << endl;
    cout << "Sum of even digits: " << sumEven << endl;
    
    return 0;
}