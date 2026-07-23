#include <iostream>
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

    if((a+b>c) && (b+c>a) && (c+a>b)){
       
    if(a==b && b==c)
        cout<<"Equilateral Triangle";
    

     else if(a==b || b==c || a==c)
        cout<<"Isosceles Triangle";
     

     else 
        cout<<"Scalene Triangle";
    }

     else {
        cout<<"Not a Triangle";
    }
}

     

    
