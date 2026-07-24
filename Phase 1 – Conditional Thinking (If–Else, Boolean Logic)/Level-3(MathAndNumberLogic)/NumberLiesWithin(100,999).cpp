#include<iostream>
using namespace std; 
int main(){
    int num;
    cout<<"Enter a three digit number";
    cin>>num;
    if(num>=100 && num<=999){
        cout<<"The number lies within the range of 100 to 999";
    }
    else{
        cout<<"The number does not lie within the range of 100 to 999";
    }
}