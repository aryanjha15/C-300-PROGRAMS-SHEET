#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " whose binary representation has an even number of 1s: ";
    for (int i = 1; i <= n; i++) {
        int num = i;
        int count = 0;
        while (num > 0) {
            if (num & 1) {
                count++;
            }
            num >>= 1;
        }
        if (count % 2 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}

// explanation: This C++ program prompts the user to enter a value for n and then prints all numbers from 1 to n whose binary representation contains an even number of 1s. 
// The program uses a loop to iterate through each number, 
// counts the number of 1s in its binary representation using bitwise operations, 
// and checks if the count is even before printing the number.