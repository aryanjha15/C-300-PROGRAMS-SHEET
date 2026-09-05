#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout << (a % 2 == 0 && b % 2 == 0 ? "Both Even" :
         (a % 2 != 0 && b % 2 != 0) ? "Both Odd" :
         "One Even One Odd");
}