#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String:";
    getline(cin, str);
    cout<<"The first character of the string is: "<<str[0]<<endl;
    cout<<"The last character of the string is: "<<str[str.length()-1];
    return 0;
}