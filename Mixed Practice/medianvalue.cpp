#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, b, c;
    cout<<"ENTER NUMBER 1 : ";
    cin>>a;
    cout<<"ENTER NUMBER 2 : ";
    cin>>b;
    cout<<"ENTER NUMBER 3 : ";
    cin>>c;
    cout << a+b+c-max({a,b,c})-min({a,b,c});
}