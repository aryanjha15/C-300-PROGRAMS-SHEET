// #include<iostream>
// using namespace std;
// int main() {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if (year < 1) {
//         cout << "Invalid year. Please enter a positive integer." << endl;
//         return 1; // Exit the program with an error code
//     }

//     int century = (year - 1) / 100 + 1; // Calculate the century
//     cout << century << "th century" << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;
    int original = stoi(s);
    int reverse = 0;
    while(s.length() > 0){
        reverse = reverse * 10 + (s[s.length()-1] - '0');
        s.pop_back();
    }
    cout<<"Reversed number: "<<reverse<<endl;
    cout<<"Original number: "<<original<<endl;
    if(original == reverse){
        cout<<"The number is a palindrome."<<endl;
    } else {
        cout<<"The number is not a palindrome."<<endl;
    }

    return 0;
}