#include<iostream>
using namespace std;
int main(){
    string str1, str2;
    cout<<"Enter the first string: ";
    getline(cin, str1);
    cout<<"Enter the second string: ";
    getline(cin, str2);
    
    if(str1 == str2){
        cout<<"The two strings are equal.";
    }
    else if(str1 < str2){
        cout<<"The first string is lexicographically smaller than the second string.";
    }
    else{
        cout<<"The first string is lexicographically greater than the second string.";
    }
    
    return 0;
}