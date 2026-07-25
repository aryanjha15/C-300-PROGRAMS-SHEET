#include<iostream>
using namespace std;
int main(){
//    print a pattern where each row i prints i*i
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i*i<<" ";
        }
        cout<<endl; 

    }
    return 0;
}
// explanation: The code is a C++ program that prints a pattern based on the input number `n`. 
// The outer loop iterates from 1 to `n`, representing each row of the pattern. 
// For each row `i`, the inner loop iterates from 1 to `i`, 
// printing the square of `i` (`i*i`) for each column in that row. 
// After printing all columns for a row, it moves to the next line. 
// The result is a triangular pattern where each row contains the square of its row number repeated as many times as the row number itself.