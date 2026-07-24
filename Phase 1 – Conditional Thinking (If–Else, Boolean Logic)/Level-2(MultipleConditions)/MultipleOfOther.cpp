#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number 1";
    cin>>n;
    int m;
    cout<<"Enter Number 2";
    cin>>m;
    if(n%m==0 || m%n==0){
        cout<<"Multiple";
    }
    else {
        cout<<"Not a Multiple";
    }
}