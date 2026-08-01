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

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] == brr[j]){
                count++;
                break;
            }
        }
    }

    cout<<"The number of common elements between the two arrays is: "<<count<<endl;

    
    return 0;
}