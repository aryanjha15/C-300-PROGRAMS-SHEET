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

    int sum[n];
    for(int i=0; i<n; i++){
        sum[i] = arr[i] + brr[i];
    }

    cout<<"The element-wise sum of the two arrays is: ";
    for(int i=0; i<n; i++){
        cout<<sum[i]<<" ";
    }
    cout<<endl;

    return 0;
}