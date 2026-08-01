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
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0){
            count++;
        }
    }
    cout<<"The count of numbers divisible by both 3 and 5 is: "<<count<<endl;
    return 0;
}