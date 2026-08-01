#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers for the first array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }  
   
    bool isSorted = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] < arr[i+1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout<<"The array is sorted in descending order."<<endl;
    }
    else{
        cout<<"The array is not sorted in descending order."<<endl;
    }


    return 0;
}