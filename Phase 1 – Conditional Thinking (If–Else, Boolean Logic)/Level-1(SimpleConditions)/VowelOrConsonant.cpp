#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character";
    cin>>ch;
    //  This way is wrong if(ch == a,i,e,o,u){
    //     cout<<"Character is Vowel";
    // } c++ does not understand that a,e,i,o,u is a list of values to compare.

    if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'|| 
       ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'){
        cout<<"Character is Vowel";
    }
    else{
        cout<<"Character is Consonant";
    }
}