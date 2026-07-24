#include<iostream>
using namespace std;
int main()
{
    int age;
    double income;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your income: ";
    cin>>income;
    if(age>=18 && income>=500000)
        cout<<"You are eligible for tax."<<endl;
    else
        cout<<"You are not eligible for tax."<<endl;
    return 0;
}