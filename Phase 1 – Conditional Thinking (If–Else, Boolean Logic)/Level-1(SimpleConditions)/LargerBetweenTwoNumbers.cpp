#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a";
    cin>>a;
    int b;
    cout<<"Enter b";
    cin>>b;
    
    if(a>b){
        cout<<a<<"Is Largest";
    }
    else if(b>a){
        cout<<b<<"Is Largest";
    }
    else{
        cout<<"Both are Equal";
    }
    return 0;
}