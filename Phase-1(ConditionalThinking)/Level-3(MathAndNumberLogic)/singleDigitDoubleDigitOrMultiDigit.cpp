#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    if(num>0 && num<9){
        cout<<"Single Digit";
    }
    else if(num>9 && num<99){
        cout<<"Double Digit";
    }
    else{
        cout<<"Multi Digit";
    }


}