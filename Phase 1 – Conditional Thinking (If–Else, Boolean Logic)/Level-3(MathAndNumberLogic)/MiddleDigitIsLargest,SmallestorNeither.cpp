#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a three digit number";
    cin>>num;
    int firstDigit=num/100;
    int secondDigit=(num/10)%10;
    int thirdDigit=num%10;
    if(secondDigit>firstDigit && secondDigit>thirdDigit){
        cout<<"The middle digit is the largest";
    }
    else if(secondDigit<firstDigit && secondDigit<thirdDigit){
        cout<<"The middle digit is the smallest";
    }
    else{
        cout<<"The middle digit is neither the largest nor the smallest";
    }
}