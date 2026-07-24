#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Age";
    cin>>n;
    if(n>0 && n<100){
        if(n<18){
            cout<<"Cannot Vote";
        }
        else if(n>18){
            cout<<"Can Vote";
        }
        
    }
    else{
            cout<<"Invalid Age";
        }
}