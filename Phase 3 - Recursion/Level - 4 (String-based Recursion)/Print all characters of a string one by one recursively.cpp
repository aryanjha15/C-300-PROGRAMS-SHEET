#include<iostream>
using namespace std;

void printChars(string s, int i){
    if(i == s.length())
        return;

    cout << s[i] << endl;

    printChars(s, i + 1);
}

int main(){
    string s;

    cout<<"Enter string: ";
    getline(cin,s);

    printChars(s,0);

    return 0;
}