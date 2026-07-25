#include<iostream>
using namespace std;
int main(){
    int n, t1 = 0, t2 = 1, nextTerm, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + t1; // Add the current term to sum
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << "Sum of first " << n << " terms of Fibonacci series: " << sum << endl;
    return 0;
}