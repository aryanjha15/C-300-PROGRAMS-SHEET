#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
    return 0;
}