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
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Element found in the array."<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}