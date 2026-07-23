#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"Character is Uppercase";
    }
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Character is Lowercase";
    }
    if(ch >= '0' && ch <= '9'){
        cout<<"Character is Digit";
    }
    else{
        cout<<"Character is Special Character";
    }
}