#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Age : ";
    cin>>a;
    cout<<(a>18 && a<100 ? "Eligible" : "Not Eligible");
}