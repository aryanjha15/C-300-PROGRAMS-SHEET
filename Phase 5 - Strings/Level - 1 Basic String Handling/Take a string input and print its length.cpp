#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"The length of the string is: "<<str.length();
    return 0;
}