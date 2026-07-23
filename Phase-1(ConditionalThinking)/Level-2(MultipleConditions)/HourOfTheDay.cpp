#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Hour";
    cin>>n;
    if(n>0 && n<24){
        if(n<12){
            cout<<"Good Morning";
        }
        else if(n>12 && n<16){
            cout<<"Good Afternoon";
        }
        else if(n>16 && n<19){
            cout<<"Good Evening";
        }
        else{
            cout<<"Good Night";
        }

    }
}