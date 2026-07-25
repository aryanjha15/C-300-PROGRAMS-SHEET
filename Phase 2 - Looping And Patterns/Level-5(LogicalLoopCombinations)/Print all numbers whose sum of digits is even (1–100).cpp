#include<iostream>
using namespace std;
int main(){
   for (int i=1 ; i<=100; i++){
       int sum = 0;
       int num = i;
       while(num>0){
           sum += num%10;
           num /= 10;
       }
       if(sum%2==0){
           cout<<i<<" ";
       }
   }
    return 0;
}
// can i write i in place of num in the while loop?
// No, you cannot use `i` in place of `num` in the while loop. 
// The variable `i` is being used in the for loop to iterate through numbers from 1 to 100. 
// If you use `i` in the while loop, 
// it will not correctly calculate the sum of the digits of the current number 
// because `i` will change with each iteration of the for loop. 
// Instead, you should use a separate variable (like `num`) to hold the current number whose digits you want to sum.
// This way, you can manipulate `num` without affecting the loop control variable `i`.