#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] != ' '){
            count++;
        }
    }
    cout<<"The number of characters (excluding spaces) in the string is: "<<count;
    
    return 0;
}