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

    cout<<"The common elements between the two arrays are: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] == brr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }

    
    cout<<endl;
    return 0;
}