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
    double average = 0;
    for(int i=0; i<n; i++){
        average += arr[i];
    }
    average /= n;
    cout<<"The average of the array elements is: "<<average;

    return 0;
}