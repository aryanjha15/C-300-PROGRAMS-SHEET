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
        bool found = false;
        for(int j=0; j<n; j++){
            if(arr[i] == brr[j]){
                found = true;
                break;
            }
        }
        if(!found){
            isEqual = false;
            break;
        }
    }   

    if(isEqual){
        cout<<"The two arrays contain the same elements (ignoring order)."<<endl;
    }
    else{
        cout<<"The two arrays do not contain the same elements."<<endl;
    }
    return 0;
}