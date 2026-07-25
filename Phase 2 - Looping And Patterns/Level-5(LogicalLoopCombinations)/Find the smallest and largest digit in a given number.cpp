#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";  
    cin>>n;
    int smallest = 9, largest = 0;
    while(n>0){
        int digit = n%10;
        if(digit<smallest){
            smallest = digit;
        }
        if(digit>largest){
            largest = digit;
        }
        n /= 10;
    }
    cout<<"Smallest digit: "<<smallest<<endl;
    cout<<"Largest digit: "<<largest<<endl;
    return 0;
}