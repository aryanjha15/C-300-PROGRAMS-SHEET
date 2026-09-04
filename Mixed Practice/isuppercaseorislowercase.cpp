#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter Character";
    cin>>ch;
    

if (isupper(ch)) cout << "Uppercase";
else if (islower(ch)) cout << "Lowercase";
else if (isdigit(ch)) cout << "Digit";
else cout << "Special Character";
}