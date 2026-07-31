#include<iostream>
#include<cctype>
using namespace std;

void countVC(string s, int i, int &vowel, int &consonant){
    if(i == s.length())
        return;

    char ch = tolower(s[i]);

    if(isalpha(ch)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowel++;
        else
            consonant++;
    }

    countVC(s, i + 1, vowel, consonant);
}

int main(){
    string s;
    int vowel = 0, consonant = 0;

    cout<<"Enter string: ";
    getline(cin,s);

    countVC(s,0,vowel,consonant);

    cout<<"Vowels = "<<vowel<<endl;
    cout<<"Consonants = "<<consonant;

    return 0;
}