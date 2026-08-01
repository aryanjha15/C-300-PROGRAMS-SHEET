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

    cout<<"The frequency of each number in the first array is: ";
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout<<arr[i]<<" occurs "<<count<<" times. ";
    }
    cout<<endl;
    cout<<"The frequency of each number in the second array is: ";
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(brr[i] == brr[j]){
                count++;
            }
        }
        cout<<brr[i]<<" occurs "<<count<<" times. ";
    }
    cout<<endl;
    return 0;
}


