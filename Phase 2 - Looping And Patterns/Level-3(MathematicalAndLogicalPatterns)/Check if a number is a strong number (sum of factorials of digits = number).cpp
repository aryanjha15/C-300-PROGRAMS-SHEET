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