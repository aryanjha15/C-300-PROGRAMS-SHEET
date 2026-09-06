#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int r = sqrt(n);
    cout << (r*r == n ? "Perfect Square" : "Not Perfect Square"); 
}