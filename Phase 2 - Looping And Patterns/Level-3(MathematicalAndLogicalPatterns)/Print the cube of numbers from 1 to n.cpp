#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Cubes of numbers from 1 to "<<n<<": ";
    for(int i=1; i<=n; i++){
        cout<<i*i*i<<" ";
    }
    return 0;
}