#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    if(num%7==0 || num%10==7){
        cout<<"The number is either a multiple of 7 or ends with 7";
    }
    else if(num%7==0 && num%10!=7){
        cout<<"The number is a multiple of 7 but does not end with 7";
    }
    else if(num%7!=0 && num%10==7){
        cout<<"The number ends with 7 but is not a multiple of 7";
    }
    else{
        cout<<"The number is neither a multiple of 7 nor ends with 7";
    }
    return 0;
}