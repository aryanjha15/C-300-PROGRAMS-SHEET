#include<iostream>
using namespace std;
int main(){
    int n, product=1;
    cout << "Enter a number: ";
    cin >> n;
    while(n > 0){
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    cout << "The product of the digits is: " << product << endl;
    return 0;
}