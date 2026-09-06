#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a 3-DigiT Number : ";
    cin>>n;
    int x=n/100, y=(n/10)%10, z=n%10;
    cout << (y>x && y>z ? "Largest" : y<x && y<z ? "Smallest" : "Neither");
}