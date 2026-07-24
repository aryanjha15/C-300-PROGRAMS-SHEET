#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number 1";
    cin>>n;
     int m;
    cout<<"Enter Number 2";
    cin>>m;
    if(n%2==0 && m%2==0){
        cout<<"Both are Even";
    }
    else if(n%2==0 && m%2 != 0){
            cout<<n<<"Is Even"<<m<<"Is Odd";
        }
    else if (m%2==0 && n%2 != 0){
        cout<<m<<"Is Even"<<n<<"Is Odd";
    }
    else {
        cout<<"Both are Odd";
    }
}