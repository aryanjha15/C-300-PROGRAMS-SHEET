#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of each number from 1 to "<<n<<": ";
    for(int i=1; i<=n; i++){
        int factorial = 1;
        for(int j=1; j<=i; j++){
            factorial *= j;
        }
        cout<<factorial<<" ";
    }
}