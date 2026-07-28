// #include<iostream>
// using namespace std;

// void printFibonacci(int n, long long a, long long b) {
//     if (n <= 0) return;
//     cout << a << " ";
//     printFibonacci(n - 1, b, a + b);
// }

// int main() {
//     int n;
//     cout << "Enter the number of terms (n) for the Fibonacci series: ";
//     cin >> n;
//     cout << "Fibonacci series up to " << n << " terms: ";
//     printFibonacci(n, 0, 1);
//     cout << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}