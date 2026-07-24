#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=n*1; i<=n*10; i+=n){
        cout << i << endl;
    }
    return 0;
}