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