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
    int even[n];
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even[j] = arr[i];
            j++;
        }
    }
    cout<<"The new array containing only even elements is: ";
    for(int i=0; i<j; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    return 0;
}
