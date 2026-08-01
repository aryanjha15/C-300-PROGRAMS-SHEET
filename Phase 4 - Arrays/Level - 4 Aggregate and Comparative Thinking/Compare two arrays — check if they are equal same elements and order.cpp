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
    bool isEqual = true;
    for(int i=0; i<n; i++){
        if(arr[i] != brr[i]){
            isEqual = false;
            break;
        }
    }
    if(isEqual){
        cout<<"The two arrays are equal."<<endl;
    }
    else{
        cout<<"The two arrays are not equal."<<endl;
    }
    return 0;
}