#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character : ";
    cin>>ch;
    cout << (isalpha(ch) ? "Letter" : isdigit(ch) ? "Digit" : "Neither");
}