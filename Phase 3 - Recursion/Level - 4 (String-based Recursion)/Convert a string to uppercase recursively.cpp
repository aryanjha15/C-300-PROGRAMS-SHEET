#include<iostream>
#include<cctype>
using namespace std;

void uppercase(string s, int i){
    if(i == s.length())
        return;

    cout << (char)toupper(s[i]);

    uppercase(s, i + 1);
}

int main(){
    string s;

    cout<<"Enter string: ";
    getline(cin,s);

    uppercase(s,0);

    return 0;
}