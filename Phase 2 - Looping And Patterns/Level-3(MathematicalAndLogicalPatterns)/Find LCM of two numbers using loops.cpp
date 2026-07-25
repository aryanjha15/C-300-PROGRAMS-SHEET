#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int lcm;
    for(int i=1; i<=a*b; i++){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm;
    return 0;
}