#include<iostream>
using namespace std;
int main() {
    int units;
    double bill;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.5; // Rate for first 100 units
    } else if (units <= 200) {
        bill = (100 * 1.5) + ((units - 100) * 2.5); // Rate for next 100 units
    } else if (units <= 300) {
        bill = (100 * 1.5) + (100 * 2.5) + ((units - 200) * 3.5); // Rate for next 100 units
    } else {
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 3.5) + ((units - 300) * 4.5); // Rate for above 300 units
    }

    cout << "Total electricity bill: " << bill << endl;
    return 0;
}
