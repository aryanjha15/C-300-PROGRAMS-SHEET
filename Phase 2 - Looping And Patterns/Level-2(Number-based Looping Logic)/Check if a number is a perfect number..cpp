#include<iostream>
using namespace std;
int main(){
    int n, perfect=0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<n; i++){
        if(n % i == 0){
            perfect += i; // Add the divisor to perfect
        }
    }   
    if(perfect == n){
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    return 0;
}

// explanation:
// This C++ program checks if a given number is a perfect number.
// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
// For example, 6 is a perfect number because its divisors are 1, 2, and 3, and their sum is 6 (1 + 2 + 3 = 6).
// The program uses a loop to find all divisors of the input number and sums them up.
// If the sum equals the original number, it confirms that the number is perfect; otherwise, it states that it is not.
// For example, if the user inputs 28,
// the program will find that its divisors are 1, 2, 4, 7, and 14,
// and their sum is 28 (1 + 2 + 4 + 7 + 14 = 28),
// confirming that 28 is a perfect number.  