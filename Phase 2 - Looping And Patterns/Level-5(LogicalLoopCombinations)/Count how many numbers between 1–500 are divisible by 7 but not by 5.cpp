#include<iostream>
using namespace std;
int main(){
    cout<<"Numbers between 1 and 500 that are divisible by 7 but not by 5: ";
    for(int i=1; i<=500; i++){
        if(i%7==0 && i%5!=0){
            cout<<i<<" ";

        }
    }
    return 0;
}