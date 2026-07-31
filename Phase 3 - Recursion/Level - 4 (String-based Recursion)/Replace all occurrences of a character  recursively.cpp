#include<iostream>
using namespace std;

void replaceChar(string s, int i){
    if(i == s.length())
        return;

    if(s[i] == 'a')
        cout << 'x';
    else
        cout << s[i];

    replaceChar(s, i + 1);
}

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);

    replaceChar(s,0);

    return 0;
}