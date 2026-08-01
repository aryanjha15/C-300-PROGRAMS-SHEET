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
    int brr[n];
    cout<<"Enter "<<n<<" integers for the second array: ";
    for(int i=0; i<n; i++){
        cin>>brr[i];
    }
    int crr[2*n];
    for(int i=0; i<n; i++){
        crr[i] = arr[i];
    }
    for(int i=0; i<n; i++){
        crr[n+i] = brr[i];
    }   

    cout<<"The merged array is: ";
    for(int i=0; i<2*n; i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}