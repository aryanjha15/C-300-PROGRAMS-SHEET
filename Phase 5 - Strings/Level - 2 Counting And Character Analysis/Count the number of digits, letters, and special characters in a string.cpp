#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int digits=0, letters=0, special=0;
    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            digits++;
        }
        else if(isalpha(str[i])){
            letters++;
        }
        else{
            special++;
        }
    }
    cout<<"Digits: "<<digits<<endl;
    cout<<"Letters: "<<letters<<endl;
    cout<<"Special characters: "<<special<<endl;
    return 0;
}