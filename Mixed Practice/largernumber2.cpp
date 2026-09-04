#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a";
    cin>>a;
    int b;
    cout<<"Enter b";
    cin>>b;
    int c;
    cout<<"Enter c";
    cin>>c;
    int largest = max(a, max(b, c));
    cout << largest;

}