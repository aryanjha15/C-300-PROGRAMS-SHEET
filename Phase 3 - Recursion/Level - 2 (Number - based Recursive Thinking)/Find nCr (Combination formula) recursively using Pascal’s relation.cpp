#include<iostream>
using namespace std;

int nCr(int n, int r) {
    if (r == 0 || r == n) return 1; // Base cases: C(n,0) = C(n,n) = 1
    return nCr(n - 1, r - 1) + nCr(n - 1, r); // Pascal's relation: C(n,r) = C(n-1,r-1) + C(n-1,r)
}

int main() {
    int n, r;
    cout << "Enter the values of n and r: ";
    cin >> n >> r;
    cout << "C(" << n << "," << r << ") = " << nCr(n, r) << endl;
    return 0;
}