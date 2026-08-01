#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers for the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }  
    
    cout<<"The unique elements in the array are: ";
    for(int i=0; i<n; i++){
        bool isUnique = true;
        for(int j=0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}   