#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: "; 
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int squares[n];
    for(int i=0; i<n; i++){
        squares[i] = arr[i] * arr[i];
    }
    cout<<"The new array containing squares of all numbers is: ";
    for(int i=0; i<n; i++){
        cout<<squares[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}