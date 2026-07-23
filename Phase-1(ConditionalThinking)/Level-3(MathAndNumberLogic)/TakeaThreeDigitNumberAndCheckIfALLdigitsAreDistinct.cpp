#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a three digit number";
    cin>>num;
    int firstDigit=num/100;
    int secondDigit=(num/10)%10;
    int thirdDigit=num%10;
    if(firstDigit!=secondDigit && secondDigit!=thirdDigit && firstDigit!=thirdDigit){
        cout<<"All digits are distinct";
    }
    else{
        cout<<"All digits are not distinct";
    }
}