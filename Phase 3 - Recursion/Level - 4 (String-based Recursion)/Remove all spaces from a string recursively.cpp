#include<iostream>
using namespace std;

void removeSpaces(string s, int i){
    if(i == s.length())
        return;

    if(s[i] != ' ')
        cout << s[i];

    removeSpaces(s, i + 1);
}

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);

    removeSpaces(s,0);

    return 0;
}