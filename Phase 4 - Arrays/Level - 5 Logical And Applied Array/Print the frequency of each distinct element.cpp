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
    
    cout<<"The frequency of each distinct element in the array is: ";
    for(int i=0; i<n; i++){
        
        int count = 0;
        bool isDistinct = true;
        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                isDistinct = false;
                break;
            }
        }
        if(isDistinct){
            for(int j=0; j<n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            cout<<arr[i]<<" occurs "<<count<<" times. ";
        }
    }

    return 0;

}