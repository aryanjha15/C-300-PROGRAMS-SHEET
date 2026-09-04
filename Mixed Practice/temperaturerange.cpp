#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter Temperature";
    cin>>temp;
    cout << (temp < 20 ? "Cold" : temp <= 30 ? "Warm" : "Hot");
}