#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a 4-Digit Number : ";
    cin>>n;
    cout<<(n/1000 == n%10 ? "yes" : "no");
}