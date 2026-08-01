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
    int brr[n];
    cout<<"Enter "<<n<<" integers for the second array: ";
    for(int i=0; i<n; i++){
        cin>>brr[i];
    }

    int product[n];
    for(int i=0; i<n; i++){
        product[i] = arr[i] * brr[i];
    }

    cout<<"The element-wise product of the two arrays is: ";
    for(int i=0; i<n; i++){
        cout<<product[i]<<" ";
    }
    cout<<endl;

    return 0;
}  
   