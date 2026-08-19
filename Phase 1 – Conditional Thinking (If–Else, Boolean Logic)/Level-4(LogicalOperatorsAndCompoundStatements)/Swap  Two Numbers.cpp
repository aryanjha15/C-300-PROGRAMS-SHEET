#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a :";
    cin>>a;
    int b;
    cout<<"Enter b :";
    cin>>b;
    cout<<"Numbers Before Swapping : "<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"Numbers After Swapping : "<<a<<" "<<b;
}