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
    int smallest = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        else if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    int difference = largest - smallest;
    cout<<"The difference between the largest and smallest element in the array is: "<<difference<<endl;

    return 0;

}