#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int a, r, n;
    cout<<"Enter the first term (a): ";
    cin>>a;
    cout<<"Enter the common ratio (r): ";
    cin>>r;
    cout<<"Enter the number of terms (n): ";
    cin>>n;

    cout<<"First "<<n<<" terms of the geometric progression: ";
    for(int i=0; i<n; i++){
        cout<<a * pow(r, i)<<" ";
    }
    return 0;
}