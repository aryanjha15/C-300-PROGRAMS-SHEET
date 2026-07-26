#include<iostream>
using namespace std;
void printOdd(int n){
    if(n==0) return;
    printOdd(n-1);
    if(n%2!=0) cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    printOdd(n);
    return 0;
}