#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout << (n%15==0 ? "FizzBuzz" : n%3==0 ? "Fizz" : n%5==0 ? "Buzz" : "");
}