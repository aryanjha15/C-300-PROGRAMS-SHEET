#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout << (a%b == 0 || b%a==0 ? "Multiple" : "Not a Multiple");
}