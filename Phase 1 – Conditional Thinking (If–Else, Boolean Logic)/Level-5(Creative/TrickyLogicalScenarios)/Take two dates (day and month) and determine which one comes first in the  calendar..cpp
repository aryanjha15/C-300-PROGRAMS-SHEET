#include<iostream>
using namespace std;
int main(){
    int day1, month1, day2, month2;
    cout << "Enter first date (day and month): ";
    cin >> day1 >> month1;
    cout << "Enter second date (day and month): ";
    cin >> day2 >> month2;

    if (month1 < month2) {
        cout << "The first date comes before the second date." << endl;
    } else if (month1 > month2) {
        cout << "The second date comes before the first date." << endl;
    } else {
        // Months are the same, compare days
        if (day1 < day2) {
            cout << "The first date comes before the second date." << endl;
        } else if (day1 > day2) {
            cout << "The second date comes before the first date." << endl;
        } else {
            cout << "Both dates are the same." << endl;
        }
    }

    return 0;
}