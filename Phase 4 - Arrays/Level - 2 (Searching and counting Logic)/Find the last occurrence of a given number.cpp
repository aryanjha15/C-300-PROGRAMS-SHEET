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
    cout<<"Enter the element to search for: ";
    cin>>x;
    int last_occurrence = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            last_occurrence = i;
        }
    }
    if(last_occurrence != -1){
        cout<<"The last occurrence of "<<x<<" is at index "<<last_occurrence<<"."<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}