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
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"Elements greater than "<<k<<" are: ";
    for(int i=0; i<n; i++){
        if(arr[i] > k){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}