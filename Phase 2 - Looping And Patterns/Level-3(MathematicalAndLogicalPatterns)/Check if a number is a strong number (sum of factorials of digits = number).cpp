#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int original = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += factorial(digit);
        n /= 10;
    }
    if(sum == original){
        cout<<original<<" is a strong number.";
    }
    else{
        cout<<original<<" is not a strong number.";
    }
    return 0;
}
// explanation:
// strong number is a number whose sum of the factorials of its digits is equal to the number itself.
// For example, 145 is a strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145.