#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<(n%7 == 0 || n%10 == 7 ? "yes" :  "no");
}