#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int uppercase=0, lowercase=0;
    for(int i=0; i<str.length(); i++){
        if(isupper(str[i])){
            uppercase++;
        }
        else if(islower(str[i])){
            lowercase++;
        }
    }
    cout<<"Uppercase letters: "<<uppercase<<endl;
    cout<<"Lowercase letters: "<<lowercase<<endl;
    return 0;
}