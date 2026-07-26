#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;
        if (num == 0) {
            continue;
        }
        sum += num;
    }
    cout << "Sum of all non-zero numbers entered: " << sum << endl;
    return 0;
}