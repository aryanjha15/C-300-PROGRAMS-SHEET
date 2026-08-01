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
    int last = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    cout<<"The array after rotating by one position to the right is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}