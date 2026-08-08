#include<iostream>
using namespace std;

int main() {
    int n, t;
   cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a divisor: ";
    cin >> t;

    
    while (true) {
        int product = 1;
        int temp = n;
        while (temp > 0) {
            product *= (temp % 10);
            temp /= 10;
        }
        if (product % t == 0) {
            cout << n << endl;
            break;
        }
        n++;
    }

    cout << "The smallest number greater than or equal to the given number whose product of digits is divisible by " << t << " is: " << n << endl;

    
    
    return 0;
}

