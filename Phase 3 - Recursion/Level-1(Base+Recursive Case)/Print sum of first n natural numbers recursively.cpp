#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 0) 
        return 0;
    
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}