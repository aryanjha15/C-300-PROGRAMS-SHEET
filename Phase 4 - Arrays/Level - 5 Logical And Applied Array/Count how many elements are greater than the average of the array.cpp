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


    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    int average = sum / n;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > average){
            count++;
        }
    }
    
    cout<<"The number of elements greater than the average of the array is: "<<count<<endl;

    return 0;


}

