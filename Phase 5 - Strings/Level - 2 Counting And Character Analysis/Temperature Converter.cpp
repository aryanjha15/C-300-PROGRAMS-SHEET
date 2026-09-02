#include<iostream>
using namespace std;
int main(){
    int temperature;
    cout<<"Enter the temperature : ";
    cin>>temperature;
    string scale;
    cout<<"Enter the scale (C for Celsius, F for Fahrenheit) : ";
    cin>>scale;
    if(scale == "C" || scale == "c"){
        float fahrenheit = (temperature * 9/5) + 32;
        cout<<temperature<<"°C is equal to "<<fahrenheit<<"°F"<<endl;
    }
    else if(scale == "F" || scale == "f"){
        float celsius = (temperature - 32) * 5/9;
        cout<<temperature<<"°F is equal to "<<celsius<<"°C"<<endl;
    }
    else{
        cout<<"Invalid scale entered. Please enter C or F."<<endl;
    }
    
    return 0;
}