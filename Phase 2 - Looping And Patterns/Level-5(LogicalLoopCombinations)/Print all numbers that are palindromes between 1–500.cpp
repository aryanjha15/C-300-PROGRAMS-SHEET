#include<iostream>
using namespace std;
int main(){
    cout<<"Palindromes between 1 and 500: ";
    for(int i=1; i<=500; i++){
        int original = i;
        int reversed = 0;
        while(i>0){
            int digit = i%10;
            reversed = reversed*10 + digit;
            i /= 10;
        }
        if(original == reversed){
            cout<<original<<" ";
        }
        i = original; // Reset i to its original value for the next iteration
    }
    return 0;
}