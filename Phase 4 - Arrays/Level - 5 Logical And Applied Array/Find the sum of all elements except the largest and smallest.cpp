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
    int largest = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        else if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != smallest && arr[i] != largest){
            sum += arr[i];
        }
    }

    cout<<"The sum of all elements except the largest and smallest is: "<<sum<<endl;

    return 0;

    
}