#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    
    int count_before=0, count_after=0;
    bool m_found = false;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'm'){
            m_found = true;
        }
        else if(!m_found && isalpha(str[i])){
            count_before++;
        }
        else if(m_found && isalpha(str[i])){
            count_after++;
        }
    }

    cout<<"Alphabets before 'm': "<<count_before<<endl;
    cout<<"Alphabets after 'm': "<<count_after<<endl;

    return 0;
}