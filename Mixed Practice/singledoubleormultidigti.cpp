#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<(n<10 ? "Single digit " : n<100 ? "Double digit" : "Multi digit");
}