#include<iostream>
using namespace std;
int main(){
    cout<<"Numbers between 1 and 100 whose digits add up to a multiple of 3: ";
    for(int i=1; i<=100; i++){
        int sum = 0;
        int num = i;
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        if(sum%3==0){
            cout<<i<<" ";
        }
    }
    return 0;
}