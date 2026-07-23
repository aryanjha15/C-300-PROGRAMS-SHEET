#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Year:";
    cin>>n;
    if((n%400 == 0) || (n%4 == 0 && n%100 != 0)){
        cout<<n<<"Is a leap Year";
    }
    else{
        cout<<n<<"Is Not a Leap Year";
    }
    return 0;
}
//1900 is not a leap year but it is divisible by 4 therefore only dividing by 4 cannot be used.