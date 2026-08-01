#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers for the first array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }  
    int brr[n];
    cout<<"Enter "<<n<<" integers for the second array: ";
    for(int i=0; i<n; i++){
        cin>>brr[i];
    }

    cout<<"The elements that appear more than once in the first array are: ";
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > 1){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<"";
        }
    }

    cout<<"\nThe elements that appear more than once in the second array are: ";
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(brr[i] == brr[j]){
                count++;
            }
        }
        if(count > 1){
            cout<<brr[i]<<" ";
        }
        else{
            cout<<"";
        }
    }

    cout<<endl;
    return 0;
}   





