#include<iostream>
using namespace std;
long long power(int x, int n){
    if(n==0) return 1;
    return x*power(x,n-1);
}

int main() {
    int x, n;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;
    cout << x << " raised to the power of " << n << " is: " << power(x, n) << endl;
    return 0;
}