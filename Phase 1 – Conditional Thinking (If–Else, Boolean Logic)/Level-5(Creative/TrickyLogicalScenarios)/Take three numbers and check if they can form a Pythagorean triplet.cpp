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

// A Pythagorean triplet is a set of three numbers that satisfy:
// a² + b² = c², where c is the largest number.
// Examples:

// (3, 4, 5) ✅ because 3² + 4² = 5²
// (5, 12, 13) ✅
// (6, 8, 10) ✅