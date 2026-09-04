#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Alphabet";
    cin>>ch;
    cout << (string("aeiouAEIOU").find(ch) != string::npos ? "Vowel" : "Consonant");
    
}

// condition ? value_if_true : value_if_false
// cout << (string("aeiou").find(ch) != string::npos ? "Vowel" : "Consonant");