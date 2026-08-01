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

    int smallest = arr[0];
    int secondSmallest = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == smallest){
        cout<<"There is no second smallest element in the array."<<endl;
    }
    else{
        cout<<"The second smallest element in the array is: "<<secondSmallest<<endl;
    }

    return 0;

    
}