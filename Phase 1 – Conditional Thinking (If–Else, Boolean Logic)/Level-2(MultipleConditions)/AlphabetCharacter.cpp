#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Alphabet";
    cin>>ch;
    if(ch >= 'a' && ch <= 'm' ){
            cout<<"Lies Between A and M";
        }
        else{
            cout<<"Lies Between N and z";
        }
    
}

// In C++, single quotes (' ') are used for a single character, while double quotes (" ") are used for strings (a sequence of characters).

// Single quotes ('a')
// char ch = 'a';
// Represents one character.
// Type: char
// Takes 1 byte (typically).
// Double quotes ("a")
// char ch = "a";   // ❌ Error
// "a" is a string literal, not a character.
// Type: const char[] (character array).
// Cannot be stored in a char variable.
// Example
// char ch = 'a';        // ✅ Correct
// string str = "a";     // ✅ Correct

// cout << ch << endl;   // Output: a
// cout << str << endl;  // Output: a
// Why do we write 'a' in comparisons?

// When you write:

// if (ch >= 'a' && ch <= 'm')

// you're comparing the ASCII values of characters:

// 'a' = 97
// 'b' = 98
// ...
// 'm' = 109

// So the condition checks whether the ASCII value of ch is between 97 and 109.

// Rule to remember:

// 'A', 'b', '7', '$' → Character (char)
// "Hello", "a", "123" → String (const char[] or std::string)