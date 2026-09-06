#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter coordinate X : ";
    cout<<"Enter coordinate Y : ";
    cin>>x;
    cin>>y;
    cout<<(x>0&&y>0?"Q1":x<0&&y>0?"Q2":x<0&&y<0?"Q3":x>0&&y<0?"Q4":"Axis");
}