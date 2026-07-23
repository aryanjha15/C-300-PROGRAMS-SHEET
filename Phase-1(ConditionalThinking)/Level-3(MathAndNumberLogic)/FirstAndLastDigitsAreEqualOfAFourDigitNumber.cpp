#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Four digit number";
    cin>>num;
    int firstdigit=num/1000;
    int seconddigit=(num/100)%10;
    int thirddigit=(num/10)%10;
    int fourthdigit=num%10;
    if(firstdigit==fourthdigit){
        cout<<"The first and last digit are equal";
    }
    else{
        cout<<"The first and last digit are not equal";
    }
    return 0;
}