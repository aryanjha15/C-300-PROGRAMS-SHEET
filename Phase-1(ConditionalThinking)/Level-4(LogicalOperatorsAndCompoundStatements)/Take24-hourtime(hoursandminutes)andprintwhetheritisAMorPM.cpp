#include<iostream>
using namespace std;
int main(){
    int hours, minutes;
    cout<<"Enter time in 24-hour format (hours and minutes): ";
    cin>>hours>>minutes;
    if(hours>=0 && hours<24 && minutes>=0 && minutes<60){
        if(hours<12)
            cout<<"The time is AM."<<endl;
        else
            cout<<"The time is PM."<<endl;
    }
    else{
        cout<<"Invalid time entered."<<endl;
    }
    return 0;
}











