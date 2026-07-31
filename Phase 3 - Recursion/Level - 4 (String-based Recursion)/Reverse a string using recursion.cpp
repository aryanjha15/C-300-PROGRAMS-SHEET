// #include<iostream>
// using namespace std;

// void reverseString(string &str, int start, int end) {
//     if (start >= end) return; // Base case: if start >= end, return
//     swap(str[start], str[end]); // Swap characters at start and end positions
//     reverseString(str, start + 1, end - 1); // Recursive call with updated indices
// }

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;
//     cout << "Original string: " << str << endl;
//     reverseString(str, 0, str.length() - 1);
//     cout << "Reversed string: " << str << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

void reverseString(string s, int i){
    if(i < 0)
        return;

    cout << s[i];
    reverseString(s, i - 1);
}

int main(){
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    reverseString(s, s.length() - 1);

    return 0;
}