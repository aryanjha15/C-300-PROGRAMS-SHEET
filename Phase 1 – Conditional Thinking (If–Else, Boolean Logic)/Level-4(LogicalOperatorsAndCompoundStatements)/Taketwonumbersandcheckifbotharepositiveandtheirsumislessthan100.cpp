#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    if(n1>0 && n2>0 && (n1+n2)<100)
        cout<<"Both numbers are positive and their sum is less than 100."<<endl;
    else
        cout<<"Condition not satisfied."<<endl;
    return 0;
}