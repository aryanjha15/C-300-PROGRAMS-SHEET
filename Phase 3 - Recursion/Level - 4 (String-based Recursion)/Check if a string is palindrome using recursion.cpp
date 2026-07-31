#include<iostream>
using namespace std;

bool palindrome(string s, int start, int end){
    if(start >= end)
        return true;

    if(s[start] != s[end])
        return false;

    return palindrome(s, start + 1, end - 1);
}

int main(){
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if(palindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

// explanation : 

// Step 4 (Base Case)
// if(start >= end)
//     return true;

// This is called the Base Case.      

// Why?

// Imagine the string

// MADAM

// After comparing

// M == M ✔
// A == A ✔

// Eventually

// start = 2
// end = 2

// Both point to

// D

// There is nothing left to compare.

// So the string is palindrome.

// Return

// true;

// For an even-length string

// NOON

// 0 1 2 3

// Eventually

// start = 2
// end = 1

// Now

// start > end

// Again,

// everything matched.

// Return

// true;

// Step 6
// return palindrome(s, start + 1, end - 1);

// This is the recursive call.

// It means

// Move one step inside the string.

// Example

// M A D A M
// 0 1 2 3 4

// First comparison

// M == M ✔

// Next call

// A D A

// which means

// start = 1
// end = 3

// Again

// A == A ✔

// Next

// D

// which means

// start = 2
// end = 2

// Base case becomes true.

// Return

// true