#include<iostream>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin, sentence);

    string reversedSentence = "";
    string word = "";   

    for(int i=0; i<sentence.length(); i++){
        if(sentence[i]==' '){
            for(int j=word.length()-1; j>=0; j--){
                reversedSentence += word[j];
            }
            reversedSentence += ' ';
            word = "";
        }
        else{
            word += sentence[i];
        }
    }

    for(int j=word.length()-1; j>=0; j--){
        reversedSentence += word[j];
    }
    cout<<"Reversed sentence: "<<reversedSentence<<endl;

    return 0;
    
}