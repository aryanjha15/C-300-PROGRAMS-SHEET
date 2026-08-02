#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if(num2*num2 == num1*num3){
        cout<<"The numbers are in geometric progression.";
    }
    else{
        cout<<"The numbers are not in geometric progression.";
    }
    return 0;
}