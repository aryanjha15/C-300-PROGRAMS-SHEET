#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if(num1*num1 + num2*num2 == num3*num3 || num1*num1 + num3*num3 == num2*num2 || num2*num2 + num3*num3 == num1*num1){
        cout << "The numbers can form a Pythagorean triplet." << endl;
    } else {
        cout << "The numbers cannot form a Pythagorean triplet." << endl;
    }
    return 0;
        
}