#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    cout<<"Factors of "<<n<<": ";
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            sum += i;
        }
    }
    cout<<"\nSum of all factors of "<<n<<" is "<<sum;
    return 0;
}