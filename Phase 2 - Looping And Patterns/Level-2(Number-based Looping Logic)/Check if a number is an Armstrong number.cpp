#include<iostream>
using namespace std;
int main(){
    int n, armstrong=0, original;
    cout << "Enter a number: ";
    cin >> n;
    original = n; // Store the original number
    while(n > 0){
        int digit = n % 10;
        armstrong += digit * digit * digit; // Calculate the cube of the digit and add to armstrong
        n /= 10;
    }
    if(original == armstrong){
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }
    return 0;
} 

// explanation:
// This C++ program checks if a given number is an Armstrong number.
// An Armstrong number is a number that is equal to the sum of the cubes of its digits (for a 3-digit number).
// 153 = 1³+5³+3³ = 1+125+27 = 153 