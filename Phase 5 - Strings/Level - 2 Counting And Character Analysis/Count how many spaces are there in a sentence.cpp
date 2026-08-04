#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int spaces=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            spaces++;
        }
    }
    cout<<"Number of spaces: "<<spaces<<endl;
    return 0;
}