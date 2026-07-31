#include<iostream>
using namespace std;

void removeChar(string s, int i, char ch){
    if(i == s.length())
        return;

    if(s[i] != ch)
        cout << s[i];

    removeChar(s, i + 1, ch);
}

int main(){
    string s;
    char ch;

    cout<<"Enter string: ";
    getline(cin,s);

    cout<<"Enter character to remove: ";
    cin>>ch;

    removeChar(s,0,ch);

    return 0;
}