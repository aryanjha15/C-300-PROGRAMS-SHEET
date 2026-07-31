#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to count: ";
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            count++;
        }
    }
    cout<<"The element "<<x<<" appears "<<count<<" times in the array."<<endl;
    return 0;
}