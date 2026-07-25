#include<iostream>
using namespace std;
int main(){
    for(int i=2; i<=100; i++){
       int a = 0;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                a = 1;
                break;
            }
        }
        if(a == 0){
            cout << i << " ";
        }
    }
    return 0;
}