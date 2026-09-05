#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Alphabet";
    cin>>ch;
    cout << (ch>='a' && ch<='m' ? "a-m" : "n-z");
}