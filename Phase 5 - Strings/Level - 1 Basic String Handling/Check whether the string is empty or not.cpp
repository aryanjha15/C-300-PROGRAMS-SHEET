#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    if (str.empty()){
        cout<<"The string is empty.";
    }
    else{
        cout<<"The string is not empty.";
    }
    return 0;
}