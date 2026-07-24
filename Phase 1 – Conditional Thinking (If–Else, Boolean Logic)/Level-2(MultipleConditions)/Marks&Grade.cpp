#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Marks";
    cin>>n;
    if(n<0 || n>100){
        cout<<"Invalid Marks";
    }
   else if(n >= 90){
        cout<<"A";
    }
    else if(n >= 70 ){
        cout<<"B";
    }
    else if(n >= 60 ){
        cout<<"C";
    }
    else if(n >= 50 ){
        cout<<"D";
    }
    else {
        cout<<"F";
    }
    return 0;
}