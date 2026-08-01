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

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    if(secondLargest == largest){
        cout<<"There is no second largest element in the array."<<endl;
    }
    else{
        cout<<"The second largest element in the array is: "<<secondLargest<<endl;
    }

    return 0;
}