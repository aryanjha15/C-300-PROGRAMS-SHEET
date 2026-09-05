#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Marks";
    cin>>m;
    cout << (m>=90?"A":m>=80?"B":m>=70?"C":m>=60?"D":"F");
}