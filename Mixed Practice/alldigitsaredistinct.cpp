#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a 3-Digit Number : ";
    cin>>n;
    cout << (n/100 != (n/10)%10 && (n/10)%10 != n%10 && n/100 != n%10 ? "Distinct" : "Not Distinct");


}