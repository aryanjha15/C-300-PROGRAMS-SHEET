#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Temperature";
    cin>>n;
    if(n<20){
        cout<<"Cold";
    }
    else if(n>=20 && n<=30){
        cout<<"Warm";
    }
    else 
    cout<<"Hot";
}
