#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n], copy[n];
    cout<<"Enter "<<n<<" integers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        copy[i] = arr[i];
    }
    cout<<"The copied array is: ";
    for(int i=0; i<n; i++){
        cout<<copy[i]<<" ";
    }
    cout<<endl;
    return 0;
}