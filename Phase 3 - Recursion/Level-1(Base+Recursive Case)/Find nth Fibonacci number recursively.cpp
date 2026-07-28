#include<iostream>
using namespace std;
long long fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}   
int main() {
    int n;
    cout << "Enter the position (n) to find the nth Fibonacci number: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}