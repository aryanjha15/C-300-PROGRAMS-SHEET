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
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }
    cout<<"The array after replacing even numbers with 1 and odd numbers with 0 is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}