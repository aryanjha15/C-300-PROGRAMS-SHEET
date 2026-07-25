#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of each number from 1 to "<<n<<": ";
    for(int i=1; i<=n; i++){
        int factorial = 1;
        for(int j=1; j<=i; j++){
            factorial *= j;
        }
        cout<<factorial<<" ";
    }
    return 0;
}

// why two loops are used in this code:
// In the provided code, two loops are used to calculate and print the factorial of each number from 1 to n. 
// The outer loop iterates through each number from 1 to n, 
// and the inner loop calculates the factorial of each number by multiplying all integers from 1 to that number.
