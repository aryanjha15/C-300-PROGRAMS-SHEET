#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter Password : ";
    cin>>s;
    cout << (s.size()>=8 && any_of(s.begin(),s.end(),::isdigit) ? "Valid" : "Invalid");
}