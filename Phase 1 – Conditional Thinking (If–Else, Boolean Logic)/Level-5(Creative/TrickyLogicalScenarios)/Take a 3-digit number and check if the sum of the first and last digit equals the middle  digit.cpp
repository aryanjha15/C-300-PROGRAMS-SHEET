#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter 3-digit Number";
    cin>>num;
    int firstdigit = num/100;
    int middledigit = (num/10)%10;
    int lastdigit = num%10;
    int sum = firstdigit + lastdigit;
    if(sum == middledigit){
        cout<<"Sum of the first and last digit equals the middle digit";
    }
    else{
        cout<<"Sum of the first and last digit is not equals the middle digit";
    }
    return 0;
}