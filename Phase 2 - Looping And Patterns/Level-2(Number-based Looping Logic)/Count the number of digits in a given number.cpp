#include<iostream>
using namespace std;
int main(){
    int number, count=0;
    cout << "Enter a number: ";
    cin >> number;
    while(number > 0){
        count++;
        number /= 10;
    }
    cout << "The number of digits is: " << count << endl;
    return 0;
}