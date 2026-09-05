#include<iostream>
using namespace std;
int main(){
    int h;
    cout<<"Enter Hour OF The Day : ";
    cin>>h;
    cout << (h<12?"Good Morning":h<17?"Good Afternoon":h<21?"Good Evening":"Good Night");
}