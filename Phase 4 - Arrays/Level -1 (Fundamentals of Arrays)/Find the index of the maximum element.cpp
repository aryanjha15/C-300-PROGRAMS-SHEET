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
    int max_index = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
    }
    cout<<"Index of the maximum element: "<<max_index<<endl;
    return 0;
}