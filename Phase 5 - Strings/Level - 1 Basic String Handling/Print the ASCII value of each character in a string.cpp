#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"The ASCII value of each character in the string is: "<<endl;
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" : "<<int(str[i])<<endl;
    }
    return 0;
    
}