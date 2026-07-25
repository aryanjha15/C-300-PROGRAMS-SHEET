#include<iostream>
using namespace std;
int main(){
    int n, original, reverse=0;
    cout << "Enter a number: ";
    cin >> n;
    original = n; // Store the original number
    while(n > 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    if(original == reverse){
        cout << original << " is a palindrome number." << endl;
    } else {
        cout << original << " is not a palindrome number." << endl;
    }
    return 0;
}