#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Month";
    cin>>m;
    cout << ((m==2)?28:(m==4||m==6||m==9||m==11)?30:31);
}