#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Amount";
    cin>>num;
    if(num%100 != 0){
        cout<<"Amount cannot be evenly divided into 2000, 500 and 100 notes";
    }
    else{
        int notes2000 = num/2000;
        int notes500 = (num%2000)/500;
        int notes100 = (num%500)/100;
        cout<<"Number of 2000 notes: "<<notes2000<<endl;
        cout<<"Number of 500 notes: "<<notes500<<endl;
        cout<<"Number of 100 notes: "<<notes100<<endl;
    }
    
    return 0;
}