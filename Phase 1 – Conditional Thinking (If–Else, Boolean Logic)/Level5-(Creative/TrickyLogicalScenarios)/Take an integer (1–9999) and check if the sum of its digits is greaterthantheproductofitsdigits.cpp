#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter an integer (1-9999): ";
    cin >> num;
    int sum =0, product =1;
    while(num > 0){
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    if(sum > product){
        cout << "Sum: " << sum << ", Product: " << product << " - The sum of the digits is greater than the product of the digits." << endl;
    } else {
        cout << "Sum: " << sum << ", Product: " << product << " - The sum of the digits is not greater than the product of the digits." << endl;
    }
    return 0;
}